#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
    Enhanced By - BrianV1981
    Changes:
    - Integrated Grad Money system to check for available funds before purchasing gear.
    - Added a dynamic message for insufficient funds.
    - Replaced the HG cash handling function with the Grad Money function.
    - Corrected the confirmation message to display the correct amount spent.
    - Ensured compatibility with Grad Money system throughout the purchase process.
    - Removed discount calculation and parameter.
    - Added comments for clarity and understanding.
*/

params[["_price",0]];  // Removed _discount from params

// Calculate the total price based on the selected gear
{
    if((count _x) != 0) then
    {
        _price = _price + (_x select 1);
    };
} forEach HG_GEAR_PREVIEW;

// Check if the player has enough funds using Grad Money
private _currentFunds = player call grad_lbm_fnc_getCurrentFunds;
if (_currentFunds < _price) then
{
    // Show message if the player doesn't have enough funds
    titleText ["Purchase canceled due to insufficient funds.", "PLAIN DOWN", 1]; // Add a cancellation message
    closeDialog 0; // Close the dialog
    false
} else {
    // Subtract the total price from the player's funds using Grad Money
    if(_price > 0) then
    {
        [player, -_price] call grad_moneymenu_fnc_addFunds;
    };

    // If HG_CRATE_ENABLED is true, fill the player's box with the purchased items
    if(HG_CRATE_ENABLED) then
    {
        [] call HG_fnc_fillBox;
    };

    // Mark the gear as bought and save the player's current loadout
    HG_GEAR_BOUGHT = true;
    HG_GEAR_SAVED = 
    [
        [(uniform player),(uniformItems player)],
        [(vest player),(vestItems player)],
        [(backpack player),(backpackItems player)],
        (goggles player),
        (headgear player),
        [(primaryWeapon player),(primaryWeaponMagazine player),(primaryWeaponItems player)],
        [(secondaryWeapon player),(secondaryWeaponMagazine player),(secondaryWeaponItems player)],
        [(handgunWeapon player),(handgunMagazine player),(handgunItems player)]
    ];
    HG_GEAR_PREVIEW = [[],[],[],[],[],[],[],[]];

    // Close the dialog and display a confirmation message
    closeDialog 0;
    titleText [format["Purchase successful! Amount spent: %1", _price],"PLAIN DOWN",1];
    
    true
};

// Commented out HG Money system references
/*
private _balance = player getVariable HG_CASH_VAR;

if(_balance >= _price) then
{
    _hasEnough = true;
};

if(_price > 0) then
{
    [player, -_price] call HG_fnc_addOrSubCash;
};
*/
