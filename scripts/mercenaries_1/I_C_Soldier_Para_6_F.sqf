private _randomSpawnPos = aHelipad_1 getPos [(random 20) + 1,random 359];
_mercenary = "I_C_Soldier_Para_6_F" createUnit [_randomSpawnPos, (group player), "", 0.5];