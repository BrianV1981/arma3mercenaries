/*

	arma3mercenaries_fn_loadFromBarracks.sqf
	Author: BrianV1981

	// Add this action to an object (e.g., an NPC or a laptop)
	myObject addAction [
		"Call Group from Barracks", 
		{
			[] execVM "arma3mercenaries\virtual_barracks\arma3mercenaries_fn_loadFromBarracks.sqf";
		},
		nil, 
		6, // The distance at which the action is visible
		true, // Show the action if the player is in a vehicle
		true, // The action is enabled by default
		"", 
		"alive player" // The condition under which the action is available
	];


*/

// Define the unique variable to retrieve the group data
private _barracksGroupDataVar = format ["arma3mercenaries_barracksGroupsData_%1", getPlayerUID player];

// Check if the player has a group stored
private _storedGroupData = missionNamespace getVariable [_barracksGroupDataVar, nil];
if (isNil "_storedGroupData") then {
    // Notify the player that no group is stored
    player sideChat "You do not have a group stored in the barracks.";
    exitWith {};
};

// Re-create the group
{
    private _unitData = _x;
    private _aiUnitID = _unitData select 0;
    private _loadout = _unitData select 1;
    private _posASL = _unitData select 2;
    private _dir = _unitData select 3;

    // Create a new unit in the player's group
    private _newUnit = group player createUnit [_aiUnitID, _posASL, [], 0, "NONE"];
    _newUnit setUnitLoadout _loadout;
    _newUnit setPosASL _posASL;
    _newUnit setDir _dir;

    // Assign the necessary variables
    _newUnit setVariable ["arma3mercenaries_aiUnit", _aiUnitID];
    _newUnit setVariable ["arma3mercenaries_groupID", player getVariable ["arma3mercenaries_groupID", ""]];
} forEach _storedGroupData;

// Clear the stored data after loading
missionNamespace setVariable [_barracksGroupDataVar, nil];

// Notify the player that the group has been loaded
player sideChat "Your group has been recalled from the barracks.";
