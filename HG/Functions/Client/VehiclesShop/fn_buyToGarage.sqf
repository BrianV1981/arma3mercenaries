#include "HG_Macros.h"
/*
    fn_buyToGarage.sqf
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

private ["_price"];

disableSerialization;

// Get the price of the selected vehicle
_price = HG_VEHICLES_LIST lbValue (lbCurSel HG_VEHICLES_LIST);

// Check if the player has enough money using Grad Money
private _playerFunds = [player, false] call grad_lbm_fnc_getFunds;

if (_playerFunds >= _price) then
{
    // Deduct the price from the player's Grad Money account
    [player, -_price] call grad_lbm_fnc_addFunds;

    // Get the selected vehicle classname and color
    private ["_classname", "_color"];
    _classname = HG_VEHICLES_LIST lbData (lbCurSel HG_VEHICLES_LIST);
    _color = HG_VEHICLES_COLORS lbData (lbCurSel HG_VEHICLES_COLORS);

    // Close the dialog
    closeDialog 0;

    // Inform the player of the successful purchase
    hint format[(localize "STR_HG_VEHICLE_BOUGHT_TO_GARAGE"), (getText(configFile >> "CfgVehicles" >> _classname >> "displayName")), [_price, true] call HG_fnc_currencyToText];

    // Store the vehicle in the garage
    [0, player, _classname, nil, _color] remoteExecCall ["HG_fnc_storeVehicleServer", 2, false];
}
else
{
    // Inform the player they don't have enough money
    titleText [format[(localize "STR_HG_NOT_ENOUGH_MONEY"), [_price, true] call HG_fnc_currencyToText], "PLAIN DOWN", 1];
};

true;
