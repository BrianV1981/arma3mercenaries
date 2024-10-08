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

// Check if _transportThread7 exists in the missionNamespace and terminate it if it does
if (!isNil {missionNamespace getVariable "_transportThread7"} && {not isNull (missionNamespace getVariable "_transportThread7")}) then {
    terminate (missionNamespace getVariable "_transportThread7");
};

// Remove any existing transport support group
["WEST","TRANSPORT","KamAZ Transport"] call ALiVE_fnc_combatSupportRemove;

// Sleep to give some delay before adding a new group
sleep 1;

// Define a static blacklist area (optional)
private _staticBlacklist = [
    [[26997, 24709], 100, 350, 40, true]   // Rectangular area centered at [26997, 24709] with rotation angle 40 degrees
];

// Get the position from the marker "blufor_combat_support"
private _checkPos = getMarkerPos "blufor_combat_support";  // Get the position of the marker

// Find all nearby objects around the marker position (within 500 meters)
private _objectsNearby = _checkPos nearObjects 500;  // Collects all objects within 500 meters of the marker position

// Convert the found objects to a blacklist format (rectangular areas around each object)
private _dynamicBlacklist = _objectsNearby apply {[_x, 10, 10, 0, true]};  // 10x10 rectangle around each object

// Merge static and dynamic blacklists
private _blacklist = _staticBlacklist + _dynamicBlacklist;

// Use findSafePos to determine a safe position, avoiding objects and blacklisted areas
private _safePos = [_checkPos, 0, 500, 0, 0, 0.1, 0, _blacklist] call BIS_fnc_findSafePos;

[
    "TRANSPORT",
    [
        _safePos,                                                  // position
        60,                                                        // direction
        "I_Truck_02_transport_F",                                  // class
        "KamAZ Transport",                                         // callsign
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];", // code
        "0",                                                       // height
        true,                                                      // slingloading
        0                                                          // number of boxes to spawn for slingloading
    ]
] call ALiVE_fnc_combatSupportAdd;

// Spawn a new script and capture its handle in the missionNamespace
missionNamespace setVariable ["_transportThread7", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","KamAZ Transport"] call ALiVE_fnc_combatSupportRemove;
}];
