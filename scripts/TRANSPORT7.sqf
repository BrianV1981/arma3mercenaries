[
    "TRANSPORT",                                                      	 // CS type
    [
        [26755,24510,0],                                               	// position
        60,                                                             // direction
        "I_Truck_02_transport_F",                                         // class
        "Zamak Transport",                                              // callsign
        "(group (_this select 0)) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 3600;
["WEST","TRANSPORT","Zamak Transport"] call ALiVE_fnc_combatSupportRemove;