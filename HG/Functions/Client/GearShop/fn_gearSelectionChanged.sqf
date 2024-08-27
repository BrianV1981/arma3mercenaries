#include "HG_Macros.h"
/*
    fn_gearSelectionChanged.sqf
    Author - HoverGuy
    Website - https://northernimpulse.com
    Enhanced by - BrianV1981
    Changes:
    - Integrated Grad Money system to check for available funds before purchasing gear.
    - Added a dynamic message for insufficient funds.
    - Replaced the HG cash handling function with the Grad Money function.
    - Corrected the confirmation message to display the correct amount spent.
    - Ensured compatibility with Grad Money system throughout the purchase process.
    - Removed discount calculation based on player's rank.
    - Updated to use HG_fnc_currencyToText for consistent currency formatting.
    - Added comments for clarity and understanding.
*/

// This script manages gear selection within the shop interface.
// It calculates the total price of selected gear items and enables or disables the purchase button 
// based on the player's available funds.

params["_ctrl", "_index", ["_price", 0], ["_count", 0]];  // Removed '_discount' parameter as it is no longer needed.

disableSerialization; // Required when working with UI elements outside of a scheduled environment.

// Handle the gear selection based on the data associated with the selected listbox item.
[(_ctrl lbData _index)] call HG_fnc_handleGear;

// Iterate through the gear preview items to calculate the total price and count items without a price.
{
    if ((count _x) != 0) then
    {
        // If the item array is not empty, add its price to the total.
        _price = _price + (_x select 1);
    }
    else
    {
        // If the item array is empty, increment the count of such items.
        _count = _count + 1;
    };
} forEach HG_GEAR_PREVIEW;  // 'HG_GEAR_PREVIEW' is assumed to be an array of selected gear items.

// --- Removed Discount Logic ---
// The discount calculation based on the player's rank has been removed 
// to simplify the pricing system and avoid complications with integrating the Grad Money system.

// Determine whether to enable or disable the "Buy" button based on the total price and player's funds.

// Fetch the player's current available funds using the Grad Money system.
private _playerFunds = [player, false] call grad_lbm_fnc_getFunds;  // Corrected function to get player's wallet funds.

// Check conditions:
// 1. If all items in the gear preview have no price (i.e., '_count' equals the number of items), likely meaning no items are selected for purchase.
// 2. If the player's available funds are less than the total price.
if ( ((count HG_GEAR_PREVIEW) isEqualTo _count) || (_playerFunds < _price) ) then
{
    // Disable the "Buy" button as the player cannot make a purchase.
    HG_GEAR_BUY ctrlEnable false;
}
else
{
    // Enable the "Buy" button as the player has sufficient funds.
    HG_GEAR_BUY ctrlEnable true;
};

// UI display that shows the total price of selected gear items.
private _formattedPrice = [_price, true] call HG_fnc_currencyToText;  // Formats the price into a readable currency format using HG function.

// Set the text of the total price display control to show the calculated total price.
HG_GEAR_TOTAL ctrlSetText format ["Total: %1", _formattedPrice];

true;  // Return true indicating successful execution of the script.
