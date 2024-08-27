private "_this";
_this = _this select 0;

// Script 1: Add "Check Ownership" action to the vehicle
_this addAction ["Check Ownership", {
    params ["_target", "_caller", "_actionId"];
    
    // Remove the "Check Ownership" action immediately after it's selected
    _target removeAction _actionId;
    
    // Execute the ownership check script remotely on the server
    ["arma3mercenaries\vehicle_ownership\ownershipCheck.sqf", [_target, _caller]] remoteExec ["execVM", 2];
    
}, "", 0, false, false, "", "(alive _caller) && !dialog && _caller distance _target < 5"];


