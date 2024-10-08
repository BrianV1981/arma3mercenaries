#include "HG_Macros.h"
/*
    fn_atmRefresh.sqf
    Author - HoverGuy
    GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
    Enhanced by - BrianV1981
    Changes:
    - Integrated Grad Money system to display the player's wallet and bank account balances.
    - Replaced HG-specific functions with Grad Money equivalents.
*/

// Exit if the ATM display is not active
if(isNull HG_ATM_DISP) exitWith {true};

// Disables serialization to handle UI elements
disableSerialization;

HG_ATM_REFRESH_BTN ctrlEnable false;  // Disable the refresh button
lbClear HG_ATM_PLAYERS_COMBO;  // Clear the players combo box

// Update the bank account balance using the Grad Money system
HG_ATM_ACC_TEXT ctrlSetText format ["%1", ([player, true] call grad_moneymenu_fnc_getFunds)];

// Update the wallet balance using the Grad Money system
HG_ATM_CASH_TEXT ctrlSetText format ["%1", ([player] call grad_moneymenu_fnc_getFunds)];

// Clear the input fields
{
    _x ctrlSetText "0";
} forEach [HG_ATM_ACC_EDIT, HG_ATM_CASH_EDIT];

// Populate the player combo box with all online players except headless clients and the local player
HG_TEMP_ARRAY = allPlayers - entities "HeadlessClient_F" - [player];

if((count HG_TEMP_ARRAY) != 0) then
{
    private "_ind";
	
    {
	    _ind = HG_ATM_PLAYERS_COMBO lbAdd (name _x);
		HG_ATM_PLAYERS_COMBO lbSetValue [_ind,_forEachIndex];
	} forEach HG_TEMP_ARRAY;
	
	HG_ATM_TRANSFER_BTN ctrlEnable true;  // Enable the transfer button if there are players online
} else {
    HG_ATM_PLAYERS_COMBO lbAdd (localize "STR_HG_NO_ONLINE_PLAYERS");
	
	HG_ATM_TRANSFER_BTN ctrlEnable false;  // Disable the transfer button if no players are online
};

HG_ATM_REFRESH_BTN ctrlEnable true;  // Re-enable the refresh button
HG_ATM_PLAYERS_COMBO lbSetCurSel 0;  // Set the first player in the combo box as selected

true;
