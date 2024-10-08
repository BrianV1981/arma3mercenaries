/*

	arma3mercenaries\set_group_captive\groupRejoin.sqf
	Authour: BrianV1981
	Description:
	Script to make AI rejoin the player after server restart. It also removes captive status from all AI group members after every relog/respawn.

*/

// Get the player's UID
private _playerUID = getPlayerUID player;

// Create the group ID using the player's UID
private _groupID = format ["arma3mercenaries_groupID_%1", _playerUID];

// Assign the group ID to the player
player setVariable ["arma3mercenaries_groupID", _groupID, true];

// Wait until the player is fully loaded
waitUntil {time > 0 && !isNull player};

// Reassign AI units with the matching group ID to the player's group and remove captive status
{
    private _unit = _x;
    if (!isPlayer _unit) then {
        // Reassign AI unit to player's group
        [_unit] joinSilent group player;

        // Remove captive status and enable AI movement, combat, and damge after respawn/relog
        _unit setCaptive false;
        _unit enableAI "MOVE";
        _unit enableAI "AUTOTARGET";
		_unit allowDamage true;
    };
} forEach (allUnits select {
    _x getVariable ["arma3mercenaries_groupID", ""] == player getVariable ["arma3mercenaries_groupID", ""]
});