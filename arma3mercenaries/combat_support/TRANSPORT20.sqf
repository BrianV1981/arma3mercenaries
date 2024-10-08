if (!isNil {missionNamespace getVariable "_transportThread20"} && {not isNull (missionNamespace getVariable "_transportThread20")}) then {
    terminate (missionNamespace getVariable "_transportThread20");
};

["GUER","TRANSPORT","KamAZ Ammo"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "independent_transport_5";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "I_Truck_02_ammo_F",
        "KamAZ Ammo",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread20", [] spawn { 
    sleep 7200;
    ["GUER","TRANSPORT","KamAZ Ammo"] call ALiVE_fnc_combatSupportRemove;
}];
