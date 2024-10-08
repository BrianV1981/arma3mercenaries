#include "HG_Macros.h"
/*
    fn_traderBtns.sqf
    Author - HoverGuy
    GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
    Enhanced By - BrianV1981

    Changes:
    - Integrated Grad Money system for payouts.
    - Modified the "Sell" case to handle the transaction using grad-money-menu funds.
    - Added detailed comments to explain the script process.

    Summary:
    This script is responsible for handling the trader button interactions within the trader dialog. 
    The integration with the Grad Money system ensures that players are paid using the Grad funds 
    when they sell items to the trader. This is necessary for consistency in the game's economy, 
    especially when using multiple systems that need to interact seamlessly.

    Script Process:
    - The script listens for button interactions (Subtract, Add, Sell) within the trader dialog.
    - Depending on the button pressed, it updates the quantity of items to be sold or processes the sale.
    - When selling items, the script now adds the corresponding funds to the player's Grad account, 
      ensuring that the transaction is reflected correctly in the player's in-game balance.
*/

params["_mode"];

switch(_mode) do
{
    // Subtract quantity
    case 0:
    {
        private _qty = parseNumber(ctrlText HG_TRADER_QTY);  // Get the current quantity from the UI
        _qty = _qty - 1;  // Decrease the quantity by 1
        if(_qty <= 0) then {_qty = 1;};  // Ensure the quantity doesn't go below 1
        
        HG_TOTAL_HANDLER = _qty * HG_PRICE_HANDLER;  // Update the total price
        
        // Update the UI with the new quantity and total price
        HG_TRADER_QTY ctrlSetText str _qty;
        HG_TRADER_TOTAL ctrlSetText format[(localize "STR_HG_DLG_TR_TOTAL"),([HG_TOTAL_HANDLER,true] call HG_fnc_currencyToText)];
    };
    
    // Add quantity
    case 1:
    {
        private["_qty","_max"];
    
        _qty = parseNumber(ctrlText HG_TRADER_QTY);  // Get the current quantity from the UI
        _max = HG_TRADER_TREE tvValue (tvCurSel HG_TRADER_TREE);  // Get the maximum allowed quantity from the selected tree item
        _qty = _qty + 1;  // Increase the quantity by 1
        if(_qty > _max) then {_qty = _max;};  // Ensure the quantity doesn't exceed the maximum
        
        HG_TOTAL_HANDLER = _qty * HG_PRICE_HANDLER;  // Update the total price
        
        // Update the UI with the new quantity and total price
        HG_TRADER_QTY ctrlSetText str _qty;
        HG_TRADER_TOTAL ctrlSetText format[(localize "STR_HG_DLG_TR_TOTAL"),([HG_TOTAL_HANDLER,true] call HG_fnc_currencyToText)];
    };
    
    // Sell item(s)
    case 2:
    {
        // If no total handler, exit (logic to prevent selling items with no value)
        //if(HG_TOTAL_HANDLER isEqualTo 0) exitWith {hint (localize "STR_HG_DLG_TR_NOT_INTERESTED_BIS");};
    
        private["_path","_item","_qty"];
        
        _path = tvCurSel HG_TRADER_TREE;  // Get the currently selected path in the tree
        _item = HG_TRADER_TREE tvData _path;  // Get the item data from the selected path
        _qty = parseNumber(ctrlText HG_TRADER_QTY);  // Get the quantity from the UI
        _cfg = [_item] call HG_fnc_getConfig;  // Get the config data for the item
        
        // If the selected path has three levels (indicating a specific item is selected)
        if((count _path) isEqualTo 3) then
        {
            if((HG_TRADER_TREE tvCount _path) isEqualTo 0) then
            {
                _path deleteAt 2;
                private _parentItem = HG_TRADER_TREE tvData _path;  // Get the parent item
                
                // Handle the removal of weapon attachments or items associated with the parent weapon
                switch(_parentItem) do
                {
                    case(primaryWeapon player): 
                    {
                        player removePrimaryWeaponItem _item;
                    };
                    case(secondaryWeapon player): 
                    {
                        player removeSecondaryWeaponItem _item;
                    };
                    case(handgunWeapon player): 
                    {
                        player removeHandgunItem _item;
                    };
                    default 
                    {
                        [_parentItem,_item,_qty] call HG_fnc_gearItem;
                    };
                };
            };
        } else {
            [_item,_qty] call HG_fnc_gearHandler;  // Handle the item removal for general gear
        };
        
        // Pay the player using Grad funds
        [player, HG_TOTAL_HANDLER] call grad_moneymenu_fnc_addFunds;
        hint format[(localize "STR_HG_DLG_TR_SOLD"),_qty,(getText(configFile >> _cfg >> _item >> "displayName")),[HG_TOTAL_HANDLER,true] call HG_fnc_currencyToText];
        
        HG_GEAR_SOLD = true;
        HG_SELECTION_HANDLER = _path;  // Save the selected path for refreshing the trader UI
        [] call HG_fnc_refreshTrader;  // Refresh the trader's available items or inventory
    };
};

true;
