/*
    fn_adminMenuBtns.sqf
    Author - HoverGuy
    GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/

    Summary:
    This script is part of the HG admin menu system for Arma 3. It allows administrators to perform various in-game actions such as adjusting player XP, kills, cash, bank balance, and ranks, as well as managing a player whitelist. The script uses a switch-case structure to handle different administrative tasks based on the selected mode. It also includes validation checks to ensure input values are valid and provides feedback to the admin via hints.

    Modes:
    0 - Set XP
    1 - Set Kills
    2 - Set Cash
    3 - Set Bank Balance
    4 - Kill Player
    5 - Set Player Rank
    6 - Add UID to Whitelist
    7 - Remove UID from Whitelist
*/

#include "HG_Macros.h"

// Parameters passed to the script: _mode determines the action, _value is the user input
params["_mode", "_value"];

// Disable serialization for handling UI elements
disableSerialization;

// If the mode is 0 (XP), 1 (Kills), 2 (Cash), or 3 (Bank), validate the input value
if (_mode in [0, 1, 2, 3]) then {
    // Get the value based on the mode (XP, Kills, Cash, or Bank)
    _value = [(ctrlText HG_ADM_XP_EDIT), (ctrlText HG_ADM_KILLS_EDIT), (ctrlText HG_ADM_CASH_EDIT), (ctrlText HG_ADM_BANK_EDIT)] select _mode;

    // Exit if the value is empty
    if (_value isEqualTo "") exitWith { hint (localize "STR_HG_VALUE_EMPTY"); };

    // Check if the value is a valid number
    if (!([_value] call HG_fnc_isNumeric)) exitWith { hint (localize "STR_HG_NOT_A_NUMBER"); };

    // Convert the value to a number and check if it's greater than 0
    _value = parseNumber _value;
    if (_value <= 0) exitWith { hint (localize "STR_HG_NEGATIVE_OR_ZERO"); };
};

// Switch-case structure to determine the action based on the mode
switch (_mode) do {
    // Mode 0: Set XP
    case 0: {
        // Exit if the XP system is not enabled
        if (!HG_XP_ENABLED) exitWith { hint (localize "STR_HG_DLG_XP_DISABLED"); };

        // Check if the subtract checkbox is checked
        if (cbChecked HG_ADM_XP_SUB) then {
            // Subtract XP
            [_value, 1] remoteExecCall ["HG_fnc_addOrSubXP", HG_OBJECT, false];
        } else {
            // Add XP
            [_value, 0] remoteExecCall ["HG_fnc_addOrSubXP", HG_OBJECT, false];
        };

        // Reset the XP input field to "1"
        HG_ADM_XP_EDIT ctrlSetText "1";
    };

    // Mode 1: Set Kills
    case 1: {
        // Exit if the kill count system is not enabled
        if (!HG_KILL_COUNT_ENABLED) exitWith { hint (localize "STR_HG_DLG_KILLS_DISABLED"); };

        // Check if the subtract checkbox is checked
        if (cbChecked HG_ADM_KILLS_SUB) then {
            // Subtract kills
            [1, _value] remoteExecCall ["HG_fnc_addOrSubKills", HG_OBJECT, false];
        } else {
            // Add kills
            [0, _value] remoteExecCall ["HG_fnc_addOrSubKills", HG_OBJECT, false];
        };

        // Reset the kills input field to "1"
        HG_ADM_KILLS_EDIT ctrlSetText "1";
    };

    // Mode 2: Set Cash
    case 2: {
        // Check if the subtract checkbox is checked
        if (cbChecked HG_ADM_CASH_SUB) then {
            // Subtract cash
            [_value, 1] remoteExecCall ["HG_fnc_addOrSubCash", HG_OBJECT, false];
        } else {
            // Add cash
            [_value, 0] remoteExecCall ["HG_fnc_addOrSubCash", HG_OBJECT, false];
        };

        // Reset the cash input field to "1"
        HG_ADM_CASH_EDIT ctrlSetText "1";
    };

    // Mode 3: Set Bank Balance
    case 3: {
        // Check if the subtract checkbox is checked
        if (cbChecked HG_ADM_BANK_SUB) then {
            // Subtract from bank balance
            [_value, 1, 1] remoteExecCall ["HG_fnc_addOrSubCash", HG_OBJECT, false];
        } else {
            // Add to bank balance
            [_value, 0, 1] remoteExecCall ["HG_fnc_addOrSubCash", HG_OBJECT, false];
        };

        // Reset the bank input field to "1"
        HG_ADM_BANK_EDIT ctrlSetText "1";
    };

    // Mode 4: Kill Player
    case 4: {
        // Instantly kill the target player
        HG_OBJECT setDamage 1;

        // If the target is not the admin, show a message to the player
        if (HG_OBJECT != player) then {
            [(localize "STR_HG_KILLED_BY_ADMIN")] remoteExecCall ["hint", HG_OBJECT, false];
        };
    };

    // Mode 5: Set Player Rank
    case 5: {
        // Get the selected rank from the combo box
        private _rank = HG_ADM_COMBO lbData (lbCurSel HG_ADM_COMBO);

        // Set the player's rank
        [HG_OBJECT, _rank] remoteExecCall ["HG_fnc_setRank", HG_OBJECT, false];
    };

    // Mode 6: Add UID to Whitelist
    case 6: {
        // Get the UID from the input field
        private _uid = ctrlText HG_WL_UID_EDIT;

        // Exit if the UID is empty
        if (_uid isEqualTo "") exitWith { hint (localize "STR_HG_DLG_WL_UID_EMPTY"); };

        // Check if the UID is numeric
        if (!([_uid] call HG_fnc_isNumeric)) exitWith { hint (localize "STR_HG_DLG_WL_UID_NOT_NUMBER"); };

        // Check if the UID is exactly 17 characters long
        private _length = count _uid;
        if (_length != 17) exitWith { hint format [(localize "STR_HG_DLG_WL_UID_NOT_VALID"), _length]; };

        // Check if the UID is already in the whitelist
        private ["_val", "_sel"];
        _val = HG_WL_SIDE_COMBO lbValue (lbCurSel HG_WL_SIDE_COMBO);
        _sel = HG_WHITELIST select _val;
        if (_uid in _sel) exitWith { hint (localize "STR_HG_DLG_WL_UID_ALREADY"); };

        // Disable controls and show progress information
        HG_WL_UID_LIST ctrlEnable false;
        HG_WL_SIDE_COMBO ctrlEnable false;
        HG_WL_INFO_TEXT ctrlShow true;
        HG_WL_UID_ADD ctrlEnable false;
        HG_WL_UID_REMOVE ctrlEnable false;

        // Show a hint confirming the addition and update the whitelist
        hint format [(localize "STR_HG_DLG_WL_ADDED"), _uid, (HG_WL_SIDE_COMBO lbText (lbCurSel HG_WL_SIDE_COMBO))];
        [(HG_WL_SIDE_COMBO lbData (lbCurSel HG_WL_SIDE_COMBO)), (HG_WL_SIDE_COMBO lbValue (lbCurSel HG_WL_SIDE_COMBO)), _uid] remoteExecCall ["HG_fnc_updateWhitelist", 2, false];
    };

    // Mode 7: Remove UID from Whitelist
    case 7: {
        // Disable controls and show progress information
        HG_WL_UID_LIST ctrlEnable false;
        HG_WL_SIDE_COMBO ctrlEnable false;
        HG_WL_INFO_TEXT ctrlShow true;
        HG_WL_UID_ADD ctrlEnable false;
        HG_WL_UID_REMOVE ctrlEnable false;

        // Show a hint confirming the removal and update the whitelist
        hint format [(localize "STR_HG_DLG_WL_REMOVED"), (HG_WL_UID_LIST lbData (lbCurSel HG_WL_UID_LIST)), (HG_WL_SIDE_COMBO lbText (lbCurSel HG_WL_SIDE_COMBO))];
        [(HG_WL_SIDE_COMBO lbData (lbCurSel HG_WL_SIDE_COMBO)), (HG_WL_SIDE_COMBO lbValue (lbCurSel HG_WL_SIDE_COMBO)), (HG_WL_UID_LIST lbData (lbCurSel HG_WL_UID_LIST))] remoteExecCall ["HG_fnc_updateWhitelist", 2, false];
    };
};

// Refresh the player list unless the action was adding or removing a UID (modes 6 and 7)
if (!(_mode in [6, 7])) then {
    [] call HG_fnc_refreshPlayers;
};

// Return true to indicate successful execution
true;
