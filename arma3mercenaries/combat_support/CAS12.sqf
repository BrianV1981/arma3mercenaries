if (!isNil {missionNamespace getVariable "_cas12Thread"} && {not isNull (missionNamespace getVariable "_cas12Thread")}) then {
    terminate (missionNamespace getVariable "_cas12Thread");
};

["WEST","CAS","M-ATV (GMG) C"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_cas_10";

[
    "CAS",
    [
        _safePos,
        60,
        "B_MRAP_01_gmg_F",
        "M-ATV (GMG) C",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        ""
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_cas12Thread", [] spawn { 
    sleep 3600;
    ["WEST","CAS","M-ATV (GMG) C"] call ALiVE_fnc_combatSupportRemove;
}];
