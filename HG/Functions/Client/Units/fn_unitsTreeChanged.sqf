#include "HG_Macros.h"
/*
    fn_unitsTreeChanged.sqf
    Author - HoverGuy
    GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
    Enhanced By - BrianV1981
    Changes:
    - Simplified and clarified the script logic.
    - Ensured that selected unit details are displayed correctly in the UI.
*/

// Define parameters and initialize variables
params["_ctrl","_path","_sel","_cfg","_dn","_pic","_desc"];

disableSerialization; // Disable serialization for working with UI elements

// Get the selected item from the tree view control
_sel = _ctrl tvData _path;

// Retrieve the configuration path for the selected item
_cfg = [_sel] call HG_fnc_getConfig;

// Get the display name, picture, and description of the selected unit
_dn = getText(configFile >> _cfg >> _sel >> "displayName");
_pic = getText(configFile >> _cfg >> _sel >> "Picture");
_desc = getText(configFile >> _cfg >> _sel >> "descriptionShort");

// Check if a valid item is selected and update the UI accordingly
if(_sel != (localize "STR_HG_NONE")) then
{
    HG_UNITS_ITEM_PIC ctrlSetText _pic; // Set the unit's picture in the UI
    HG_UNITS_ITEM_TEXT ctrlSetStructuredText parseText format["<t align='center' size='1'>%1<br/>%2</t>",_dn,_desc]; // Set the unit's name and description in the UI
} else {
    // If no valid item is selected, display a default image and message
    HG_UNITS_ITEM_PIC ctrlSetText "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
    HG_UNITS_ITEM_TEXT ctrlSetStructuredText parseText format["<t align='center' size='1'>%1</t>",(localize "STR_HG_NOTHING_TO_DISPLAY")];
};

true; // Return true indicating successful execution of the script
