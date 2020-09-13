["WEST","TRANSPORT","Merkava MK IV LIC"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [26716,24383,0],                                               	// position
        60,                                                             // direction
        "B_MBT_01_TUSK_F",                                         // class
        "Merkava MK IV LIC",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","Merkava MK IV LIC"] call ALiVE_fnc_combatSupportRemove;