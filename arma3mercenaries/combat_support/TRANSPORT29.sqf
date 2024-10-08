if (!isNil {missionNamespace getVariable "_transportThread29"} && {not isNull (missionNamespace getVariable "_transportThread29")}) then {
    terminate (missionNamespace getVariable "_transportThread29");
};

["WEST","TRANSPORT","V-44 X Blackfish I"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_transport_16";

[
    "TRANSPORT",
    [
        _safePos,
        225,
        "B_T_VTOL_01_infantry_F",
        "V-44 X Blackfish I",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        true,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread29", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","V-44 X Blackfish I"] call ALiVE_fnc_combatSupportRemove;
}];