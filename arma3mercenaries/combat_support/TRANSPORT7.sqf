if (!isNil {missionNamespace getVariable "_transportThread7"} && {not isNull (missionNamespace getVariable "_transportThread7")}) then {
    terminate (missionNamespace getVariable "_transportThread7");
};

["GUER","TRANSPORT","KamAZ Transport"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "independent_transport_3";// Use findSafePos to determine a safe position

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "I_Truck_02_transport_F",
        "KamAZ Transport",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        true,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread7", [] spawn { 
    sleep 7200;
    ["GUER","TRANSPORT","KamAZ Transport"] call ALiVE_fnc_combatSupportRemove;
}];
