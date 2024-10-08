/*

TRANSPORT

index	type	description
0	array	Position of vehicle
1	number	Direction of vehicle
2	string	Classname of vehicle
3	string	Callsign of vehicle (string)
4	string	Code to be ran on vehicle spawn
5	string	Height of vehicle
6	boolean	Allow slingloading
7	number	Number of slingloading boxes to spawn around vehicle
Example:

[
    "TRANSPORT",
    [
        [26672,24523,0],
        60,
        "B_Heli_Transport_01_F",
        "VICTOR 1"
        "(group (_this select 0)) setVariable ['Vcm_Disable',true]",
        "0",
        true,
        3
    ]
] Call ALiVE_fnc_combatSupportAdd;

*/
// Check if _transportThread1 exists in the missionNamespace and terminate it if it does.
// This ensures that the previous instance of the thread is stopped before starting a new one.
if (!isNil {missionNamespace getVariable "_transportThread1"} && {not isNull (missionNamespace getVariable "_transportThread1")}) then {
    terminate (missionNamespace getVariable "_transportThread1");
};

// Remove any existing transport support group named "UH-80 Ghost Hawk".
// This clears any previously spawned transport support.
["WEST","TRANSPORT","UH-80 Ghost Hawk"] call ALiVE_fnc_combatSupportRemove;

// Sleep for 1 second before adding a new group.
// This introduces a small delay to ensure that the previous group is properly removed.
sleep 1;

// Define a static blacklist area to prevent spawning in specific areas.
// In this case, we define a rectangular area at Molos Airstrip with specific dimensions and rotation.
private _staticBlacklist = [
    [[26997, 24709], 100, 350, 40, true]   // Rectangular area centered at [26997, 24709], rotated 40 degrees
];

// Get the position from the marker "blufor_combat_support" to determine where we are checking for a safe position.
// This marker will act as a reference point for the dynamic spawn.
private _checkPos = getMarkerPos "blufor_combat_support";  

// Find all nearby objects within 500 meters of the marker position.
// These objects will be used to dynamically prevent the transport from spawning near player-placed or other objects.
private _objectsNearby = _checkPos nearObjects 500;  

// Convert the found objects into blacklist areas, with a 10x10 rectangle around each object.
// This ensures that no transport spawns too close to these objects.
private _dynamicBlacklist = _objectsNearby apply {[_x, 10, 10, 0, true]};  

// Merge static and dynamic blacklist areas to form the complete blacklist for the findSafePos function.
private _blacklist = _staticBlacklist + _dynamicBlacklist;

// Use BIS_fnc_findSafePos to find a safe position for spawning the transport vehicle.
// It avoids blacklisted areas and ensures that the transport spawns in a valid location.
private _safePos = [_checkPos, 0, 1000, 0, 0, 0.1, 0, _blacklist] call BIS_fnc_findSafePos;

// Call ALiVE_fnc_combatSupportAdd to spawn the transport support group at the safe position.
// The UH-80 Ghost Hawk is spawned, with specific settings for direction, code on spawn, and slingloading options.
[
    "TRANSPORT",                                                   // CS type (Transport)
    [
        _safePos,                                                  // Safe position found using findSafePos
        60,                                                        // Direction of the transport
        "B_Heli_Transport_01_F",                                   // Classname (UH-80 Ghost Hawk)
        "UH-80 Ghost Hawk",                                        // Callsign for the transport
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];", // Disable VCOM AI and ALiVE dynamic simulation
        "0",                                                       // Height (set to 0, use default height)
        true,                                                      // Slingloading enabled
        0                                                          // Number of boxes to spawn for slingloading
    ]
] call ALiVE_fnc_combatSupportAdd;

// Spawn a new thread to handle the transport support.
// This thread runs for 7200 seconds (2 hours) before removing the transport support.
missionNamespace setVariable ["_transportThread1", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","UH-80 Ghost Hawk"] call ALiVE_fnc_combatSupportRemove;
}];
