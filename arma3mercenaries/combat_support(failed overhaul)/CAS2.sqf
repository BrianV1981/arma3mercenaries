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

// Check if _cas2Thread exists in the missionNamespace and terminate it if it does
if (!isNil {missionNamespace getVariable "_cas2Thread"} && {not isNull (missionNamespace getVariable "_cas2Thread")}) then {
    terminate (missionNamespace getVariable "_cas2Thread");
};

// Remove any existing combat support group
["WEST","CAS","A-164 Wipeout"] call ALiVE_fnc_combatSupportRemove;

// Sleep to give some delay before adding a new group
sleep 1;

[
    "CAS",                         // CAS type
    [
        [27192, 24959, 0],                 // Position of vehicle (static)
        225,                      // Direction of vehicle
        "B_Plane_CAS_01_F",       // Classname of vehicle
        "A-164 Wipeout",          // Callsign of vehicle
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];", // Code to run on vehicle spawn
        ""                        // Height of vehicle (can be left empty for default)
    ]
] call ALiVE_fnc_combatSupportAdd;

// Spawn a new script and capture its handle in the missionNamespace
missionNamespace setVariable ["_cas2Thread", [] spawn { 
    sleep 3600;
    ["WEST","CAS","A-164 Wipeout"] call ALiVE_fnc_combatSupportRemove;
}];
