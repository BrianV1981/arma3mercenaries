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

*/
if (!isServer) exitWith {};

private "_this";
_this = _this select 0;

// Ensure the vehicle is correctly initialized
if (isNull _this) exitWith {};

// Add a respawn point for the West side on the vehicle
[west, _this] call BIS_fnc_addRespawnPosition;

// Add a respawn point for the Independent side on the vehicle
[independent, _this] call BIS_fnc_addRespawnPosition;
