/*  
* Spawns unit(s) and assigns the arma3mercenaries_groupOwner variable
*/

params ["_buyer","_account","_price","_code","_baseConfigName","_categoryConfigName","_itemConfigName","_vehiclespawn"];

_amount = [(missionConfigFile >> "CfgGradBuymenu" >> _baseConfigName >> _categoryConfigName >> _itemConfigName >> "amount"), "number", 1] call CBA_fnc_getConfigEntry;
_minDistance = 0;

//vehiclespawn is object
if (_vehiclespawn isEqualType objNull) then {
    _minDistance = 5;
    _vehiclespawn = getPos _vehiclespawn;
};

//find spawn position
_spawnPosition = [];
for "_i" from 1 to 50 do {
    _spawnPosition = _vehiclespawn findEmptyPosition [_minDistance, 15 + 5*_i, _itemConfigName];
    if (str _spawnPosition != "[]") exitWith {};
};
if (str _spawnPosition == "[]") exitWith {[_buyer,_account,_price,"No unit spawn position found. You got your money back."] remoteExec ["grad_lbm_fnc_reimburse",0,false]};

//create a group for the units
_group = createGroup side _buyer;

//spawn units
for "_i" from 1 to _amount do {
    // Spawn the unit and add it to the group
    private _unit = _itemConfigName createUnit [_spawnPosition, _group];
    
    // Assign the arma3mercenaries_groupOwner variable to the unit
    private _ownerUID = getPlayerUID _buyer;
    _unit setVariable ["arma3mercenaries_groupOwner", _ownerUID, true];
    
    // Debug output to verify if the variable is set correctly
    // diag_log format ["Unit: %1, Owner UID: %2", _unit, _unit getVariable "arma3mercenaries_groupOwner"];
};

// Execute the provided code with the buyer, item, group, and spawn position
[_buyer,_itemConfigName,_group,_spawnPosition] call _code;
[[_buyer,_itemConfigName,_group,_spawnPosition],_code] remoteExec ["grad_lbm_fnc_callCodeClient",0,false];

//vehicle marker
_c1 = [(missionConfigFile >> "CfgGradBuymenu" >> _baseConfigName >> "vehicleMarkers"), "number", 2] call CBA_fnc_getConfigEntry;
_c2 = [(missionConfigFile >> "CfgGradBuymenu" >> "vehicleMarkers"), "number", 1] call CBA_fnc_getConfigEntry;
switch (true) do {
    case (_c1 == 1): {
        [_buyer, leader _group, _baseConfigName, _categoryConfigName, _itemConfigName] remoteExec ["grad_lbm_fnc_vehicleMarker", 0, false];
    };
    case (_c1 == 0): {false};
    case (_c2 == 1): {
        [_buyer, leader _group, _baseConfigName, _categoryConfigName, _itemConfigName] remoteExec ["grad_lbm_fnc_vehicleMarker", 0, false];
    };
    default {false};
};
