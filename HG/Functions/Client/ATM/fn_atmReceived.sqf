#include "HG_Macros.h"
/*
    fn_atmReceived.sqf
    Author - HoverGuy
    Website - https://northernimpulse.com
    Enhanced by - BrianV1981
    Changes:
    - Integrated Grad Money system for handling the receipt of funds.
    - Replaced HG-specific functions with Grad Money equivalents.
*/

// Define parameters, where _amount is the amount of money received and _targetAccount is the player's account
params ["_amount", "_targetAccount"];

// Add the received amount to the target account using the Grad Money system
// [_targetAccount, _amount] call HG_fnc_addMoney; // Original HG function to add money (commented out)
[_targetAccount, _amount] call grad_moneymenu_fnc_addFunds; // Replaced with Grad Money equivalent

true;
