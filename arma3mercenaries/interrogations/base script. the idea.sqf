/*
    arma3mercenaries_fn_simpleInterrogations.sqf
    Author: BrianV1981

    Description:
    Basic script to test player initialization and basic civilian processing.
*/

// Debug: Display that the script is running
hint "Script started";

// Attempt to get the player who activated the action
private _player = objNull; // Initialize as null

// Debug: Check if _this array is valid
if (isNil "_this" || {count _this == 0}) exitWith {hint "Error: _this array is undefined or empty."};

// Debug: Attempt to select the player from _this array
_player = _this select 0;

// Debug: Check if _player was correctly assigned
if (isNull _player) exitWith {hint "Error: Player not defined."};

// Debug: Check if _player is valid and output the result
hint format ["Player defined: %1", _player];

// Attempt to get the player's position
private _pos = getPos _player;

// Debug: Output player position
hint format ["Player position: %1", _pos];

// Find nearby civilians within a 30-meter radius
private _civilians = _pos nearEntities ["Man", 30];

// Filter for alive civilians
_civilians = _civilians select {alive _x && side _x == civilian};

// Debug: Output number of civilians found
hint format ["Civilians found: %1", count _civilians];

// Process each civilian (no reward handling for simplicity)
{
    _x setDamage 1; // Kill the civilian
} forEach _civilians;

// Notify the player of completion
hint "Interrogation complete.";
