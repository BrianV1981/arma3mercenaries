
// File: nuke_2.sqf

if (isServer) then {
    // Create the nuke vehicle at the position of aHelipad_2 with some randomness
    private _randomSpawnPos = aHelipad_2 getPos [(random 20) + 1, random 359];
    nuke_2 = createVehicle ["O_T_Truck_03_device_ghex_F", _randomSpawnPos, [], 0, ""];
    // Lock the vehicle
    [nuke_2, 2] call HG_fnc_lock;

    // Create the nuke trigger
    _nuketrigger2 = createTrigger ["EmptyDetector", [0,0,0]];
    _nuketrigger2 setTriggerArea [0, 0, 0, false];
    _nuketrigger2 setTriggerActivation ["ALPHA", "", false];
    _nuketrigger2 setTriggerText "Activate 5kT Special Weapon Typhoon";
    _nuketrigger2 setTriggerStatements [
        "this",
        "null = [getPos nuke_2, 5, false, true, 0] execVM 'freestyleNuke\iniNuke.sqf'; hint '5kT nuke detonated. A CBRN suit, air purifying respirator, and combination unit respirator or any combination of the three items are recommended before entering the nuclear blastzone.'",
        ""
    ];
};
        