["WEST","TRANSPORT","MH-9 Hummingbird"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [26702,24526,0],                                               	// position
        60,                                                             // direction
        "B_Heli_Light_01_F",                                         // class
        "MH-9 Hummingbird",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","MH-9 Hummingbird"] call ALiVE_fnc_combatSupportRemove;