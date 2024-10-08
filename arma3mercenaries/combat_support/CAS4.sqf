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

if (!isNil {missionNamespace getVariable "_cas4Thread"} && {not isNull (missionNamespace getVariable "_cas4Thread")}) then {
    terminate (missionNamespace getVariable "_cas4Thread");
};

["WEST","CAS","F/A-181 Black Wasp II (Stealth)"] call ALiVE_fnc_combatSupportRemove;

sleep 1;

private _safePos = getMarkerPos "blufor_cas_4";

[
    "CAS",
    [
        _safePos,
        225,
        "B_Plane_Fighter_01_Stealth_F",
        "F/A-181 Black Wasp II (Stealth)",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        ""
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_cas4Thread", [] spawn { 
    sleep 3600;
    ["WEST","CAS","F/A-181 Black Wasp II (Stealth)"] call ALiVE_fnc_combatSupportRemove;
}];
