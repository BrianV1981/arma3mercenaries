#include "HG_Macros.h"
/*
    fn_vehicleSelectionChanged.sqf
    Author - HoverGuy
    Website - https://northernimpulse.com
    Enhanced by - BrianV1981
    Changes:
    - Integrated Grad Money system.
    - Ensured compatibility with ACE interaction parameters.
    - Updated UI logic to correctly display vehicle details and handle purchases.
*/

// Define parameters and disable serialization for UI manipulation
params["_ctrl","_index","_vehicle"];
disableSerialization;

// Retrieve the selected vehicle from the listbox
_vehicle = _ctrl lbData _index;

// If a previous vehicle preview exists, delete it
if(!isNull HG_VEHICLE_PREVIEW) then
{
    deleteVehicle HG_VEHICLE_PREVIEW;
};

// If a valid vehicle is selected, update the UI and prepare the preview
if(_vehicle != (localize "STR_HG_NONE")) then
{
    private["_price","_veh","_canColor"];
	
    _price = _ctrl lbValue _index;
	
	// Enable the relevant controls for the vehicle shop
	{
	    _x ctrlEnable true;
	} forEach [HG_VEHICLES_TG,HG_VEHICLES_BUY,HG_VEHICLES_COLORS];
	
    // Update the UI with vehicle details
    HG_VEHICLES_TEXT ctrlSetStructuredText parseText format
    [
        "<br/>"+
	    "<img image='%1' size='2' align='center'></img><br/><br/>"+
	    "<t align='center' size='1'>"+ (localize "STR_HG_DLG_VS_SPEED")+ "</t><br/>"+
	    "<t align='center' size='1'>"+ (localize "STR_HG_DLG_VS_ARMOR")+ "</t><br/>"+
	    "<t align='center' size='1'>"+ (localize "STR_HG_DLG_VS_SEATS")+ "</t><br/>"+
	    "<t align='center' size='1'>"+ (localize "STR_HG_DLG_VS_ENGINE")+ "</t><br/>"+
	    "<t align='center' size='1'>"+ (localize "STR_HG_DLG_VS_FUEL_MAX")+ "</t><br/>"+
	    "<t align='center' size='1'>"+ (localize "STR_HG_DLG_VS_PRICE_TAG")+ "</t>",
	    getText(configFile >> "CfgVehicles" >> _vehicle >> "picture"),
	    getNumber(configFile >> "CfgVehicles" >> _vehicle >> "maxSpeed"),
	    getNumber(configFile >> "CfgVehicles" >> _vehicle >> "armor"),
	    ([_vehicle,true] call BIS_fnc_crewCount),
	    getNumber(configFile >> "CfgVehicles" >> _vehicle >> "enginePower"),
	    getNumber(configFile >> "CfgVehicles" >> _vehicle >> "fuelCapacity"),
	    if(_price <= 0) then {(localize "STR_HG_DLG_FREE")} else {[_price,true] call HG_fnc_currencyToText}
    ];

    // Create a preview vehicle and position it correctly
    _veh = _vehicle createVehicleLocal (getPosATL player);
    _veh setPosATL [(getPosATL HG_OBJECT_PREVIEW) select 0,(getPosATL HG_OBJECT_PREVIEW) select 1,((getPosATL HG_OBJECT_PREVIEW) select 2)+0.2];
    _veh setDir round([player,_veh] call BIS_fnc_dirTo);
    _veh enableSimulation false;

    HG_VEHICLE_PREVIEW = _veh;
	HG_VEHICLE_COLORS = [];
	lbClear HG_VEHICLES_COLORS;
	
	// Check if the vehicle can have different colors and populate the color listbox
	_canColor = isClass(configFile >> "CfgVehicles" >> _vehicle >> "TextureSources");
	
	if(_canColor) then
	{
	    private["_colors","_ind"];
		
	    _colors = "true" configClasses (configFile >> "CfgVehicles" >> _vehicle >> "TextureSources");
		
		lbClear HG_VEHICLES_COLORS;
		
		{
		    _ind = HG_VEHICLES_COLORS lbAdd (getText(_x >> "displayName"));
			HG_VEHICLES_COLORS lbSetData [_ind,(configName _x)];
			HG_VEHICLES_COLORS lbSetValue [_ind,_forEachIndex];
			HG_VEHICLE_COLORS pushBack (getArray(_x >> "textures"));
		} forEach _colors;
	} else {
	    _ind = HG_VEHICLES_COLORS lbAdd (localize "STR_HG_DEFAULT");
	    HG_VEHICLES_COLORS lbSetData[_ind,""];
	};

    // Set the camera position and target for vehicle preview
    HG_CAMERA_PREVIEW camSetTarget (_veh modelToWorld [0,0,0.5]);
    if(_veh isKindOf "Air") then
    {
        HG_CAMERA_PREVIEW camSetPos (_veh modelToWorld [0,15,0]);
    } else {
        HG_CAMERA_PREVIEW camSetPos (_veh modelToWorld [0,10,0]);
    };
    HG_CAMERA_PREVIEW camCommit 0;

    _veh setDir round((getDir _veh)-45);

    [_veh] spawn HG_fnc_vehicleRotate;
	
	// Select the first color by default
	HG_VEHICLES_COLORS lbSetCurSel 0;
} else {
    // If no valid vehicle is selected, disable the relevant controls and show a placeholder message
    HG_VEHICLES_TEXT ctrlSetStructuredText parseText format["<t align='center' size='1'>%1</t>",(localize "STR_HG_NOTHING_TO_DISPLAY")];
    
	{
	    _x ctrlEnable false;
	} forEach [HG_VEHICLES_TG,HG_VEHICLES_BUY,HG_VEHICLES_COLORS];
};

true;
