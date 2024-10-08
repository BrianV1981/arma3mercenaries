if (!isNil {missionNamespace getVariable "_transportThread27"} && {not isNull (missionNamespace getVariable "_transportThread27")}) then {
    terminate (missionNamespace getVariable "_transportThread27");
};

["GUER","TRANSPORT","Pandur II"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "independent_transport_12";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "I_APC_Wheeled_03_cannon_F",
        "Pandur II",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread27", [] spawn { 
    sleep 7200;
    ["GUER","TRANSPORT","Pandur II"] call ALiVE_fnc_combatSupportRemove;
}];
