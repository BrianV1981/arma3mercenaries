
// File: nuke_1.sqf

if (isServer) then {
    // Create the nuke vehicle at the position of aHelipad_2 with some randomness
    private _randomSpawnPos = aHelipad_2 getPos [(random 20) + 1, random 359];
    nuke_1 = createVehicle ["O_T_Truck_03_device_ghex_F", _randomSpawnPos, [], 0, ""];
    // Lock the vehicle
    [nuke_1, 2] call HG_fnc_lock;

    // Create the nuke trigger
    _nuketrigger1 = createTrigger ["EmptyDetector", [0,0,0]];
    _nuketrigger1 setTriggerArea [0, 0, 0, false];
    _nuketrigger1 setTriggerActivation ["ALPHA", "", false];
    _nuketrigger1 setTriggerText "Activate 1kT Special Weapon Typhoon";
    _nuketrigger1 setTriggerStatements [
        "this",
        "null = [getPos nuke_1, 1, false, true, 0] execVM 'freestyleNuke\iniNuke.sqf'; hint '1kT nuke detonated. A CBRN suit, air purifying respirator, and combination unit respirator or any combination of the three items are recommended before entering the nuclear blastzone.'",
        ""
    ];
};
        