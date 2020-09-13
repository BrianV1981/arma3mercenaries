["WEST","TRANSPORT","HEMTT Transport"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [26715,24542,0],                                               	// position
        60,                                                             // direction
        "B_Truck_01_transport_F",                                         // class
        "HEMTT Transport",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","HEMTT Transport"] call ALiVE_fnc_combatSupportRemove;