// Play a sound indicating that the drop has been successfully initiated (plays at the player's position)
playSound3D ["a3\dubbing_f\modules\supports\transport_accomplished.ogg", player];

// Create a parachute object (Steerable_Parachute_F) at the initial position [0, 0, 0] and set its mode to "FLY"
private _parachute = createVehicle ["Steerable_Parachute_F", [0, 0, 0], [], 0, "FLY"];

// Check if the parachute was successfully created before proceeding
if (!isNull _parachute) then {
    // Position the parachute 50 meters above the player's current position
    _parachute setPos (player modelToWorld [0, 0, 50]);
    
    // Get the player's unique ID to create a unique identifier for the AI unit
    private _playerUID = getPlayerUID player;

    // Generate a unique ID for the AI unit by combining the current tick time and a random number
    private _uniqueUnitID = str (diag_tickTime + random 1000);

    // Format a unique AI unit ID using the player's UID and the generated unique unit ID
    private _aiUnitID = format ["arma3mercenaries_aiUnit_%1_%2", _uniqueUnitID, _playerUID];

    // Create a group ID specific to the player using the player's UID
    private _groupID = format ["arma3mercenaries_groupID_%1", _playerUID];

    // Create the AI unit at the parachute's position and assign it to the player's group
    // The format command inserts the _aiUnitID and _groupID into the setVariable statements
	// Set custom variables on the AI unit to track its unique ID and group ID for later use
    private _unit = "B_crew_F" createUnit [position _parachute, (group player), format [
        "this setVariable ['arma3mercenaries_aiUnit', '%1', true];
        this setVariable ['arma3mercenaries_groupID', '%2', true];
        this setVariable ['Vcm_Disable', true, true];
        (group this) setVariable ['Vcm_Disable', true];
        (group this) setVariable ['ALiVE_disableDynamicSimulation', true, true];
        this moveInDriver _parachute;", _aiUnitID, _groupID], 0.5, 'PRIVATE'];
};
