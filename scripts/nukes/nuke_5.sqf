if (isServer) then {
    // Create the nuke vehicle at the position of aHelipad_2 with some randomness
    private _randomSpawnPos = aHelipad_2 getPos [(random 20) + 1, random 359];
    nuke_5 = createVehicle ['Land_Device_slingloadable_F', _randomSpawnPos, [], 0, ''];
    
    // Lock the vehicle
    [nuke_5, 2] call HG_fnc_lock;
    
    // Make nuke_5 accessible to all clients
    publicVariable 'nuke_5';

    // Delay to ensure the vehicle is fully initialized and synced
    sleep 1;

    // Create the trigger on the server only
    _nuketrigger5 = createTrigger ["EmptyDetector", [0,0,0]];
    _nuketrigger5 setTriggerArea [0, 0, 0, false];
    _nuketrigger5 setTriggerActivation ["ECHO", "", false];
    _nuketrigger5 setTriggerText "Activate 50kT Special Land Device";
    _nuketrigger5 setTriggerStatements [
        "this",
        "null = [getPos nuke_5, 50, false, true, 0] execVM 'freestyleNuke\iniNuke.sqf'; \
        ['50kT nuke detonated. A CBRN suit, air purifying respirator, and combination unit respirator or any combination of the three items are recommended before entering the nuclear blastzone.', 'PLAIN', 10] remoteExec ['hint', 0, true];",
        ""
    ];

    // Broadcast the existence of the trigger to all clients
    publicVariable "_nuketrigger5";
};

