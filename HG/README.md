# Project Summary: HG Simple Shop Integration Into arma3mercenaries

## Overview

This wiki page details the comprehensive updates and integrations made to various shops, garages, and systems within the Arma 3 mission titled 'arma3mercenaries.' The key focus areas include integrating the Grad Money system, ensuring compatibility with the ACE Interaction menu, and optimizing the overall functionality and user experience across all modules.

## Summary of Processes and Integrations

### Integration of Grad Money
All scripts were updated to use Grad Money functions for checking and deducting funds. This ensures consistency and compatibility across all transactions in the vehicle shop, item shop, gear shop, trader shop, and more. Functions like `grad_moneymenu_fnc_getFunds` and `grad_moneymenu_fnc_addFunds` replace existing HG money functions for handling balances and transactions.

### ACE Interaction Setup
The interaction menu was configured to correctly trigger the shop and garage functionalities. This involved creating actions in ACE that call the shop's load and unload functions, ensuring that the interfaces and item lists are populated as expected. Critical parameters were adjusted to align with the ACE Interaction system.

### Critical Parameter Adjustment
The final crucial step was adjusting parameters, particularly in scripts like `fn_dialogOnLoadVehicles.sqf` and `fn_dialogOnLoadItems.sqf`, to ensure they align correctly with the ACE Interaction system. Properly handling these parameters allows for the correct population of lists and displays when accessed through ACE.

## Key Files Updated Across Various Modules

### Item Shop Update Summary

- **`fn_dialogOnLoadItems.sqf`**: Simplified parameters to align with ACE requirements and integrated Grad Money.
- **`fn_itemBtns.sqf`**: Updated to use Grad Money for item purchases.
- **`fn_itemsRefresh.sqf`**: Ensured correct item list refresh based on Grad Money balance.
- **`fn_itemSelectionChanged.sqf`**: Integrated Grad Money formatting for price displays.
- **`HG_ItemsShop.h`**: Linked UI elements to Grad Money, ensuring correct fund deductions.

### Gear Shop Update Summary

- **`fn_dialogOnLoadGear.sqf`**: Streamlined parameters and integrated Grad Money.
- **`fn_itemBtns.sqf`**: Updated logic for Grad Money-based purchases.
- **`fn_itemsRefresh.sqf`**: Ensured correct gear shop refresh based on player funds.
- **`fn_itemSelectionChanged.sqf`**: Displayed correct gear item information and pricing.
- **`HG_GearShop.h`**: Integrated UI elements with Grad Money and ACE Interaction.

### Vehicle Shop Update Summary

- **`fn_buyVehicle.sqf`**: Integrated Grad Money for vehicle purchases.
- **`fn_dialogOnLoadVehicles.sqf`**: Adjusted for ACE compatibility and Grad Money.
- **`fn_vehicleSelectionChanged.sqf`**: Displayed correct vehicle details and pricing.
- **`HG_VehiclesShop.h`**: Linked UI elements to Grad Money, ensuring proper functionality.

### Unit Shop Update Summary

- **`fn_unitsComboChanged.sqf`**: Simplified script and integrated Grad Money.
- **`fn_unitsRefresh.sqf`**: Ensured correct unit list refresh based on Grad Money.
- **`fn_unitsTreeChanged.sqf`**: Displayed correct unit details and pricing.
- **`fn_dialogOnLoadUnits.sqf`**: Adjusted parameters for ACE compatibility.
- **`HG_UnitsShop.h`**: Linked UI elements to Grad Money for unit purchases.

### Dealer Shop Update Summary

- **`fn_dealerSell.sqf`**: Integrated Grad Money for vehicle sales.
- **`fn_dialogOnLoadDealer.sqf`**: Adjusted parameters for ACE compatibility.
- **`fn_refreshDealer.sqf`**: Simplified refresh logic for dealer inventory.
- **`fn_dealerListChanged.sqf`**: Displayed correct vehicle details and pricing.
- **`HG_DealersCfg.h`**: Ensured compatibility with Grad Money.
- **`HG_Dealer.h`**: Updated UI elements for ACE and Grad Money.

### Trader Shop Update Summary

- **`fn_gearItem.sqf`**: Integrated Grad Money for item transactions.
- **`fn_refreshTrader.sqf`**: Ensured correct trader inventory refresh.
- **`fn_traderBtns.sqf`**: Updated button actions for ACE and Grad Money.
- **`fn_traderTreeChanged.sqf`**: Displayed correct item details and pricing.
- **`fn_dialogOnLoadTrader.sqf`**: Adjusted for ACE compatibility and Grad Money.
- **`fn_dialogOnUnloadTrader.sqf`**: Ensured data integrity upon closing.
- **`HG_TradersCfg.h`**: Updated trader inventory for Grad Money.
- **`HG_Trader.h`**: Ensured correct UI display and functionality.

### Vehicle Garage Update Summary

- **`fn_storeVehicleClient.sqf`**: Integrated Grad Money for vehicle storage.
- **`fn_garageSpawn.sqf`**: Adjusted for Grad Money and optimized spawning.
- **`fn_refreshGarage.sqf`**: Enhanced refresh logic for vehicle management.
- **`fn_delVehicle.sqf`**: Updated deletion process with Grad Money.
- **`fn_fillGarage.sqf`**: Optimized garage filling process.
- **`fn_dialogOnLoadGarage.sqf`**: Adjusted for ACE compatibility.
- **`HG_GaragesCfg.h`**: Updated configurations for broader vehicle management.
- **`HG_Garage.h`**: Updated UI elements for Grad Money and ACE.

### ATM Update Summary

- **`fn_atmReceived.sqf`**: Integrated Grad Money for fund transfers.
- **`fn_atmRefresh.sqf`**: Updated to display Grad Money balances.
- **`fn_dialogOnLoadATM.sqf`**: Initialized ATM dialog with Grad Money data.
- **`fn_atmBtns.sqf`**: Updated button actions for deposits, withdrawals, and transfers.
- **`HG_Macros.h`**: Updated macros for Grad Money integration.
- **`HG_ATM.h`**: Enhanced UI elements for Grad Money compatibility.

## Critical Final Steps

### Grad Money Integration
All scripts and functions related to shops, garages, and ATMs were updated to use the Grad Money system. This ensures consistency in how money is managed across the game.

### ACE Interaction Setup
Parameters and scripts were adjusted to ensure that all shops and garages could be accessed and used via the ACE Interaction menu. This involved aligning functions and parameters to work seamlessly within the ACE framework.

### UI Optimization
UI elements across all modules were updated to ensure they were correctly linked to the Grad Money system and provided a smooth and responsive user experience.

## Conclusion
Through systematic updates, integration of the Grad Money system, and ensuring ACE Interaction compatibility, we have overhauled the entire shopping, garage, and ATM systems within HG simple shops. These updates ensure that all related functionalities between HG simple shops, grad-moneyMenu, and grad-listBuyMenu are handled consistently and efficiently, providing players with a seamless experience.



<img align="center" src="https://www.dropbox.com/s/7c108klxo44ysac/Simple-Shops.png?raw=1">

<h2 align="center">Documentation</h2>
<p align="center">
  <b>
    <a href="https://github.com/Ppgtjmad/SimpleShops/wiki">Wiki</a>
  </b>
</p>

<h2 align="center">Issues</h2>
<p align="center">
  <b>
    <a href="https://github.com/Ppgtjmad/SimpleShops/issues">Tickets</a>
  </b>
</p>

<h2 align="center">Credits</h2>
<p align="center">
  <b>
    Icons<br/>
    <a href="http://flaticons.net/" target="_blank">FlatIcons</a><br/>
    Spanish translation<br/>
    <a href="https://github.com/TteMerino" target="_blank">TteMerino</a><br/>
    Chinese translation<br/>
    <a href="http://steamcommunity.com/profiles/76561198112435564/" target="_blank">Atlas1205</a> | <a href="https://steamcommunity.com/id/1625592417/" target="_blank">strayer-迷幻</a><br/>
    Russian translation<br/>
    <a href="https://forums.bohemia.net/profile/1166121-vitalyturbovaz/" target="_blank">VitalyTurboVaz</a><br/>
    Logo<br/>
    <a href="http://steamcommunity.com/profiles/76561198030800949/" target="_blank">N3V3RD134l0N3</a>
  </b>
</p>

<h2 align="center">Donate</h2>
<p align="center">
  <b>
    Liking my work? Please consider donating some BEP20 crypto, even little helps a ton!<br/>
	  <a href="https://link.trustwallet.com/send?coin=20000714&address=0xF1E4BbD02607273AAF401A8D541884b6DC4c6990" target="_blank">Trust Wallet</a><br/>
	  <a href="https://bscscan.com/address/0xF1E4BbD02607273AAF401A8D541884b6DC4c6990" target="_blank">0xF1E....4c6990</a>
  </b>
</p>

<h2 align="center">License</h2>
<p align="center">
  <a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-nc-sa/4.0/88x31.png"/></a><br/>This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/4.0/">Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License</a>.
</p>
