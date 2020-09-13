["WEST","ARTY","Seara"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "ARTY",                         // CS type
    [
        [26563, 24611, 0],    // Position
        "B_MBT_01_mlrs_F",          // Classname
        "Seara",                   // Callsign
        3,                          // Number of units/vehicles to spawn
        [                           // Number of available rounds
            ["ROCKETS", 1000]
        ],
        "(group this) setVariable ['Vcm_Disable',true]"                          // Code to run on spawn
    ]
] call ALiVE_fnc_combatSupportAdd;
sleep 3600;
["WEST","ARTY","Seara"] call ALiVE_fnc_combatSupportRemove;