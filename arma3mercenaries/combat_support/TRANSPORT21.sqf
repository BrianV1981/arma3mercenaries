if (!isNil {missionNamespace getVariable "_transportThread21"} && {not isNull (missionNamespace getVariable "_transportThread21")}) then {
    terminate (missionNamespace getVariable "_transportThread21");
};

["GUER","TRANSPORT","KamAZ Repair"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "independent_transport_6";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "I_Truck_02_box_F",
        "KamAZ Repair",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread21", [] spawn { 
    sleep 7200;
    ["GUER","TRANSPORT","KamAZ Repair"] call ALiVE_fnc_combatSupportRemove;
}];
