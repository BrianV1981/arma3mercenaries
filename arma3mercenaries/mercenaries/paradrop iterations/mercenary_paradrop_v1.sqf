/*
    arma3mercenaries Blackfish Transport & Parachute Drop Script
    Author: BrianV1981

# arma3mercenaries Blackfish Transport & Parachute Drop Script

## Overview
This script creates an immersive experience in which an armed Blackfish VTOL transports reinforcements to the player's position, accompanied by a radio notification and a crewed Blackfish flyover. Upon reaching the player's position, a parachute with an AI unit is dropped. The Blackfish proceeds beyond the player's position and is then deleted along with its crew to conserve resources.

## Features
- **Audio Notification:** The player is notified of the incoming reinforcement with sound effects.
- **Blackfish Flyover:** An armed Blackfish VTOL is created, manned with a pilot and gunners. It flies towards the player's position from a random starting point 1000 meters away.
- **Parachute Drop:** Once the Blackfish is close to the player, an AI unit is dropped via a steerable parachute.
- **Crew Management:** The Blackfish is manned by a pilot and three gunners, all properly assigned to turrets.
- **Destruction Management:** The Blackfish is indestructible until it reaches the player's location, at which point it becomes vulnerable. After completing its flyover, it and its crew are deleted.
- **Dynamic Simulation:** VCOM and ALiVE simulation are disabled for the Blackfish and its crew for smoother AI behavior.
- **Randomized Delays:** Both the audio notifications and transport arrival times are randomized for a more immersive experience.
- **Blocking Mechanism:** A 2-minute timer prevents the radio notifications from being spammed.

## Script Breakdown
1. **Audio Notification:**
   - Radio sounds are played to inform the player about the incoming Blackfish.
   - A random delay between 5 and 20 seconds is applied between the two radio notifications.
   - A random transport time between 60 and 120 seconds is applied to simulate realistic transport delays.

2. **Blackfish Creation:**
   - The Blackfish is spawned 1000 meters away from the player at a random direction.
   - The Blackfish is initially indestructible to prevent accidental damage.
   - A pilot and three gunners are created and assigned to their respective turrets.

3. **Waypoint Setup:**
   - The Blackfish flies over the player, with the first waypoint set to the player's position.
   - After reaching the player, the Blackfish continues to a second waypoint 2000 meters beyond the player.

4. **Parachute and Unit Drop:**
   - The Blackfish is monitored, and once within a distance of 100 to 150 meters, a steerable parachute is dropped from the Blackfish.
   - The parachute is moved to the Blackfish's position, simulating a realistic air drop.
   - An AI unit is placed inside the parachute, and it descends to the ground.

5. **Parachute Monitoring and Cleanup:**
   - The parachute's descent is monitored until it reaches the ground.
   - After the AI disembarks, the parachute is deleted.
   - Once the Blackfish passes the player’s position, it and the crew are deleted to save resources.

## Usage
- Place this script inside your ARMA 3 mission to simulate a Blackfish reinforcement transport and parachute drop.
- The script is optimized for dedicated servers and has been tested to function reliably in multiplayer environments.

## Requirements
- **ARMA 3**: This script is designed for ARMA 3.
- **ALiVE & VCOM AI** (optional): This script includes compatibility with ALiVE and VCOM AI but does not depend on them.

*/

// Define a global variable to store the radio block timer
if (isNil "radioSoundBlockTime") then {
    radioSoundBlockTime = 0;
};

[] spawn {
    // Current time
    private _currentTime = time;

    // Check if the 2-minute block timer has passed
    if (_currentTime > radioSoundBlockTime) then {
        // Set the new block timer to 2 minutes from now immediately to prevent spamming
        radioSoundBlockTime = _currentTime + 120;

        // Notify the player about the incoming reinforcement
        playSound3D ["a3\dubbing_f\modules\supports\transport_request.ogg", player];

        // Random sleep time between 5 and 20 seconds before the next radio sound
        private _randomRadioDelay = 5 + random 15;
        sleep _randomRadioDelay;

        // Play the second radio sound
        playSound3D ["a3\dubbing_f\modules\supports\transport_acknowledged.ogg", player];
    };

    // Random transport delay time between 60 and 120 seconds
    private _randomTransportTime = 60 + random 60;
    sleep _randomTransportTime;

    // Player's position   
    _playerPos = getPos player;

    // Calculate the starting position 1000 meters away from the player (it seems to work better than 2000)
    _direction = random 360;  // Random direction   
    _startPos = _playerPos getPos [1000, _direction];

    // Create the armed Blackfish 2000 meters away   
    _blackfish = createVehicle ["B_T_VTOL_01_armed_F", _startPos, [], 0, "FLY"];

    // Make the Blackfish indestructible initially   
    _blackfish allowDamage false;

    // Create a group for the Blackfish with auto-deletion enabled and assign variables   
    _group = createGroup [west, true];
    _group setVariable ["Vcm_Disable", true, true];
    _group setVariable ["ALiVE_disableDynamicSimulation", true, true];

    // Assign the pilot and crew to the Blackfish and set their variables   
    _pilot = _group createUnit ["B_HeliPilot_F", _startPos, [], 0, "FORM"];
    _pilot moveInDriver _blackfish;

    // Create gunners and assign them to the turrets   
    _gunner1 = _group createUnit ["B_crew_F", _startPos, [], 0, "FORM"];
    _gunner2 = _group createUnit ["B_crew_F", _startPos, [], 0, "FORM"];
    _gunner3 = _group createUnit ["B_crew_F", _startPos, [], 0, "FORM"];

    _gunner1 moveInTurret [_blackfish, [0]];  // Main Gunner (Front Turret)   
    _gunner2 moveInTurret [_blackfish, [1]];  // Right Gunner   
    _gunner3 moveInTurret [_blackfish, [2]];  // Left Gunner

    // Set variables for individual group members   
    {   
        _x setVariable ["ALiVE_disableDynamicSimulation", true, true];   
        _x setVariable ["Vcm_Disable", true, true];   
    } forEach [_pilot, _gunner1, _gunner2, _gunner3];

    // Calculate the end position 2000 meters beyond the player   
    _endPos = _playerPos getPos [2000, _direction];

    // Set waypoints for the Blackfish to fly over and past the player   
    _wp1 = _group addWaypoint [_playerPos, 0];
    _wp1 setWaypointType "MOVE";
    _wp1 setWaypointSpeed "FULL";
    _wp1 setWaypointBehaviour "CARELESS";

    // Set the second waypoint for the Blackfish to fly to the end position  
    _wp2 = _group addWaypoint [_endPos, 0];
    _wp2 setWaypointType "MOVE";
    _wp2 setWaypointSpeed "FULL";
    _wp2 setWaypointBehaviour "COMBAT";

    // Gradually monitor the Blackfish's distance from the player and adjust when to trigger unit creation
    private _parachute = objNull;
    while {true} do {
        private _currentDistance = _blackfish distance _playerPos;

        // Check if the Blackfish is in a reasonable range (e.g., between 100m and 150m)
        if (_currentDistance < 150 && _currentDistance > 100) then {
            // Play a sound indicating the drop  
            playSound3D ["a3\dubbing_f\modules\supports\transport_accomplished.ogg", player];

            // Spawn the parachute at a controlled altitude (e.g., ground level or near the Blackfish)
            _parachute = createVehicle ["Steerable_Parachute_F", [0, 0, 0], [], 0, "FLY"];

            // Ensure the parachute was created successfully
            if (!isNull _parachute) then {
                // Move the parachute to the Blackfish's position at a controlled height
                _parachute setPosATL [getPosATL _blackfish select 0, getPosATL _blackfish select 1, 50];  // Drop from 50 meters

                // Generate a unique identifier for the unit
				private _playerUID = getPlayerUID player;
				private _uniqueUnitID = str (diag_tickTime + random 1000);

				// Construct the AI Unit ID and Group ID based on the player's UID
				private _aiUnitID = format ["arma3mercenaries_aiUnit_%1_%2", _uniqueUnitID, _playerUID];
				private _groupID = format ["arma3mercenaries_groupID_%1", _playerUID];

				// Create the unit and assign the necessary variables
				private _unit = "B_crew_F" createUnit [position _parachute, (group player), format [
					"this setVariable ['arma3mercenaries_aiUnit', '%1', true];
					this setVariable ['arma3mercenaries_groupID', '%2', true];
					this setVariable ['Vcm_Disable', true, true];
					(group this) setVariable ['Vcm_Disable', true];
					(group this) setVariable ['ALiVE_disableDynamicSimulation', true, true];
					this moveInDriver _parachute;",  // Place the AI unit in the parachute
					_aiUnitID, _groupID
				], 0.5, 'PRIVATE'];

                // Stop monitoring once the unit is created
                break;
            };
        };

        // Add a small sleep to prevent overloading the server with checks
        sleep 0.5;
    };

    // Make the Blackfish destructible
    _blackfish allowDamage true;

    // If the parachute was created, monitor the parachute descent until it is close to the ground
    if (!isNull _parachute) then {
        while {getPosATL _parachute select 2 >= 0.5} do {
            sleep 0.5;  // Check every 0.5 seconds to avoid overloading the server
        };

        // Give the AI time to disembark and then delete the parachute
        sleep 10;  // Adjust this sleep duration based on how long it takes for the AI to disembark
        deleteVehicle _parachute;
    };

    // Delete the Blackfish after it passes the player
    sleep 10;  // Adjust as needed to ensure it passes sufficiently

    // The group will auto-delete itself after all its units have been removed
    deleteVehicle _blackfish;
    {deleteVehicle _x} forEach units _group;
};
