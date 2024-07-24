params ["_targetVehicle","_containerList", "_player"];
private _items = [];
private _backpacks = [];
private _isMan = false;
private _weight = 0;
systemChat format["1Tac Antistasi Looter: Moving from %1 containers to %2",count(_containerList),getText (configFile >> "CfgVehicles" >> typeOf _targetVehicle >> "displayname")];

// Get all items from each container
{
	_isMan = _x isKindOf "CAManBase";
	if (_isMan) then {
    	if (primaryWeapon _x != "") then{
    	    _items append (_x weaponAccessories primaryWeapon _x);
    	    _items pushBack ((primaryWeapon _x) call BIS_fnc_baseWeapon);
    	};
    	if (secondaryWeapon _x != "") then{
    	    _items append (_x weaponAccessories secondaryWeapon _x);
    	    _items pushBack ((secondaryWeapon _x) call BIS_fnc_baseWeapon);
    	};
    	if (handgunWeapon _x != "") then{
    	    _items append (_x weaponAccessories handgunWeapon _x);
    	    _items pushBack ((handgunWeapon _x) call BIS_fnc_baseWeapon);
    	};
    	_items append assignedItems [_x, true, true];
	
    	private _backpack = backpack _x;
    	if !(_backpack isEqualTo "") then {
			_items append magazineCargo backpackContainer _x;
    	    _items append itemCargo backpackContainer _x;
			{
				_items pushBack (_x call BIS_fnc_baseWeapon);
			} forEach (weaponCargo backpackContainer _x);
			{
				_items append (_x select {!(typeName _x == "ARRAY")} select [1,4]);
			} forEach (weaponsItemsCargo backpackContainer _x);
    	    _backpacks pushBack (_backpack call BIS_fnc_basicBackpack);
    	    {
    	        _backpacks pushBack (_x call BIS_fnc_basicBackpack);
    	    } forEach backpackCargo (backpackContainer _x);
    	};
    	private _uniform = uniform _x;
    	if !(_uniform isEqualTo "")then {
    	    _items append itemCargo uniformContainer _x;
			_items append magazineCargo uniformContainer _x;
    	    {
				_items pushBack (_x call BIS_fnc_baseWeapon);
			} forEach (weaponCargo uniformContainer _x);
			{
				_items append (_x select {!(typeName _x == "ARRAY")} select [1,4]);
			} forEach (weaponsItemsCargo uniformContainer _x);
    	    if (LootToVehicleExtended_TransferUniform) then {
    	        _items pushBack _uniform;
    	    };
    	};
    	private _vest = vest _x;
    	if !(_vest isEqualTo "") then {
    	    _items append itemCargo vestContainer _x;
			_items append magazineCargo vestContainer _x;
    	    {
				_items pushBack (_x call BIS_fnc_baseWeapon);
			} forEach (weaponCargo vestContainer _x);
			{
				_items append (_x select {!(typeName _x == "ARRAY")} select [1,4]);
			} forEach (weaponsItemsCargo vestContainer _x);
    	    _items pushBack _vest;
    	};
	} else {
    _items append magazineCargo _x;
    _items append itemCargo _x;
	{
		_items pushBack (_x call BIS_fnc_baseWeapon);
	} forEach weaponCargo _x;
	{
		_items append (_x select {!(typeName _x == "ARRAY")} select [1,4]);
	} forEach (weaponsItemsCargo _x);
    {
        _backpacks pushBack (_x call BIS_fnc_basicBackpack);
    } forEach backpackCargo _x;
    {
        _items append itemCargo (_x select 1);
		_items append magazineCargo (_x select 1);
        {
			_items pushBack (_x call BIS_fnc_baseWeapon);
		} forEach weaponCargo (_x select 1);
		{
			_items append (_x select {!(typeName _x == "ARRAY")} select [1,4]);
		} forEach (weaponsItemsCargo (_x select 1));
        {
        	_backpacks pushBack (_x call BIS_fnc_basicBackpack);
        } forEach backpackCargo (_x select 1);
    } forEach (everyContainer _x);
	};
	_weight = _weight + loadAbs _x; 
} forEach _containerList;
_animLoop = null;
if(LootToVehicleExtended_PlayAnimation) then { 
	_player playMoveNow "Acts_carFixingWheel";
	_animLoop = player addEventHandler ["AnimDone", { player switchMove "Acts_carFixingWheel";}];
} else {
	_animLoop = -1;
};
// Transfer all items found to target vehicle
systemChat format ["Total mass of items: %1", _weight];
[(_weight * (LootToVehicleExtended_TransferSpeedSeconds/100)), [_targetVehicle,_items,_backpacks,_containerList,_animLoop], {
    _vehicle = _args select 0;
    _items = _args select 1;
    _backpacks = _args select 2;
    _containerList = _args select 3;
	_animLoop = _args select 4;
{
    _vehicle addItemCargoGlobal [_x, 1];
} forEach _items;
{
    _vehicle addBackpackCargoGlobal [_x, 1];
} forEach _backpacks;

//loop to delete all objects trans
{
	removeAllAssignedItems [_x, true, true];
	removeAllWeapons _x;
	removeBackpackGlobal _x;
	if (LootToVehicleExtended_TransferUniform) then {removeUniform _x;};
	removeVest _x;
	clearItemCargoGlobal _x:
	clearWeaponCargoGlobal _x;
	clearMagazineCargoGlobal _x;
	clearBackpackCargoGlobal _x;
} forEach _containerList;
systemChat format ["Total items transferred to target: %1", (count _items + count _backpacks)];
if !(_animLoop == -1) then {
		player removeEventHandler ["AnimDone", _animLoop];
};
player switchMove "";
}, {
	_animLoop = _args select 4;
	if !(_animLoop == -1) then {
		player removeEventHandler ["AnimDone", _animLoop];
	};
	player switchMove "";
}, "Transfering items..."] call ace_common_fnc_progressBar;