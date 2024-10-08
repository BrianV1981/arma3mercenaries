// Define the sector-specific variable 
private _capturingVar = "isCapturing_sector1"; 
 
// Prepare the debug output 
private _output = "Players Capturing Sector 1:\n"; 
 
// Get all players on the server 
private _allPlayers = allPlayers; 
 
// Initialize a counter to check if there are any capturing players 
private _capturingFound = false; 
 
{ 
    if (_x getVariable [_capturingVar, false]) then { 
        _capturingFound = true; 
        _output = _output + format ["  Name: %1 | UID: %2\n", name _x, getPlayerUID _x]; 
    }; 
} forEach _allPlayers; 
 
// If no players are capturing, indicate that in the output 
if (!_capturingFound) then { 
    _output = _output + "No players are currently capturing.\n"; 
}; 
 
// Output the debug information 
hint _output; 
diag_log _output; 
