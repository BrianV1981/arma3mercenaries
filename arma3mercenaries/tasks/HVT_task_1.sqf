/*

    arma3mercenaries\tasks\HVT_task_1.sqf
    Author: BrianV1981
    Description:
    This script creates an HVT (high-value target) task for the player to eliminate. 
    A helicopter inserts the HVT at a remote location, and a military composition is spawned nearby. 
    Upon elimination, players from the same faction are rewarded with money and score.

*/

// Ensure BIS functions are initialized   
waitUntil {!(isNil "BIS_fnc_init")};   
   
// Task Initialization   
private ["_taskID", "_taskSide", "_taskFaction", "_taskLocation", "_taskEnemyFaction", "_HVTGroup", "_heliGroup", "_remotePosition", "_HVT", "_compositionPosition"];   
   
// Use diag_tickTime to create a unique Task ID   
_taskID = format ["task_assassination_%1", diag_tickTime];   
_taskSide = west;   
_taskFaction = "BLU_F";   
_taskEnemyFaction = "OPF_F";   
_taskLocation = [getMarkerPos "red_taor_1", 1, 5000, 20, 0, 0.1, 0] call BIS_fnc_findSafePos;   
   
// Define the remote insertion point (1km from task location)  
_remotePosition = [_taskLocation, 1000, 2000, 20, 0, 1, 0, [], []] call BIS_fnc_findSafePos;  
   
// Create the HVT group at the remote position   
_HVTGroup = createGroup EAST;   
_HVT = _HVTGroup createUnit ["O_officer_F", _remotePosition, [], 0, "FORM"];

// Add cash to the officer
[_HVT, 100000] call grad_moneymenu_fnc_addFunds; 

// Set the first waypoint for the helicopter to land at the task location  
private _HVTwp1 = _HVTGroup addWaypoint [_taskLocation, 0];  
_HVTwp1 setWaypointType "MOVE";    
_HVTwp1 setWaypointSpeed "FULL";  
   
// Random parameters for composition spawning  
private _compositionTypes = ["Civilian", "Military", "Guerrilla"];  
private _militaryCategories = ["airports", "camps", "checkpointsbarricades", "fieldhq", "fort", "fuel", "outposts"];  
private _civilianCategories = ["airports", "construction", "communications", "fuel", "settlements"];  
private _guerrillaCategories = ["camps", "fieldhq", "fort", "outposts", "medical"];  
private _factions = ["OPF_F"]; // , "BLU_F", "IND_F"  
private _sizes = ["Large", "Medium", "Small"];  
private _infantryGroups = [1, 2, 3, 4];  
  
// Randomly select the composition type  
private _selectedType = selectRandom _compositionTypes;  
  
// Randomly select category based on composition type  
private _selectedCategory;  
switch (_selectedType) do {  
    case "Military": {  
        _selectedCategory = selectRandom _militaryCategories;  
    };  
    case "Civilian": {  
        _selectedCategory = selectRandom _civilianCategories;  
    };  
    case "Guerrilla": {  
        _selectedCategory = selectRandom _guerrillaCategories;  
    };  
};  
  
// Randomly select faction, size, and number of infantry groups  
private _selectedFaction = selectRandom _factions;  
private _selectedSize = selectRandom _sizes;  
private _selectedInfantryGroups = selectRandom _infantryGroups;  
  
// Spawn a random populated composition based on the selected parameters  
_compositionPosition = [_taskLocation, _selectedType, _selectedCategory, _selectedFaction, _selectedSize, _selectedInfantryGroups] call ALIVE_fnc_spawnRandomPopulatedComposition;   
  
diag_log format ["Spawning composition with Type: %1, Category: %2, Faction: %3, Size: %4, Infantry Groups: %5", _selectedType, _selectedCategory, _selectedFaction, _selectedSize, _selectedInfantryGroups];  
   
// Create the helicopter for HVT insertion, start it in the air at 300m   
private _heli = createVehicle ["O_Heli_Light_02_F", _remotePosition, [], 0, "FLY"];   
   
_heliGroup = createGroup EAST;   
private _heliPilot = _heliGroup createUnit ["O_Helipilot_F", _taskLocation, [], 0, "FLY"];   
_heliPilot moveInDriver _heli;   
_HVT moveInCargo _heli;   
   
// Set the first waypoint for the helicopter to land at the task location  
private _wp1 = _heliGroup addWaypoint [_taskLocation, 0];  
_wp1 setWaypointType "TR UNLOAD";    
_wp1 setWaypointSpeed "FULL";  
  
// Define a second position 1km-2km away from the task location for the helicopter to fly to after unloading  
_secondLocation = [_taskLocation, 1000, 2000, 20, 0, 1, 0, [], []] call BIS_fnc_findSafePos;  
  
// Set the second waypoint for the helicopter to move to the second position  
private _wp2 = _heliGroup addWaypoint [_secondLocation, 0];  
_wp2 setWaypointType "MOVE";    
_wp2 setWaypointSpeed "FULL";  
  
// Use setWaypointStatements to trigger a hint when the second waypoint is completed  
_wp2 setWaypointStatements ["true", "hint 'Helicopter has reached the second waypoint';"];  
   
// Create Task   
[   
    [_taskSide],  // Task owner(s)   
    _taskID,  // Task ID   
    ["Eliminate the HVT", "HVT Elimination", "HVT_Marker"],  // Task description   
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
   
    // Check if the taskID is valid   
    if (_taskID == "") exitWith { diag_log "Task ID is invalid, cannot proceed."; };   
   
    // Log task completion for debugging   
    diag_log format ["Task ID: %1 marked as SUCCEEDED", _taskID];   
       
    // Task Completion   
    [_taskID, "SUCCEEDED"] call BIS_fnc_taskSetState;   
   
    // Cleanup groups   
    if (!isNull _HVTGroup) then { deleteGroup _HVTGroup; };   
   
    // Option 3: Reward all players on the same side/faction as the killer 
    private _taskCompletingSide = side _killer; 
    { 
        if (side _x == _taskCompletingSide) then { 
            _x addScore 1000; 
            [_x, 500000] call grad_moneymenu_fnc_addFunds; 
        }; 
    } forEach allPlayers; 
}];   
   
// Store references to the HVT and groups for use in event handlers   
_heli setVariable ["HVT", _HVT];   
_HVT setVariable ["taskID", _taskID];   
_HVT setVariable ["HVTGroup", _HVTGroup];