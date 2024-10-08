["WEST","TRANSPORT","FV510 Warrior"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
[
    "TRANSPORT",                                                      	 // CS type
    [
        [26478,24491,0],                                               	// position
        60,                                                             // direction
        "I_APC_tracked_03_cannon_F",                                         // class
        "FV510 Warrior",                                              // callsign
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",    	   // code
        "0",                                                           // height
        true,                                                          // slingloading
        0                                                             // number of boxes to spawn for slingloading
    ]
] Call ALiVE_fnc_combatSupportAdd;
sleep 7200;
["WEST","TRANSPORT","FV510 Warrior"] call ALiVE_fnc_combatSupportRemove;