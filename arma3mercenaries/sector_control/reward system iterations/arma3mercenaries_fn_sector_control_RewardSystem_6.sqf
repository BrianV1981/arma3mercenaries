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
            
            // Set the capturing variable to true for the player
            _x setVariable ["isCapturingSector", true, true];

            // Loop for 6 reward distributions
            for "_i" from 1 to 6 do {
                
                // Check if the player is still within 100m of the marker
                if ((_x distance _markerPos) > 100) then {
                    ["<t color='#ff0000' size='2'>You have left the sector and been removed from the capturing list!</t>", -1, -1, 4, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _x];
                    _x setVariable ["isCapturingSector", nil, true];
                    break;
                };
                
                // Reward the player
                private _reward = switch (_i) do {
                    case 1: {5000};
                    case 2: {20000};
                    case 3: {50000};
                    case 4: {75000};
                    case 5: {100000};
                    case 6: {225000};
                };
                [_x, _reward] remoteExecCall ["grad_moneymenu_fnc_addFunds", _x];

                // Trigger the event after the 5th message
                if (_i == 1) then {
                    // Define the distance range
                    private _minDistance = 500; 
                    private _midDistance = 700; 
                    private _maxDistance = 1000; 

					/*
                    // Use BIS_fnc_findSafePos to find a safe spawn position
                    private _spawnPosition = [_markerPos, _minDistance, _maxDistance, 10, 0, 0.1, 0] call BIS_fnc_findSafePos;

                    // Debugging to verify spawn position
                    hint format ["Spawn Position: %1", _spawnPosition];

                    private _enemyGroup = [
                    _spawnPosition,
                    EAST,
                    ["O_Soldier_A_F", "O_Soldier_AAR_F", "O_Soldier_SL_F", "O_Soldier_TL_F"],
                    [], 
                    [], 
                    [], 
                    [], 
                    [5, 0.3],           // 5 mandatory units, 30% chance for others
                    random 360,         // Random azimuth
                    true,               // Precise position placement
                    3                   // Max 3 vehicles
                    ] call BIS_fnc_spawnGroup;

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
					*/
					
					// Define your base spawn position and the random radius range
private _basePos = getMarkerPos "spawnMarker_1";
private _minRadius = 800;
private _maxRadius = 1200;

// Use BIS_fnc_findSafePos to find a safe random position within the specified range
private _randomPos = [_basePos, _minRadius, _maxRadius, 3, 0, 0.2, 0, [], [getMarkerPos "spawnMarker_1", getMarkerPos "spawnMarker_1"]] call BIS_fnc_findSafePos;

// Define an array of possible groups
private _groupArray = [
    "O_TankPlatoon_Heavy",    // Heavy tank platoon
    "OIA_MechInfSquad",       // Mechanized infantry platoon
    "OI_ViperTeam",     // Infantry squad
    "OIA_MechInf_AT",           // Anti-tank team
    "OIA_MechInf_AA"                // Anti-Air team
];

// Select a random group from the array
private _randomGroup = _groupArray select floor random count _groupArray;

// Spawn the group at the safe random position
[_randomPos, false, getMarkerPos "waypointMarker_1", _randomGroup, "OPF_F"] call ALIVE_spawnProfileGroup;
					
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
