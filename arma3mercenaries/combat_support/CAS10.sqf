if (!isNil {missionNamespace getVariable "_cas10Thread"} && {not isNull (missionNamespace getVariable "_cas10Thread")}) then {
    terminate (missionNamespace getVariable "_cas10Thread");
};

["WEST","CAS","Merkava MK IV LIC C"] call ALiVE_fnc_combatSupportRemove;

sleep 1;
private _safePos = getMarkerPos "blufor_cas_8";

[
    "CAS",
    [
        _safePos,
        60,
        "B_MBT_01_TUSK_F",
        "Merkava MK IV LIC C",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        ""
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_cas10Thread", [] spawn { 
    sleep 3600;
    ["WEST","CAS","Merkava MK IV LIC C"] call ALiVE_fnc_combatSupportRemove;
}];
