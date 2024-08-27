// Define the position where you want to spawn the enemy units
private _spawnPosition = getPos player; // Get the player's current location

private _isValidPosition = false; // Variable to check if the spawn position is valid
private _maxAttempts = 20; // Maximum number of attempts to find a valid position

for "_i" from 1 to _maxAttempts do {
    // Calculate a random direction within 360 degrees
    private _spawnDirection = random 360; // Generate a random direction between 0° and 360°
    _spawnPosition = _spawnPosition getPos [2000, _spawnDirection]; // Get the position 2000 meters away in the chosen direction
    
    // Check if the spawn position is on land
    if (surfaceIsWater _spawnPosition) then {
        // If the position is in water, continue to the next iteration to try a new position
        continue;
    } else {
        _isValidPosition = true; // Set the position as valid
        break; // Exit the loop if a valid position is found
    };
};

// Check if a valid position was found
if (!_isValidPosition) then {
    hint "Could not find a valid spawn position on land after multiple attempts.";
    // Optionally, you can abort the script or try a different approach if no valid position is found
    terminate;
};

// Define the enemy unit type and the group (faction) they belong to
private _enemyType = "O_Soldier_F"; // Example: OPFOR Soldier
private _enemyFaction = "OPF_F"; // OPFOR faction

// Assume we have a placed object named "KillerObject" in the mission editor
private _objectKiller = missionNamespace getVariable "interrogation_house_1"; // Assuming KillerObject is an object, not a marker

// Spawn the enemy group
private _enemyGroup = [_spawnPosition, EAST, [_enemyType, _enemyType, _enemyType],[],[],[],[],[],300] call BIS_fnc_spawnGroup;

// Ensure the group was spawned successfully
if (isNull _enemyGroup) then {
    hint "Bad intel, abort. I repeat, abort!";
} else {
    // Use the spawned group as the target for the task
    private _side = "WEST";
    private _faction = "BLU_F";
    private _taskType = "Assassination"; // "MilAssault","MilDefence","CivAssault","Assassination","TransportInsertion","DestroyVehicles","DestroyInfantry","SabotageBuilding"
    private _targetProfiles = units _enemyGroup; // Use the spawned units as temporary targets to trigger ALiVE
    private _requester = getPlayerUID player;
    private _integrateWithC2ISTAR = true;

    // Request the task (but don't expect a task ID in return)
    [
        _side,
        _faction,
        _taskType,
        _targetProfiles,
        _requester,
        _integrateWithC2ISTAR,
        _enemyFaction
    ] call ALiVE_fnc_taskRequest;

    // After the task has been created, the following block has been removed for now as requested
    
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
