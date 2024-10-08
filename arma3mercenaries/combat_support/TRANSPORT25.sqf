if (!isNil {missionNamespace getVariable "_transportThread25"} && {not isNull (missionNamespace getVariable "_transportThread25")}) then {
    terminate (missionNamespace getVariable "_transportThread25");
};

["GUER","TRANSPORT","Fennek (HMG)"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "independent_transport_10";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "I_MRAP_03_hmg_F",
        "Fennek (HMG)",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread25", [] spawn { 
    sleep 7200;
    ["GUER","TRANSPORT","Fennek (HMG)"] call ALiVE_fnc_combatSupportRemove;
}];
