#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
    Enhanced by - BrianV1981
    Changes:
    - Integrated Grad Money system to ensure compatibility with the current project.
    - Updated to handle unit purchases based on the player's current balance.
    - Preserved the original functionality while streamlining the process.
*/

params["_ctrl","_index","_class","_price","_arr","_cfg","_path"]; // Parameters passed into the function.

disableSerialization; // Disable serialization for UI controls to allow manipulation.

tvClear HG_UNITS_TREE; // Clear the unit tree UI element.

HG_UNITS_ITEM_PIC ctrlSetText "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg"; // Reset the unit preview image.
HG_UNITS_ITEM_TEXT ctrlSetStructuredText parseText format["<t align='center' size='1'>%1</t>",(localize "STR_HG_NOTHING_TO_DISPLAY")]; // Reset the unit description text.

_class = _ctrl lbData _index; // Get the selected unit class from the list box.
_price = getNumber(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "cost"); // Retrieve the cost of the selected unit.

_arr = 
[
    // Original code preserved in comment form:
    // getText(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "uniformClass"),
    // getText(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "backpack"),
    // getArray(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "linkedItems"),
    // getArray(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "weapons"),
    // [getArray(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "items")] call HG_fnc_arrayCount,
    // [getArray(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "magazines")] call HG_fnc_arrayCount

    getText(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "uniformClass"), // Get the uniform class.
    getText(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "backpack"), // Get the backpack class.
    getArray(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "linkedItems"), // Get the linked items.
    getArray(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "weapons"), // Get the weapons.
    [getArray(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "items")] call HG_fnc_arrayCount, // Count the items in the loadout.
    [getArray(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "magazines")] call HG_fnc_arrayCount // Count the magazines in the loadout.
];

if(_price < 0) then
{
    HG_UNITS_PRICE ctrlSetText (localize "STR_HG_DLG_FREE"); // Display "FREE" if the unit cost is less than 0.
} else {
    HG_UNITS_PRICE ctrlSetText ([_price,true] call HG_fnc_currencyToText); // Otherwise, display the unit cost using the currency text function.
};

if([_price,0] call HG_fnc_hasEnoughMoney) then
{
    HG_UNITS_BUY_BTN ctrlEnable true; // Enable the buy button if the player has enough money.
	HG_UNITS_PRICE ctrlSetBackgroundColor [0,1,0,1]; // Set the price background color to green.
} else {
    HG_UNITS_BUY_BTN ctrlEnable false; // Disable the buy button if the player doesn't have enough money.
	HG_UNITS_PRICE ctrlSetBackgroundColor [1,0,0,1]; // Set the price background color to red.
};

{
    if(_forEachIndex in [0,1]) then
	{
	    if(_x != "") then
		{
		    _cfg = [_x] call HG_fnc_getConfig; // Get the configuration for the item.
			_path = HG_UNITS_TREE tvAdd [[],(getText(configFile >> _cfg >> _x >> "displayName"))]; // Add the item to the tree view.
			HG_UNITS_TREE tvSetData[[_path],_x]; // Set the data for the tree view item.
		};
	};
	if(_forEachIndex in [2,3]) then
	{
	    if((count _x) != 0) then 
		{
	        {
		        _cfg = [_x] call HG_fnc_getConfig; // Get the configuration for the weapon or linked item.
			    _path = HG_UNITS_TREE tvAdd [[],(getText(configFile >> _cfg >> _x >> "displayName"))]; // Add it to the tree view.
				HG_UNITS_TREE tvSetData[[_path],_x]; // Set the data for the tree view item.
		    } forEach _x;
		};
	};
	if(_forEachIndex in [4,5]) then
	{
	    {
		    _cfg = [(_x select 0)] call HG_fnc_getConfig; // Get the configuration for the item/magazine.
			_path = HG_UNITS_TREE tvAdd [[],format["%1 x %2",(_x select 1),(getText(configFile >> _cfg >> (_x select 0) >> "displayName"))]]; // Add it to the tree view with the quantity.
			HG_UNITS_TREE tvSetData[[_path],(_x select 0)]; // Set the data for the tree view item.
		} forEach _x;
	};
} forEach _arr;

true; // Return true to indicate the function executed successfully.
