[
    "TRANSPORT",                                                      	 // CS type
    [
        [26749,24457,0],                                               	// position
        60,                                                             // direction
        "B_APC_Tracked_01_rcws_F",                                         // class
        "Namer",                                              // callsign
        "(group (_this select 0)) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 3600;
["WEST","TRANSPORT","Namer"] call ALiVE_fnc_combatSupportRemove;