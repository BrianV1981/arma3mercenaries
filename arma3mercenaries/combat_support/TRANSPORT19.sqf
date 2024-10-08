if (!isNil {missionNamespace getVariable "_transportThread19"} && {not isNull (missionNamespace getVariable "_transportThread19")}) then {
    terminate (missionNamespace getVariable "_transportThread19");
};

["GUER","TRANSPORT","Leopard 2SG C"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "independent_transport_4";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "I_MBT_03_cannon_F",
        "Leopard 2SG C",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread19", [] spawn { 
    sleep 7200;
    ["GUER","TRANSPORT","Leopard 2SG C"] call ALiVE_fnc_combatSupportRemove;
}];
