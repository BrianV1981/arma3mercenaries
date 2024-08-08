
// File: nuke_4.sqf

if (isServer) then {
    // Create the nuke vehicle at the position of aHelipad_2 with some randomness
    private _randomSpawnPos = aHelipad_2 getPos [(random 20) + 1, random 359];
    nuke_4 = createVehicle ["Land_Device_disassembled_F", _randomSpawnPos, [], 0, ""];
    // Lock the vehicle
    [nuke_4, 2] call HG_fnc_lock;

    // Create the nuke trigger
    _nuketrigger4 = createTrigger ["EmptyDetector", [0,0,0]];
    _nuketrigger4 setTriggerArea [0, 0, 0, false];
    _nuketrigger4 setTriggerActivation ["ALPHA", "", false];
    _nuketrigger4 setTriggerText "Activate 25kT Special Weapon Typhoon";
    _nuketrigger4 setTriggerStatements [
        "this",
        "null = [getPos nuke_4, 25, false, true, 0] execVM 'freestyleNuke\iniNuke.sqf'; hint '25kT nuke detonated. A CBRN suit, air purifying respirator, and combination unit respirator or any combination of the three items are recommended before entering the nuclear blastzone.'",
        ""
    ];
};
        