/*

///old versions that do not work on a dedicated server

if (!isServer) exitWith {};

private "_this";
_this = _this select 0;
[independent,_this] call BIS_fnc_addRespawnPosition;
[west,_this] call BIS_fnc_addRespawnPosition;

//////////////////

if (!isServer) exitWith {};

private _vehicle = _this select 0;

[independent, _vehicle] call BIS_fnc_addRespawnPosition;
[west, _vehicle] call BIS_fnc_addRespawnPosition;

/////////////////////

if (!isServer) exitWith {};

private _vehicle = _this select 0;

[independent, _vehicle] call BIS_fnc_addRespawnPosition;
[west, _vehicle] call BIS_fnc_addRespawnPosition;

// Ensure the respawn positions are broadcasted to all clients
[independent, _vehicle] remoteExec ["BIS_fnc_addRespawnPosition", 0, true];
[west, _vehicle] remoteExec ["BIS_fnc_addRespawnPosition", 0, true];

The error you are encountering is due to how the remoteExec command expects its parameters. Specifically, the call command inside remoteExec should be passed a function or code, but in your current code, it's being passed a string ("BIS_fnc_addRespawnPosition"), which is incorrect.

To fix the issue, you need to wrap the function name in parentheses so that it is evaluated as a function instead of a string. Here’s the corrected code:

*/
private "_this";
_this = _this select 0;

// Ensure the vehicle is correctly initialized
if (isNull _this) exitWith {};

// Generate a unique name for the respawn point
private _vehicleType = typeOf _this;

// Create a unique identifier using the object's type and its creation time or position
private _uniqueID = format ["%1_%2", _vehicleType, random 1e10];

// Add a respawn point for the West side on the vehicle
[[west, _this, format ["%1_West", _uniqueID]], BIS_fnc_addRespawnPosition] remoteExec ["call", 0, true];

// Add a respawn point for the Independent side on the vehicle
[[independent, _this, format ["%1_Independent", _uniqueID]], BIS_fnc_addRespawnPosition] remoteExec ["call", 0, true];
