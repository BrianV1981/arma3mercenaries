/*
	claimStaticWeapon.sqf
	Author: BrianV1981
	
### Description

This script is used to manage the ownership and locking of static weapons in Arma 3. It allows players to check whether a static weapon is owned, claim it if unowned, and then lock it to prevent others from accessing it. The script is designed to be executed when the static weapon is initialized, typically via an event handler.

### Key Features:
1. **Ownership Check:**
   - The script adds an "Check if static weapon is owned" action to the static weapon.
   - When a player selects this action, the script checks if the weapon has an owner (`HG_Owner` variable).

2. **Claiming the Weapon:**
   - If the static weapon is unowned, the "Check if static weapon is owned" action is removed, and a new "Claim this static weapon" action is added.
   - When the player selects the claim action, ownership is assigned to the player, and the claim action is then removed globally.

3. **Post-Claim Actions:**
   - After claiming, the script disables ALiVE dynamic simulation for the static weapon to ensure it is not dynamically managed by the ALiVE mod.
  Notes: The static weapon is unlocked using `HG_fnc_lock' after the claim button is pressed regardless of their being an owner or not.

This script provides a robust method for managing static weapon ownership, ensuring that only authorized players can use and modify the weapon after it has been claimed.
*/

private "_this";
_this = _this select 0;

// This script is applied to the vehicle's initialization through an event handler

// Add the "Check if vehicle is owned" action to the vehicle
checkOwnerVehicleAction = _this addAction ["Check if static weapon is owned", {
    params ["_target", "_caller", "_actionId"];

    // Check if the HG_Owner variable is present and not null on the object
    if (!isNil {_target getVariable "HG_Owner"}) then {
        // If the vehicle is owned, remove the action globally
        [_target, _actionId] remoteExec ["removeAction", 0, true];
    } else {
        // If the vehicle is not owned, remove the current action
        [_target, _actionId] remoteExec ["removeAction", 0, true];

        // Add the "Claim this static weapon" action
        _target addAction ["Claim this static weapon", {
            params ["_target", "_caller", "_actionId"];

            // Set the owner of the vehicle
            [_target] call HG_fnc_setOwner;

            // Remove the claim action globally
            [_target, _actionId] remoteExec ["removeAction", 0, true];

            // Always unlock the static weapon after it is claimed
            [_target, 1] call HG_fnc_lock;

            // Check if the HG_Owner variable is present on the object
            if (!isNil {_target getVariable "HG_Owner"}) then {
                // Disable ALiVE dynamic simulation
                _target setVariable ["ALiVE_disableDynamicSimulation", true, true];
            };
        }, [], 1.5, true, true, "", "_this distance _target < 5"];
    };
}, [], 1.5, true, true, "", "_this distance _target < 5"];
