private _randomSpawnPos = aHelipad_2 getPos [(random 20) + 1,random 359];
"B_diver_TL_F" createUnit [_randomSpawnPos, (group player), "this setVariable ['Vcm_Disable', true, true];", 0.5, "PRIVATE"];