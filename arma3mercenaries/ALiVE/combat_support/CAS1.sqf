/*

CAS

index	type	description
0	array	Position of vehicle
1	number	Direction of vehicle
2	string	Classname of vehicle
3	string	Callsign of vehicle
4	string	Code to be ran on vehicle spawn
5	string	Height of vehicle
Example:

[
    "CAS",
    [
        [1849.21,5805.27,0],
        60,
        "B_Heli_Attack_01_F",
        "Phantom 1",
        "",
        ""
    ]
] Call ALiVE_fnc_combatSupportAdd;

*/

// Check if _cas1Thread exists and terminate it if it does
if (!isNil "_cas1Thread" && {not isNull _cas1Thread}) then {
    terminate _cas1Thread;
};

// Remove any existing combat support group
["WEST","ARTY","RAH-66 Comanchie"] call ALiVE_fnc_combatSupportRemove;

// Sleep to give some delay before adding a new group
sleep 1;

// Use findSafePos to determine a safe position
private _safePos = [[26600, 24580, 0], 0, 1000, 10, 0, 20, 0] call BIS_fnc_findSafePos;

[
    "CAS",
    [
        _safePos,
        0,
        "B_Heli_Attack_01_F",
        "RAH-66 Comanchie",
        "",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];"
    ]
] Call ALiVE_fnc_combatSupportAdd;

// Spawn a new script and capture its handle
_cas1Thread = [] spawn { 
    sleep 3600;
    ["WEST","CAS","RAH-66 Comanchie"] call ALiVE_fnc_combatSupportRemove;
};