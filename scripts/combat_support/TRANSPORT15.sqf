["WEST","TRANSPORT","M-ATV (Unarmed)"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [27146,24562,0],                                               	// position
        60,                                                             // direction
        "B_MRAP_01_F",                                         // class
        "M-ATV (Unarmed)",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","M-ATV (Unarmed)"] call ALiVE_fnc_combatSupportRemove;