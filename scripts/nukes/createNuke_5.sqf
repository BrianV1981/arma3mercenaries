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

    // Broadcast the existence of the trigger to all clients
    publicVariable "_nuketrigger5";
};