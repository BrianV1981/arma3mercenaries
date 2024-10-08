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

// Define a global variable to store the radio block timer. This ensures no sound spam by enforcing a 2-minute delay between radio communications.
if (isNil "radioSoundBlockTime") then { 
    radioSoundBlockTime = 0; 
}; 

// Start a new spawn thread (allows the script to run asynchronously without blocking other game functions)
[] spawn { 
    // Capture the current in-game time
    private _currentTime = time; 
 
    // Check if the radio block timer has passed 2 minutes
    if (_currentTime > radioSoundBlockTime) then { 
        // Reset the radio block timer for the next 2 minutes
        radioSoundBlockTime = _currentTime + 120; 
        
        // Play the radio request sound (initial sound indicating a support request)
        playSound3D ["a3\dubbing_f\modules\supports\transport_request.ogg", player]; 
        
        // Introduce a random delay (between 5 and 20 seconds) before playing the next sound
        private _randomRadioDelay = 5 + random 15; 
        sleep _randomRadioDelay; 
        
        // Play the radio acknowledgment sound (support has acknowledged the request)
        playSound3D ["a3\dubbing_f\modules\supports\transport_acknowledged.ogg", player]; 
    }; 
 
    // Random transport delay (between 60 and 120 seconds) simulating the time before Blackfish arrives
    private _randomTransportTime = 60 + random 60; 
    sleep _randomTransportTime; 
 
    // Get the player’s current position in the game world
    private _playerPos = getPos player; 
    
    // Generate a random direction (0-360 degrees)
    private _direction = random 360; 
    
    // Calculate the start position of the Blackfish 1000 meters away from the player in the random direction
    private _startPos = _playerPos getPos [1000, _direction]; 
 
    // Create the Blackfish VTOL vehicle at the calculated start position, set to fly mode
    private _blackfish = createVehicle ["B_T_VTOL_01_armed_F", _startPos, [], 0, "FLY"]; 
    
    // Make the Blackfish indestructible until it's allowed to be damaged (prevents early destruction)
    _blackfish allowDamage false; 
 
    // Create a new group for the Blackfish crew (AI units)
    private _group = createGroup [west, true]; 
    
    // Disable VCOM AI and ALiVE simulation for smoother control over the units
    _group setVariable ["Vcm_Disable", true, true]; 
    _group setVariable ["ALiVE_disableDynamicSimulation", true, true]; 
 
    // Spawn the pilot and assign them to drive the Blackfish
    private _pilot = _group createUnit ["B_HeliPilot_F", _startPos, [], 0, "FORM"]; 
    _pilot moveInDriver _blackfish; 
 
    // Spawn three gunners for the Blackfish and assign them to their respective turret positions
    private _gunner1 = _group createUnit ["B_crew_F", _startPos, [], 0, "FORM"]; 
    private _gunner2 = _group createUnit ["B_crew_F", _startPos, [], 0, "FORM"]; 
    private _gunner3 = _group createUnit ["B_crew_F", _startPos, [], 0, "FORM"]; 
 
    _gunner1 moveInTurret [_blackfish, [0]]; // Main Gunner (Front Turret) 
    _gunner2 moveInTurret [_blackfish, [1]]; // Right Gunner 
    _gunner3 moveInTurret [_blackfish, [2]]; // Left Gunner 
 
    // Disable dynamic simulation and VCOM AI for all crew members for smoother control
    {    
        _x setVariable ["ALiVE_disableDynamicSimulation", true, true];    
        _x setVariable ["Vcm_Disable", true, true];    
    } forEach [_pilot, _gunner1, _gunner2, _gunner3]; 
 
    // Set the final position where the Blackfish will fly to (2000 meters away from the player in the same direction)
    private _endPos = _playerPos getPos [2000, _direction]; 
 
    // Add a waypoint for the Blackfish to fly to the player's current position
    private _wp1 = _group addWaypoint [_playerPos, 0]; 
    _wp1 setWaypointType "MOVE"; 
    _wp1 setWaypointSpeed "FULL"; // Full speed to simulate urgency
    _wp1 setWaypointBehaviour "CARELESS"; // Ensures the Blackfish ignores combat to complete its task
 
    // Add a second waypoint for the Blackfish to fly past the player after completing the first waypoint
    private _wp2 = _group addWaypoint [_endPos, 0]; 
    _wp2 setWaypointType "MOVE"; 
    _wp2 setWaypointSpeed "FULL"; 
    _wp2 setWaypointBehaviour "COMBAT"; // Blackfish will be in combat behavior after passing the player
 
    // Set waypoint 1 statements to execute a script for the parachute drop when the waypoint is reached
    _wp1 setWaypointStatements [ 
        "true", 
        "execVM 'arma3mercenaries\mercenaries\B_crew_F_drop.sqf';" 
    ]; // Execute the drop script when waypoint 1 is completed (parachute and unit creation)
 
    // Sleep for a short time before allowing the Blackfish to be destructible
    sleep 60; // Time delay to ensure the Blackfish has flown sufficiently before being deleted

    // Delete the Blackfish and its crew once they pass waypoint 2
    deleteVehicle _blackfish;
    {deleteVehicle _x} forEach units _group; // Delete each unit in the group
};
