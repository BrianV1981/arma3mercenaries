["WEST","TRANSPORT","KamAZ Fuel"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [26482,24457,0],                                               	// position
        60,                                                             // direction
        "I_Truck_02_fuel_F",                                         // class
        "KamAZ Fuel",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","KamAZ Fuel"] call ALiVE_fnc_combatSupportRemove;