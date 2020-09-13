["WEST","TRANSPORT","AW101 Merlin"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [26708,24493,0],                                               	// position
        60,                                                             // direction
        "I_Heli_Transport_02_F",                                         // class
        "AW101 Merlin",                                              // callsign
        "(group this) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","AW101 Merlin"] call ALiVE_fnc_combatSupportRemove;