#include "HG_Macros.h"
/*
    fn_itemBtns.sqf
    Author - HoverGuy
    GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
    Enhanced by - BrianV1981
    Changes:
    - Removed discount logic based on player rank.
    - Replaced HG money handling functions with Grad Money functions.
    - Updated for compatibility with Grad Money system.
    - Added comments to explain changes and logic.
*/
params["_mode","_price","_qty"];

disableSerialization;

// Get the selected item's price and current quantity
_price = HG_ITEMS_ITEM_LIST lbValue (lbCurSel HG_ITEMS_ITEM_LIST);
_qty = parseNumber(ctrlText HG_ITEMS_AMOUNT);

switch(_mode) do
{
    // Add quantity
    case 0: 
	{
	    _qty = _qty + 1;
		
		HG_ITEMS_AMOUNT ctrlSetText str _qty;
		HG_ITEMS_TOTAL ctrlSetText format[(localize "STR_HG_DLG_IS_TOTAL"),([(_price * _qty),true] call HG_fnc_currencyToText)];
	};
	// Subtract quantity
	case 1:
	{
	    _qty = _qty - 1;
		if(_qty <= 0) then {_qty = 1;};
		
		HG_ITEMS_AMOUNT ctrlSetText str _qty;
		HG_ITEMS_TOTAL ctrlSetText format[(localize "STR_HG_DLG_IS_TOTAL"),([(_price * _qty),true] call HG_fnc_currencyToText)];
	};
	// Buy the selected item
	case 2:
	{
	    _price = _price * _qty;
		
	    // Check if the player has enough money using Grad Money
	    private _playerFunds = [player, false] call grad_lbm_fnc_getFunds;
	    
	    if(_playerFunds >= _price) then
		{
		    private _selectedItem = HG_ITEMS_ITEM_LIST lbData (lbCurSel HG_ITEMS_ITEM_LIST);
			
		    if([_selectedItem,true,_qty] call HG_fnc_handleItems) then
			{
			    private["_config","_displayName"];
				_config = [_selectedItem] call HG_fnc_getConfig;
				_displayName = getText(configFile >> _config >> _selectedItem >> "displayName");
				if(_price > 0) then
				{
				    // Subtract the price from the player's Grad Money account
				    [player, -_price] call grad_moneymenu_fnc_addFunds;
				};
				hint format[(localize "STR_HG_ITEM_BOUGHT"),_qty,_displayName,if(_price <= 0) then {(localize "STR_HG_DLG_FREE")} else {([_price,true] call HG_fnc_currencyToText)}];
			    HG_ITEMS_BOUGHT = true;
			} else {
			    hint (localize "STR_HG_INVENTORY_FULL");
			};
		} else {
		    hint format[(localize "STR_HG_NOT_ENOUGH_MONEY"),([_price,true] call HG_fnc_currencyToText)];
		};
	};
};

true;
