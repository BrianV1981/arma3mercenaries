
// File: nuke_3.sqf

if (isServer) then {
    // Create the nuke vehicle at the position of aHelipad_2 with some randomness
    private _randomSpawnPos = aHelipad_2 getPos [(random 20) + 1, random 359];
    nuke_3 = createVehicle ["Land_Device_assembled_F", _randomSpawnPos, [], 0, ""];
    // Lock the vehicle
    [nuke_3, 2] call HG_fnc_lock;

    // Create the nuke trigger
    _nuketrigger3 = createTrigger ["EmptyDetector", [0,0,0]];
    _nuketrigger3 setTriggerArea [0, 0, 0, false];
    _nuketrigger3 setTriggerActivation ["ALPHA", "", false];
    _nuketrigger3 setTriggerText "Activate 10kT Special Weapon Typhoon";
    _nuketrigger3 setTriggerStatements [
        "this",
        "null = [getPos nuke_3, 10, false, true, 0] execVM 'freestyleNuke\iniNuke.sqf'; hint '10kT nuke detonated. A CBRN suit, air purifying respirator, and combination unit respirator or any combination of the three items are recommended before entering the nuclear blastzone.'",
        ""
    ];
};
        