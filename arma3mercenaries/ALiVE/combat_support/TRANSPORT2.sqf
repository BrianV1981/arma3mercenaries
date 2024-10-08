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

// Check if _transportThread2 exists and terminate it if it does
if (!isNil "_transportThread2" && {not isNull _transportThread2}) then {
    terminate _transportThread2;
};

// Remove any existing transport support group
["WEST","TRANSPORT","CH47I Chinook"] call ALiVE_fnc_combatSupportRemove;

// Sleep to give some delay before adding a new group
sleep 1;

// Use findSafePos to determine a safe position
private _safePos = [[26688,24510,0], 0, 1000, 10, 0, 20, 0] call BIS_fnc_findSafePos;

[
    "TRANSPORT",                                                   // CS type
    [
        _safePos,                                                  // position
        60,                                                        // direction
        "B_Heli_Transport_03_F",                                   // class
        "CH47I Chinook",                                           // callsign
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];", // code
        "0",                                                       // height
        true,                                                      // slingloading
        0                                                          // number of boxes to spawn for slingloading
    ]
] call ALiVE_fnc_combatSupportAdd;

// Spawn a new script and capture its handle
_transportThread2 = [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","CH47I Chinook"] call ALiVE_fnc_combatSupportRemove;
};
