#include "HG_Macros.h"
/*
    fn_buyVehicle.sqf
    Author - HoverGuy
    Website - https://northernimpulse.com
    Enhanced by - BrianV1981
    Changes:
    - Replaced HG money handling functions with Grad Money functions.
    - Removed discount logic based on player rank (commented out).
    - Updated for compatibility with Grad Money system.
*/

private["_price", "_discount"];

disableSerialization;

// Get the price of the selected vehicle
_price = HG_VEHICLES_LIST lbValue (lbCurSel HG_VEHICLES_LIST);

// Commented out the discount logic based on player rank
/*
_discount = ((getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "vShopDiscount")) != 0) AND (_price != 0);

if(_discount) then
{
    _price = round(_price - (_price * ((getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "vShopDiscount")) / 100)));
};
*/

// Check if the player has enough money using Grad Money
private _playerFunds = [player, false] call grad_lbm_fnc_getFunds;

if(_playerFunds >= _price) then
{
    private["_shopType", "_spawnPoints", "_spawnPoint"];

    // Determine the shop type and spawn points
    _shopType = HG_VEHICLES_SWITCH lbData (lbCurSel HG_VEHICLES_SWITCH);
    _shopType = _shopType splitString "/";
    _spawnPoints = getArray(getMissionConfig "CfgClient" >> "HG_VehiclesShopCfg" >> (_shopType select 0) >> (_shopType select 1) >> "spawnPoints");
    _spawnPoint = [((_spawnPoints select (HG_VEHICLES_SP lbValue (lbCurSel HG_VEHICLES_SP))) select 1)] call HG_fnc_isItBusy;

    // Check if the spawn point is available
    if(_spawnPoint select 0) then
    {
        private["_classname", "_color"];

        // Deduct the price from the player's Grad Money account
        [player, -_price] call grad_lbm_fnc_addFunds;
        _classname = HG_VEHICLES_LIST lbData (lbCurSel HG_VEHICLES_LIST);
        _color = HG_VEHICLES_COLORS lbData (lbCurSel HG_VEHICLES_COLORS);

        // Close the dialog and spawn the vehicle
        closeDialog 0;
        hint format[(localize "STR_HG_VEHICLE_BOUGHT"), (getText(configFile >> "CfgVehicles" >> _classname >> "displayName")), [_price, true] call HG_fnc_currencyToText];
        [0, player, _classname, (_spawnPoint select 1), nil, _color] remoteExecCall ["HG_fnc_spawnVehicle", 2, false];
    } else {
        titleText [(localize "STR_HG_SPAWN_POINTS_BUSY"), "PLAIN DOWN", 1];
    };
} else {
    titleText [format[(localize "STR_HG_NOT_ENOUGH_MONEY"), [_price, true] call HG_fnc_currencyToText], "PLAIN DOWN", 1];
};

true;
