["WEST","TRANSPORT","UH-80 Ghost Hawk"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [26672,24523,0],                                               	// position
        60,                                                             // direction
        "B_Heli_Transport_01_F",                                         // class
        "UH-80 Ghost Hawk",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","UH-80 Ghost Hawk"] call ALiVE_fnc_combatSupportRemove;