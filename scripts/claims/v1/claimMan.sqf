private "_this";
_this = _this select 0;

// Add claim vehicle action
claimVehicleAction = _this addAction ["Recruit this mercenary", {
    params ["_target", "_caller", "_actionId"];
    
    // Set the owner of the vehicle
    [_target] call HG_fnc_setOwner;
    
    // Remove the action globally
    [_target, _actionId] remoteExec ["removeAction", 0, true];
    

// Check if the HG_Owner variable is present on the object
if (!isNil {_object getVariable "HG_Owner"}) then {
    // Disable ALiVE dynamic simulation
    _object setVariable ["ALiVE_disableDynamicSimulation", true, true];
};


    
}, "", 0, false, false, "", "(alive player) && !dialog && player distance _target < 5"];
