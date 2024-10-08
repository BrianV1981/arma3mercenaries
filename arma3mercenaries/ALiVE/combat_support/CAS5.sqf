/*

CAS
Settings

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

// Check if _cas5Thread exists and terminate it if it does
if (!isNil "_cas5Thread" && {not isNull _cas5Thread}) then {
    terminate _cas5Thread;
};

// Remove any existing combat support group
["GUER","CAS","AW159 Wildcat (CAS)"] call ALiVE_fnc_combatSupportRemove;

// Sleep to give some delay before adding a new group
sleep 1;

// Use findSafePos to determine a safe position
private _safePos = [[26729,24476,0], 0, 1000, 10, 0, 20, 0] call BIS_fnc_findSafePos;

[
    "CAS",                         // CAS type
    [
        _safePos,                 // Position of vehicle
        60,                       // Direction of vehicle
        "I_Heli_light_03_dynamicLoadout_F", // Classname of vehicle
        "AW159 Wildcat (CAS)",    // Callsign of vehicle
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];", // Code to run on vehicle spawn
        ""                        // Height of vehicle (can be left empty for default)
    ]
] call ALiVE_fnc_combatSupportAdd;

// Spawn a new script and capture its handle
_cas5Thread = [] spawn { 
    sleep 3600;
    ["GUER","CAS","AW159 Wildcat (CAS)"] call ALiVE_fnc_combatSupportRemove;
};
