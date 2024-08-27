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

                    // Define your base spawn position and the random radius range
                    private _basePos = getMarkerPos "waypointMarker_1";
                    private _minRadius = 800;
                    private _maxRadius = 1200;

                    // Use BIS_fnc_findSafePos to find a safe random position within the specified range
                    private _randomPos = [_basePos, _minRadius, _maxRadius, 3, 0, 0.2, 0, [], [getMarkerPos "waypointMarker_1", getMarkerPos "waypointMarker_1"]] call BIS_fnc_findSafePos;

                    // Define an array of possible groups
                    private _groupArray = [
                        
						"OIA_MotInf_Team",        // Motorized Team
						"OIA_MotInf_AT",          // Motorized Anti-armor Team
						"OIA_MotInf_AA",          // Motorized Air-defense Team
						"OIA_MotInf_MGTeam",      // Motorized HMG Team
						"OIA_MotInf_GMGTeam",     // Motorized GMG Team
						"OIA_MotInf_MortTeam",    // Motorized Mortar Team
						"OIA_MotInf_Reinforce",   // Motorized Reinforcements
						"O_MotInf_ReconViperTeam",// Motorized Viper Recon Team
						"O_MotInf_AssaultViperTeam", // Motorized Viper Assault Team
						"OIA_MechInfSquad",       // Mechanized Rifle Squad
						"OIA_MechInf_AT",         // Mechanized Anti-armor Squad
						"OIA_MechInf_AA",         // Mechanized Air-defense Squad
						"OIA_MechInf_Support",    // Mechanized Support Squad
						"OIA_TankPlatoon",        // Tank Platoon
						"OIA_TankPlatoon_AA",     // Tank Platoon (Combined)
						"OIA_TankSection",        // Tank Section
						"OIA_SPGPlatoon_Scorcher", // Artillery SPG Platoon
						"OIA_SPGSection_Scorcher", // Artillery SPG Section
						"O_TankSection_Heavy",    // Tank Section (Heavy)
						"O_TankPlatoon_Heavy"    // Tank Platoon (Heavy)
                    ];

                    // Select a random group from the array
                    private _randomGroup = _groupArray select floor random count _groupArray;

                    // Generate a random number between 0 and 1 to decide the number of groups to spawn
                    private _chance = random 1;

                                        // Determine how many groups to spawn based on chance
                    if (_chance <= 0.1) then {
                        // 10% chance to spawn 1 group
                        [_randomPos, false, getMarkerPos "waypointMarker_1", _randomGroup, "OPF_F"] call ALIVE_spawnProfileGroup;
                    } else {
                        if (_chance > 0.1 && _chance <= 0.3) then {
                            // 20% chance to spawn 2 groups
                            [_randomPos, false, getMarkerPos "waypointMarker_1", _randomGroup, "OPF_F"] call ALIVE_spawnProfileGroup;
                            [_randomPos, false, getMarkerPos "waypointMarker_1", _randomGroup, "OPF_F"] call ALIVE_spawnProfileGroup;
                        } else {
                            // 70% chance to spawn 3 groups
                            [_randomPos, false, getMarkerPos "waypointMarker_1", _randomGroup, "OPF_F"] call ALIVE_spawnProfileGroup;
                            [_randomPos, false, getMarkerPos "waypointMarker_1", _randomGroup, "OPF_F"] call ALIVE_spawnProfileGroup;
                            [_randomPos, false, getMarkerPos "waypointMarker_1", _randomGroup, "OPF_F"] call ALIVE_spawnProfileGroup;
                        };
                    };
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
