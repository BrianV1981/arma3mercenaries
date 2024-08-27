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


// Define the marker name for the sector
private _markerName = "waypointMarker_1"; // Change this to the name of your sector marker
private _markerPos = getMarkerPos _markerName;

// This loop will check every minute for players within 100m of the marker
while {true} do {
    
    // Search for players within 100 meters of the marker
    private _playersInSector = _markerPos nearEntities ["CAManBase", 100];
    
    // Retrieve the blocked players array
    private _blockedPlayers = missionNamespace getVariable ["blockedPlayers", []];
    
    // Iterate over each player found in the sector
    {
        if (isPlayer _x) then {
            private _playerName = name _x;
            private _playerUID = getPlayerUID _x;

            // Check if the player is already blocked or already receiving rewards
            if (_playerUID in _blockedPlayers || {_x getVariable ["isCapturingSector", false]}) then {
                ["<t color='#ff0000' size='2'>You are blocked or already capturing!</t>", -1, -1, 4, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _x];
                continue; // Skip to the next player
            };
            
            // Display the player's name and UID in the middle of the screen as big green text
            private _displayText = format ["<t color='#00ff00' size='2'>%1 (UID: %2)</t>", _playerName, _playerUID];
            [_displayText, -1, -1, 4, 1, 0, 789] spawn BIS_fnc_dynamicText;
            
            // Set the capturing variable to true for the player
            _x setVariable ["isCapturingSector", true, true];

            // Loop for 6 reward messages
            for "_i" from 1 to 6 do {
                
                // Check if the player is still within 100m of the marker
                if ((_x distance _markerPos) > 100) then {
                    ["<t color='#ff0000' size='2'>You have left the sector and been removed from the capturing list!</t>", -1, -1, 4, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _x];
                    _x setVariable ["isCapturingSector", nil, true];
                    break;
                };
                
                // Show the reward message
                private _reward = switch (_i) do {
                    case 1: {5000};
                    case 2: {20000};
                    case 3: {50000};
                    case 4: {75000};
                    case 5: {100000};
                    case 6: {225000};
                };
                [_x, _reward] call grad_moneymenu_fnc_addFunds;
                
                private _rewardMessage = format ["<t color='#ff0000' size='2'>Reward %1: %2 credits!</t>", _i, _reward];
				 [_x, _reward] call grad_moneymenu_fnc_addFunds;              
                // Trigger the event after the 5th message
                if (_i == 5) then {
                    // Define the distance range
                    private _minDistance = 300; 
                    private _midDistance = 400; 
                    private _maxDistance = 500; 

                    // Use BIS_fnc_findSafePos to find a safe spawn position
                    private _spawnPosition = [_markerPos, _minDistance, _maxDistance, 10, 0, 0.1, 0] call BIS_fnc_findSafePos;

                    // Debugging to verify spawn position
                    hint format ["Spawn Position: %1", _spawnPosition];

					private _enemyGroup = [_spawnPosition, EAST, [
					"O_Soldier_F", "O_Soldier_LAT_F", "O_Soldier_GL_F", "O_Soldier_AR_F", 
					"O_Soldier_AAR_F", "O_Soldier_M_F", "O_Soldier_TL_F", "O_Soldier_SL_F",
					"O_Officer_F", "O_Soldier_PG_F", "O_Soldier_PG_AA_F", "O_Soldier_PG_AR_F", 
					"O_Soldier_PG_AT_F", "O_Soldier_PG_TL_F", "O_Soldier_PG_SL_F", "O_HeavyGunner_F",
					"O_medic_F", "O_Sniper_F", "O_Spotter_F", "O_soldier_UAV_F", "O_engineer_F", 
					"O_Soldier_repair_F", "O_Soldier_exp_F", "O_Soldier_A_F", "O_Soldier_AAT_F", 
					"O_Soldier_AAA_F"
					], [], [], [], [], [3, 16], 180] call BIS_fnc_spawnGroup;

                    // Check if the group was spawned successfully   
                    if (isNull _enemyGroup) then {
                        hint "Error: Failed to spawn group";
                    } else {
                        hint "Group spawned successfully";
                    };

                    // Make the group move towards waypointMarker_1
                    private _wp = _enemyGroup addWaypoint [_markerPos, 0];
                    _wp setWaypointType "MOVE";
                    _wp setWaypointSpeed "FULL";

                    // Spawn a CSAT tank at the same position as the group
                    private _tankResult = [_spawnPosition, random 180, "O_MBT_02_cannon_F", EAST] call BIS_fnc_spawnVehicle;
                    private _spawnedTank = _tankResult select 0;
                    private _tankCrew = _tankResult select 1;
                    private _tankGroup = _tankResult select 2;

                    // Assign a waypoint for the tank to move towards the marker
                    private _wpTank = _tankGroup addWaypoint [_markerPos, 0];
                    _wpTank setWaypointType "MOVE";
                    _wpTank setWaypointSpeed "FULL";
                    
                    _enemyGroup deleteGroupWhenEmpty true;
                };

                sleep 30; // 30-second pause between rewards
            };
            
            // After 6 rewards, block the player for 3 minutes
            if (_x getVariable ["isCapturingSector", false]) then {
                _blockedPlayers pushBackUnique _playerUID;
                missionNamespace setVariable ["blockedPlayers", _blockedPlayers, true];
                ["<t color='#ff0000' size='2'>You have been blocked from capturing for a while!</t>", -1, -1, 4, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _x];
                _x setVariable ["isCapturingSector", nil, true];

                // Schedule unblocking after 3 minutes
                [_playerUID] spawn {
                    params ["_blockedUID"];
                    sleep 7200; // 2 minutes
                    private _blockedPlayers = missionNamespace getVariable ["blockedPlayers", []];
                    _blockedPlayers = _blockedPlayers - [_blockedUID];
                    missionNamespace setVariable ["blockedPlayers", _blockedPlayers, true];
                };
            };
        };
    } forEach _playersInSector;
    
    // Sleep for 60 seconds before checking again
    sleep 60;
};
