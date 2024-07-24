private "_this";
_this = _this select 0;

// Ensure the script runs only on the server
if (!isServer) exitWith {};

_this addItemCargoGlobal ["ToolKit", 2];