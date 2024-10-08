/*

	arma3mercenaries\set_group_captive\groupRejoin.sqf
	Authour: BrianV1981
	Description:
	Player Group Persistence. This script is to make AI rejoin the player after server restart.

*/

// Get the player's UID
private _playerUID = getPlayerUID player;

// Create the group ID using the player's UID
private _groupID = format ["arma3mercenaries_groupID_%1", _playerUID];

// Assign the group ID to the player
player setVariable ["arma3mercenaries_groupID", _groupID, true];

// Wait until the player is fully loaded
waitUntil {time > 0 && !isNull player};

// Reassign AI units with the matching group ID to the player's group
{
    private _unit = _x;
    if (!isPlayer _unit) then {
        [_unit] joinSilent group player;
    };
} forEach (allUnits select {
    _x getVariable ["arma3mercenaries_groupID", ""] == player getVariable ["arma3mercenaries_groupID", ""]
});