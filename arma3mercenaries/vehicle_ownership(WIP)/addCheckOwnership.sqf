// Script 1: Add "Check Ownership" action to the vehicle

_this addAction ["Check Ownership", {
    params ["_target", "_caller", "_actionId"];
    
    // Remove the "Check Ownership" action immediately after it's selected
    _target removeAction _actionId;
    
    // Execute the ownership check script remotely on the server
    [_target, _caller] remoteExec ["execVM", 2, "arma3mercenaries\vehicle_ownership\ownershipCheck.sqf"];
    
}, "", 0, false, false, "", "(alive _caller) && !dialog && _caller distance _target < 5"];
