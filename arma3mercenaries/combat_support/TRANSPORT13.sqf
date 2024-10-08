if (!isNil {missionNamespace getVariable "_transportThread13"} && {not isNull (missionNamespace getVariable "_transportThread13")}) then {
    terminate (missionNamespace getVariable "_transportThread13");
};

["WEST","TRANSPORT","HEMTT Ammo"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_transport_10";

[
    "TRANSPORT",    
    [        
        [27056,24648,0],
        60,
        "B_Truck_01_ammo_F",
        "HEMTT Ammo",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread13", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","HEMTT Ammo"] call ALiVE_fnc_combatSupportRemove;
}];
