if (!isNil {missionNamespace getVariable "_transportThread14"} && {not isNull (missionNamespace getVariable "_transportThread14")}) then {
    terminate (missionNamespace getVariable "_transportThread14");
};

["WEST","TRANSPORT","HEMTT Medical"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_transport_11";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "B_Truck_01_medical_F",
        "HEMTT Medical",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread14", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","HEMTT Medical"] call ALiVE_fnc_combatSupportRemove;
}];
