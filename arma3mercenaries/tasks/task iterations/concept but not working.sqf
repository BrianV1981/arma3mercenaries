// Ensure BIS functions are initialized
waitUntil {!(isNil "BIS_fnc_init")};

// Task Initialization
private ["_taskID", "_taskSide", "_taskFaction", "_taskLocation", "_taskEnemyFaction", "_HVTGroup", "_HVT", "_guardUnits", "_guardGroup"];

// Use diag_tickTime to create a unique Task ID
_taskID = format ["task_assassination_%1", diag_tickTime];
_taskSide = west;
_taskFaction = "BLU_F";
_taskEnemyFaction = "OPF_F";
_taskLocation = [getMarkerPos "blue_taor", 1000, 5000, 10, 0, 200, 0] call BIS_fnc_findSafePos;

// HVT and Guard Spawning Logic
_HVTGroup = createGroup EAST;  // Create the group for the HVT
_guardGroup = createGroup EAST;  // Create a separate group for guards

_HVT = _HVTGroup createUnit ["O_officer_F", _taskLocation, [], 0, "FORM"];

// Spawn guards around the HVT
_guardUnits = [
    "O_soldier_F",  // Basic infantry
    "O_soldier_AR_F",  // Auto rifleman
    "O_soldier_AT_F"  // AT soldier
];

{
    private _pos = [_taskLocation, 5, 15, 1, 0, 200, 0] call BIS_fnc_findSafePos;
    _guardGroup createUnit [_x, _pos, [], 0, "FORM"];
} forEach _guardUnits;

// Create Task
[
    [_taskSide],  // Task owner(s)
    _taskID,  // Task ID
    ["Eliminate the HVT and his guards", "HVT Assassination", "HVT_Marker"],  // Task description
    _taskLocation,  // Task destination
    "ASSIGNED",  // Task state
    1,  // Task priority
    true,  // Show notification
    "kill",  // Task type
    true  // Visible in 3D
] call BIS_fnc_taskCreate;

// Add an event handler to the HVT to update task when eliminated
_HVT addEventHandler ["Killed", {
    params ["_killed", "_killer"];  // Ensure we're getting the correct parameters
    

    // Log task completion for debugging
    diag_log format ["Task ID: %1 marked as SUCCEEDED", _taskID];

    // Task Completion
    [ _taskID, "SUCCEEDED"] call BIS_fnc_taskSetState;
    hint "HVT eliminated! Task completed.";
    
    // Cleanup
    deleteGroup _HVTGroup;
    deleteGroup _guardGroup;

    // Reward players
    { _x addScore 1000 } forEach allPlayers;
}];
