/*

arma3mercenaries_getGroup.sqf

by BrianV1981

During Saving: The variable arma3mercenaries_persistence_groupMembers is checked for each unit to determine if it should be saved.

!_isNil {_thisUnit getVariable "arma3mercenaries_persistence_groupMembers"} // Ensure only units tagged with this variable are saved.

During Loading: The variable arma3mercenaries_persistence_groupMembers is loaded and reassigned to the unit to maintain the association with the player.

_thisUnit setVariable ["arma3mercenaries_persistence_groupMembers", _playerUID

// Add an action to store the player's group
_barracksObject = createVehicle ["Land_BagFence_Long_F", position player, [], 0, "NONE"];
_barracksObject addAction ["Store Group in Barracks", {
    [] execVM "scripts\barracks\arma3mercenaries_saveGroups.sqf";
}];

this addAction ["Store Group", {
    execVM "scripts\barracks\arma3mercenaries_storeGroup.sqf";
}];

this addAction ["Recall Group", {
    execVM "scripts\barracks\arma3mercenaries_getGroup.sqf";
}];

*/

#include "script_component.hpp"

if (!isServer) exitWith {}; // Ensure this script only runs on the server.

private _missionTag = [] call grad_persistence_fnc_getMissionTag; // Get the mission-specific tag for saving/loading.
private _groupsTag = _missionTag + "_groups"; // Define the tag for saving/loading groups.
private _groupsData = [_groupsTag] call grad_persistence_fnc_getSaveData; // Retrieve saved group data.

{
    _x params ["_thisGroupSide","_thisGroupUnits","_thisGroupVars"]; // Extract group data from the saved data.
    private _thisGroup = createGroup _thisGroupSide; // Create a new group for the side.

    {
        _thisUnitHash = _x; // Extract unit data from the saved group data.

        private _vehVarName = [_thisUnitHash,"varName"] call CBA_fnc_hashGet; // Get the unit's variable name (if any).

        private _thisUnit = objNull;
        private _editorVehicleFound = false;

        if (!isNil "_vehVarName") then {
            // Check if the unit already exists in the mission (e.g., placed in the editor).
            private _editorVehicle = call compile _vehVarName;
            if (!isNil "_editorVehicle") then {
                _thisUnit = _editorVehicle; // Use the existing unit.
                _editorVehicleFound = true;
            };
        };

        if (!_editorVehicleFound) then {
            // If the unit doesn't already exist, create it.
            private _type = [_thisUnitHash,"type"] call CBA_fnc_hashGet;
            _thisUnit = _thisGroup createUnit [_type, [0,0,0], [], 0, "CAN_COLLIDE"];

            if (!isNil "_vehVarName") then {
                [_thisUnit,_vehVarName] remoteExec ["setVehicleVarName",0,_thisUnit]; // Assign the variable name to the new unit.
                missionNamespace setVariable [_vehVarName,_thisUnit,true];
            };
        };

        [{!isNull (_this select 0)}, {
            params ["_thisUnit","_thisUnitHash"];

            // Restore the unit's position, direction, and damage.
            private _posASL = [_thisUnitHash,"posASL"] call CBA_fnc_hashGet;
            private _dir = [_thisUnitHash,"dir"] call CBA_fnc_hashGet;
            private _damage = [_thisUnitHash,"damage"] call CBA_fnc_hashGet;
            private _vars = [_thisUnitHash,"vars"] call CBA_fnc_hashGet;

            _thisUnit setDir _dir;
            _thisUnit setPosASL _posASL;
            _thisUnit setDamage _damage;

            [_vars,_thisUnit] call FUNC(loadObjectVars); // Load additional variables associated with the unit.

            // Attach the Killed event handler to update persistence data if the unit is killed.
            _thisUnit addEventHandler ["Killed", {
                params ["_unit", "_killer"];
                private _groupData = profileNamespace getVariable [format ["arma3mercenaries_group_%1", getPlayerUID player], []];

                // Remove the killed unit from the stored group data.
                _groupData = _groupData select {
                    _x select 0 != typeOf _unit;
                };

                // Save the updated group data.
                profileNamespace setVariable [format ["arma3mercenaries_group_%1", getPlayerUID player], _groupData];
                saveProfileNamespace;
            }];

            // Load and set the player's UID associated with this unit.
            private _playerUID = [_thisUnitHash,"playerUID"] call CBA_fnc_hashGet;
            _thisUnit setVariable ["arma3mercenaries_persistence_groupMembers", _playerUID, true];

        }, [_thisUnit,_thisUnitHash]] call CBA_fnc_waitUntilAndExecute; // Ensure the unit is fully created before proceeding.

    } forEach _thisGroupUnits; // Process each unit in the group.

    // Load additional group-level variables.
    [_thisGroupVars,_thisGroup] call FUNC(loadObjectVars);

} forEach _groupsData; // Process each saved group.

// Delete all editor-placed units that were killed in a previous save.
private _killedVarnames = [_missionTag + "_killedVarnames"] call FUNC(getSaveData);
private _killedUnitsVarnames = _killedVarnames param [0,[]];
{
    private _editorVehicle = call compile _x;
    if (!isNil "_editorVehicle") then {deleteVehicle _editorVehicle};
} forEach _killedUnitsVarnames;
