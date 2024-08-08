// File: scripts/jukebox/initRadioAction.sqf

// Add the arma3mercenaries Radio action to the given vehicle
params ["_vehicle"];

// Add the action to the vehicle
_vehicle addAction ["arma3mercenaries Radio", { 
    createDialog "customInterface"; 
}];
