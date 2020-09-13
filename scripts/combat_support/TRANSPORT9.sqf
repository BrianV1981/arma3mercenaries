["WEST","TRANSPORT","Badger IFV"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [26700,24400,0],                                               	// position
        60,                                                             // direction
        "B_APC_Wheeled_01_cannon_F",                                         // class
        "Badger IFV",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","Badger IFV"] call ALiVE_fnc_combatSupportRemove;