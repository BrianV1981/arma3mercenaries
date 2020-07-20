private _randomSpawnPos = aHelipad_1 getPos [(random 20) + 1,random 359];
_mercenary = "B_support_GI_Soldier_AAT_FMG_F" createUnit [_randomSpawnPos, (group player), "", 0.5];