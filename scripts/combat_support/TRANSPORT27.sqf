["WEST","TRANSPORT","Pandur II"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [26497,24475,0],                                               	// position
        60,                                                             // direction
        "I_APC_Wheeled_03_cannon_F",                                         // class
        "Pandur II",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","Pandur II"] call ALiVE_fnc_combatSupportRemove;