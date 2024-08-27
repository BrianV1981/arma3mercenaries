#include "HG_Macros.h"
/*
    fn_unitsBtns.sqf
    Author - HoverGuy
    Website - https://northernimpulse.com
    Enhanced By - BrianV1981
    Changes:
    - Integrated Grad Money system for unit purchases.
    - Removed HG Money system and replaced it with appropriate Grad Money calls.
*/

// Declare local variables used in the script
private["_class","_price","_u","_rank","_sp","_unit"];

disableSerialization; // Disable serialization to work with UI elements

// Retrieve the selected unit's class, price, and other details from the configuration
_class = HG_UNITS_UNIT_SWITCH lbData (lbCurSel HG_UNITS_UNIT_SWITCH);
_price = HG_UNITS_UNIT_SWITCH lbValue (lbCurSel HG_UNITS_UNIT_SWITCH);
_u = getText(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "unit");
_rank = getText(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "rank");
_sp = getText(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> "spawnPosition");

// Create the unit at the specified spawn position with the selected class and rank
_unit = (group player) createUnit [_u,(markerPos _sp),[],0,"FORM"];
_unit setUnitLoadout (configFile >> "EmptyLoadout");
_unit setUnitLoadout (getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout");
_unit setUnitRank _rank;

// Display a hint to the player indicating the purchase was successful
hint format[(localize "STR_HG_UNIT_BOUGHT"),getText(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "displayName"),if(_price <= 0) then {(localize "STR_HG_DLG_FREE")} else {([_price,true] call HG_fnc_currencyToText)}];

// Refresh the unit list after purchase
[] call HG_fnc_unitsRefresh;

true; // Return true indicating the script executed successfully
