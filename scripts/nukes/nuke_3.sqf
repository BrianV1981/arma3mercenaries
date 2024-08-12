if (isServer) then {
    // Create the nuke vehicle at the position of aHelipad_2 with some randomness
    private _randomSpawnPos = aHelipad_2 getPos [(random 20) + 1, random 359];
    nuke_3 = createVehicle ['O_T_Truck_03_device_ghex_F', _randomSpawnPos, [], 0, ''];

    // Lock the vehicle
    [nuke_3, 2] call HG_fnc_lock;

    // Make nuke_3 accessible to all clients
    publicVariable 'nuke_3';

    // Delay to ensure the vehicle is fully initialized and synced
    sleep 1;

    // Create the trigger on the server
    _nuketrigger3 = createTrigger ["EmptyDetector", [0,0,0]];
    _nuketrigger3 setTriggerArea [0, 0, 0, false];
    _nuketrigger3 setTriggerActivation ["CHARLIE", "", false];
    _nuketrigger3 setTriggerText "Activate 10kT Dirty Bomb";
    _nuketrigger3 setTriggerStatements [
        "this",
        "null = [getPos nuke_3, 10, false, true, 0] execVM 'freestyleNuke\iniNuke.sqf'; \
        ['10kT nuke detonated. A CBRN suit, air purifying respirator, and combination unit respirator or any combination of the three items are recommended before entering the nuclear blastzone.', 'PLAIN', 10] remoteExec ['hint', 0, true];",
        ""
    ];

    // Make the trigger accessible to all clients
    publicVariable "_nuketrigger3";
};
