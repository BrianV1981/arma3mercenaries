#include "HG_Macros.h"
/*
    fn_dialogOnLoadATM.sqf
    Author - HoverGuy
    GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
    Enhanced by - BrianV1981
    Changes:
    - Ensured compatibility with the Grad Money system.
    - Simplified and optimized the ATM dialog loading process.
*/

// Disables serialization to handle UI elements
disableSerialization;

// Creates the ATM dialog interface
createDialog "HG_ATM";

// Refreshes the ATM interface to display updated information
[] call HG_fnc_atmRefresh;

true;
