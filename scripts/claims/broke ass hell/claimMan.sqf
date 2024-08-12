private "_this";
_this = _this select 0;

// Check if the vehicle already has an owner
if (isNil {_this getVariable "HG_Owner"}) then {
    // Add claim vehicle action if there is no owner
    claimVehicleAction = _this addAction ["Claim this vehicle", {
        params ["_target", "_caller", "_actionId"];
        
        // Set the owner of the vehicle
        [_target] call HG_fnc_setOwner;
        
        // Remove the action globally
        [_target, _actionId] remoteExec ["removeAction", 0, true];
        
        // Check if the HG_Owner variable is present on the object
        if (!isNil {_target getVariable "HG_Owner"}) then {
            // Disable ALiVE dynamic simulation
            _target setVariable ["ALiVE_disableDynamicSimulation", true, true];
        };
        
    }, "", 0, false, false, "", "(alive player) && !dialog && player distance _target < 5"];
} else {
    // If the vehicle already has an owner, do not add the claim action and optionally remove it if it was added
    [_this, _this addAction ["Claim this vehicle", {}]] remoteExec ["removeAction", 0, true];
};

// Additional functionality (e.g., fortifications)