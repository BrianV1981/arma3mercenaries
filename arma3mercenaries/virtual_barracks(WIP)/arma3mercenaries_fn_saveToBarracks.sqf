/*

	arma3mercenaries_fn_saveToBarracks.sqf
	Author: BrianV1981

	// Add this action to an object (e.g., an NPC or a laptop)
	myObject addAction [
		"Save Group to Barracks", 
		{
			[] execVM "arma3mercenaries\virtual_barracks\arma3mercenaries_fn_saveToBarracks.sqf";
		},
		nil, 
		6, // The distance at which the action is visible
		true, // Show the action if the player is in a vehicle
		true, // The action is enabled by default
		"", 
		"alive player" // The condition under which the action is available
	];

*/

private _playerUID = getPlayerUID player;
private _groupID = format ["arma3mercenaries_groupID_%1", _playerUID];

private _barracksGroupsData = missionNamespace getVariable ["arma3mercenaries_barracksGroupsData", []];

private _groupIDCheck = _barracksGroupsData findIf {
    _x select 0 == _groupID
};

if (_groupIDCheck != -1) then {
    exitWith {};
};

private _groupData = [];
private _thisGroup = group player;

{
    private _thisUnit = _x;
    
    if (!(isPlayer _thisUnit) && {alive _thisUnit}) then {
        private _thisUnitHash = [];
        _thisUnitHash pushBack (vehicleVarName _thisUnit);
        _thisUnitHash pushBack (typeOf _thisUnit);
        _thisUnitHash pushBack (getPosASL _thisUnit);
        _thisUnitHash pushBack (getDir _thisUnit);
        _thisUnitHash pushBack (damage _thisUnit);
        _thisUnitHash pushBack (getUnitLoadout _thisUnit);
        _thisUnitHash pushBack (_thisUnit getVariable ["arma3mercenaries_aiUnit", ""]);
        _thisUnitHash pushBack (_thisUnit getVariable ["arma3mercenaries_groupID", ""]);
        
        _groupData pushBack _thisUnitHash;
    };
    
} forEach (units _thisGroup);

_barracksGroupsData pushBack [_groupID, _groupData];
missionNamespace setVariable ["arma3mercenaries_barracksGroupsData", _barracksGroupsData];

{
    deleteVehicle _x;
} forEach (units _thisGroup);

saveProfileNamespace;
