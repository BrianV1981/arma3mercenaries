[] spawn {
    // Player's position
    _playerPos = getPos player;

    // Calculate the starting position 1000 meters away from the player
    _direction = random 360;  // Random direction
    _startPos = _playerPos getPos [1000, _direction];

    // Create the armed Blackfish 1000 meters away
    _blackfish = createVehicle ["B_T_VTOL_01_armed_F", _startPos, [], 0, "FLY"];

    // Generate a unique identifier for the group
    private _playerUID = getPlayerUID player;
    private _uniqueGroupID = format ["arma3mercenaries_groupID_%1", _playerUID];

    // Create a group for the Blackfish with auto-deletion enabled and assign variables
    _group = createGroup [west, true];
    _group setVariable ["Vcm_Disable", true, true];
    _group setVariable ["ALiVE_disableDynamicSimulation", true, true];

    // Assign the pilot and crew to the Blackfish and set their variables
    _pilot = _group createUnit ["B_HeliPilot_F", _startPos, [], 0, "FORM"];
    _pilot moveInDriver _blackfish;
    _pilot setVariable ["Vcm_Disable", true, true];
	_pilot setVariable ["ALiVE_disableDynamicSimulation", true, true];

    _gunner1 = _group createUnit ["B_crew_F", _startPos, [], 0, "FORM"];
    _gunner2 = _group createUnit ["B_crew_F", _startPos, [], 0, "FORM"];
	_gunner3 = _group createUnit ["B_crew_F", _startPos, [], 0, "FORM"];

    _gunner1 moveInTurret [_blackfish, [0]];  // Assign to front turret
    _gunner2 moveInTurret [_blackfish, [1]];  // Assign to turret
	_gunner3 moveInTurret [_blackfish, [2]];  // Assign to turret

    _gunner1 setVariable ["Vcm_Disable", true, true];
    _gunner2 setVariable ["Vcm_Disable", true, true];
	_gunner3 setVariable ["Vcm_Disable", true, true];
	
	_gunner1 setVariable ["ALiVE_disableDynamicSimulation", true, true];
	_gunner2 setVariable ["ALiVE_disableDynamicSimulation", true, true];
	_gunner3 setVariable ["ALiVE_disableDynamicSimulation", true, true];

    // Calculate the end position 2000 meters beyond the player
    _endPos = _playerPos getPos [2000, _direction];

    // Set waypoints for the Blackfish to fly over and past the player
    _wp1 = _group addWaypoint [_playerPos, 0];
    _wp1 setWaypointType "MOVE";
    _wp1 setWaypointSpeed "FULL";
    _wp1 setWaypointBehaviour "CARELESS";

    _wp2 = _group addWaypoint [_endPos, 0];
    _wp2 setWaypointType "MOVE";
    _wp2 setWaypointSpeed "FULL";
    _wp2 setWaypointBehaviour "CARELESS";

    // Monitor the Blackfish and delete it after it passes the end position
    waitUntil {(_blackfish distance _endPos) < 200};  // Adjust as needed to ensure it passes sufficiently

    // Delete the Blackfish and crew
    deleteVehicle _blackfish;
    {deleteVehicle _x} forEach units _group;
    // The group will auto-delete itself as all its units have been removed
};
