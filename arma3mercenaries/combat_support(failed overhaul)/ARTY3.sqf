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

if (!isNil {missionNamespace getVariable "_arty3Thread"} && {not isNull (missionNamespace getVariable "_arty3Thread")}) then {
    terminate (missionNamespace getVariable "_arty3Thread");
};

["GUER","ARTY","Zamak MRL"] call ALiVE_fnc_combatSupportRemove;

sleep 1;

private _staticBlacklist = [
    [[26997, 24709], 100, 350, 40, true]   // Rectangular area centered at [26997, 24709] with rotation angle 40 degrees (Molos Airstrip)
];

private _checkPos = getMarkerPos "blufor_combat_support";  // Get the position of the marker

private _objectsNearby = _checkPos nearObjects 500;  // Collects all objects within 500 meters of the marker position

private _dynamicBlacklist = _objectsNearby apply {[_x, 10, 10, 0, true]};  // 10x10 rectangle around each object

private _blacklist = _staticBlacklist + _dynamicBlacklist;

private _safePos = [_checkPos, 0, 1000, 0, 0, 0.1, 0, _blacklist] call BIS_fnc_findSafePos;

[
    "ARTY",
    [
        _safePos,
        "I_Truck_02_MRL_F",
        "Zamak MRL",
        3,
        [
            ["ROCKETS", 1000]
        ],
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];"
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_arty3Thread", [] spawn { 
    sleep 3600;
    ["GUER","ARTY","Zamak MRL"] call ALiVE_fnc_combatSupportRemove;
}];
