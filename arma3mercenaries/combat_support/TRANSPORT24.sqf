if (!isNil {missionNamespace getVariable "_transportThread24"} && {not isNull (missionNamespace getVariable "_transportThread24")}) then {
    terminate (missionNamespace getVariable "_transportThread24");
};

["GUER","TRANSPORT","Fennek"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "independent_transport_9";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "I_MRAP_03_F",
        "Fennek",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread24", [] spawn { 
    sleep 7200;
    ["GUER","TRANSPORT","Fennek"] call ALiVE_fnc_combatSupportRemove;
}];
