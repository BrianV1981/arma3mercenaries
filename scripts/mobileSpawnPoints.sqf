/*

///old version

if (!isServer) exitWith {};

private "_this";
_this = _this select 0;
[independent,_this] call BIS_fnc_addRespawnPosition;
[west,_this] call BIS_fnc_addRespawnPosition;


*/

if (!isServer) exitWith {};

private _vehicle = _this select 0;

[independent, _vehicle] call BIS_fnc_addRespawnPosition;
[west, _vehicle] call BIS_fnc_addRespawnPosition;