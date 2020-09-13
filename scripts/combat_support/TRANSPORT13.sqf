["WEST","TRANSPORT","HEMTT Ammo"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [27056,24648,0],                                               	// position
        60,                                                             // direction
        "B_Truck_01_ammo_F",                                        	   // class
        "HEMTT Ammo",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","HEMTT Ammo"] call ALiVE_fnc_combatSupportRemove;