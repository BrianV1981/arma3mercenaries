#include "HG_Macros.h"
/*
    fn_dialogOnLoadVehicles.sqf
    Author - HoverGuy
    Website - https://northernimpulse.com
    Enhanced by - BrianV1981
    Changes:
    - Integrated Grad Money system.
    - Ensured compatibility with ACE interaction parameters.
    - Adjusted UI logic to maintain functionality with updated money handling.
*/

// Removed "_target", "_caller", "_id" as they were not necessary for this function's operation.
params["_whatShop"];
if((typeName _whatShop) != "STRING") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_1");};
if(_whatShop isEqualTo "") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_2");};

// Get the list of vehicles available in the shop
private _shopList = "true" configClasses (getMissionConfig "CfgClient" >> "HG_VehiclesShopCfg" >> _whatShop);
if((count _shopList) isEqualTo 0) exitWith {hint (localize "STR_HG_SHOP_EMPTY");};

// Validate access to the shop based on a condition
private["_condition","_isOk"];
_condition = getText(getMissionConfig "CfgClient" >> "HG_VehiclesShopCfg" >> _whatShop >> "conditionToAccess");
_isOk = (_condition isEqualTo "") OR (call compile _condition);
if(!_isOk) exitWith {hint (localize "STR_HG_ACCESS_DENIED");};

// Disable serialization for working with UI elements
disableSerialization;

// Create the vehicle shop dialog
createDialog "HG_VehiclesShop";

// Initialize preview objects and arrays
HG_OBJECT_PREVIEW = objNull;
HG_VEHICLE_PREVIEW = objNull;
HG_VEHICLE_LIGHTS = [];
HG_VEHICLE_COLORS = [];

// Disable the "Buy to Garage" option if not enabled
if(!HG_BUY_TO_GARAGE_ENABLED) then
{
    HG_VEHICLES_TG ctrlEnable false;
};

// Clear the vehicle switch listbox
lbClear HG_VEHICLES_SWITCH;

// Populate the vehicle switch listbox with available vehicles
private["_ind","_h"];
{
	_ind = HG_VEHICLES_SWITCH lbAdd (getText(_x >> "displayName"));
	HG_VEHICLES_SWITCH lbSetData [_ind,format["%1/%2",_whatShop,(configName _x)]];
} forEach _shopList;

// Create a preview helipad for vehicle display
_h = "Land_HelipadEmpty_F" createVehicleLocal (getPosATL player);
_h setPos (player modelToWorld [0,10,30]);
HG_OBJECT_PREVIEW = _h;

// Initialize the camera for vehicle preview
HG_CAMERA_PREVIEW = "CAMERA" camCreate getPos _h;
showCinemaBorder false;
HG_CAMERA_PREVIEW cameraEffect ["INTERNAL","BACK"];
HG_CAMERA_PREVIEW camSetFovRange [0.1,0.7];
HG_CAMERA_PREVIEW camSetFOV 0.7;
HG_CAMERA_PREVIEW camSetFocus [50,0];
HG_CAMERA_PREVIEW camCommit 0;

// Add lights for vehicle preview during night time
if(sunOrMoon <= 0.5) then
{
    private "_light";
	
    {
	    _light = "#lightpoint" createVehicleLocal getPos player;
        _light setlightbrightness 0.5;
        _light setlightcolor [1,1,1];
        _light setlightambient [1,1,1];
        _light setPos (player modelToWorld _x);
		HG_VEHICLE_LIGHTS pushBack _light;
	} forEach [[-5,10,30],[5,10,30],[-5,10,35],[5,10,25]];
};

// Select the first vehicle in the list by default
HG_VEHICLES_SWITCH lbSetCurSel 0;

true;
