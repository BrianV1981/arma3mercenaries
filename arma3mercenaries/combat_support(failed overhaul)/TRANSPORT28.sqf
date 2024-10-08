if (!isNil {missionNamespace getVariable "_transportThread28"} && {not isNull (missionNamespace getVariable "_transportThread28")}) then {
    terminate (missionNamespace getVariable "_transportThread28");
};

["GUER","TRANSPORT","FV510 Warrior"] call ALiVE_fnc_combatSupportRemove;
sleep 1;

private _staticBlacklist = [
    [[26997, 24709], 100, 350, 40, true]
];

private _checkPos = getMarkerPos "blufor_combat_support";
private _objectsNearby = _checkPos nearObjects 500;
private _dynamicBlacklist = _objectsNearby apply {[_x, 10, 10, 0, true]};
private _blacklist = _staticBlacklist + _dynamicBlacklist;
private _safePos = [_checkPos, 0, 500, 0, 0, 0.1, 0, _blacklist] call BIS_fnc_findSafePos;

[
    "TRANSPORT",
    [
        _safePos,
        60,
        "I_APC_tracked_03_cannon_F",
        "FV510 Warrior",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        "0",
        true,
        0
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_transportThread28", [] spawn { 
    sleep 7200;
    ["GUER","TRANSPORT","FV510 Warrior"] call ALiVE_fnc_combatSupportRemove;
}];