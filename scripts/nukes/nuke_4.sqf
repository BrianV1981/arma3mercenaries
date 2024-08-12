if (isServer) then {
    // Create the nuke vehicle at the position of aHelipad_2 with some randomness
    private _randomSpawnPos = aHelipad_2 getPos [(random 20) + 1, random 359];
    nuke_4 = createVehicle ['Land_Device_slingloadable_F', _randomSpawnPos, [], 0, ''];

    // Lock the vehicle
    [nuke_4, 2] call HG_fnc_lock;

    // Make nuke_4 accessible to all clients
    publicVariable 'nuke_4';

    // Delay to ensure the vehicle is fully initialized and synced
    sleep 1;

    // Create the trigger on the server
    _nuketrigger4 = createTrigger ["EmptyDetector", [0,0,0]];
    _nuketrigger4 setTriggerArea [0, 0, 0, false];
    _nuketrigger4 setTriggerActivation ["DELTA", "", false];
    _nuketrigger4 setTriggerText "Activate 25kT Special Land Device";
    _nuketrigger4 setTriggerStatements [
        "this",
        "null = [getPos nuke_4, 25, false, true, 0] execVM 'freestyleNuke\iniNuke.sqf'; \
        ['25kT nuke detonated. A CBRN suit, air purifying respirator, and combination unit respirator or any combination of the three items are recommended before entering the nuclear blastzone.', 'PLAIN', 10] remoteExec ['hint', 0, true];",
        ""
    ];

    // Make the trigger accessible to all clients
    publicVariable "_nuketrigger4";
};
