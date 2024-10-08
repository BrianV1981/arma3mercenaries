/*

TRANSPORT

index	type	description
0	array	Position of vehicle
1	number	Direction of vehicle
2	string	Classname of vehicle
3	string	Callsign of vehicle (string)
4	string	Code to be ran on vehicle spawn
5	string	Height of vehicle
6	boolean	Allow slingloading
7	number	Number of slingloading boxes to spawn around vehicle
Example:

[
    "TRANSPORT",
    [
        [26672,24523,0],
        60,
        "B_Heli_Transport_01_F",
        "VICTOR 1"
        "(group (_this select 0)) setVariable ['Vcm_Disable',true]",
        "0",
        true,
        3
    ]
] Call ALiVE_fnc_combatSupportAdd;

*/

if (!isNil {missionNamespace getVariable "_transportThread3"} && {not isNull (missionNamespace getVariable "_transportThread3")}) then {
    terminate (missionNamespace getVariable "_transportThread3");
};

["WEST","TRANSPORT","MH-9 Hummingbird"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_transport_3";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "B_Heli_Light_01_F",
        "MH-9 Hummingbird",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        true,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread3", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","MH-9 Hummingbird"] call ALiVE_fnc_combatSupportRemove;
    missionNamespace setVariable ["_transportThread3", nil];
}];
