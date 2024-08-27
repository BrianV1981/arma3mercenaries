// Define the position where you want to spawn the enemy units  
private _spawnPosition = getPos player; // Get the player's current location 
 
// Calculate the direction in the SE to SW quadrant (135° to 225°) and set a distance of 100 meters 
private _spawnDirection = 135 + random 90; // Generate a random direction between 135° (SE) and 225° (SW) 
_spawnPosition = _spawnPosition getPos [100, _spawnDirection]; // Get the position 100 meters away in the chosen direction 
 
// Define the enemy unit type and the group (faction) they belong to  
private _enemyType = "O_Soldier_F"; // Example: OPFOR Soldier  
private _enemyFaction = "OPF_F"; // OPFOR faction 
 
// Assume we have a placed object named "KillerObject" in the mission editor 
private _objectKiller = missionNamespace getVariable "KillerObject"; // Assuming KillerObject is an object, not a marker 
 
// Spawn the enemy group  
private _enemyGroup = [_spawnPosition, EAST, [_enemyType, _enemyType, _enemyType],[],[],[],[],[],300] call BIS_fnc_spawnGroup; 
 
// Ensure the group was spawned successfully  
if (isNull _enemyGroup) then {  
    hint "Failed to spawn enemy group!";  
} else {  
    // Use the spawned group as the target for the task  
    private _side = "WEST";  
    private _faction = "BLU_F";  
    private _taskType = "DestroyInfantry";  
    private _targetProfiles = units _enemyGroup; // Use the spawned units as targets  
    private _requester = getPlayerUID player;  
    private _integrateWithC2ISTAR = true;  
  
    hint format ["Requesting Task with Params: Side: %1, Faction: %2, Task Type: %3, Targets: %4, Requester: %5, Enemy Faction: %6", _side, _faction, _taskType, _targetProfiles, _requester, _enemyFaction];  
  
    [  
        _side,  
        _faction,  
        _taskType,  
        _targetProfiles,  
        _requester,  
        _integrateWithC2ISTAR,  
        _enemyFaction  
    ] call ALiVE_fnc_taskRequest; 
 
    hint format ["Spawned %1 units at %2", count (units _enemyGroup), _spawnPosition]; 
 
    // Mark the group for auto-deletion when it becomes empty 
    _enemyGroup deleteGroupWhenEmpty true; 
 
    // Force execution on the server 
    if (isServer) then { 
        // Eliminate the enemy group after a delay 
        [_enemyGroup, _objectKiller] spawn { 
            params ["_grp", "_killer"]; // Receive the group and the killer as parameters 
            sleep 10; // Wait for 10 seconds before executing the following code 
 
            { 
                if (alive _x) then { 
                    _x setDamage 1; // Set damage to 1 (fully damaged) to kill each unit 
                }; 
            } forEach units _grp; 
 
            hint "The enemy group has been eliminated!"; 
        }; 
    }; 
};