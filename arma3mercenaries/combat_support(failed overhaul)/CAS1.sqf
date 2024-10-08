/*

CAS

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

// Check if _cas1Thread exists in the missionNamespace and terminate it if it does
if (!isNil {missionNamespace getVariable "_cas1Thread"} && {not isNull (missionNamespace getVariable "_cas1Thread")}) then {
    terminate (missionNamespace getVariable "_cas1Thread");
};

// Remove any existing combat support group
["WEST","CAS","RAH-66 Comanchie"] call ALiVE_fnc_combatSupportRemove;

// Sleep to give some delay before adding a new group
sleep 1;

// Define a static blacklist area (optional)
private _staticBlacklist = [
    [[26997, 24709], 100, 350, 40, true]   // Rectangular area centered at [26997, 24709] with rotation angle 40 degrees (Molos Airstrip)
];

// Get the position from the marker "blufor_combat_support"
private _checkPos = getMarkerPos "blufor_combat_support";  // Get the position of the marker

// Find all nearby objects around the marker position (within 500 meters)
private _objectsNearby = _checkPos nearObjects 500;  // Collects all objects within 500 meters of the marker position

// Convert the found objects to a blacklist format (rectangular areas around each object)
private _dynamicBlacklist = _objectsNearby apply {[_x, 10, 10, 0, true]};  // 10x10 rectangle around each object

// Merge static and dynamic blacklists
private _blacklist = _staticBlacklist + _dynamicBlacklist;

// Use findSafePos to determine a safe position, avoiding objects and blacklisted areas
private _safePos = [_checkPos, 0, 500, 0, 0, 0.1, 0, _blacklist] call BIS_fnc_findSafePos;

[
    "CAS",
    [
        _safePos,
        0,                                  // Direction
        "B_Heli_Attack_01_F",               // Classname
        "RAH-66 Comanchie",                 // Callsign
        "",                                 // No custom code
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];" // Code on spawn
    ]
] Call ALiVE_fnc_combatSupportAdd;

// Spawn a new script and capture its handle in the missionNamespace
missionNamespace setVariable ["_cas1Thread", [] spawn { 
    sleep 60;
    ["WEST","CAS","RAH-66 Comanchie"] call ALiVE_fnc_combatSupportRemove;
}];
