// Array of objects
_targetObjects = [shop_111, shop_112, shop_113]; // Replace these with your actual object names or variables

// Loop through each object and add the action
{
    _x addAction ["Check and Claim Nearest Vehicle", {
        params ["_target", "_caller", "_actionId"];

        // Step 2: Find the nearest player within 5 meters
        private _nearestPlayer = _target nearEntities [["CAManBase"], 5];
        if (count _nearestPlayer == 0) exitWith {
            _caller hint "No players found within 5 meters.";
        };
        private _player = _nearestPlayer select 0;

        // Step 3: Find the nearest vehicle within 100 meters of the player
        private _nearestVehicle = _player nearEntities [["Car", "Tank", "Air"], 100];
        if (count _nearestVehicle == 0) exitWith {
            _caller hint "No vehicles found within 100 meters.";
        };
        private _vehicle = _nearestVehicle select 0;

        // Step 4: Check if the vehicle is already owned
        if (!isNil {_vehicle getVariable "HG_Owner"} || !isNil {_vehicle getVariable "grad_fortifications_fortOwner"}) exitWith {
            _caller hint "This vehicle is already owned.";
        };

        // Step 5: Add claim vehicle action to the nearest vehicle if there is no owner
        _vehicle addAction ["Claim this vehicle", {
            params ["_target", "_caller", "_actionId"];
            
            // Set the owner of the vehicle
            [_target] call HG_fnc_setOwner;
            
            // Remove the action globally
            [_target, _actionId] remoteExec ["removeAction", 0, true];

            // Disable ALiVE dynamic simulation if HG_Owner is set
            if (!isNil {_target getVariable "HG_Owner"}) then {
                _target setVariable ["ALiVE_disableDynamicSimulation", true, true];
            };

        }, "", 0, false, false, "", "(alive player) && !dialog && player distance _target < 5"];

        // Hint to the player
        _caller hint "You are now able to claim this vehicle.";

    }, "", 0, false, false, "", "(alive player) && !dialog && player distance _x < 5"];
} forEach _targetObjects;
