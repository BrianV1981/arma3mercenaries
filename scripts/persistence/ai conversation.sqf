Updated and Commented Save Script (arma3mercenaries_saveVehicle.sqf)
sqf
Copy code
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
Updated and Commented Load Script (arma3mercenaries_loadVehicle.sqf)
sqf
Copy code
#include "script_component.hpp"

// Exit if not executed on the server
if (!isServer) exitWith {};

// Get the mission-specific tag for namespacing
private _missionTag = [] call FUNC(getMissionTag);
private _vehiclesTag = _missionTag + "_vehicles";

// Retrieve saved data associated with the vehicles tag
private _vehiclesData = [_vehiclesTag] call FUNC(getSaveData);

{

    private _thisVehicleHash = _x;

    // Retrieve the type, side, and crew information from the saved data
    private _type = [_thisVehicleHash,"type"] call CBA_fnc_hashGet;
    private _side = [_thisVehicleHash,"side"] call CBA_fnc_hashGet;
    private _hasCrew = [_thisVehicleHash,"hasCrew"] call CBA_fnc_hashGet;
    private _vehVarName = [_thisVehicleHash,"varName"] call CBA_fnc_hashGet;

    private _thisVehicle = objNull;
    private _editorVehicleFound = false;
    if (!isNil "_vehVarName") then {
        // Check if the vehicle is an editor-placed object that already exists
        private _editorVehicle = call compile _vehVarName;
        if (!isNil "_editorVehicle") then {
            if (_editorVehicle isEqualType objNull) then {
                _thisVehicle = _editorVehicle;
                _editorVehicleFound = true;
            } else {
                ERROR_1("Vehicle varName %1 resolved to %2 (not type OBJECT). Spawning new vehicle instead.", _vehVarName, _editorVehicle);
            };
        };
    };

    if (!_editorVehicleFound) then {
        // Create a new vehicle if it was not an editor-placed object
        _thisVehicle = if (!_hasCrew) then {
            createVehicle [_type, [0,0,0], [], 0, "CAN_COLLIDE"]
        } else {
            ([[[0,0,0],0,_type,_side] call BIS_fnc_spawnVehicle] param [0, objNull, [objNull]])
        };

        // Assign the variable name if it exists
        if (!isNil "_vehVarName") then {
            [_thisVehicle,_vehVarName] remoteExec ["setVehicleVarName",0,_thisVehicle];
            missionNamespace setVariable [_vehVarName,_thisVehicle,true];
        };
    };

    // Wait until the object is created and not null before proceeding
    [{!isNull (_this select 0)}, {
        params ["_thisVehicle","_thisVehicleHash"];

        // Retrieve saved attributes and apply them to the vehicle
        private _posASL = [_thisVehicleHash,"posASL"] call CBA_fnc_hashGet;
        private _fuel = [_thisVehicleHash,"fuel"] call CBA_fnc_hashGet;
        private _vectorDirAndUp = [_thisVehicleHash,"vectorDirAndUp"] call CBA_fnc_hashGet;
        private _hitPointDamage = [_thisVehicleHash,"hitpointDamage"] call CBA_fnc_hashGet;
        private _turretMagazines = [_thisVehicleHash,"turretMagazines"] call CBA_fnc_hashGet;
        private _inventory = [_thisVehicleHash,"inventory"] call CBA_fnc_hashGet;

        // Retrieve and set the HG_Owner variable to the vehicle
        private _HG_Owner = [_thisVehicleHash,"HG_Owner"] call CBA_fnc_hashGet;
        _thisVehicle setVariable ["HG_Owner", _HG_Owner, true];

        // Apply the retrieved attributes to the vehicle
        _thisVehicle setVectorDirAndUp _vectorDirAndUp;
        _thisVehicle setPosASL _posASL;
        _thisVehicle setFuel _fuel;

        // Load turret magazines, hit points, and inventory
        [_thisVehicle,_turretMagazines] call FUNC(loadTurretMagazines);
        [_thisVehicle,_hitPointDamage] call FUNC(loadVehicleHits);
        [_thisVehicle,_inventory] call FUNC(loadVehicleInventory);

        // Load any additional variables associated with the vehicle
        private _vars = [_thisVehicleHash,"vars"] call CBA_fnc_hashGet;
        [_vars,_thisVehicle] call FUNC(loadObjectVars);

    }, [_thisVehicle,_thisVehicleHash], 10, {ERROR_1("Vehicle nullcheck timeout. Vehiclehash: %1",_this select 1)}] call CBA_fnc_waitUntilAndExecute;

} forEach _vehiclesData;

// Delete all editor vehicles that were killed in a previous save
private _killedVarnames = [_missionTag + "_killedVarnames"] call FUNC(getSaveData);
private _killedVehiclesVarnames = _killedVarnames param [1,[]];
{
    private _editorVehicle = call compile _x;
    if (!isNil "_editorVehicle") then {deleteVehicle _editorVehicle};
} forEach _killedVehiclesVarnames;
Summary of the Updates
Tagging: Vehicles are now saved and loaded based on the HG_Owner variable.
Custom Variable Placeholder: A clear section (Add your own unique variable here) was added to the save script where users can insert their custom variables for persistence.
Comprehensive Comments: Detailed comments were added throughout the scripts to explain each step of the process. This makes it easier for others to understand, modify, and use the scripts as needed.
These scripts can now be used to save and load vehicles based on a specific tag, and they offer flexibility for adding additional tags as needed.









