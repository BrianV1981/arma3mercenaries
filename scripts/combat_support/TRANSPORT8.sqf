["WEST","TRANSPORT","Namer"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [26749,24457,0],                                               	// position
        60,                                                             // direction
        "B_APC_Tracked_01_rcws_F",                                         // class
        "Namer",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","Namer"] call ALiVE_fnc_combatSupportRemove;