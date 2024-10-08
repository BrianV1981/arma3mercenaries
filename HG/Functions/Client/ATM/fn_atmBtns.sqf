#include "HG_Macros.h"
/*
    fn_atmBtns.sqf
    Author - HoverGuy
    GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
    Enhanced by - BrianV1981
    Changes:
    - Replaced HG-specific money functions with Grad Money equivalents.
    - Updated the button actions to correctly interact with Grad Money for deposit, withdrawal, and transfer actions.
*/

// Define parameters to specify the mode (0=deposit, 1=withdraw, 2=transfer) and amount.
params["_mode","_amount"];

disableSerialization;

// Fetch the amount input by the player based on the mode selected.
_amount = [(ctrlText HG_ATM_CASH_EDIT),(ctrlText HG_ATM_ACC_EDIT),(ctrlText HG_ATM_ACC_EDIT)] select _mode;

// Exit if the amount input is invalid.
if(_amount isEqualTo "") exitWith {hint (localize "STR_HG_VALUE_EMPTY");};
if(!([_amount] call HG_fnc_isNumeric)) exitWith {hint (localize "STR_HG_NOT_A_NUMBER");};
_amount = parseNumber _amount;
if(_amount <= 0) exitWith {hint (localize "STR_HG_NEGATIVE_OR_ZERO");};

// Switch case based on the mode of the ATM operation.
switch(_mode) do
{
    // Deposit
    case 0:
	{
	    // Ensure the player has enough cash to deposit.
	    if(_amount > ([player, false] call grad_lbm_fnc_getFunds)) exitWith {hint (localize "STR_HG_ATM_CANNOT_DEPOSIT");};
		
	    // Original HG functions to add/subtract cash, replaced with Grad Money equivalents.
	    [player, -_amount, false] call grad_moneymenu_fnc_addFunds;
		[player, _amount, true] call grad_moneymenu_fnc_addFunds;
		
		// Display a hint to confirm the deposit.
		hint format[(localize "STR_HG_ATM_DEPOSITED"),([_amount,true] call HG_fnc_currencyToText)];
	};
	// Withdraw
	case 1:
	{
	    // Ensure the player has enough funds in their bank account to withdraw.
	    if(_amount > ([player, true] call grad_lbm_fnc_getFunds)) exitWith {hint (localize "STR_HG_ATM_CANNOT_WITHDRAW");};
		
	    // Original HG functions to add/subtract cash, replaced with Grad Money equivalents.
	    [player, -_amount, true] call grad_moneymenu_fnc_addFunds;
		[player, _amount, false] call grad_moneymenu_fnc_addFunds;
		
		// Display a hint to confirm the withdrawal.
		hint format[(localize "STR_HG_ATM_WITHDRAWN"),([_amount,true] call HG_fnc_currencyToText)];
	};
	// Transfer
	case 2:
	{
	    // Ensure the player has enough funds in their bank account to transfer.
	    if(_amount > ([player, true] call grad_lbm_fnc_getFunds)) exitWith {hint (localize "STR_HG_ATM_CANNOT_TRANSFER");};
		
	    // Find the unit to transfer the money to.
	    private _unit = HG_TEMP_ARRAY select (HG_ATM_PLAYERS_COMBO lbValue (lbCurSel HG_ATM_PLAYERS_COMBO));
		
	    // Subtract the amount from the player's bank account.
	    [player, -_amount, true] call grad_moneymenu_fnc_addFunds;
		
		// Display a hint to confirm the transfer.
		hint format[(localize "STR_HG_ATM_TRANSFERED"),([_amount,true] call HG_fnc_currencyToText),(name _unit)];
		
		// Send the amount to the target unit's bank account.
		[_unit, _amount, true] remoteExecCall ["grad_moneymenu_fnc_addFunds", _unit, false];
	};
};

// Refresh the ATM interface after the transaction.
[] call HG_fnc_atmRefresh;

true;
