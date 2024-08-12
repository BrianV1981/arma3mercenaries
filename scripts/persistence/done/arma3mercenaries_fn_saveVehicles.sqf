/*

arma3mercenaries_fn_saveVehicle.sqf

enhanced gradPersistence save vehicle script fn_saveVehicle.sqf

Enhanced by BrianV1981

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

// Select only the variable classes that belong to vehicles
private _allVehicleVariableClasses = _allVariableClasses select {
    ([_x,"varNamespace",""] call BIS_fnc_returnConfigEntry) == "vehicle"
};

// Get mission tag for namespacing
private _missionTag = [] call FUNC(getMissionTag);
private _vehiclesTag = _missionTag + "_vehicles";

// Retrieve previously saved data and clear the array
private _vehiclesData = [_vehiclesTag] call FUNC(getSaveData);
_vehiclesData resize 0;

// Collect only vehicles that are tagged with the HG_Owner variable
private _allVehicles = vehicles select {
    !(_x isKindOf "Static") && // Exclude static objects
    !((_x isKindOf "ThingX") && (([configfile >> "CfgVehicles" >> typeOf _x,"maximumLoad",0] call BIS_fnc_returnConfigEntry) > 0)) && // Exclude Things with maximum load
    {alive _x} && // Include only alive vehicles
    {!([_x] call FUNC(isBlacklisted))} && // Exclude blacklisted vehicles
    {if (_area isEqualType false) then {true} else {_x inArea _area}} && // Include only vehicles within the specified area
    {!isNil {_x getVariable "HG_Owner"}} // Include only vehicles with the HG_Owner variable set
};

{
    private _thisVehicle = _x;

    // Get hit point damage data
    private _hitPointDamage = getAllHitPointsDamage _thisVehicle;
    private _hitNames = [];
    private _hitDamages = [];
    if (count _hitPointDamage > 0) then {
        _hitNames = _hitPointDamage select 0;
        _hitDamages = _hitPointDamage select 2;
    };

    // Get vehicle inventory data
    private _vehicleInventory = [_thisVehicle] call FUNC(getInventory);

    // Create a new hash to store the vehicle's data
    private _thisVehicleHash = [] call CBA_fnc_hashCreate;

    // Handle variable name for editor-placed objects
    private _vehVarName = vehicleVarName _thisVehicle;
    if (_vehVarName != "") then {
        [_thisVehicleHash,"varName",_vehVarName] call CBA_fnc_hashSet;
        _foundVehiclesVarnames deleteAt (_foundVehiclesVarnames find _vehVarName);
    };

    // Save essential attributes of the vehicle
    [_thisVehicleHash,"type",typeOf _thisVehicle] call CBA_fnc_hashSet;
    [_thisVehicleHash,"posASL",getPosASL _thisVehicle] call CBA_fnc_hashSet;
    [_thisVehicleHash,"vectorDirAndUp",[vectorDir _thisVehicle,vectorUp _thisVehicle]] call CBA_fnc_hashSet;
    [_thisVehicleHash,"hitpointDamage",[_hitNames,_hitDamages]] call CBA_fnc_hashSet;
    [_thisVehicleHash,"fuel",fuel _thisVehicle] call CBA_fnc_hashSet;
    [_thisVehicleHash,"hasCrew",{!isPlayer _thisVehicle} count (crew _thisVehicle) > 0] call CBA_fnc_hashSet;
    [_thisVehicleHash,"side",side _thisVehicle] call CBA_fnc_hashSet;
    [_thisVehicleHash,"turretMagazines", magazinesAllTurrets _thisVehicle] call CBA_fnc_hashSet;
    [_thisVehicleHash,"inventory", _vehicleInventory] call CBA_fnc_hashSet;

    // Add your own unique variable here
    // Example: _thisVehicle setVariable ["Your_Custom_Variable", value, true];
    // If you have your own variable, add it below in a similar manner.
    [_thisVehicleHash,"HG_Owner",_thisVehicle getVariable "HG_Owner"] call CBA_fnc_hashSet;

    // Save additional variables associated with the vehicle
    private _thisVehicleVars = [_allVehicleVariableClasses,_thisVehicle] call FUNC(saveObjectVars);
    [_thisVehicleHash,"vars",_thisVehicleVars] call CBA_fnc_hashSet;

    // Add the hash to the vehicles data array
    _vehiclesData pushBack _thisVehicleHash;
} forEach _allVehicles;

// Handle vehicles that were not saved, indicating they were removed or killed
private _killedVarnames = [_missionTag + "_killedVarnames"] call FUNC(getSaveData);
private _killedVehiclesVarnames = _killedVarnames param [1,[]];
_killedVehiclesVarnames append _foundVehiclesVarnames;
_killedVehiclesVarnames arrayIntersect _killedVehiclesVarnames;
_killedVarnames set [1,_killedVehiclesVarnames];

// Save the updated profile namespace
saveProfileNamespace;
