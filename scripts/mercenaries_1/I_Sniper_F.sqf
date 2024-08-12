private _randomSpawnPos = aHelipad_1 getPos [(random 20) + 1,random 359];
"I_Sniper_F" createUnit [_randomSpawnPos, (group player), "this setVariable ['Vcm_Disable', true, true];", 0.5, "PRIVATE"];