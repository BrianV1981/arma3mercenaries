private _randomSpawnPos = aHelipad_2 getPos [(random 20) + 1,random 359];
_mercenary = "B_soldier_AR_F" createUnit [_randomSpawnPos, (group player), "", 0.5];