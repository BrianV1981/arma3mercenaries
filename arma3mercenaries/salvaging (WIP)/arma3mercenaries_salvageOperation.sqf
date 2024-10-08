/*
    arma3mercenaries_salvageOperation.sqf
    Author: BrianV1981

    Description:
    This script allows players to salvage equipment from destroyed enemy vehicles using ACE interactions.
    Players earn credits by successfully completing the salvage operation, provided they meet the necessary conditions.

    Features:
    - ACE Interaction: Players use ACE interactions to initiate salvage on destroyed vehicles.
    - Progress Bar: Displays an ACE progress bar during the salvage operation.
    - Toolkit Requirement: Players must have a standard toolkit to perform the salvage.
    - Combat Check: Players cannot salvage while in combat to maintain realism.
    - Monetary Reward: Successful salvage operations reward players with credits, integrated via the grad reward system.
    - Animation: Utilizes ACE animations for a realistic salvage process.
*/

// function to create the ACE interaction
arma3mercenaries_fnc_addSalvageInteraction = {
    params ["_vehicle"];

    // Define the interaction
    private _action = [
        "SalvageVehicle",                        // Action name
        "Salvage Vehicle",                       // Display name
        "",                                      // Icon path (optional)
        {
            // Code to execute when the action is selected
            [_vehicle] execVM "arma3mercenaries\salvaging\arma3mercenaries_salvageOperation.sqf";
        },
        {
            // Condition to show the action
            // Only show the action if the vehicle is destroyed
            damage _vehicle >= 1
        }
    ];

    // Add the interaction to the vehicle
    [_vehicle, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
};


// Function to add the ACE interaction to the vehicle
arma3mercenaries_fnc_addSalvageInteraction = {
    params ["_vehicle"];

    // Create the ACE interaction action
    private _action = ["Salvage", "Salvage Vehicle", "", {
        // Begin the salvage process
        private _vehicleType = typeOf _vehicle;
        private _reward = 50000;  // Default reward

        // Find the reward for the specific vehicle type
        private _possibleRewards = _salvageValues select {(_x select 0) == _vehicleType};
        if (!isNil "_possibleRewards") then {
            private _rewardRange = _possibleRewards select 0 select 1;
            _reward = selectRandom _rewardRange;
        };

        // Apply the reward
        [player, _reward] remoteExec ["grad_lbm_fnc_addFunds", player, true];
        hint format ["You have salvaged this vehicle and earned %1 credits.", _reward];

        // Delete the vehicle after salvage
        deleteVehicle _vehicle;
    }, {
        // Conditions to show the interaction
        (damage _vehicle >= 1) && {"ToolKit" in (items player)} && !(player getVariable ["ace_medical_inCombat", false])
    }] call ace_interact_menu_fnc_createAction;

    // Add the action to the vehicle
    [_vehicle, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
};
