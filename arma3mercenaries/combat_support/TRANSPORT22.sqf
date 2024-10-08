if (!isNil {missionNamespace getVariable "_transportThread22"} && {not isNull (missionNamespace getVariable "_transportThread22")}) then {
    terminate (missionNamespace getVariable "_transportThread22");
};

["WEST","TRANSPORT","KamAZ Fuel"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "independent_transport_7";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "I_Truck_02_fuel_F",
        "KamAZ Fuel",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread22", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","KamAZ Fuel"] call ALiVE_fnc_combatSupportRemove;
}];
