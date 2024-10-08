#include "HG_Macros.h"
/*
    Author - HoverGuy
    GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
    enhanced by BrianV1981
    added safety checks for _vehicle and _owner variables to ensure they are valid before proceeding.
    params["_target","_caller","_id","_garage"]; //changed the parms for ace interaction
	
	
	// Define the action for opening the garage dialog
private _actOpenGarage = [(localize "STR_HG_GARAGE"),(localize "STR_HG_GARAGE"),"HG\UI\Icons\garage.paa",{["HG_DefaultGarage"] call HG_fnc_dialogOnLoadGarage},{(alive player) && !dialog},{},[],[],3] call ace_interact_menu_fnc_createAction;
[garage_4,0,["ACE_MainActions"],_actOpenGarage] call ace_interact_menu_fnc_addActionToObject;

// Define the action for parking a vehicle in the garage
private _actParkVehicle = [(localize "STR_HG_GARAGE_PARK"),(localize "STR_HG_GARAGE_PARK"),"HG\UI\Icons\garage.paa",{["HG_DefaultGarage"] call HG_fnc_storeVehicleClient},{(alive player) && !dialog},{},[],[],3] call ace_interact_menu_fnc_createAction;
[garage_4,0,["ACE_MainActions"],_actParkVehicle] call ace_interact_menu_fnc_addActionToObject;
	
	
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

_near = (nearestObjects [_pos,_allowedTypes,30]) select {alive _x};

if((count _near) > 0) then
{
    private["_vehicle","_owner"];
	_vehicle = _near select 0;

    // Check if _vehicle is valid
    if (!isNil "_vehicle" && {!(isNull _vehicle)}) then {
        _owner = _vehicle getVariable ["HG_Owner", []];
        if (count _owner > 0 && {_owner select 0 isEqualTo (getPlayerUID player)}) then {
            [1, player, _vehicle, (_owner select 1)] remoteExecCall ["HG_fnc_storeVehicleServer", 2, false];
        } else {
            hint (localize "STR_HG_NO_OWNED_VEHICLES");
        };
    } else {
        hint (localize "STR_HG_NO_VEHICLES");
    };
} else {
    hint (localize "STR_HG_NO_VEHICLES");
};

true;
