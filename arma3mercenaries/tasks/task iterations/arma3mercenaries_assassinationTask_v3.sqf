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

// Store necessary variables on the HVT object using setVariable
_HVT setVariable ["taskID", _taskID, true];
_HVT setVariable ["HVTGroup", _HVTGroup, true];
_HVT setVariable ["guardGroup", _guardGroup, true];

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

// Add Killed event handler to the HVT
_HVT addEventHandler ["Killed", {
    params ["_unit", "_killer", "_instigator", "_useEffects"];
    
    // Log that the Killed event handler was triggered
    diag_log "HVT killed event handler triggered.";
    
    // Retrieve the taskID, HVTGroup, and guardGroup from the killed HVT
    private _taskID = _unit getVariable ["taskID", "<null>"];  // Default to "<null>" if not set
    private _HVTGroup = _unit getVariable ["HVTGroup", groupNull];  // Default to groupNull if not set
    private _guardGroup = _unit getVariable ["guardGroup", groupNull];  // Default to groupNull if not set

    // Log the task ID for debugging
    diag_log format ["Task ID retrieved in event handler: %1", _taskID];

    // Check if taskID was retrieved properly
    if (_taskID == "<null>") exitWith {
        diag_log "ERROR: Task ID not set correctly on the HVT!";
    };

    // Task Completion
    [_taskID, "SUCCEEDED"] call BIS_fnc_taskSetState;

    // Cleanup groups
    if (!isNull _HVTGroup) then { deleteGroup _HVTGroup; };
    if (!isNull _guardGroup) then { deleteGroup _guardGroup; };

    // Reward players
    { _x addScore 1000 } forEach allPlayers;
}];
