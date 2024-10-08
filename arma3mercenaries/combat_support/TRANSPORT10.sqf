if (!isNil {missionNamespace getVariable "_transportThread10"} && {not isNull (missionNamespace getVariable "_transportThread10")}) then {
    terminate (missionNamespace getVariable "_transportThread10");
};

["WEST","TRANSPORT","Merkava MK IV LIC"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_transport_7";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "B_MBT_01_TUSK_F",
        "Merkava MK IV LIC",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread10", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","Merkava MK IV LIC"] call ALiVE_fnc_combatSupportRemove;
}];
