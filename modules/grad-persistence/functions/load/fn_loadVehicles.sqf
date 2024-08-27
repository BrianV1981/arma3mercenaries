/*
    arma3mercenaries_fn_loadVehicles.sqf

    gradPersistence save vehicle script fn_loadVehicles.sqf

    enhanced by BrianV1981
*/

#include "script_component.hpp"

if (!isServer) exitWith {};

private _missionTag = [] call FUNC(getMissionTag);
private _vehiclesTag = _missionTag + "_vehicles";
private _vehiclesData = [_vehiclesTag] call FUNC(getSaveData);

{
    private _thisVehicleHash = _x;
    private _type = [_thisVehicleHash,"type"] call CBA_fnc_hashGet;
    private _side = [_thisVehicleHash,"side"] call CBA_fnc_hashGet;
    private _vehVarName = [_thisVehicleHash,"varName"] call CBA_fnc_hashGet;

    private _thisVehicle = objNull;
    private _editorVehicleFound = false;
    
    if (!isNil "_vehVarName") then {
        // Check if it's an editor-placed object that already exists
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
        // Create the vehicle
        _thisVehicle = createVehicle [_type, [0,0,0], [], 0, "CAN_COLLIDE"];
        
        if (!isNil "_vehVarName") then {
            [_thisVehicle,_vehVarName] remoteExec ["setVehicleVarName",0,_thisVehicle];
            missionNamespace setVariable [_vehVarName,_thisVehicle,true];
        };
    };

    [{!isNull (_this select 0)}, {
        params ["_thisVehicle","_thisVehicleHash"];

        private _posASL = [_thisVehicleHash,"posASL"] call CBA_fnc_hashGet;
        private _fuel = [_thisVehicleHash,"fuel"] call CBA_fnc_hashGet;
        private _vectorDirAndUp = [_thisVehicleHash,"vectorDirAndUp"] call CBA_fnc_hashGet;
        private _hitPointDamage = [_thisVehicleHash,"hitpointDamage"] call CBA_fnc_hashGet;
        private _turretMagazines = [_thisVehicleHash,"turretMagazines"] call CBA_fnc_hashGet;
        private _inventory = [_thisVehicleHash,"inventory"] call CBA_fnc_hashGet;
        private _HG_Owner = [_thisVehicleHash,"HG_Owner"] call CBA_fnc_hashGet;

        // Restore the vehicle's attributes
        _thisVehicle setVectorDirAndUp _vectorDirAndUp;
        _thisVehicle setPosASL _posASL;
        _thisVehicle setFuel _fuel;

        [_thisVehicle,_turretMagazines] call FUNC(loadTurretMagazines);
        [_thisVehicle,_hitPointDamage] call FUNC(loadVehicleHits);
        [_thisVehicle,_inventory] call FUNC(loadVehicleInventory);
		
		//set vehicle ownerwith HG_Owner
        _thisVehicle setVariable ["HG_Owner", _HG_Owner, true];
		
		//added HG vehicle lock
		[_thisVehicle, 2] call HG_fnc_lock;

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
