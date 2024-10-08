if (!isNil {missionNamespace getVariable "_transportThread11"} && {not isNull (missionNamespace getVariable "_transportThread11")}) then {
    terminate (missionNamespace getVariable "_transportThread11");
};

["WEST","TRANSPORT","HEMTT Fuel"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_transport_8";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "B_Truck_01_fuel_F",
        "HEMTT Fuel",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread11", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","HEMTT Fuel"] call ALiVE_fnc_combatSupportRemove;
}];