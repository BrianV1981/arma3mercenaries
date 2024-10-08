[] spawn {  
    // Notify the player about the incoming reinforcement  
    playSound3D ["a3\dubbing_f\modules\supports\transport_request.ogg", player];  
    sleep 5;  
    playSound3D ["a3\dubbing_f\modules\supports\transport_acknowledged.ogg", player];  
    sleep 60; 
  
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
    _wp1 setWaypointBehaviour "COMBAT";   
  
    // Set the second waypoint for the Blackfish to fly to the end position  
    _wp2 = _group addWaypoint [_endPos, 0];   
    _wp2 setWaypointType "MOVE";   
    _wp2 setWaypointSpeed "FULL";   
    _wp2 setWaypointBehaviour "COMBAT";   
   
    // Monitor the Blackfish reaches within 200 meters the player (50 did not work and 100 worked sporadically)
    waitUntil {(_blackfish distance _playerPos) < 200};
	
	// Make the Blackfish destructible    
    _blackfish allowDamage true; 
  
		// Play a sound indicating the drop  
        playSound3D ["a3\dubbing_f\modules\supports\transport_accomplished.ogg", player];   
  
        // Create the steerable parachute at the player's position   
        _parachute = createVehicle ["Steerable_Parachute_F", getPosATL _blackfish, [], 0, "FLY"];   
        _parachute setPosATL [getPosATL _blackfish select 0, getPosATL _blackfish select 1, 50];  // Drop from 50 meters  
  
        // Generate a unique identifier for the unit  
        private _playerUID = getPlayerUID player;  
        private _uniqueUnitID = str (diag_tickTime + random 1000);  
  
        // Create the unit and assign the necessary variables and place the AI unit in the parachute
        private _unit = "B_crew_F" createUnit [position _parachute, (group player), format [  
            "this setVariable ['Vcm_Disable', true, true];  
             (group this) setVariable ['Vcm_Disable', true];  
             (group this) setVariable ['ALiVE_disableDynamicSimulation', true, true];  
             this moveInDriver _parachute;"
        ], 0.5, 'PRIVATE'];  
  
        // Monitor when the parachute lands  
        waitUntil {getPosATL _parachute select 2 < 0.5};  // Wait until the parachute is close to the ground  
  
        // Give the AI time to disembark and then delete the parachute  
        sleep 10;  // Adjust this sleep duration based on how long it takes for the AI to disembark  
        deleteVehicle _parachute;  
   
    // Delete the Blackfish after it passes the players
    sleep 10;  // Adjust as needed to ensure it passes sufficiently
   
    // Delete the Blackfish and crew
    deleteVehicle _blackfish;
    {deleteVehicle _x} forEach units _group;
    // The group will auto-delete itself as all its units have been removed
};
