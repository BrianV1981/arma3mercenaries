private "_this";
_this = _this select 0;

// Add claim vehicle action
claimVehicleAction = _this addAction ["Claim this vehicle", {
    params ["_target", "_caller", "_actionId"];
    
    // Set the owner of the vehicle
    [_target] call HG_fnc_setOwner;
    
    // Remove the action globally
    [_target, _actionId] remoteExec ["removeAction", 0, true];
    
    // Set the variable for fortifications
    _target setVariable ["grad_fortifications_fortOwner", getPlayerUID _caller, true];
}, "", 0, false, false, "", "(alive player) && !dialog && player distance _target < 5"];

// Add arma3mercenaries Radio action
_this addAction ["arma3mercenaries Radio", {
    createDialog "customInterface";
}, "", 0, false, false, "", "player distance _target < 5"];

// Additional functionality (e.g., fortifications)
[_this, 'Land_CanisterFuel_F'] call grad_fortifications_fnc_addFort;
