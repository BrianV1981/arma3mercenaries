#include "HG_Macros.h"
/*
    fn_dialog)nLoadTrader.sqf
    Author - HoverGuy
    Website - https://northernimpulse.com
    Enhanced by - BrianV1981
    Changes:
    - Adapted the script to work with ACE Interaction system.
    - Ensured proper handling of ACE parameters (_target and _caller).
    - Updated function calls to accommodate ACE interaction.
*/

params["_target", "_caller", "_id", "_trader"];  // ACE interaction parameters

// Validate that the trader parameter is a string and is not empty
if ((typeName _trader) != "STRING") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_1");};
if (_trader isEqualTo "") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_2");};

// Check the condition to access the trader
private["_condition", "_isOk"];
_condition = getText(getMissionConfig "CfgClient" >> "HG_TradersCfg" >> _trader >> "conditionToAccess");
_isOk = (_condition isEqualTo "") OR (call compile _condition);
if (!_isOk) exitWith {hint (localize "STR_HG_ACCESS_DENIED");};

// Retrieve the items the trader is interested in
private _interestedIn = getArray(getMissionConfig "CfgClient" >> "HG_TradersCfg" >> _trader >> "interestedIn");
if ((count _interestedIn) isEqualTo 0) exitWith {hint (localize "STR_HG_SHOP_EMPTY_BIS");};

// Disable serialization for working with UI elements
disableSerialization;

// Create and display the trader dialog
createDialog "HG_Trader";

// Initialize handlers and UI elements
HG_SELECTION_HANDLER = [0];
HG_TRADER_HANDLER = [];
HG_PRICE_HANDLER = 0;
HG_TOTAL_HANDLER = 0;
HG_GEAR_SOLD = false;

lbClear HG_TRADER_LIST;  // Clear the listbox before populating it

private["_cfg", "_ind"];

// Populate the trader's list with items
{
    _cfg = [(_x select 0)] call HG_fnc_getConfig;
    _ind = HG_TRADER_LIST lbAdd (getText(configFile >> _cfg >> (_x select 0) >> "displayName"));
	HG_TRADER_LIST lbSetValue [_ind, (_x select 1)];
	HG_TRADER_LIST lbSetTooltip [_ind, [(_x select 1), true] call HG_fnc_currencyToText];
	HG_TRADER_HANDLER pushBack (_x select 0);
} forEach _interestedIn;

HG_TRADER_LIST lbSetCurSel 0;  // Select the first item in the list by default

[] call HG_fnc_refreshTrader;  // Refresh the trader's available items or inventory

true;  // Return true to indicate successful execution
