private _randomSpawnPos = aHelipad_6 getPos [(random 20) + 1,random 359];
nuke_7 = createVehicle ["O_T_Truck_03_device_ghex_F", _randomSpawnPos, [], 0,''];
[nuke_7,2] call HG_fnc_lock;