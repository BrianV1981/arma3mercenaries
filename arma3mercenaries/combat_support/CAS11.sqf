
if (!isNil {missionNamespace getVariable "_cas11Thread"} && {not isNull (missionNamespace getVariable "_cas11Thread")}) then {
    terminate (missionNamespace getVariable "_cas11Thread");
};

["WEST","CAS","M-ATV (HMG) C"] call ALiVE_fnc_combatSupportRemove;
sleep 1;
private _safePos = getMarkerPos "blufor_cas_9";

[
    "CAS",
    [
        _safePos,
        60,
        "B_MRAP_01_hmg_F",
        "M-ATV (HMG) C",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        ""
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_cas11Thread", [] spawn { 
    sleep 3600;
    ["WEST","CAS","M-ATV (HMG) C"] call ALiVE_fnc_combatSupportRemove;
}];
