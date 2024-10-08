if (!isNil {missionNamespace getVariable "_transportThread17"} && {not isNull (missionNamespace getVariable "_transportThread17")}) then {
    terminate (missionNamespace getVariable "_transportThread17");
};

["WEST","TRANSPORT","M-ATV (GMG)"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_transport_14";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "B_MRAP_01_gmg_F",
        "M-ATV (GMG)",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread17", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","M-ATV (GMG)"] call ALiVE_fnc_combatSupportRemove;
}];
