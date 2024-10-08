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

// Check if _cas7Thread exists in the missionNamespace and terminate it if it does
if (!isNil {missionNamespace getVariable "_cas7Thread"} && {not isNull (missionNamespace getVariable "_cas7Thread")}) then {
    terminate (missionNamespace getVariable "_cas7Thread");
};

// Remove any existing combat support group
["GUER","CAS","JAS 39 Gripen"] call ALiVE_fnc_combatSupportRemove;

// Sleep to give some delay before adding a new group
sleep 1;

// Use a fixed position for the JAS 39 Gripen, as airplanes should be manually located in airports
[
    "CAS",                         // CAS type
    [
        [26850,24626,0],                 // Position of vehicle
        45,                       // Direction of vehicle
        "I_Plane_Fighter_04_F",   // Classname of vehicle
        "JAS 39 Gripen",          // Callsign of vehicle
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];", // Code to run on vehicle spawn
        ""                        // Height of vehicle (can be left empty for default)
    ]
] call ALiVE_fnc_combatSupportAdd;

// Spawn a new script and capture its handle in the missionNamespace
missionNamespace setVariable ["_cas7Thread", [] spawn { 
    sleep 3600;
    ["GUER","CAS","JAS 39 Gripen"] call ALiVE_fnc_combatSupportRemove;
}];
