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
// Check if _cas6Thread exists in the missionNamespace and terminate it if it does
if (!isNil {missionNamespace getVariable "_cas6Thread"} && {not isNull (missionNamespace getVariable "_cas6Thread")}) then {
    terminate (missionNamespace getVariable "_cas6Thread");
};

// Remove any existing combat support group
["GUER","CAS","L-159 ALCA"] call ALiVE_fnc_combatSupportRemove;

// Sleep to give some delay before adding a new group
sleep 1;

// Use a fixed position for the L-159 ALCA, as airplanes should be manually located in airports
[
    "CAS",                         // CAS type
    [
        [26818,24589,0],                 // Position of vehicle
        45,                       // Direction of vehicle
        "I_Plane_Fighter_03_dynamicLoadout_F", // Classname of vehicle
        "L-159 ALCA",             // Callsign of vehicle
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];", // Code to run on vehicle spawn
        ""                        // Height of vehicle (can be left empty for default)
    ]
] call ALiVE_fnc_combatSupportAdd;

// Spawn a new script and capture its handle in the missionNamespace
missionNamespace setVariable ["_cas6Thread", [] spawn { 
    sleep 3600;
    ["GUER","CAS","L-159 ALCA"] call ALiVE_fnc_combatSupportRemove;
}];
