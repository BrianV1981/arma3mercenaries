// Script 3: Add the "Claim Vehicle" action to the vehicle

_this addAction ["Claim this vehicle", {
    params ["_target", "_caller", "_actionId"];
    
    // Set the owner of the vehicle
    [_target] call HG_fnc_setOwner;
    
    // Check if the HG_Owner variable is set and disable ALiVE dynamic simulation
    if (!isNil {_target getVariable "HG_Owner"}) then {
        _target setVariable ["ALiVE_disableDynamicSimulation", true, true];
    };

    // Remove the action globally to prevent others from claiming
    [_target, _actionId] remoteExec ["removeAction", 0, true];

    // Provide feedback to the player
    _caller hint "You have claimed this vehicle.";

}, "", 0, false, false, "", "(alive _caller) && !dialog && _caller distance _target < 5"];
