
private _markerName = "blue_taor"; // Name of your marker 
 
// Retrieve the marker position 
private _markerPos = getMarkerPos _markerName; 
 
// Define the distance range using a random array for weighted selection 
private _minDistance = 1; 
private _maxDistance = 4000; 

// Use BIS_fnc_findSafePos to find a suitable spawn position
private _spawnPosition = [_markerPos, _minDistance, _maxDistance, 20, 0, 0.065, 0] call BIS_fnc_findSafePos; // [center, minDist, maxDist, objDist, waterMode, maxGrad, shoreMode, blacklistPos, defaultPos] call BIS_fnc_findSafePos

// Define the enemy unit type and the group (faction) they belong to   
private _enemyType = "O_Soldier_F"; // Example: OPFOR Soldier   
private _enemyFaction = "OPF_F"; // OPFOR faction
  
// Assume we have a placed object named "KillerObject" in the mission editor  
private _objectKiller = missionNamespace getVariable "interrogation_house_1"; // Assuming KillerObject is an object, not a marker  
  
// Spawn the enemy group   
private _enemyGroup = [_spawnPosition, EAST, [_enemyType],[],[],[],[],[],300] call BIS_fnc_spawnGroup;  
  
// Ensure the group was spawned successfully   
if (isNull _enemyGroup) exitWith { hint "Bad intel, abort. I repeat, abort!"; }; 
 
private _side = "WEST"; 
private _faction = "BLU_F"; 
private _taskType = "DestroyInfantry"; 
private _targetProfiles = units _enemyGroup; 
private _requester = getPlayerUID player; 
private _integrateWithC2ISTAR = true; 
 
[ 
    _side, 
    _faction, 
    _taskType, 
    _targetProfiles, 
    _requester, 
    _integrateWithC2ISTAR, 
    _enemyFaction 
] call ALiVE_fnc_taskRequest; 
 
_enemyGroup deleteGroupWhenEmpty true; 
 
if (isServer) then { 
    [_enemyGroup, _objectKiller] spawn { 
        params ["_grp", "_killer"]; 
        sleep 10; 
        { 
            if (alive _x) then { _x setDamage 1; }; 
        } forEach units _grp; 
    }; 
}; 
