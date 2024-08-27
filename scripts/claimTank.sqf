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
[_this,'ACE_Track'] call grad_fortifications_fnc_addFort;
[_this,'Land_CanisterFuel_F'] call grad_fortifications_fnc_addFort;