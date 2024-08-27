// Script 2: Ownership check

private _target = _this select 0;
private _caller = _this select 1;

// Check if the vehicle already has an owner
if (isNil {_target getVariable "HG_Owner"} && isNil {_target getVariable "grad_fortifications_fortOwner"}) then {
    // Inform the player that they can proceed with the claim process
    _caller hint "This vehicle is unowned. You can proceed with the claim process.";

    // Execute the script to add the "Claim Vehicle" action
    [_target] execVM "arma3mercenaries\vehicle_ownership\claimVehicleAddAction.sqf";
} else {
    // If the vehicle is already owned, inform the player
    _caller hint "This vehicle is already owned.";
};
