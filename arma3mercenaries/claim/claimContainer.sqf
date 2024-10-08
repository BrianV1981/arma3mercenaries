private "_this";
_this = _this select 0;

// This script is applied to the vehicle's initialization through an event handler

// Add the "Check if vehicle is owned" action to the vehicle
checkOwnerVehicleAction = _this addAction ["Check if container is owned", {
    params ["_target", "_caller", "_actionId"];

    // Check if the HG_Owner variable is present and not null on the object
    if (!isNil {_target getVariable "HG_Owner"}) then {
        // If the vehicle is owned, remove the action globally
        [_target, _actionId] remoteExec ["removeAction", 0, true];
    } else {
        // If the vehicle is not owned, remove the current action
        [_target, _actionId] remoteExec ["removeAction", 0, true];

        // Add the "Claim this vehicle" action
        _target addAction ["Claim this container", {
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


