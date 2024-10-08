/*
    arma3mercenaries\sector_control\reward_system\fn_manageSectors.sqf
    Author: BrianV1981
    Description:

---

# arma3mercenaries Sector Control Reward System Script

## Overview
This script is a core component of the `arma3mercenaries` Arma 3 mission, designed to manage multiple sectors in the game environment. It continuously monitors players within designated sectors, distributes rewards based on player activity, and uses a blocking system to prevent exploitative behavior. The primary goal is to create dynamic and engaging gameplay experiences, particularly in multiplayer settings.

## Features

### 1. **Sector Management**
   - **Sector Definitions:** 
     - The script defines multiple sectors, each with customizable properties:
       - **Trigger Name:** The name of the trigger associated with the sector.
       - **Blocked List Variable:** Tracks players who are temporarily blocked from earning rewards in the sector.
       - **Capturing Variable:** Indicates whether a player is actively capturing the sector.
       - **Reward Multiplier:** Adjusts the rewards based on the sector's importance or difficulty.
       - **Spawn Probability Adjustment:** Modifies the likelihood of enemy group spawns within the sector.
       - **Sector Name and Block Timer:** Defines the sector's name for messaging and the duration players are blocked after leaving.

### 2. **Continuous Monitoring and Player Management**
   - **Sector Loop:**
     - The script runs an infinite loop that checks each defined sector at regular intervals (every 60 seconds).
     - It monitors players' positions within each sector, ensuring they are eligible for rewards.
     - Players are processed efficiently, only considering those who are valid and currently in the game.

### 3. **Reward Distribution**
   - **Reward Logic:**
     - Players capturing a sector receive rewards at set intervals (every 5 minutes).
     - Rewards are multiplied by a sector-specific value, providing different earnings based on the sector's attributes.
     - Players must stay within the sector to continue receiving rewards. If they leave, rewards are halted, and they may be blocked from further payments.
   - **Dynamic Enemy Spawning:**
     - The script introduces random enemy group spawns based on a calculated probability, adjusted by the sector's difficulty.
     - This feature ensures that players face challenges while trying to control and earn from a sector.

### 4. **Blocking and Unblocking System**
   - **Player Blocking:**
     - If a player leaves a sector after receiving a reward, they are added to a block list, preventing them from earning further rewards in that sector for a set time.
   - **Messaging:**
     - Players receive dynamic messages based on their actions:
       - Upon leaving a sector after receiving rewards, they are notified of halted payments and the blocking duration.
       - Upon successfully capturing and holding a sector for the full reward cycle, they receive a congratulatory message.
   - **Automatic Unblocking:**
     - Players are automatically removed from the block list after the block duration expires, allowing them to re-engage with the sector.

### 5. **Debugging and Logging**
   - **Diagnostic Tools:**
     - The script uses `diag_log` for logging key actions such as player blocking, reward distribution, and group spawns.
     - Hints are also provided to players to communicate important information about their reward status and actions.

## Use Cases

### 1. **Dynamic Sector Control Missions**
   - The script is perfect for missions where controlling and holding sectors is critical for earning rewards.
   - It adds complexity by spawning enemy groups based on player presence, making sector control both rewarding and challenging.

### 2. **Persistent Multiplayer Environments**
   - In persistent multiplayer scenarios, the script maintains fairness by temporarily blocking players who try to exploit the reward system.
   - The automatic unblocking feature ensures that players can rejoin the sector after the block period, promoting sustained gameplay.

### 3. **Tiered Reward Objectives**
   - The system can be used to create missions with tiered objectives, where more difficult sectors offer higher rewards but come with increased risks such as frequent enemy spawns.

## Conclusion
The arma3mercenaries Sector Control Reward System Script is a versatile and powerful tool for managing sector control and rewards in Arma 3 missions. By combining continuous player monitoring, dynamic rewards, and a robust blocking system, it enhances the depth and replayability of missions, making it a valuable addition to any mission designer's toolkit.

---

*/

// Ensure the script only runs on the server
if (!isServer) exitWith {};

// Define sector details (trigger name, block list, capturing variable, reward multiplier, probability multiplier, sector name, block timer in seconds, reward time interval in seconds)
private _sectors = [
    ["trigger_sector1", "blockedPlayers_sector1", "isCapturing_sector1", 0.5, 0.0, "Fort MAGA", 7200, 720],    // Fort MAGA - Sector 1: 0.5x reward multiplier, 0.0x probability multiplier (no groups will spawn) | Block time: 3600 seconds (2 hours) | 60 seconds reward time interval (1 minute)
    ["trigger_sector2", "blockedPlayers_sector2", "isCapturing_sector2", 1.5, 0.50, "Paros", 7200, 720],        // Paros - Sector 2: 1.5x reward multiplier, -.25x probability multiplier | Block time: 9000 seconds (2.5 hours) (600 seconds = 10 minutes for testing) | 60 seconds reward time interval (1 minute)
    ["trigger_sector3", "blockedPlayers_sector3", "isCapturing_sector3", 1.25, 0.25, "Pefkas Military Base", 7200, 720],  // Pefkas Military Base - Sector 3: -.5x reward multiplier, 0.75x probability multiplier | Block time: 7200 seconds (2 hours) | 60 seconds reward time interval (1 minute)
    ["trigger_sector4", "blockedPlayers_sector4", "isCapturing_sector4", 2.0, 1.0, "Pyrgos", 10800, 720],      // Pyrgos - Sector 4: 2.0x reward multiplier, 1.75x probability multiplier | Block time: 10800 seconds (3 hours) | 720 second reward time interval (12 minutes)
    ["trigger_sector5", "blockedPlayers_sector5", "isCapturing_sector5", 1.5, 1.0, "Charkia", 7200, 720],      // Charkia - Sector 5: 1.5x reward multiplier, 1.0x probability multiplier | Block time: 7200 seconds (2 hours) | 720 second reward time interval (12 minutes)
    ["trigger_sector6", "blockedPlayers_sector6", "isCapturing_sector6", 1.75, 1.25, "Anthrakia", 9000, 720],  // Anthrakia - Sector 6: 1.75x reward multiplier, 1.25x probability multiplier | Block time: 9000 seconds (2.5 hours) | 720 second reward time interval (12 minutes)
    ["trigger_sector7", "blockedPlayers_sector7", "isCapturing_sector7", 1.25, 1.0, "Neochori", 7200, 720],    // Neochori - Sector 7: 1.25x reward multiplier, 1.0x probability multiplier | Block time: 7200 seconds (2 hours) | 720 second reward time interval (12 minutes)
    ["trigger_sector8", "blockedPlayers_sector8", "isCapturing_sector8", 1.5, 1.0, "Athira", 7200, 720],       // Athira - Sector 8: 1.5x reward multiplier, 1.0x probability multiplier | Block time: 7200 seconds (2 hours) | 720 second reward time interval (12 minutes)
    ["trigger_sector9", "blockedPlayers_sector9", "isCapturing_sector9", 1.75, 1.25, "Lakka Military Base", 9000, 720],  // Lakka Military Base - Sector 9: 1.75x reward multiplier, 1.25x probability multiplier | Block time: 9000 seconds (2.5 hours) | 720 second reward time interval (12 minutes)
    ["trigger_sector10", "blockedPlayers_sector10", "isCapturing_sector10", 1.5, 1.25, "Rodopoli", 7200, 720], // Rodopoli - Sector 10: 1.5x reward multiplier, 1.25x probability multiplier | Block time: 7200 seconds (2 hours) | 720 second reward time interval (12 minutes)
    ["trigger_sector11", "blockedPlayers_sector11", "isCapturing_sector11", 2.0, 1.75, "Telos Military Base", 10800, 720], // Telos Military Base - Sector 11: 2.0x reward multiplier, 1.75x probability multiplier | Block time: 10800 seconds (3 hours) | 720 second reward time interval
    ["trigger_sector12", "blockedPlayers_sector12", "isCapturing_sector12", 3.0, 1.9, "Gravia Airforce Base", 14400, 720]  // Gravia Airforce Base - Sector 12: 3.0x reward multiplier, 1.9x probability multiplier | Block time: 14400 seconds (4 hours) | 720 second reward time interval
];

// This loop will check every minute for players within the radius of the marker for each sector
while {true} do {
    // Iterate over each sector
    {
        private _sectorData = _x;
        private _triggerName = _sectorData select 0;
        private _blockedVar = _sectorData select 1;
        private _capturingVar = _sectorData select 2;
        private _rewardMultiplier = _sectorData select 3;
        private _spawnProbability = _sectorData select 4;
        private _sectorName = _sectorData select 5;
        private _blockTime = _sectorData select 6;
        private _blockTimeMinutes = _blockTime / 60;
        private _rewardTime = _sectorData select 7; // Unique reward time for this sector
        
        // Get the trigger object directly by its name
        private _trigger = missionNamespace getVariable [_triggerName, objNull];
        
        // Ensure the trigger is valid
        if (isNull _trigger) exitWith { diag_log format ["[ERROR] Trigger %1 does not exist or is not defined.", _triggerName]; };
        
        // Get the trigger position
        private _triggerPos = getPos _trigger;

        // Retrieve the list of players inside the trigger area
        private _playersInSector = list _trigger;
        
        // Retrieve the blocked players array
        private _blockedPlayers = missionNamespace getVariable [_blockedVar, []];
        
        // Iterate over each player found in the sector
        {
            if (isPlayer _x) then {
                private _player = _x;
                private _playerUID = getPlayerUID _player; // Define _playerUID here
                
                // Check if the player is already capturing this sector
                if (_player getVariable [_capturingVar, false]) then {
                    continue; // Skip if they are already capturing
                };
                
                // Check if the player is already blocked
                if (_playerUID in _blockedPlayers) then {
                    ["<t color='#FFFFFF' size='0.5'>Payments are currently halted in this sector.", 1.0, -0.1, 10, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _player];
                    _player setVariable [_capturingVar, nil, true];  // Clear capturing status
                    continue;  // Skip this player
                };

                // Run reward distribution in a separate thread
                [_player, _blockedPlayers, _capturingVar, _rewardMultiplier, _spawnProbability, _sectorName, _blockTime, _blockTimeMinutes, _triggerPos, _blockedVar, _trigger, _playerUID, _rewardTime] spawn {
                    params ["_player", "_blockedPlayers", "_capturingVar", "_rewardMultiplier", "_spawnProbability", "_sectorName", "_blockTime", "_blockTimeMinutes", "_triggerPos", "_blockedVar", "_trigger", "_playerUID", "_rewardTime"];

                    private _playerName = name _player;
                    private _rewardsGiven = 0; // Initialize rewards counter

                    // Set the capturing variable to true for the player
                    _player setVariable [_capturingVar, true, true];

                    // Generate a random reward trigger point between 2nd and 5th reward
                    private _randomTrigger = 2 + floor(random 4);

                    // Loop for 6 reward distributions
                    for "_i" from 1 to 6 do {
                        // Check if the player is still within the trigger area
                        if (!(_player in list _trigger)) then {
                            // The player left after receiving at least one reward, so block them
                            private _message = format ["You exited the %1 sector! Payments have been halted and can be resumed in %2 minutes.", _sectorName, _blockTimeMinutes];
                            [_message, -1, -1, 10, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _player]; 
                            
                            _player setVariable [_capturingVar, nil, true];  // Clear capturing status

                            // Add the player to the block list
                            _blockedPlayers pushBackUnique _playerUID;
                            missionNamespace setVariable [_blockedVar, _blockedPlayers, true];
                            
                            break;  // Exit the loop early
                        };

                        // Reward the player
                        private _reward = switch (_i) do {
                            case 1: {5000};
                            case 2: {20000};
                            case 3: {25000};
                            case 4: {50000};
                            case 5: {75000};
                            case 6: {100000};
                        };
                        _reward = _reward * _rewardMultiplier;
                        [_player, _reward] remoteExecCall ["grad_moneymenu_fnc_addFunds", _player];

                        // Increment the reward counter
                        _rewardsGiven = _rewardsGiven + 1;

                        // Hint the amount of rewards received
                        [format ["<t color='#FFFFFF' size='0.5'>Player: %1<br/>UID: %2<br/>Sector: %4<br/>Payment: %3 Cr", _playerName, _playerUID, _reward, _sectorName], 1.0, -0.1, 10, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _player];

                        // Trigger the event after the random reward (between 2nd and 5th)
                        if (_i == _randomTrigger) then {
                            // Define an array of possible groups
                            private _groupArray = [
                            // "O_G_InfSquad_Assault",    // Assault Squad (FIA)
                            // "O_G_InfTeam_Light",    // Patrol Team (FIA)
                            // "OIA_InfSquad",          // Rifle Squad
                            "OIA_InfSquad_Weapons",  // Weapons Squad
                            "OIA_InfTeam",           // Fire Team
                            "OIA_InfTeam_AT",        // Anti-armor Team
                            "OIA_InfTeam_AA",        // Air-defense Team
                            // "OIA_InfSentry",         // Sentry
                            // "OI_reconTeam",          // Recon Team
                            // "OI_reconPatrol",        // Recon Patrol
                            // "OI_reconSentry",        // Recon Sentry
                            "OI_SniperTeam",         // Sniper Team
                            "OIA_InfAssault",        // Assault Squad
                            "OIA_ReconSquad",        // Recon Squad
                            "O_InfTeam_AT_Heavy",    // Anti-Armor Team (Heavy)
                            // "OIA_GuardSquad",        // Guard Squad
                            // "OIA_GuardTeam",         // Guard Patrol
                            // "OIA_GuardSentry",       // Guard Sentry
                            // "OI_diverTeam",          // Diver Team
                            // "OI_diverTeam_Boat",     // Diver Team (Boat)
                            // "OI_diverTeam_SDV",      // Diver Team (SDV)
                            // "OI_SmallTeam_UAV",      // Small UAV Team
                            // "OI_ReconTeam_UGV",      // Recon UGV Team
                            // "OI_AttackTeam_UGV",     // Attack UGV Team
                            // "OI_ReconTeam_UAV",      // Recon UAV Team
                            // "OI_AttackTeam_UAV",     // Attack UAV Team
                            "OI_ViperTeam",          // Viper Team
                            // "OI_support_CLS",        // Support Team (CLS)
                            // "OI_support_EOD",        // Support Team (EOD)
                            // "OI_support_ENG",        // Support Team (Engineer)
                            // "OI_recon_EOD",          // Recon Support Team (EOD)
                            "OI_support_MG",         // HMG Team
                            "OI_support_GMG",        // GMG Team
                            "OI_support_Mort",       // Mortar Team
                            "OIA_MotInf_Team",       // Motorized Team
                            "OIA_MotInf_AT",         // Motorized Anti-armor Team
                            "OIA_MotInf_AA",         // Motorized Air-defense Team
                            "OIA_MotInf_MGTeam",     // Motorized HMG Team
                            "OIA_MotInf_GMGTeam",    // Motorized GMG Team
                            "OIA_MotInf_MortTeam",   // Motorized Mortar Team
                            "OIA_MotInf_Reinforce",  // Motorized Reinforcements
                            "O_MotInf_ReconViperTeam", // Motorized Viper Recon Team
                            "O_MotInf_AssaultViperTeam", // Motorized Viper Assault Team
                            "OIA_MechInfSquad",      // Mechanized Rifle Squad
                            "OIA_MechInf_AT",        // Mechanized Anti-armor Squad
                            "OIA_MechInf_AA",        // Mechanized Air-defense Squad
                            "OIA_MechInf_Support",   // Mechanized Support Squad
                            "OIA_TankPlatoon",       // Tank Platoon
                            "OIA_TankPlatoon_AA",    // Tank Platoon (Combined)
                            "OIA_TankSection",       // Tank Section
                            // "OIA_SPGPlatoon_Scorcher", // Artillery SPG Platoon
                            // "OIA_SPGSection_Scorcher", // Artillery SPG Section
                            "O_TankSection_Heavy",   // Tank Section (Heavy)
                            "O_TankPlatoon_Heavy"    // Tank Platoon (Heavy)
                        ];

                            // Generate a random number between 0 and 1 to decide the number of groups to spawn
                            private _chance = random 1;
                            private _adjustedChance = _spawnProbability * _chance;
                            private _groupsToSpawn = switch (true) do {
                                case (_adjustedChance == 0): {0};
                                case (_adjustedChance <= 0.083): {1};
                                case (_adjustedChance > 0.083 && _adjustedChance <= 0.167): {2};
                                case (_adjustedChance > 0.167 && _adjustedChance <= 0.25): {3};
                                case (_adjustedChance > 0.25 && _adjustedChance <= 0.333): {4};
                                case (_adjustedChance > 0.333 && _adjustedChance <= 0.417): {5};
                                case (_adjustedChance > 0.417 && _adjustedChance <= 0.5): {6};
                                case (_adjustedChance > 0.5 && _adjustedChance <= 0.583): {7};
                                case (_adjustedChance > 0.583 && _adjustedChance <= 0.667): {8};
                                case (_adjustedChance > 0.667 && _adjustedChance <= 0.75): {9};
                                case (_adjustedChance > 0.75 && _adjustedChance <= 0.833): {10};
                                case (_adjustedChance > 0.833 && _adjustedChance <= 0.917): {11};
                                default {12};
                            };

                            // Spawn the groups
                            for "_g" from 1 to _groupsToSpawn do {
                                private _randomPos = [_triggerPos, 500, 1000, 3, 0, 0.2, 0, [], [_triggerPos, _triggerPos]] call BIS_fnc_findSafePos;
                                private _randomGroup = selectRandom _groupArray;
                                private _spawnedGroup = [_randomPos, false, _triggerPos, _randomGroup, "OPF_F"] call ALIVE_spawnProfileGroup;

                                // Hint the group spawn details
                                // [format ["<t color='#FFFFFF' size='0.5'>Spawned group: %1 at %2<br/>Roll: %3<br/>Adjusted Probability: %4<br/>Groups to spawn: %5", _randomGroup, _randomPos, _chance, _adjustedChance, _groupsToSpawn], 1.0, -0.1, 10, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _player];

                                if (_g < _groupsToSpawn) then { sleep 10; };
                            };
                        };

                        sleep _rewardTime; // Use the unique reward time for each sector
                    };

                    // After 6 rewards, block the player for the specified block time
                    if (_rewardsGiven == 6) then {
                        _player setVariable [_capturingVar, nil, true]; // Ensure player is removed from capturing list
                        _blockedPlayers pushBackUnique _playerUID;
                        missionNamespace setVariable [_blockedVar, _blockedPlayers, true];

                        private _finalMessage = format ["Good job securing %2, %1! Payments have been halted for %3 minutes.", _playerName, _sectorName, _blockTimeMinutes];
                        [_finalMessage, -1, -1, 10, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _player];
                    };
                    
                    // Schedule unblocking after the specified block time
                    [_playerUID, _blockedVar, _blockTime] spawn {
                        params ["_blockedUID", "_blockedVar", "_blockTime"];
                        sleep _blockTime; // Use block time directly in seconds
                        private _blockedPlayers = missionNamespace getVariable [_blockedVar, []];
                        _blockedPlayers = _blockedPlayers - [_blockedUID];
                        missionNamespace setVariable [_blockedVar, _blockedPlayers, true];
                    };
                };
            };
        } forEach _playersInSector;

        sleep 5;

    } forEach _sectors;
    
    sleep 120; // 2 minute sleep in between checks (60 seconds for testing)
};
