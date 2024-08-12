/*

arma3mercenaries_loadGroups.sqf
enhanced by BrianV1981

*/




#include "script_component.hpp"

if (!isServer) exitWith {}; // Ensure the script only runs on the server

private _missionTag = [] call grad_persistence_fnc_getMissionTag; // Get mission-specific tag
private _groupsTag = _missionTag + "_groups"; // Tag for saved groups data
private _groupsData = [_groupsTag] call grad_persistence_fnc_getSaveData; // Retrieve saved groups data

{
    _x params ["_thisGroupSide", "_thisGroupUnits", "_thisGroupVars"]; // Destructure group data
    private _thisGroup = createGroup _thisGroupSide; // Create the group based on its side

    {
        _thisUnitHash = _x; // Current unit data

        private _vehVarName = [_thisUnitHash, "varName"] call CBA_fnc_hashGet; // Retrieve the unit's variable name

        private _thisUnit = objNull; // Initialize the unit variable
        private _editorVehicleFound = false;
        if (!isNil "_vehVarName") then {
            // Check if the unit was an editor-placed object that already exists
            private _editorVehicle = call compile _vehVarName;
            if (!isNil "_editorVehicle") then {
                _thisUnit = _editorVehicle; // Assign the existing editor-placed unit
                _editorVehicleFound = true;
            };
        };

        if (!_editorVehicleFound) then {
            // If no existing unit was found, create a new one
            private _type = [_thisUnitHash, "type"] call CBA_fnc_hashGet;
            _thisUnit = _thisGroup createUnit [_type, [0, 0, 0], [], 0, "CAN_COLLIDE"];

            if (!isNil "_vehVarName") then {
                // Assign the variable name to the new unit
                [_thisUnit, _vehVarName] remoteExec ["setVehicleVarName", 0, _thisUnit];
                missionNamespace setVariable [_vehVarName, _thisUnit, true];
            };
        };

        [{!isNull (_this select 0)}, {
            params ["_thisUnit", "_thisUnitHash"];

            // Retrieve and set the unit's position, direction, and damage
            private _posASL = [_thisUnitHash, "posASL"] call CBA_fnc_hashGet;
            private _dir = [_thisUnitHash, "dir"] call CBA_fnc_hashGet;
            private _damage = [_thisUnitHash, "damage"] call CBA_fnc_hashGet;
            private _vars = [_thisUnitHash, "vars"] call CBA_fnc_hashGet;

            _thisUnit setDir _dir;
            _thisUnit setPosASL _posASL;
            _thisUnit setDamage _damage;

            // Load additional variables for the unit
            [_vars, _thisUnit] call FUNC(loadObjectVars);

            // Load and set the player's UID associated with this group
            private _playerUID = [_thisUnitHash, "playerUID"] call CBA_fnc_hashGet;
            _thisUnit setVariable ["arma3mercenaries_persistence_groupMembers", _playerUID, true];

        }, [_thisUnit, _thisUnitHash]] call CBA_fnc_waitUntilAndExecute; // Ensure the unit is fully created before proceeding

    } forEach _thisGroupUnits; // Process each unit in the group

    // Load additional group-level variables
    [_thisGroupVars, _thisGroup] call FUNC(loadObjectVars);

} forEach _groupsData; // Process each saved group

// Delete all editor-placed units that were killed in a previous save
private _killedVarnames = [_missionTag + "_killedVarnames"] call FUNC(getSaveData);
private _killedUnitsVarnames = _killedVarnames param [0, []];
{
    private _editorVehicle = call compile _x;
    if (!isNil "_editorVehicle") then {deleteVehicle _editorVehicle};
} forEach _killedUnitsVarnames;

