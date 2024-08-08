/*
fn_saveGradFortificationStatics.sqf

Examples:
 _this setVariable ["grad_fortifications_fortOwner", getPlayerUID player, true];
 _vehicle setVariable ["grad_fortifications_fortOwner", getPlayerUID _buyer, true];
 _vehicle setVariable ["grad_fortifications_fortOwner", getPlayerUID _unit, true];
*/

#include "script_component.hpp"

// Exit if not executed on the server
if (!isServer) exitWith {};

// Define parameters with default values
params [["_area",false],["_allVariableClasses",[]]];

// If _area is an array, destructure its elements
if (_area isEqualType []) then {
    _area params ["_center","_a","_b",["_angle",0],["_isRectangle",false],["_c",-1]];
    if (isNil "_b") then {_b = _a};
    _area = [_center,_a,_b,_angle,_isRectangle,_c];
};

// Select only the variable classes that belong to grad fortifications
private _allGradFortificationsVariableClasses = _allVariableClasses select {
    ([_x,"varNamespace",""] call BIS_fnc_returnConfigEntry) == "gradFortificationsStatic"
};

// Get mission tag for namespacing
private _missionTag = [] call FUNC(getMissionTag);
private _gradFortificationsTag = _missionTag + "_gradFortificationsStatics";

// Retrieve previously saved data and clear the array
private _gradFortificationsData = [_gradFortificationsTag] call FUNC(getSaveData);
_gradFortificationsData resize 0;

// Collect all relevant objects
private _gradFortificationsStatics = (allMissionObjects "Static") + (allMissionObjects "Car") + (allMissionObjects "Tank") + (allMissionObjects "Ship") + (allMissionObjects "Truck") + (allMissionObjects "StaticWeapon");

// Filter objects to include only those with the "grad_fortifications_fortOwner" variable
_gradFortificationsStatics = _gradFortificationsStatics select {!isNil {_x getVariable "grad_fortifications_fortOwner"}};

// Process each filtered object
{
    if (
            typeOf _x != "CBA_NamespaceDummy" && // Check if object is not a CBA Namespace Dummy
            {!([_x] call FUNC(isBlacklisted))} && // Check if object is not blacklisted
            {if (_area isEqualType false) then {true} else {_x inArea _area}} // Check if object is within the specified area
        ) then {

        // Create a new hash to store the object's data
        _thisGradFortificationsStaticsHash = [] call CBA_fnc_hashCreate;

        // Save essential attributes of the object
        [_thisGradFortificationsStaticsHash,"type",typeOf _x] call CBA_fnc_hashSet;
        [_thisGradFortificationsStaticsHash,"posASL",getPosASL _x] call CBA_fnc_hashSet;
        [_thisGradFortificationsStaticsHash,"vectorDirAndUp",[vectorDir _x, vectorUp _x]] call CBA_fnc_hashSet;
        [_thisGradFortificationsStaticsHash,"damage",damage _x] call CBA_fnc_hashSet;
        [_thisGradFortificationsStaticsHash,"isGradMoneymenuStorage",_x getVariable ["grad_moneymenu_isStorage",false]] call CBA_fnc_hashSet;
        [_thisGradFortificationsStaticsHash,"gradMoneymenuOwner",_x getVariable ["grad_moneymenu_owner",objNull]] call CBA_fnc_hashSet;
        [_thisGradFortificationsStaticsHash,"gradLbmMoney",_x getVariable ["grad_lbm_myFunds",objNull]] call CBA_fnc_hashSet;

        // Save the owner of the fortification
        private _fortOwner = _x getVariable ["grad_fortifications_fortOwner",objNull];
        if (_fortOwner isEqualType objNull) then {
            _fortOwner = getPlayerUID _fortOwner;
        } else {
            if (_fortOwner isEqualType grpNull) then {
                _fortOwner = "";
            };
        };
        [_thisGradFortificationsStaticsHash,"gradFortificationsOwner",_fortOwner] call CBA_fnc_hashSet;

        // Save additional variables associated with the object
        private _thisGradFortificationsStaticVars = [_allGradFortificationsVariableClasses,_x] call FUNC(saveObjectVars);
        [_thisGradFortificationsStaticsHash,"vars",_thisGradFortificationsStaticVars] call CBA_fnc_hashSet;

        // Add the hash to the grad fortifications data array
        _gradFortificationsData pushBack _thisGradFortificationsStaticsHash;
    };
} forEach _gradFortificationsStatics;

// Save the updated profile namespace
saveProfileNamespace;
