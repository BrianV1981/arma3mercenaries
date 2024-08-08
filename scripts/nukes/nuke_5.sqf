
// File: nuke_5.sqf

if (isServer) then {
    // Create the nuke vehicle at the position of aHelipad_2 with some randomness
    private _randomSpawnPos = aHelipad_2 getPos [(random 20) + 1, random 359];
    nuke_5 = createVehicle ["O_T_Truck_03_ammo_ghex_F", _randomSpawnPos, [], 0, ""];
    // Lock the vehicle
    [nuke_5, 2] call HG_fnc_lock;

    // Create the nuke trigger
    _nuketrigger5 = createTrigger ["EmptyDetector", [0,0,0]];
    _nuketrigger5 setTriggerArea [0, 0, 0, false];
    _nuketrigger5 setTriggerActivation ["ALPHA", "", false];
    _nuketrigger5 setTriggerText "Activate 50kT Special Weapon Typhoon";
    _nuketrigger5 setTriggerStatements [
        "this",
        "null = [getPos nuke_5, 25, false, true, 0] execVM 'freestyleNuke\iniNuke.sqf'; hint '50kT nuke detonated. A CBRN suit, air purifying respirator, and combination unit respirator or any combination of the three items are recommended before entering the nuclear blastzone.'",
        ""
    ];
};
        