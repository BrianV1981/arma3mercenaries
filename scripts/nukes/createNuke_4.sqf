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

    // Make the trigger accessible to all clients
    publicVariable "_nuketrigger4";
};