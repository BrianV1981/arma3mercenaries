#include "HG_Macros.h"
/*
    fn_dialogOnLoadItems.sqf
    Author - HoverGuy
    Enhanced by - BrianV1981
    Website - https://northernimpulse.com
    Changes:
    - Updated parameter handling to ensure compatibility with ACE interaction.
    - Simplified the parameter list to improve reliability when triggered via ACE interaction.
    - Enhanced debugging and error handling for smoother operation.
*/

params["_whatShop"];

if ((typeName _whatShop) != "STRING") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_1");};
if (_whatShop isEqualTo "") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_2");};

private _shopList = "true" configClasses (getMissionConfig "CfgClient" >> "HG_ItemsShopCfg" >> _whatShop);
if ((count _shopList) isEqualTo 0) exitWith {hint (localize "STR_HG_SHOP_EMPTY");};

private["_condition","_isOk"];
_condition = getText(getMissionConfig "CfgClient" >> "HG_ItemsShopCfg" >> _whatShop >> "conditionToAccess");
_isOk = (_condition isEqualTo "") OR (call compile _condition);
if (!_isOk) exitWith {hint (localize "STR_HG_ACCESS_DENIED");};

disableSerialization;

createDialog "HG_ItemsShop";

lbClear HG_ITEMS_ITEM_SWITCH;

HG_ITEMS_BOUGHT = false;

private "_ind";
{
    _ind = HG_ITEMS_ITEM_SWITCH lbAdd (getText(_x >> "displayName"));
    HG_ITEMS_ITEM_SWITCH lbSetData [_ind, format ["%1/%2", _whatShop, (configName _x)]];
} forEach _shopList;

HG_ITEMS_ITEM_SWITCH lbSetCurSel 0;

true;
