#include "HG_Macros.h"
/*
    fn_unitsTreeChanged.sqf
    Author - HoverGuy
    Website - https://northernimpulse.com
    Enhanced By - BrianV1981
    Changes:
    - Updated script to integrate with Grad Money for unit purchases.
    - Enhanced unit list population logic.
    - Ensured that unit costs are displayed and managed consistently with other shops.
*/

private["_shopList","_ind"];

disableSerialization;

// Clear the unit switch listbox before populating it
lbClear HG_UNITS_UNIT_SWITCH;

// Fetch the list of units available in the shop configuration
_shopList = "true" configClasses (getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER);

// Iterate over each unit in the shop list and add it to the listbox
{
    _ind = HG_UNITS_UNIT_SWITCH lbAdd (getText(_x >> "displayName")); // Add the unit to the listbox with its display name
	HG_UNITS_UNIT_SWITCH lbSetPicture [_ind,[getText(_x >> "rank"),"texture"] call BIS_fnc_rankParams]; // Set the rank texture picture
	HG_UNITS_UNIT_SWITCH lbSetData [_ind,(configName _x)]; // Store the unit's config name
	HG_UNITS_UNIT_SWITCH lbSetValue [_ind,(getNumber(_x >> "cost"))]; // Set the cost of the unit as its value
} forEach _shopList;

// Ensure the first unit in the list is selected by default
HG_UNITS_UNIT_SWITCH lbSetCurSel 0;

true;
