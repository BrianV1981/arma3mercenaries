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

// Check if _transportThread6 exists and terminate it if it does
if (!isNil "_transportThread6" && {not isNull _transportThread6}) then {
    terminate _transportThread6;
};

// Remove any existing transport support group
["WEST","TRANSPORT","HEMTT Transport"] call ALiVE_fnc_combatSupportRemove;

// Sleep to give some delay before adding a new group
sleep 1;

// Use findSafePos to determine a safe position
private _safePos = [[26715,24542,0], 0, 1000, 10, 0, 20, 0] call BIS_fnc_findSafePos;

[
    "TRANSPORT",                                                   // CS type
    [
        _safePos,                                                  // position
        60,                                                        // direction
        "B_Truck_01_transport_F",                                  // class
        "HEMTT Transport",                                         // callsign
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];", // code
        "0",                                                       // height
        true,                                                      // slingloading
        0                                                          // number of boxes to spawn for slingloading
    ]
] call ALiVE_fnc_combatSupportAdd;

// Spawn a new script and capture its handle
_transportThread6 = [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","HEMTT Transport"] call ALiVE_fnc_combatSupportRemove;
};
