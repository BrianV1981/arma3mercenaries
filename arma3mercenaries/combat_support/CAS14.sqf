if (!isNil {missionNamespace getVariable "_cas14Thread"} && {not isNull (missionNamespace getVariable "_cas14Thread")}) then {
    terminate (missionNamespace getVariable "_cas14Thread");
};

["GUER","CAS","Leopard 2SG C"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "independent_cas_4";

[
    "CAS",
    [
        _safePos,
        60,
        "I_MBT_03_cannon_F",
        "Leopard 2SG C",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        ""
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_cas14Thread", [] spawn { 
    sleep 3600;
    ["GUER","CAS","Leopard 2SG C"] call ALiVE_fnc_combatSupportRemove;
}];
