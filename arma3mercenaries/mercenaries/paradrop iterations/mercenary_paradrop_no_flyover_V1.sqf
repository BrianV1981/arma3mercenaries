// Spawn the notification and drop logic in a scheduled environment 
[] spawn { 
    // Notify the player about the incoming reinforcement 
    // hint "REINFORCEMENT INCOMING AT YOUR POSITION!"; 
    playSound3D ["a3\dubbing_f\modules\supports\transport_request.ogg", player]; 
    sleep 5; 
    playSound3D ["a3\dubbing_f\modules\supports\transport_acknowledged.ogg", player]; 
    sleep 20; 
 
    // Use the player's position for the drop 
    _playerPos = getPos player; 
 
    // Play plane sound before drop 
	playSound3D ["A3\Sounds_F\vehicles\air\noises\prop_lowpass.wss", player];

 
    _next_drop_in_sec = 60;  // Time before drop in seconds
    _height_of_drop = 50;   // Drop height in meters
 
    sleep _next_drop_in_sec;
	
    playSound3D ["a3\dubbing_f\modules\supports\transport_accomplished.ogg", player]; 
 
    // Create the steerable parachute at the player's position 
    _parachute = createVehicle ["Steerable_Parachute_F", _playerPos, [], 0, "FLY"]; 
    _parachute setPosATL [_playerPos select 0, _playerPos select 1, _height_of_drop]; 

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

    // Monitor when the parachute lands
    waitUntil {getPosATL _parachute select 2 < 0.5};  // Wait until the parachute is close to the ground

    // Give the AI time to disembark and then delete the parachute
    sleep 10;  // Adjust this sleep duration based on how long it takes for the AI to disembark
    deleteVehicle _parachute;
};
