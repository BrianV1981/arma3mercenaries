["GUER","ARTY","Zamak MRL"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "ARTY",                         // CS type
    [
        [26528, 24551, 0],    // Position
        "I_Truck_02_MRL_F",          // Classname
        "Zamak MRL",                   // Callsign
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
        "(group this) setVariable ['Vcm_Disable',true]"                          // Code to run on spawn
    ]
] call ALiVE_fnc_combatSupportAdd;
sleep 3600;
["GUER","ARTY","Zamak MRL"] call ALiVE_fnc_combatSupportRemove;