// Ensure BIS functions are initialized 
waitUntil {!(isNil "BIS_fnc_init")}; 
 
// Task Initialization 
private ["_taskID", "_taskSide", "_taskFaction", "_taskLocation", "_taskEnemyFaction", "_HVTGroup", "_guardGroup", "_heliGroup", "_HVT", "_guards"]; 
 
// Use diag_tickTime to create a unique Task ID 
_taskID = format ["task_assassination_%1", diag_tickTime]; 
_taskSide = west; 
_taskFaction = "BLU_F"; 
_taskEnemyFaction = "OPF_F"; 
_taskLocation = [getMarkerPos "red_taor_1", 1000, 5000, 10, 0, 200, 0] call BIS_fnc_findSafePos; 
 
// Create the HVT group at the task location
_HVTGroup = createGroup EAST; 
_HVT = _HVTGroup createUnit ["O_officer_F", _taskLocation, [], 0, "FORM"]; 
 
// Create the guards at the task location 
_guardGroup = createGroup EAST; 
_guards = [ 
    "O_soldier_F",  // Basic infantry 
    "O_soldier_AR_F",  // Auto rifleman 
    "O_soldier_AT_F"  // AT soldier 
]; 
{ 
    private _pos = [_taskLocation, 5, 15, 1, 0, 200, 0] call BIS_fnc_findSafePos; 
    _guardGroup createUnit [_x, _pos, [], 0, "FORM"]; 
} forEach _guards; 
 
// Create the helicopter for HVT insertion, set to fly mode 
private _heli = createVehicle ["O_Heli_Light_02_F", _taskLocation, [], 0, "FLY"]; 

_heliGroup = createGroup EAST; 
private _heliPilot = _heliGroup createUnit ["O_Helipilot_F", _taskLocation, [], 0, "FLY"]; 
_heliPilot moveInDriver _heli;  // Ensure the pilot is correctly assigned as the driver

_HVT moveInCargo _heli;  // HVT moved into the cargo seat of the heli
 
// Set waypoints for the helicopter to move to the task location 
private _wp = _heliGroup addWaypoint [_taskLocation, 0]; 
_wp setWaypointType "TR UNLOAD"; 
_wp setWaypointSpeed "FULL"; 
 
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
     
    // Retrieve the task ID and group references stored in the HVT 
    private _taskID = _unit getVariable ["taskID", ""]; 
    private _HVTGroup = _unit getVariable ["HVTGroup", groupNull]; 
    private _guardGroup = _unit getVariable ["guardGroup", groupNull]; 
 
    // Check if the taskID is valid 
    if (_taskID == "") exitWith { diag_log "Task ID is invalid, cannot proceed."; }; 
 
    // Log task completion for debugging 
    diag_log format ["Task ID: %1 marked as SUCCEEDED", _taskID]; 
     
    // Task Completion 
    [_taskID, "SUCCEEDED"] call BIS_fnc_taskSetState; 
 
    // Cleanup groups 
    if (!isNull _HVTGroup) then { deleteGroup _HVTGroup; }; 
    if (!isNull _guardGroup) then { deleteGroup _guardGroup; }; 
 
    // Reward players 
    { _x addScore 1000 } forEach allPlayers; 
}]; 
 
// Add LandedStopped event handler to the helicopter for landing detection 
_heli addEventHandler ["LandedStopped", { 
    params ["_heli", "_airportID", "_airportObject"]; 
     
    // Ensure the helicopter landed at the correct location (airportID = -1 indicates non-airport landing) 
    if (_airportID == -1) then { 
        diag_log "Helicopter has landed at the task location. Unloading HVT."; 
         
        // Unload the HVT from the helicopter 
        private _HVT = _heli getVariable ["HVT", objNull]; 
        if (!isNull _HVT) then { 
            _HVT action ["eject", _heli]; 
        }; 
 
        // Clean up the helicopter and pilot once the HVT is out 
        deleteVehicle _heli; 
        deleteVehicle driver _heli; 
    }; 
}]; 
 
// Store references to the HVT and groups for use in event handlers 
_heli setVariable ["HVT", _HVT]; 
_HVT setVariable ["taskID", _taskID]; 
_HVT setVariable ["HVTGroup", _HVTGroup]; 
_HVT setVariable ["guardGroup", _guardGroup]; 
