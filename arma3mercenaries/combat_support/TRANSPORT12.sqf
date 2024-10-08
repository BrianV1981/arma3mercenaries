if (!isNil {missionNamespace getVariable "_transportThread12"} && {not isNull (missionNamespace getVariable "_transportThread12")}) then {
    terminate (missionNamespace getVariable "_transportThread12");
};

["WEST","TRANSPORT","HEMTT Repair"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_transport_9";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "B_Truck_01_Repair_F",
        "HEMTT Repair",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread12", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","HEMTT Repair"] call ALiVE_fnc_combatSupportRemove;
}];
