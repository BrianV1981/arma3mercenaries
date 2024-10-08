#include "HG_Macros.h"
/*
    Author - HoverGuy
    GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
	Enhance By - BrianV1981
	params["_target","_caller","_id","_garage"]; ///original params

// This is the ACE addAction code for the object named garage_4

// Define the action for opening the garage dialog
private _actOpenGarage = [(localize "STR_HG_GARAGE"),(localize "STR_HG_GARAGE"),"HG\UI\Icons\garage.paa",{["HG_DefaultGarage"] call HG_fnc_dialogOnLoadGarage},{(alive player) && !dialog},{},[],[],3] call ace_interact_menu_fnc_createAction;
[garage_4,0,["ACE_MainActions"],_actOpenGarage] call ace_interact_menu_fnc_addActionToObject;

// Define the action for parking a vehicle in the garage
private _actParkVehicle = [(localize "STR_HG_GARAGE_PARK"),(localize "STR_HG_GARAGE_PARK"),"HG\UI\Icons\garage.paa",{["HG_DefaultGarage"] call HG_fnc_storeVehicleClient},{(alive player) && !dialog},{},[],[],3] call ace_interact_menu_fnc_createAction;
[garage_4,0,["ACE_MainActions"],_actParkVehicle] call ace_interact_menu_fnc_addActionToObject;


//////////////////////alll ace interactions for object named shop_1///////////

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

	
*/
params["_garage"];
if((typeName _garage) != "STRING") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_1");};
if(_garage isEqualTo "") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_2");};

private["_condition","_isOk"];
_condition = getText(getMissionConfig "CfgClient" >> "HG_GaragesCfg" >> _garage >> "conditionToAccess");
_isOk = (_condition isEqualTo "") OR (call compile _condition);
if(!_isOk) exitWith {hint (localize "STR_HG_ACCESS_DENIED");};

private["_allowedTypes","_storePoint","_pos","_near"];
_allowedTypes = getArray(getMissionConfig "CfgClient" >> "HG_GaragesCfg" >> _garage >> "allowedTypes");
_storePoint = getText(getMissionConfig "CfgClient" >> "HG_GaragesCfg" >> _garage >> "storePoint");

if(_storePoint isEqualTo "") then
{
    _pos = player;
} else {
    _pos = markerPos _storePoint;
};

_near = (nearestObjects [_pos,_allowedTypes,100]) select {alive _x}; // 100 is the distance in meters that a vehicle is searched for in order to store/park

if((count _near) > 0) then
{
    private["_vehicle","_owner"];
	_vehicle = _near select 0;
    _owner = _vehicle getVariable "HG_Owner";
	if((_owner select 0) isEqualTo (getPlayerUID player)) then
	{
	    [1,player,_vehicle,(_owner select 1)] remoteExecCall ["HG_fnc_storeVehicleServer",2,false];
	} else {
	    hint (localize "STR_HG_NO_OWNED_VEHICLES");
	};
} else {
    hint (localize "STR_HG_NO_VEHICLES");
};

true;
