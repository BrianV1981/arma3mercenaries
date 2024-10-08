if (!isNil {missionNamespace getVariable "_transportThread15"} && {not isNull (missionNamespace getVariable "_transportThread15")}) then {
    terminate (missionNamespace getVariable "_transportThread15");
};

["WEST","TRANSPORT","M-ATV (Unarmed)"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_transport_12";

[   
    "TRANSPORT",    
    [        
        _safePos,               // Static position coordinates
        60,                            // Direction of the vehicle
        "B_MRAP_01_F",                 // Classname of the vehicle
        "M-ATV (Unarmed)",             // Callsign of the vehicle
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];", // Disable VCM AI and dynamic simulation
        "0",                           // Height (0 = on the ground)
        false,                          // Enable slingloading
        0                              // Number of boxes for slingloading
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread15", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","M-ATV (Unarmed)"] call ALiVE_fnc_combatSupportRemove;
}];
