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

// Add arma3mercenaries Radio action
_this addAction ["arma3mercenaries Radio", {
    createDialog "customInterface";
}, "", 0, false, false, "", "player distance _this < 5"];

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
}, [], 1.5, true, true, "", "(vectorUp _this) vectorCos (surfaceNormal getPos _this) < 0.7", 5];

// Additional functionality (e.g., fortifications)
[_this, 'ACE_Wheel'] call grad_fortifications_fnc_addFort;
