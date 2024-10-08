/*
    mobileRespawnAddaction.sqf
    Author: BrianV1981
    
### Description

This script manages vehicle ownership, mobile respawn points, and additional actions for vehicles in Arma 3. It allows players to set mobile respawn points on vehicles, claim ownership if unowned, and perform other useful actions like flipping the vehicle or accessing a radio. The script is executed when a vehicle is initialized, typically via an event handler.

### Key Features:
1. **Set Mobile Respawn Point:**
   - The script adds a "Set Mobile Respawn" action to the vehicle, allowing players to create mobile respawn points.
   - A unique vehicle identifier is generated, and respawn points for West and Independent factions are assigned to the vehicle.
   - After setting the respawn points, the action is removed globally to avoid duplication.

2. **Ownership Check:**
   - A "Check if vehicle is owned" action is added to the vehicle.
   - If the vehicle is owned (`HG_Owner` variable present), the action is removed.
   - If the vehicle is unowned, a "Claim this vehicle" action is added, allowing players to claim ownership of the vehicle.
   - After claiming, ownership is assigned, and the vehicle is globally unlocked and managed by the new owner. ALiVE dynamic simulation is disabled for the claimed vehicle.

3. **Additional Actions:**
   - **Radio Access:** Adds an "arma3mercenaries Radio" action, allowing players to open a custom radio interface when near the vehicle.
   - **Flip Vehicle:** Adds a "Flip vehicle" action, enabling players to upright a flipped vehicle. This uses remote execution to ensure the action works on the machine where the vehicle is local.

### Post-Claim Actions:
- Once claimed, the vehicle is globally unlocked using `HG_fnc_lock`, ensuring that the new owner has full access. The vehicle’s dynamic simulation is disabled to prevent it from being affected by ALiVE's systems.

This script offers a comprehensive solution for managing vehicle interactions, from mobile respawn points to ownership and additional utility actions in an Arma 3 scenario.
*/

// This script is applied to the vehicle's initialization through an event handler
private "_this";
_this = _this select 0;

// Ensure the vehicle is correctly initialized
if (isNull _this) exitWith {};

// Add "Check if vehicle is owned" action to the vehicle
checkOwnerVehicleAction = _this addAction ["Check if vehicle is owned", {
    params ["_target", "_caller", "_actionId"];

    // Check if the HG_Owner variable is present and not null on the object
    if (!isNil {_target getVariable "HG_Owner"}) then {
        // If the vehicle is owned, remove the action globally
        [_target, _actionId] remoteExec ["removeAction", 0, true];
    } else {
        // If the vehicle is not owned, remove the current action
        [_target, _actionId] remoteExec ["removeAction", 0, true];

        // Add the "Claim this vehicle" action
        _target addAction ["Claim this vehicle", {
            params ["_target", "_caller", "_actionId"];

            // Set the owner of the vehicle
            [_target] call HG_fnc_setOwner;

            // Remove the claim action globally
            [_target, _actionId] remoteExec ["removeAction", 0, true];

            // Check if the HG_Owner variable is present on the object
            if (!isNil {_target getVariable "HG_Owner"}) then {
                // Disable ALiVE dynamic simulation
                _target setVariable ["ALiVE_disableDynamicSimulation", true, true];
            };
        }, [], 1.5, true, true, "", "_this distance _target < 5"];
    };
}, [], 1.5, true, true, "", "player distance _target < 5"];

// Add "Set Mobile Respawn" action to the vehicle
_this addAction ["Set Mobile Respawn", {
    params ["_target", "_caller", "_actionId"];
    
    // Ensure the vehicle is correctly initialized
    if (isNull _target) exitWith {};

    // Generate a unique identifier using a random number
    private _vehicleID = format ["vehicle_%1_%2", typeOf _target, floor(random 1e10)];

    // Set the vehicle's string representation
    _target setVehicleVarName _vehicleID;

    // Store this identifier in the mission namespace
    missionNamespace setVariable [_vehicleID, _target, true];

    // Add respawn points for the West and Independent sides on the vehicle
    private _westRespawnID = [[west, _target], BIS_fnc_addRespawnPosition] remoteExec ["call", 0, true];
    private _independentRespawnID = [[independent, _target], BIS_fnc_addRespawnPosition] remoteExec ["call", 0, true];

    // Store the respawn point references directly on the vehicle
    _target setVariable ["westRespawnID", _westRespawnID, true];
    _target setVariable ["independentRespawnID", _independentRespawnID, true];

    // Provide feedback to the player for debugging purposes
    hint format ["Mobile Respawn Points Set for %1", _vehicleID];

    // Remove the action globally after it has been used
    [_target, _actionId] remoteExec ["removeAction", 0, true];
}, [], 1.5, true, true, "", "player distance _target < 5"];

// Add arma3mercenaries Radio action
_this addAction ["arma3mercenaries Radio", {
    createDialog "customInterface";
}, "", 0, false, false, "", "player distance _target < 5"];

// Add Flip vehicle action
_this addAction ["Flip vehicle", {
    params ["_this", "_caller", "_actionId", "_arguments"];
    
    // Calculates the surface normal vector at the vehicle's position
    _normalVec = surfaceNormal getPos _this;
    
    // Checks if the vehicle is not local to the executing machine (client or server)
    if (!local _this) then {
        // If the vehicle is not local, use remote execution to set the vehicle's vector up direction on the machine where the vehicle is local
        [_this, _normalVec] remoteExec ["setVectorUp", _this];
        // Use remote execution to set the vehicle's position above the ground on the machine where the vehicle is local
        [_this, [getPosATL _this select 0, getPosATL _this select 1, 0]] remoteExec ["setPosATL", _this];
    } else {
        // If the vehicle is local, directly set the vehicle's vector up direction
        _this setVectorUp _normalVec;
        // Directly set the vehicle's position above the ground
        _this setPosATL [getPosATL _this select 0, getPosATL _this select 1, 0];
    };
}, [], 1.5, true, true, "", "(vectorUp _target) vectorCos (surfaceNormal getPos _target) < 0.7", 5];
