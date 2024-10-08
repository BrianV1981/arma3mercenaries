if (!isNil {missionNamespace getVariable "_cas13Thread"} && {not isNull (missionNamespace getVariable "_cas13Thread")}) then {
    terminate (missionNamespace getVariable "_cas13Thread");
};

["WEST","CAS","Bardelas (AA) C"] call ALiVE_fnc_combatSupportRemove;

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
    "CAS",
    [
        _safePos,
        60,
        "B_APC_Tracked_01_AA_F",
        "Bardelas (AA) C",
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",
        ""
    ]
] call ALiVE_fnc_combatSupportAdd;

missionNamespace setVariable ["_cas13Thread", [] spawn { 
    sleep 3600;
    ["WEST","CAS","Bardelas (AA) C"] call ALiVE_fnc_combatSupportRemove;
}];
