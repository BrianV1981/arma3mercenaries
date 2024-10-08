if (!isNil {missionNamespace getVariable "_transportThread18"} && {not isNull (missionNamespace getVariable "_transportThread18")}) then {
    terminate (missionNamespace getVariable "_transportThread18");
};

["WEST","TRANSPORT","Bardelas (AA)"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_transport_15";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "B_APC_Tracked_01_AA_F",
        "Bardelas (AA)",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread18", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","Bardelas (AA)"] call ALiVE_fnc_combatSupportRemove;
}];
