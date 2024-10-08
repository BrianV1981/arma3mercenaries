private "_this";
_this = _this select 0;

// This script is applied to the vehicle's initialization through an event handler

// Add the "Check if vehicle is owned" action to the vehicle
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
}, [], 1.5, true, true, "", "_this distance _target < 5"];

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

// Additional functionality (e.g., fortifications)
[_this, 'ACE_Wheel'] call grad_fortifications_fnc_addFort; // doesnt work on dedicated server
