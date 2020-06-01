[
    "ARTY",                         // CS type
    [
        [26600, 24580, 0],    // Position
        "B_MBT_01_arty_F",          // Classname
        "Sholef",                   // Callsign
        3,                          // Number of units/vehicles to spawn
        [                           // Number of available rounds
            ["HE",      100],
            ["ILLUM",   100],
            ["SMOKE",   100],
            ["SADARM",  100],
            ["CLUSTER", 100],
            ["LASER",   100],
            ["MINE",    100],
            ["AT MINE", 100],
            ["ROCKETS", 100]
        ],
        "(group this) setVariable ["Vcm_Disable",true]"                          // Code to run on spawn
    ]
] call ALiVE_fnc_combatSupportAdd;sleep 1800;["WEST","ARTILLERY","Sholef"] call ALiVE_fnc_combatSupportRemove;