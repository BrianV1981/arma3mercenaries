if (!isNil {missionNamespace getVariable "_transportThread6"} && {not isNull (missionNamespace getVariable "_transportThread6")}) then {
    terminate (missionNamespace getVariable "_transportThread6");
};

["WEST","TRANSPORT","HEMTT Transport"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_transport_4";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "B_Truck_01_transport_F",
        "HEMTT Transport",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        true,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread6", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","HEMTT Transport"] call ALiVE_fnc_combatSupportRemove;
}];
