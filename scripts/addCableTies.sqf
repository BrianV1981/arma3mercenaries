private "_this";
_this = _this select 0;

// Ensure the script runs only on the server
if (!isServer) exitWith {};

_this addItemCargoGlobal ["ACE_CableTie", 100];
_this addItemCargoGlobal ["ACE_EarPlugs", 50];