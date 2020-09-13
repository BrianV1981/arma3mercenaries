["WEST","TRANSPORT","M-ATV (HMG)"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [27165,24544,0],                                               	// position
        60,                                                             // direction
        "B_MRAP_01_hmg_F",                                         // class
        "M-ATV (HMG)",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","M-ATV (HMG)"] call ALiVE_fnc_combatSupportRemove;