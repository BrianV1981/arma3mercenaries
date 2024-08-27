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
            
            // Add player to the capturing array with a unique identifier
            private _uniqueSectorID = format ["%1_%2", _playerUID, diag_tickTime];
            _x setVariable [format ["isCapturingSector_%1", _uniqueSectorID], true];

            // Display the player's name and UID in the middle of the screen as big green text
            private _displayText = format ["<t color='#00ff00' size='2'>%1 (UID: %2)</t>", _playerName, _playerUID];
            [_displayText, -1, -1, 4, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _x, true];

            // Display message in red saying "you have been added to the capturing array!"
            sleep 10;
            ["<t color='#ff0000' size='2'>You have been added to the capturing array!</t>", -1, -1, 4, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _x, true];

            // 6 consecutive messages to the player every 30 seconds
            for "_i" from 1 to 6 do {
                // Check if the player is still within 100m of the marker
                if (_x distance _markerPos > 100) then {
                    // Remove player from the list and send them a message
                    _x setVariable [format ["isCapturingSector_%1", _uniqueSectorID], nil];
                    ["<t color='#ff0000' size='2'>You have been removed from the capturing array!</t>", -1, -1, 4, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _x, true];
                    break;
                };

                // Send the next message
                private _message = format ["<t color='#ff0000' size='2'>Message %1!</t>", _i];
                [_message, -1, -1, 4, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _x, true];
                sleep 30;
            };
        };
    } forEach _playersInSector;
    
    // Sleep for 60 seconds before checking again
    sleep 60;
};
