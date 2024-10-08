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

if (!isNil {missionNamespace getVariable "_cas9Thread"} && {not isNull (missionNamespace getVariable "_cas9Thread")}) then {
    terminate (missionNamespace getVariable "_cas9Thread");
};

["WEST","CAS","Badger IFV C"] call ALiVE_fnc_combatSupportRemove;

sleep 1;

private _safePos = getMarkerPos "blufor_cas_7";

[
    "CAS",
    [
        _safePos,
        60,
        "B_APC_Wheeled_01_cannon_F",
        "Badger IFV C",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        ""
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_cas9Thread", [] spawn { 
    sleep 3600;
    ["WEST","CAS","Badger IFV C"] call ALiVE_fnc_combatSupportRemove;
}];
