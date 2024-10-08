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
// This ensures that any previous thread for CAS 2 is terminated before starting a new one
if (!isNil {missionNamespace getVariable "_cas2Thread"} && {not isNull (missionNamespace getVariable "_cas2Thread")}) then {
    terminate (missionNamespace getVariable "_cas2Thread");
};

// Remove any existing combat support group
// This line removes the current CAS unit associated with "A-164 Wipeout" if it exists
["WEST","CAS","A-164 Wipeout"] call ALiVE_fnc_combatSupportRemove;

// Sleep for 1 second before adding a new CAS unit
// The delay ensures that the old CAS group is fully removed before creating a new one
sleep 1;

// marker used for safe location to spawn combat support vehicle
private _safePos = getMarkerPos "blufor_cas_2";

// Add a new CAS group using ALiVE_fnc_combatSupportAdd
// This function adds a new unit for Close Air Support
[
    "CAS",                         // Type of support (CAS in this case)
    [
        _safePos,         // The static position where the aircraft will spawn
        225,                       // Direction the aircraft will face (225 degrees in this case)
        "B_Plane_CAS_01_F",        // Classname of the vehicle (A-164 Wipeout in this case)
        "A-164 Wipeout",           // Callsign for the CAS unit
        "",                        // Custom code can be run here on the vehicle (empty string in this case)
        "(group (_this select 0)) setVariable ['Vcm_Disable',true]; (group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];"
                                  // This code disables VCOM AI and ALiVE dynamic simulation for the CAS group
    ]
] call ALiVE_fnc_combatSupportAdd;

// Create a new thread to handle the removal of the CAS unit after a set period (3600 seconds = 1 hour)
// This thread will store a reference in the missionNamespace so it can be tracked and terminated later if needed
missionNamespace setVariable ["_cas2Thread", [] spawn { 
    // Sleep for 3600 seconds (1 hour) before removing the CAS unit
    sleep 3600;  
    // Remove the CAS unit after 1 hour
    ["WEST","CAS","A-164 Wipeout"] call ALiVE_fnc_combatSupportRemove;
}];
