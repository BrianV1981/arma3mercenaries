/*
	arma3mercenaries_fn_sector_control_RewardSystem.sqf
	Author: BrianV1981

	Description:
	Sector Control Reward System
	This script manages the reward system for players who capture and hold sectors in Arma 3.

	Directions:
	1. Place this script in the following path within your mission folder:
	   arma3mercenaries\sector_control\arma3mercenaries_fn_sector_control_RewardSystem.sqf
	   
	2. Add the following line to your initServer.sqf to execute this script on the server:
	   [] execVM "arma3mercenaries\sector_control\arma3mercenaries_fn_sector_control_RewardSystem.sqf"; 
	   
	3. Rename 'waypointMarker_1' to any marker name that you want to use as the sector.
*/

// Ensure the script only runs on the server
if (!isServer) exitWith {};

// Define the marker name for the sector
private _markerName = "waypointMarker_1"; // Change this to the name of your sector marker
private _markerPos = getMarkerPos _markerName;

// This loop will check every minute for players within 100m of the marker
while {true} do {
    
    // Search for players within 100 meters of the marker
    private _playersInSector = _markerPos nearEntities ["CAManBase", 100];
    
    // Iterate over each player found in the sector
    {
        if (isPlayer _x) then {
            private _playerName = name _x;
            private _playerUID = getPlayerUID _x;
            
            // Display the player's name and UID in the middle of the screen as big green text
            private _displayText = format ["<t color='#00ff00' size='2'>%1 (UID: %2)</t>", _playerName, _playerUID];
            [_displayText, -1, -1, 4, 1, 0, 789] spawn BIS_fnc_dynamicText;
        };
    } forEach _playersInSector;
    
    // Sleep for 60 seconds before checking again
    sleep 60;
};
