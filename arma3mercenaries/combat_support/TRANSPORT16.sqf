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

if (!isNil {missionNamespace getVariable "_transportThread16"} && {not isNull (missionNamespace getVariable "_transportThread16")}) then {
    terminate (missionNamespace getVariable "_transportThread16");
};

["WEST","TRANSPORT","M-ATV (HMG)"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_transport_13";

[
    "TRANSPORT",    
    [        
        _safePos,
        60,
        "B_MRAP_01_hmg_F",
        "M-ATV (HMG)",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        false,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread16", [] spawn { 
    sleep 7200;
    ["WEST","TRANSPORT","M-ATV (HMG)"] call ALiVE_fnc_combatSupportRemove;
}];
