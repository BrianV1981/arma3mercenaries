/*

ARTY
Settings

index	type	description
0	array	Position of vehicle
1	string	Classname of vehicle
2	string	Callsign of vehicle (string)
3	number	Number of vehicles to spawn
4	array	Array of available rounds
5	string	Code to be ran on vehicle spawn
Example:

[
    "ARTY",
    [
        [21197.36, 7371.373, 0],
        "B_MBT_01_arty_F",
        "Sholef",
        3,
        [
            ["HE",      10],
            ["ILLUM",   10],
            ["SMOKE",   10],
            ["SADARM",  10],
            ["CLUSTER", 10],
            ["LASER",   10],
            ["MINE",    10],
            ["AT MINE", 10],
            ["ROCKETS", 10]
        ],
        ""
    ]
] call ALiVE_fnc_combatSupportAdd;


*/

if (!isNil {missionNamespace getVariable "_artyThread2"} && {not isNull (missionNamespace getVariable "_artyThread2")}) then {
    terminate (missionNamespace getVariable "_artyThread2");
};

["WEST","ARTY","Seara"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _safePos = getMarkerPos "blufor_arty_2";

[
    "ARTY",    
    [        
        _safePos,
        "B_MBT_01_mlrs_F",
        "Seara",
        3,
        [
            ["ROCKETS", 1000]
        ],
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];"
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_artyThread2", [] spawn { 
    sleep 3600;
    ["WEST","ARTY","Seara"] call ALiVE_fnc_combatSupportRemove;
}];
