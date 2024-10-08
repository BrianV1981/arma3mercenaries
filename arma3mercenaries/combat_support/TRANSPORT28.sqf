if (!isNil {missionNamespace getVariable "_transportThread28"} && {not isNull (missionNamespace getVariable "_transportThread28")}) then {
    terminate (missionNamespace getVariable "_transportThread28");
};

["GUER","TRANSPORT","FV510 Warrior"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "independent_transport_13";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "I_APC_tracked_03_cannon_F",
        "FV510 Warrior",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread28", [] spawn { 
    sleep 7200;
    ["GUER","TRANSPORT","FV510 Warrior"] call ALiVE_fnc_combatSupportRemove;
}];
