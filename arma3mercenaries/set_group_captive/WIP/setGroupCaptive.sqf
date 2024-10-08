/*
	arma3mercenaries\set_group_captive\setGroupCaptive.sqf
	Author: BrianV1981
	Description:
	This script is designed to handle player disconnections on a multiplayer dedicated server in Arma 3. When a player disconnects, the script loops through their group and sets any AI-controlled group members to "captive" status, making them non-hostile to all factions. This helps prevent AI from continuing combat after the player has logged off.

*/

// onPlayerDisconnected event handler script
addMissionEventHandler ["HandleDisconnect", {
    params ["_playerID", "_playerName", "_uid"];

    // Get the player object using the ID
    private _disconnectedPlayer = allPlayers findIf { getPlayerUID _x == _uid };

    // Check if the player was valid
    if (_disconnectedPlayer isEqualTo -1) exitWith {};

    // Get the group of the player
    private _playerGroup = group (allPlayers select _disconnectedPlayer);

    // Loop through the group members
    {
        // Check if the unit is AI
        if (!isPlayer _x) then {
			_x setCaptive true;  // Makes the AI non-hostile
			_x disableAI "MOVE";  // Disable movement
			_x disableAI "AUTOTARGET";  // Disable automatic targeting
			_x allowDamage false; // Disables damage
        };
    } forEach units _playerGroup;

}];
