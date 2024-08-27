#include "script_component.hpp"

// Ensure the script is only executed on the server
if (!isServer) exitWith {};

// Initialize the mission-specific tag for namespacing and retrieve the saved container data
private _missionTag = [] call FUNC(getMissionTag);
private _containersTag = _missionTag + "_containers";
private _containersData = [_containersTag] call FUNC(getSaveData);

// Process each saved container from the saved data
{
    // Extract the saved data for the current container
    private _thisContainerHash = _x;
    private _vehVarName = [_thisContainerHash, "varName"] call CBA_fnc_hashGet;

    // Initialize the container as null and a flag for checking if it's an editor-placed vehicle
    private _thisContainer = objNull;
    private _editorVehicleFound = false;

    // Check if the container was an editor-placed vehicle that already exists in the mission
    if (!isNil "_vehVarName") then {
        private _editorVehicle = call compile _vehVarName;
        if (!isNil "_editorVehicle") then {
            _thisContainer = _editorVehicle;
            _editorVehicleFound = true; // Mark that an existing vehicle was found
        };
    };

    // If the container was not an editor-placed vehicle, create it anew
    if (!_editorVehicleFound) then {
        private _type = [_thisContainerHash, "type"] call CBA_fnc_hashGet;
        _thisContainer = createVehicle [_type, [0,0,0], [], 0, "CAN_COLLIDE"];

        // Assign the saved variable name to the newly created container
        if (!isNil "_vehVarName") then {
            [_thisContainer, _vehVarName] remoteExec ["setVehicleVarName", 0, _thisContainer];
        };
    };

    // Wait until the container is fully created (not null) before applying saved attributes
    [{!isNull (_this select 0)}, {
        params ["_thisContainer", "_thisContainerHash"];

        // Retrieve the saved position, direction, damage, and inventory of the container
        private _posASL = [_thisContainerHash, "posASL"] call CBA_fnc_hashGet;
        private _vectorDirAndUp = [_thisContainerHash, "vectorDirAndUp"] call CBA_fnc_hashGet;
        private _damage = [_thisContainerHash, "damage"] call CBA_fnc_hashGet;
        private _inventory = [_thisContainerHash, "inventory"] call CBA_fnc_hashGet;
        
        // Retrieve the grad fortifications related variables
        private _gradFortificationsOwner = [_thisContainerHash, "gradFortificationsOwner"] call CBA_fnc_hashGet;
        private _isGradMoneymenuStorage = [_thisContainerHash, "isGradMoneymenuStorage"] call CBA_fnc_hashGet;
        private _gradMoneymenuOwner = [_thisContainerHash, "gradMoneymenuOwner"] call CBA_fnc_hashGet;
        private _thisLbmMoney = [_thisContainerHash, "gradLbmMoney"] call CBA_fnc_hashGet;

        // Apply the saved position, direction, and damage to the container
        _thisContainer setVectorDirAndUp _vectorDirAndUp;
        _thisContainer setPosASL _posASL;
        _thisContainer setDamage _damage;

        // Restore the container's inventory
        [_thisContainer, _inventory] call FUNC(loadVehicleInventory);

        // Reapply the grad fortifications owner variable
        _thisContainer setVariable ["grad_fortifications_fortOwner", _gradFortificationsOwner, true];

        // Initialize the container if it's part of the grad fortifications system
        if (!isNil "_gradFortificationsOwner" && {isClass (missionConfigFile >> "CfgFunctions" >> "GRAD_fortifications")}) then {
            [_thisContainer, objNull] remoteExec ["grad_fortifications_fnc_initFort", 0, true];
        };

        // Handle grad moneymenu storage if applicable
        if (_isGradMoneymenuStorage) then {
            if !(objNull isEqualTo _gradMoneymenuOwner) then {
                [_thisContainer, _gradMoneymenuOwner] remoteExec ["grad_moneymenu_fnc_setStorage", 0, true];
            } else {
                [_thisContainer] remoteExec ["grad_moneymenu_fnc_setStorage", 0, true];
            };

            // Set the saved money variable
            if (_thisLbmMoney isEqualType 0 && {_thisLbmMoney > 0}) then {
                _thisContainer setVariable ["grad_lbm_myFunds", _thisLbmMoney, true];
            };
        };

        // Load and apply any additional saved variables to the container
        private _vars = [_thisContainerHash, "vars"] call CBA_fnc_hashGet;
        [_vars, _thisContainer] call FUNC(loadObjectVars);

    }, [_thisContainer, _thisContainerHash]] call CBA_fnc_waitUntilAndExecute;

} forEach _containersData; // End of container processing

// Delete all editor-placed containers that were killed in a previous save
private _killedVarnames = [_missionTag + "_killedVarnames"] call FUNC(getSaveData);
private _killedContainersVarnames = _killedVarnames param [2, []];
{
    private _editorVehicle = call compile _x;
    if (!isNil "_editorVehicle") then { deleteVehicle _editorVehicle };
} forEach _killedContainersVarnames;
