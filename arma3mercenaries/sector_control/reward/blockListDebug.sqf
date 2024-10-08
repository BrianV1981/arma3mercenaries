// Defi// Define the sector-specific variables 
private _blockedVar = "blockedPlayers_sector1"; 
 
// Retrieve the list of blocked players 
private _blockedPlayers = missionNamespace getVariable [_blockedVar, []]; 
 
// Prepare the debug output 
private _output = "Blocked Players in Sector 1:\n"; 
 
// Check blocked players 
if (count _blockedPlayers > 0) then { 
    { 
        _output = _output + format ["  UID: %1\n", _x]; 
    } forEach _blockedPlayers; 
} else { 
    _output = _output + "No players are blocked.\n"; 
}; 
 
// Output the debug information 
hint _output; 
diag_log _output; 
