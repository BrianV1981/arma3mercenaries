["WEST","TRANSPORT","M-ATV (GMG)"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [27185,24525,0],                                               	// position
        60,                                                             // direction
        "B_MRAP_01_gmg_F",                                         // class
        "M-ATV (GMG)",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","M-ATV (GMG)"] call ALiVE_fnc_combatSupportRemove;