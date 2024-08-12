/*
    fn_loadVehicles.sqf

    gradPersistence save vehicle script

    enhanced by BrianV1981
*/

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
            // Extract the vehicle object from the array returned by BIS_fnc_spawnVehicle
            (([[[0,0,0],0,_type,_side] call BIS_fnc_spawnVehicle]) select 0)
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
