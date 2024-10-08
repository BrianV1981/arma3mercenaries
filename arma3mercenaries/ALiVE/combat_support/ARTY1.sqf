/*

ARTY
Settings

index	type	description
0	array	Position of vehicle
1	string	Classname of vehicle
2	string	Callsign of vehicle (string)
3	number	Number of vehicles to spawn
4	array	Array of available rounds
5	string	Code to be ran on vehicle spawn
Example:

[
    "ARTY",
    [
        [21197.36, 7371.373, 0],
        "B_MBT_01_arty_F",
        "Sholef",
        3,
        [
            ["HE",      10],
            ["ILLUM",   10],
            ["SMOKE",   10],
            ["SADARM",  10],
            ["CLUSTER", 10],
            ["LASER",   10],
            ["MINE",    10],
            ["AT MINE", 10],
            ["ROCKETS", 10]
        ],
        ""
    ]
] call ALiVE_fnc_combatSupportAdd;


*/

// Check if _arty1Thread exists and terminate it if it does
if (!isNil "_arty1Thread" && {not isNull _arty1Thread}) then {
    terminate _arty1Thread;
};

// Remove any existing combat support group
["WEST","ARTY","Sholef"] call ALiVE_fnc_combatSupportRemove;

// Sleep to give some delay before adding a new group
sleep 1;

// Use findSafePos to determine a safe position
private _safePos = [[26600, 24580, 0], 0, 1000, 10, 0, 20, 0] call BIS_fnc_findSafePos;

[
    "ARTY",                         // CS type
    [
        _safePos,    // Safe Position found using findSafePos
        "B_MBT_01_arty_F",          // Classname
        "Sholef",                   // Callsign
        3,                          // Number of units/vehicles to spawn
        [                           // Number of available rounds
            ["HE",      1000],
            ["ILLUM",   1000],
            ["SMOKE",   1000],
            ["SADARM",  1000],
            ["CLUSTER", 1000],
            ["LASER",   1000],
            ["MINE",    1000],
            ["AT MINE", 1000],
            ["ROCKETS", 1000]
        ],
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];"  // Code to run on spawn
    ]
] call ALiVE_fnc_combatSupportAdd;

// Spawn a new script and capture its handle
_arty1Thread = [] spawn { 
    sleep 3600;
    ["WEST","ARTY","Sholef"] call ALiVE_fnc_combatSupportRemove;
};
