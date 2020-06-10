[
    "TRANSPORT",                                                      	 // CS type
    [
        [26721,24510,0],                                               	// position
        60,                                                             // direction
        "I_Heli_light_03_unarmed_F",                                         // class
        "AW159 Wildcat (Unarmed)",                                              // callsign
        "(group (_this select 0)) setVariable ['Vcm_Disable',true]",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 3600;
["WEST","TRANSPORT","AW159 Wildcat (Unarmed)"] call ALiVE_fnc_combatSupportRemove;