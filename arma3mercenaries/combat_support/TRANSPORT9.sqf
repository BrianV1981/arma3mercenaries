if (!isNil {missionNamespace getVariable "_transportThread9"} && {not isNull (missionNamespace getVariable "_transportThread9")}) then {
    terminate (missionNamespace getVariable "_transportThread9");
};

["WEST","TRANSPORT","Badger IFV"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_transport_6";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "B_APC_Wheeled_01_cannon_F",
        "Badger IFV",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread9", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","Badger IFV"] call ALiVE_fnc_combatSupportRemove;
}];
