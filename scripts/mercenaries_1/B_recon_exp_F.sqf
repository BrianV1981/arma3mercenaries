private _randomSpawnPos = aHelipad_1 getPos [(random 20) + 1,random 359];
"B_recon_exp_F" createUnit [_randomSpawnPos, (group player), "this setVariable ['Vcm_Disable', true, true];", 0.5, "PRIVATE"];