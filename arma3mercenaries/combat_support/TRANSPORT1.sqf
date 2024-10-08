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

// Check if _transportThread1 exists in the missionNamespace and terminate it if it does
// This ensures that if a previous instance of the transport thread exists, it is terminated to prevent duplicate groups or conflicts.
if (!isNil {missionNamespace getVariable "_transportThread1"} && {not isNull (missionNamespace getVariable "_transportThread1")}) then {
    terminate (missionNamespace getVariable "_transportThread1");
};

// Remove any existing transport support group for "UH-80 Ghost Hawk"
// This line removes the previous transport group associated with "UH-80 Ghost Hawk" if it exists, freeing up resources and avoiding conflicts.
["WEST","TRANSPORT","UH-80 Ghost Hawk"] call ALiVE_fnc_combatSupportRemove;

// Sleep for 1 second before adding a new transport group
// This delay ensures that the previous transport group is fully removed before spawning a new one.
sleep 1;

private _safePos = getMarkerPos "blufor_transport_1";

// Add a new transport group using ALiVE's combat support function
// This will spawn the "UH-80 Ghost Hawk" at the safe position with certain parameters.
[
    "TRANSPORT",                         // Type of support (TRANSPORT in this case)
    [
        _safePos,                        // The position where the transport vehicle will spawn (determined earlier)
        60,                              // Direction the vehicle will face (60 degrees in this case)
        "B_Heli_Transport_01_F",         // Classname of the vehicle to spawn ("UH-80 Ghost Hawk")
        "UH-80 Ghost Hawk",              // Callsign for the transport unit
        "(group (_this select 0)) setVariable ['Vcm_Disable',true];(group (_this select 0)) setVariable ['ALiVE_disableDynamicSimulation',true,true];",  
        // This code disables VCOM AI for the group to prevent them from acting autonomously and disables ALiVE's dynamic simulation.
        "0",                             // Height of the vehicle, 0 means it spawns on the ground.
        true,                            // Whether the vehicle is capable of slingloading (true enables it)
        0                                // Number of supply boxes the vehicle can carry for slingloading (set to 0, so no boxes are loaded initially)
    ]
] call ALiVE_fnc_combatSupportAdd;

// Store a reference to the thread in the missionNamespace so it can be tracked and terminated if needed
// The thread ensures that after 7200 seconds (2 hours), the transport unit is removed.
missionNamespace setVariable ["_transportThread1", [] spawn { 
    // Sleep for 7200 seconds (2 hours) before removing the transport unit
    sleep 7200;
    // Remove the transport unit after 2 hours
    ["WEST","TRANSPORT","UH-80 Ghost Hawk"] call ALiVE_fnc_combatSupportRemove;
}];
