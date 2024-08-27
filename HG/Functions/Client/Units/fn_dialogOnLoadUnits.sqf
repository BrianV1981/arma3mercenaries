#include "HG_Macros.h"
/*
    fn_dialogOnLoadUnits.sqf
    Author - HoverGuy
    Website - https://northernimpulse.com
    Enhanced by - BrianV1981
    Changes:
    - Integrated Grad Money system.
    - Adjusted parameters to ensure compatibility with ACE interaction.
    - Removed unnecessary parameters except for _whatShop.
    - Preserved original code in comments for reference.
*/

// Removed parameters: _target, _caller, _id
// params["_target","_caller","_id","_whatShop"];
params["_whatShop"];  // Now only handling the _whatShop parameter.

if((typeName _whatShop) != "STRING") exitWith {
    hint (localize "STR_HG_ERR_ON_LOAD_1");
};
if(_whatShop isEqualTo "") exitWith {
    hint (localize "STR_HG_ERR_ON_LOAD_2");
};

// Retrieve the list of available units in the specified shop.
private _shopList = "true" configClasses (getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> _whatShop);

// Check if the shop list is empty, and exit with a hint if it is.
if((count _shopList) isEqualTo 0) exitWith {
    hint (localize "STR_HG_SHOP_EMPTY");
};

// Check if the player meets the conditions to access the shop.
private["_condition","_isOk"];
_condition = getText(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> _whatShop >> "conditionToAccess");
_isOk = (_condition isEqualTo "") OR (call compile _condition);
if(!_isOk) exitWith {
    hint (localize "STR_HG_ACCESS_DENIED");
};

// Disable serialization to allow working with UI elements.
disableSerialization;

// Create the unit shop dialog.
createDialog "HG_UnitsShop";

// Store the shop identifier for use elsewhere in the script.
HG_STRING_HANDLER = _whatShop;

// Refresh the units list to display available options in the shop.
[] call HG_fnc_unitsRefresh;

true;
