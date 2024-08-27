# Directions for Installation

## ACE Interactions for HG Shops and Virtual Garage in Arma 3

### Step 1: Modify the HG Functions
To integrate ACE interactions with the HG Virtual Garage, you need to modify the following files:

- HG\Functions\Client\Garage\fn_dialogOnLoadGarage.sqf
- HG\Functions\Client\Garage\fn_storeVehicleClient.sqf

Replace the parameters at the beginning of both files:

Original:
params["_target","_caller","_id","_garage"];

Updated:
params["_garage"];

### Step 2: Update the ACE AddAction Script

This script adds several ACE interaction actions to an object named `garage_4` in Arma 3, allowing players to interact with the HG Virtual Garage system through the ACE menu. Specifically, it provides options for:

- Opening the Garage dialog.
- Parking a vehicle in the Garage.



#### Name the Object in the Editor
1. Open the Arma 3 editor.
2. Select the object you want to attach the actions to (e.g., a vehicle, building, etc.).
3. Set the Variable Name to `shop_1`.

#### Modify the HG Functions:
- Open the HG\Functions\Client\Garage\fn_dialogOnLoadGarage.sqf and HG\Functions\Client\Garage\fn_storeVehicleClient.sqf files.
- Replace the params["_target","_caller","_id","_garage"]; line with params["_garage"]; in both files.

#### Update the ACE AddAction Script:
- Copy the ACE AddAction script provided into your mission’s initPlayerLocal.sqf or other appropriate initialization file.



Directions for Installation:

Name the Object in the Editor:

- Open the Arma 3 editor.
- Select the object you want to attach the actions to (e.g., a vehicle, building, etc.).
- In the object's properties, set the Variable Name to shop_1.


Put this in the init field of an object named shop_1:

private _actItemsShop = [
    (localize "STR_HG_ITEMS_SHOP"),
    (localize "STR_HG_ITEMS_SHOP"),
    "HG\UI\Icons\money.paa",
    {["HG_DefaultShop"] call HG_fnc_dialogOnLoadItems},
    {(alive player) && !dialog},
    {},[],[],3
] call ace_interact_menu_fnc_createAction;
[shop_1, 0, ["ACE_MainActions"], _actItemsShop] call ace_interact_menu_fnc_addActionToObject;

private _actGearShop = [
    (localize "STR_HG_GEAR_SHOP"),
    (localize "STR_HG_GEAR_SHOP"),
    "HG\UI\Icons\money.paa",
    {["HG_DefaultShop"] call HG_fnc_dialogOnLoadGear},
    {(alive player) && !dialog},
    {},[],[],3
] call ace_interact_menu_fnc_createAction;
[shop_1, 0, ["ACE_MainActions"], _actGearShop] call ace_interact_menu_fnc_addActionToObject;

private _actVehiclesShop = [
    (localize "STR_HG_VEHICLES_SHOP"),
    (localize "STR_HG_VEHICLES_SHOP"),
    "HG\UI\Icons\money.paa",
    {["HG_DefaultShop"] call HG_fnc_dialogOnLoadVehicles},
    {(alive player) && !dialog},
    {},[],[],3
] call ace_interact_menu_fnc_createAction;
[shop_1, 0, ["ACE_MainActions"], _actVehiclesShop] call ace_interact_menu_fnc_addActionToObject;

private _actUnitsShop = [
    (localize "STR_HG_UNITS_SHOP"),
    (localize "STR_HG_UNITS_SHOP"),
    "HG\UI\Icons\units.paa",
    {["HG_DefaultShop"] call HG_fnc_dialogOnLoadUnits},
    {(alive player) && !dialog},
    {},[],[],3
] call ace_interact_menu_fnc_createAction;
[shop_1, 0, ["ACE_MainActions"], _actUnitsShop] call ace_interact_menu_fnc_addActionToObject;

private _actTrader = [
    (localize "STR_HG_TRADER"),
    (localize "STR_HG_TRADER"),
    "HG\UI\Icons\money.paa",
    {["HG_DefaultTrader"] call HG_fnc_dialogOnLoadTrader},
    {(alive player) && !dialog},
    {},[],[],3
] call ace_interact_menu_fnc_createAction;
[shop_1, 0, ["ACE_MainActions"], _actTrader] call ace_interact_menu_fnc_addActionToObject;

private _actDealer = [
    (localize "STR_HG_DEALER"),
    (localize "STR_HG_DEALER"),
    "HG\UI\Icons\car.paa",
    {["HG_DefaultDealer"] call HG_fnc_dialogOnLoadDealer},
    {(alive player) && !dialog},
    {},[],[],3
] call ace_interact_menu_fnc_createAction;
[shop_1, 0, ["ACE_MainActions"], _actDealer] call ace_interact_menu_fnc_addActionToObject;

private _actGarage = [
    (localize "STR_HG_GARAGE"),
    (localize "STR_HG_GARAGE"),
    "HG\UI\Icons\garage.paa",
    {["HG_DefaultGarage"] call HG_fnc_dialogOnLoadGarage},
    {(alive player) && !dialog},
    {},[],[],3
] call ace_interact_menu_fnc_createAction;
[shop_1, 0, ["ACE_MainActions"], _actGarage] call ace_interact_menu_fnc_addActionToObject;

private _actParkVehicle = [
    (localize "STR_HG_GARAGE_PARK"),
    (localize "STR_HG_GARAGE_PARK"),
    "HG\UI\Icons\garage.paa",
    {["HG_DefaultGarage"] call HG_fnc_storeVehicleClient},
    {(alive player) && !dialog},
    {},[],[],3
] call ace_interact_menu_fnc_createAction;
[shop_1, 0, ["ACE_MainActions"], _actParkVehicle] call ace_interact_menu_fnc_addActionToObject;

private _actATM = [
    (localize "STR_HG_ATM"),
    (localize "STR_HG_ATM"),
    "HG\UI\Icons\atm.paa",
    {call HG_fnc_dialogOnLoadATM},
    {(alive player) && !dialog},
    {},[],[],3
] call ace_interact_menu_fnc_createAction;
[shop_1, 0, ["ACE_MainActions"], _actATM] call ace_interact_menu_fnc_addActionToObject;

Alternatively, you can:

- Open the Arma 3 editor.
- Select the object you want to attach the actions to (e.g., a vehicle, building, etc.).
- Set the Variable Name to a recognizable name, like shop_1.

Create the Script:

- Create a new script file named initShopActions.sqf in your mission’s scripts folder.
- Copy the Following Code into initShopActions.sqf:
