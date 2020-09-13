["WEST","TRANSPORT","KamAZ Ammo"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [26500,24439,0],                                               	// position
        60,                                                             // direction
        "I_Truck_02_ammo_F",                                         // class
        "KamAZ Ammo",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","KamAZ Ammo"] call ALiVE_fnc_combatSupportRemove;