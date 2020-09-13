["WEST","TRANSPORT","Leopard 2SG"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [26520,24455,0],                                               	// position
        60,                                                             // direction
        "I_MBT_03_cannon_F",                                         // class
        "Leopard 2SG",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","Leopard 2SG"] call ALiVE_fnc_combatSupportRemove;