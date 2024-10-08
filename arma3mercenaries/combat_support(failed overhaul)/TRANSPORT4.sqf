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

if (!isNil {missionNamespace getVariable "_transportThread4"} && {not isNull (missionNamespace getVariable "_transportThread4")}) then {
    terminate (missionNamespace getVariable "_transportThread4");
};

["WEST","TRANSPORT","AW159 Wildcat (Unarmed)"] call ALiVE_fnc_combatSupportRemove;

sleep 1;

private _staticBlacklist = [[[26997, 24709], 100, 350, 40, true]];
private _checkPos = getMarkerPos "blufor_transport_support";
private _objectsNearby = _checkPos nearObjects 500;
private _dynamicBlacklist = _objectsNearby apply {[_x, 10, 10, 0, true]};
private _blacklist = _staticBlacklist + _dynamicBlacklist;

private _safePos = [_checkPos, 0, 500, 0, 0, 0.1, 0, _blacklist] call BIS_fnc_findSafePos;

[
    "TRANSPORT",
    [
        _safePos,
        60,
        "I_Heli_light_03_unarmed_F",
        "AW159 Wildcat (Unarmed)",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        true,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread4", [] spawn {
    sleep 7200;
    ["WEST","TRANSPORT","AW159 Wildcat (Unarmed)"] call ALiVE_fnc_combatSupportRemove;
}];
