params ["_targetVehicle","_containerList", "_player"];  // Parameters: the target vehicle/container, a list of containers to loot, and the player performing the action.

private _items = [];  // Array to hold all items being transferred.
private _backpacks = [];  // Array to hold all backpacks being transferred.
private _isMan = false;  // Boolean to check if the entity being looted is a human (CAManBase).
private _bodies = [];  // Array to hold references to bodies being looted.
private _weight = 0;  // Variable to accumulate the total weight of looted items.

systemChat format["Gathering all loot and transfering it to the %2", count(_containerList), getText (configFile >> "CfgVehicles" >> typeOf _targetVehicle >> "displayname")]; 
// Outputs a message showing how many containers are being looted and the display name of the target vehicle.


// Loop through each container in the list.
{
	_isMan = _x isKindOf "CAManBase";  // Check if the current container is a human entity.
	if (_isMan) then {
		_bodies pushBack _x;  // Add the body to the list of bodies to process later.

    	if (primaryWeapon _x != "") then {
    	    _items append (_x weaponAccessories primaryWeapon _x);  // Add weapon accessories for the primary weapon.
    	    _items pushBack ((primaryWeapon _x) call BIS_fnc_baseWeapon);  // Add the primary weapon itself.
    	};

    	if (secondaryWeapon _x != "") then {
    	    _items append (_x weaponAccessories secondaryWeapon _x);  // Add weapon accessories for the secondary weapon.
    	    _items pushBack ((secondaryWeapon _x) call BIS_fnc_baseWeapon);  // Add the secondary weapon itself.
    	};

    	if (handgunWeapon _x != "") then {
    	    _items append (_x weaponAccessories handgunWeapon _x);  // Add weapon accessories for the handgun.
    	    _items pushBack ((handgunWeapon _x) call BIS_fnc_baseWeapon);  // Add the handgun itself.
    	};

    	_items append assignedItems [_x, true, true];  // Add all assigned items (e.g., helmets, NVGs, etc.) to the items array.

		/*
		// Example code to retrieve items from weapon holders. This code is commented out but can be reactivated if needed.
		private _weaponHolder = nearestObjects[_target, ["WeaponHolderSimulated"], 5];
		{
			_items append magazineCargo _x;
    		_items append itemCargo _x;
			{
				_items pushBack (_x call BIS_fnc_baseWeapon);
			} forEach weaponCargo _x;
			{
				_items append (_x select {!(typeName _x == "ARRAY")} select [1,4]);
			} forEach (weaponsItemsCargo _x);
		} forEach _weaponHolder;
		*/

    	private _backpack = backpack _x;
    	if !(_backpack isEqualTo "") then {  // Check if the person has a backpack.
			_items append magazineCargo backpackContainer _x;  // Add all magazines from the backpack.
    	    _items append itemCargo backpackContainer _x;  // Add all other items from the backpack.
			{
				_items pushBack (_x call BIS_fnc_baseWeapon);  // Add weapons from the backpack.
			} forEach (weaponCargo backpackContainer _x);
			{
				_items append (_x select {!(typeName _x == "ARRAY")} select [1,4]);  // Add weapon items from the backpack.
			} forEach (weaponsItemsCargo backpackContainer _x);
    	    _backpacks pushBack (_backpack call BIS_fnc_basicBackpack);  // Add the backpack itself.
    	    {
    	        _backpacks pushBack (_x call BIS_fnc_basicBackpack);  // Add any other backpacks stored inside the backpack.
    	    } forEach backpackCargo (backpackContainer _x);
    	};

    	private _uniform = uniform _x;
    	if !(_uniform isEqualTo "")then {  // Check if the person has a uniform.
    	    _items append itemCargo uniformContainer _x;  // Add items stored in the uniform.
			_items append magazineCargo uniformContainer _x;  // Add magazines stored in the uniform.
    	    {
				_items pushBack (_x call BIS_fnc_baseWeapon);  // Add weapons stored in the uniform.
			} forEach (weaponCargo uniformContainer _x);
			{
				_items append (_x select {!(typeName _x == "ARRAY")} select [1,4]);  // Add weapon items from the uniform.
			} forEach (weaponsItemsCargo uniformContainer _x);
    	    if (LootToVehicleExtended_TransferUniform) then {  // Check if uniforms should be transferred.
    	        _items pushBack _uniform;  // Add the uniform itself.
    	    };
    	};

    	private _vest = vest _x;
    	if !(_vest isEqualTo "") then {  // Check if the person has a vest.
    	    _items append itemCargo vestContainer _x;  // Add items stored in the vest.
			_items append magazineCargo vestContainer _x;  // Add magazines stored in the vest.
    	    {
				_items pushBack (_x call BIS_fnc_baseWeapon);  // Add weapons stored in the vest.
			} forEach (weaponCargo vestContainer _x);
			{
				_items append (_x select {!(typeName _x == "ARRAY")} select [1,4]);  // Add weapon items from the vest.
			} forEach (weaponsItemsCargo vestContainer _x);
    	    _items pushBack _vest;  // Add the vest itself.
    	};
	} else {
    // If the container is not a human entity, handle it as a regular container.

    _items append magazineCargo _x;  // Add all magazines from the container.
    _items append itemCargo _x;  // Add all other items from the container.
	{
		_items pushBack (_x call BIS_fnc_baseWeapon);  // Add weapons from the container.
	} forEach weaponCargo _x;
	{
		_items append (_x select {!(typeName _x == "ARRAY")} select [1,4]);  // Add weapon items from the container.
	} forEach (weaponsItemsCargo _x);

    {
        _backpacks pushBack (_x call BIS_fnc_basicBackpack);  // Add all backpacks from the container.
    } forEach backpackCargo _x;

    {
        _items append itemCargo (_x select 1);  // Add items from any nested containers.
		_items append magazineCargo (_x select 1);  // Add magazines from any nested containers.
        {
			_items pushBack (_x call BIS_fnc_baseWeapon);  // Add weapons from any nested containers.
		} forEach weaponCargo (_x select 1);
		{
			_items append (_x select {!(typeName _x == "ARRAY")} select [1,4]);  // Add weapon items from any nested containers.
		} forEach (weaponsItemsCargo (_x select 1));
        {
        	_backpacks pushBack (_x call BIS_fnc_basicBackpack);  // Add backpacks from any nested containers.
        } forEach backpackCargo (_x select 1);
    } forEach (everyContainer _x);  // Recursively handle all nested containers.
	};

	// Accumulate the total weight of the looted items.
	_weight = _weight + loadAbs _x; 
} forEach _containerList;

_animLoop = null;
if(LootToVehicleExtended_PlayAnimation) then { 
	// If enabled, play an animation while the loot is being transferred.
	_player playMoveNow "Acts_carFixingWheel";
	_animLoop = player addEventHandler ["AnimDone", { player switchMove "Acts_carFixingWheel";}];
} else {
	_animLoop = -1;
};

// Transfer all items found to the target vehicle.
// systemChat format ["The total weight of the loot was %1", _weight];  // Display the total weight of the loot.


// Transfer the items to the target vehicle
[(_weight * (LootToVehicleExtended_TransferSpeedSeconds/100)), [_targetVehicle,_items,_backpacks,_containerList,_animLoop, _bodies, _soundID], {
    _vehicle = _args select 0;
    _items = _args select 1;
    _backpacks = _args select 2;
    _containerList = _args select 3;
	_animLoop = _args select 4;
	_bodies = _args select 5;
	_soundID = _args select 6;

    // Add all items to the vehicle's cargo
	{
        _vehicle addItemCargoGlobal [_x, 1];
    } forEach _items;

    // Add all backpacks to the vehicle's cargo
    {
        _vehicle addBackpackCargoGlobal [_x, 1];
    } forEach _backpacks;

    // Loop through each container and clear its cargo after transfer
    {
		removeAllAssignedItems [_x, true, true];  // Remove all assigned items from the container.
		removeAllWeapons _x;  // Remove all weapons from the container.
		removeBackpackGlobal _x;  // Remove the backpack from the container.
		if (LootToVehicleExtended_TransferUniform) then {removeUniform _x;};  // Remove uniform if the option is enabled.
		removeVest _x;  // Remove the vest from the container.
		clearItemCargoGlobal _x;  // Clear all item cargo from the container.
		clearWeaponCargoGlobal _x;  // Clear all weapon cargo from the container.
		clearMagazineCargoGlobal _x;  // Clear all magazine cargo from the container.
		clearBackpackCargoGlobal _x;  // Clear all backpack cargo from the container.
    } forEach _containerList;

    // Display the total mass of loot transferred.
     systemChat format ["You can sell extra loot to any fence that can be found marked on the map. Fences in enemy territory offer the best rates!", (count _items + count _backpacks)];


  

// Execute the message only on the player's machine
_message remoteExecCall ["_message", _player];

    // Optionally delete the bodies after looting if the option is enabled.
    if (LootToVehicleExtended_DeleteBodies) then {
		{
			deleteVehicle _x;
		} forEach _bodies;
    };

    // Stop the animation loop if it was running.
    if !(_animLoop == -1) then {
		player removeEventHandler ["AnimDone", _animLoop];
    };
    player switchMove "";  // Reset the player's animation state.

}, {
	// If the transfer is canceled or fails, clean up by stopping any ongoing animations.
	_animLoop = _args select 4;
	_soundID = _args select 6;
	if !(_animLoop == -1) then {
		player removeEventHandler ["AnimDone", _animLoop];
	};
	player switchMove "";
	// Optional: Stop the cargo sound if it was playing.
	//["stopCargoSound"] remoteExec ["stopCargoSound", 0, true];
}, "Transferring loot..."] call ace_common_fnc_progressBar;

/*
// Function to play the cargo sound
playCargoSound = {
    params ["_soundFile", "_target"];
    _soundID = playSound3D [_soundFile, _target, false, getPosASL _target, 3, 1, 0];
	systemChat format ["Sound ID Created: %1", _soundID];
};

// Function to stop the cargo sound
stopCargoSound = {
	if (isNil "soundID") then {soundID = -1;};
	systemChat format ["Sound ID Deleted: %1", soundID];
	stopSound soundID;
};

// Register the functions for remote execution
if (isNil "playCargoSound") then {
    playCargoSound = {
        params ["_soundFile", "_target"];
    	_soundID = playSound3D [_soundFile, _target, false, getPosASL _target, 3, 1, 0];
		systemChat format ["Sound ID Created: %1", _soundID];
    };
};

if (isNil "stopCargoSound") then {
    stopCargoSound = {
		if (isNil "soundID") then {soundID = -1;};
		systemChat format ["Sound ID Deleted: %1", soundID];
		stopSound soundID;
    };
};

// Optional sound logic: Play a sound during the transfer process if enabled.
if (LootToVehicleExtended_PlaySound) then {
    ["LootToVehicleExtended\sounds\moving.ogg", _player] remoteExec ["playCargoSound", 0, true];
};
*/
