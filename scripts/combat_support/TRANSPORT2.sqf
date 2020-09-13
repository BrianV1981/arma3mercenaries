["WEST","TRANSPORT","CH47I Chinook"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [26688,24510,0],                                               	// position
        60,                                                             // direction
        "B_Heli_Transport_03_F",                                         // class
        "CH47I Chinook",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","CH47I Chinook"] call ALiVE_fnc_combatSupportRemove;