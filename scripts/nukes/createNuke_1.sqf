if (isServer) then {
    // Create the nuke vehicle at the position of aHelipad_2 with some randomness
    private _randomSpawnPos = aHelipad_2 getPos [(random 20) + 1, random 359];
    nuke_1 = createVehicle ['O_T_Truck_03_device_ghex_F', _randomSpawnPos, [], 0, ''];

    // Lock the vehicle
    [nuke_1, 2] call HG_fnc_lock;

    // Make nuke_1 accessible to all clients
    publicVariable 'nuke_1';

    // Delay to ensure the vehicle is fully initialized and synced
    sleep 1;

    // Make the trigger accessible to all clients
    publicVariable "_nuketrigger1";
};

