/*

CAS
Settings

index	type	description
0	array	Position of vehicle
1	number	Direction of vehicle
2	string	Classname of vehicle
3	string	Callsign of vehicle
4	string	Code to be ran on vehicle spawn
5	string	Height of vehicle
Example:

[
    "CAS",
    [
        [1849.21,5805.27,0],
        60,
        "B_Heli_Attack_01_F",
        "Phantom 1",
        "",
        ""
    ]
] Call ALiVE_fnc_combatSupportAdd;

*/
if (!isNil {missionNamespace getVariable "_cas15Thread"} && {not isNull (missionNamespace getVariable "_cas15Thread")}) then {
    terminate (missionNamespace getVariable "_cas15Thread");
};

["WEST","CAS","V-44 X Blackfish C"] call ALiVE_fnc_combatSupportRemove;

sleep 1;

private _safePos = getMarkerPos "blufor_cas_12";

[
    "CAS",
    [
        _safePos,
        225,
        "B_T_VTOL_01_armed_F",
        "V-44 X Blackfish C",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        ""
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_cas15Thread", [] spawn { 
    sleep 3600;
    ["WEST","CAS","V-44 X Blackfish C"] call ALiVE_fnc_combatSupportRemove;
}];
