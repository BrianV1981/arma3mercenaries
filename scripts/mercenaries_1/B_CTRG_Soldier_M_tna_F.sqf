private _randomSpawnPos = aHelipad_1 getPos [(random 20) + 1,random 359];
_mercenary = "B_CTRG_Soldier_M_tna_F" createUnit [_randomSpawnPos, (group player), "", 0.5];