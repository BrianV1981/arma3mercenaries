if (!isNil {missionNamespace getVariable "_transportThread23"} && {not isNull (missionNamespace getVariable "_transportThread23")}) then {
    terminate (missionNamespace getVariable "_transportThread23");
};

["WEST","TRANSPORT","KamAZ Medical"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "independent_transport_8";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "I_Truck_02_medical_F",
        "KamAZ Medical",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread23", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","KamAZ Medical"] call ALiVE_fnc_combatSupportRemove;
}];
