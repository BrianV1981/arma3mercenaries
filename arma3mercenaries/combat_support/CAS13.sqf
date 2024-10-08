
if (!isNil {missionNamespace getVariable "_cas13Thread"} && {not isNull (missionNamespace getVariable "_cas13Thread")}) then {
    terminate (missionNamespace getVariable "_cas13Thread");
};

["WEST","CAS","Bardelas (AA) C"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_cas_11";

[
    "CAS",
    [
        _safePos,
        60,
        "B_APC_Tracked_01_AA_F",
        "Bardelas (AA) C",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        ""
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_cas13Thread", [] spawn { 
    sleep 3600;
    ["WEST","CAS","Bardelas (AA) C"] call ALiVE_fnc_combatSupportRemove;
}];
