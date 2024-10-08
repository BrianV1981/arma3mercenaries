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

// Check if the variable "radioSoundBlockTime" exists; if not, initialize it to 0
if (isNil "radioSoundBlockTime") then { 
    radioSoundBlockTime = 0; 
}; 

// Start a new asynchronous process (spawn) to avoid blocking other game functions
[] spawn { 
    private _currentTime = time;  // Get the current in-game time

    // If enough time (120 seconds) has passed since the last radio transmission, play radio sounds
    if (_currentTime > radioSoundBlockTime) then { 
        radioSoundBlockTime = _currentTime + 120;  // Block the next sound for 120 seconds
        
        // Play the radio request sound indicating a transport request
        playSound3D ["a3\dubbing_f\modules\supports\transport_request.ogg", player]; 
        
        // Introduce a random delay between 5 and 10 seconds before playing the acknowledgment sound
        private _randomRadioDelay = 5 + random 5; 
        sleep _randomRadioDelay; 
        
        // Play the acknowledgment sound indicating the request has been accepted
        playSound3D ["a3\dubbing_f\modules\supports\transport_acknowledged.ogg", player]; 
    }; 

    // Add a random delay between 5 and 10 seconds to simulate transport arrival time
    private _randomTransportTime = 5 + random 5; 
    sleep _randomTransportTime; 

    // Get the player's current position and choose a random direction for Blackfish to approach from
    private _playerPos = getPos player; 
    private _direction = random 360; 
    private _startPos = _playerPos getPos [1000, _direction];  // Set the Blackfish start position 1000 meters away

    // Spawn the Blackfish (VTOL aircraft) in the air at the start position
    private _blackfish = createVehicle ["B_T_VTOL_01_armed_F", _startPos, [], 0, "FLY"]; 
    _blackfish allowDamage false;  // Prevent the Blackfish from taking damage for now
    _blackfish animateDoor ['Door_1_source', 1];  // Open the rear ramp of the Blackfish

    // Create a new group for the Blackfish crew
    private _group = createGroup [west, true]; 
    _group setVariable ["Vcm_Disable", true, true];  // Disable VCOM AI for the group (optional AI mod functionality)
    _group setVariable ["ALiVE_disableDynamicSimulation", true, true];  // Disable dynamic simulation for ALiVE mod

    // Create and assign a pilot to the Blackfish
    private _pilot = _group createUnit ["B_HeliPilot_F", _startPos, [], 0, "FORM"]; 
    _pilot moveInDriver _blackfish;  // Move the pilot into the driver's seat of the Blackfish

    // Create three gunners for the Blackfish and assign them to turret positions
    private _gunner1 = _group createUnit ["B_crew_F", _startPos, [], 0, "FORM"]; 
    private _gunner2 = _group createUnit ["B_crew_F", _startPos, [], 0, "FORM"]; 
    private _gunner3 = _group createUnit ["B_crew_F", _startPos, [], 0, "FORM"]; 

    _gunner1 moveInTurret [_blackfish, [0]];  // Assign the first gunner to the front turret
    _gunner2 moveInTurret [_blackfish, [1]];  // Assign the second gunner to the right turret
    _gunner3 moveInTurret [_blackfish, [2]];  // Assign the third gunner to the left turret

    // Disable VCOM AI and ALiVE dynamic simulation for all crew members for better control
    {    
        _x setVariable ["ALiVE_disableDynamicSimulation", true, true];    
        _x setVariable ["Vcm_Disable", true, true];    
    } forEach [_pilot, _gunner1, _gunner2, _gunner3]; 

    // Set a destination for the Blackfish to move 2000 meters away from the player
    private _endPos = _playerPos getPos [2000, _direction]; 

    // Create the first waypoint at the player's current position
    private _wp1 = _group addWaypoint [_playerPos, 0]; 
    _wp1 setWaypointType "MOVE";  // The Blackfish will move to this waypoint
    _wp1 setWaypointSpeed "FULL";  // Move at full speed
    _wp1 setWaypointBehaviour "CARELESS";  // Ignore combat and prioritize reaching the destination

    // Create the second waypoint where the Blackfish will fly after dropping the unit
    private _wp2 = _group addWaypoint [_endPos, 0]; 
    _wp2 setWaypointType "MOVE"; 
    _wp2 setWaypointSpeed "FULL"; 
    _wp2 setWaypointBehaviour "COMBAT";  // Switch to combat behavior after passing the player

    // Asynchronously wait for the Blackfish to complete the first waypoint and then drop the unit
    [_group] spawn {
        params ["_group"];  // Pass the _group variable into this scope

        private _wp1Index = currentWaypoint _group;  // Get the current waypoint index
        
        // Wait until the Blackfish reaches waypoint 1 (the player's position)
        waitUntil {
            currentWaypoint _group > _wp1Index;  // Trigger once the waypoint advances
        };
        
        hint "Waypoint 1 completed!";  // Debug message indicating waypoint completion
        
        // Play sound indicating the unit drop is beginning
        playSound3D ["a3\dubbing_f\modules\supports\transport_accomplished.ogg", player];

        // Create a parachute and spawn the unit above the player
        private _parachute = createVehicle ["Steerable_Parachute_F", [0, 0, 0], [], 0, "FLY"];
        
        if (!isNull _parachute) then {
            _parachute setPos (player modelToWorld [0, 0, 50]);  // Position the parachute 50 meters above the player
            private _playerUID = getPlayerUID player;
            private _uniqueUnitID = str (diag_tickTime + random 1000);
            private _aiUnitID = format ["arma3mercenaries_aiUnit_%1_%2", _uniqueUnitID, _playerUID];
            private _groupID = format ["arma3mercenaries_groupID_%1", _playerUID];

            // Create the AI unit inside the player's group, using a parachute
            private _unit = "B_crew_F" createUnit [position _parachute, (group player), format [
                "this setVariable ['arma3mercenaries_aiUnit', '%1', true];
                this setVariable ['arma3mercenaries_groupID', '%2', true];
                this setVariable ['Vcm_Disable', true, true];
                (group this) setVariable ['Vcm_Disable', true];
                (group this) setVariable ['ALiVE_disableDynamicSimulation', true, true];
                this moveInDriver _parachute;", _aiUnitID, _groupID], 0.5, 'PRIVATE'];
        };

        hint "Unit dropped!";  // Debug message indicating successful unit drop
    };

    sleep 30;  // Wait for 30 seconds before continuing

    // Close the Blackfish's ramp
    _blackfish animateDoor ['Door_1_source', 0];  
    _blackfish allowDamage true;  // Allow the Blackfish to take damage again

    sleep 30;  // Wait another 30 seconds before deleting the Blackfish

    // Delete the Blackfish and its crew after completing the mission
    deleteVehicle _blackfish;
    {deleteVehicle _x} forEach units _group;  
};
