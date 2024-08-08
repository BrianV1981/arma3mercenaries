#include "HG_Macros.h" // Include the macro definitions

/*
  fn_garageSpawn.sqf
  Script to handle vehicle spawning from the garage.
*/

// Declare a private variable to hold the spawn point
private "_spawnPoint";

disableSerialization; // Disable serialization to handle UI elements

// Check if the selected spawn point is busy
_spawnPoint = [((HG_SPAWN_POINTS select (HG_GARAGE_SP lbValue (lbCurSel HG_GARAGE_SP))) select 1)] call HG_fnc_isItBusy;

if (_spawnPoint select 0) then {
    // If the spawn point is not busy, proceed with vehicle spawning
    hint (localize "STR_HG_GRG_VEHICLE_SPAWNING"); // Display a hint to the player
    
    // Get the selected vehicle data from the garage list
    private _sel = (HG_GARAGE_LIST lbData (lbCurSel HG_GARAGE_LIST)) splitString "/";
    
    closeDialog 0; // Close the current dialog
    
    // Execute the vehicle spawning function on the server
    [1, player, (_sel select 0), (_spawnPoint select 1), (HG_GARAGE_LIST lbValue (lbCurSel HG_GARAGE_LIST)), (_sel select 1)] remoteExecCall ["HG_fnc_spawnVehicle", 2, false];
} else {
    // If the spawn point is busy, display a hint to the player
    hint (localize "STR_HG_SPAWN_POINT_BUSY");
};

true; // Return true to indicate success
