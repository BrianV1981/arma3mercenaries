/*
	arma3mercenaries_killRewards.sqf
	Author: BrianV1981

*/

diag_log "//________________ arma3mercenaries Kill Rewards Script ________________";

addMissionEventHandler ["entityKilled", {
    params ["_killed", "_killer", "_instigator"];

    // If the instigator is null (e.g., road kill), set the killer as the instigator
    if (isNull _instigator) then { _instigator = _killer };

    // Check if the instigator is local to the machine and the killed unit is a human-like unit
    if (local _instigator && _killed isKindOf "CAManBase") then {
        // Determine the sides of the killer and the killed unit
        private _sideKiller = getNumber (configFile >> "cfgVehicles" >> typeOf _instigator >> "side");
        private _sideKilled = getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side");

        // **Handle Friendly Fire Penalty**
        if (_sideKiller == _sideKilled && isPlayer _instigator) then {
            private _friendlyFirePenalty = arma3mercenaries_friendlyFirePenalty;
            [_instigator, -_friendlyFirePenalty, true] call grad_moneymenu_fnc_addFunds;

            // Send a hint to the instigator about the friendly fire
            private _message = format ["You killed a member of %1! %2 cr. has been deducted from your bank account.", _factionName, _friendlyFirePenalty];
            if (arma3mercenaries_silentHints) then {
                [_message] remoteExec ["hintSilent", _instigator];
            };
        };

        // **Handle Friendly Fire Compensation**
        if (isPlayer _killed && _sideKiller == _sideKilled && _instigator != _killed) then {
            private _friendlyFireCompensation = arma3mercenaries_friendlyFireCompensation;
            [_killed, _friendlyFireCompensation, true] call grad_moneymenu_fnc_addFunds;

            // Send a direct message to the player about the friendly fire
            private _message = format ["%1 were killed by friendly fire by %2 with a %3 from %4m. %5 cr. has been wired to your bank account.", name _killed, name _instigator, _weaponDisplayName, floor _distance, _friendlyFireCompensation];
            if (arma3mercenaries_silentHints) then {
                [_message] remoteExec ["hintSilent", _killed];
            };
        };

        // **Handle Kill Rewards and Penalties**
        switch (_sideKilled) do {
            case 0: {
                // OPFOR unit killed
                private _opforKillLoot = arma3mercenaries_opforKillReward;
                [_instigator, random _opforKillLoot] call grad_moneymenu_fnc_addFunds;

                // **OPFOR AI Wallet Amount**
                private _opforAiWallet = arma3mercenaries_opforAiWallet;
                [_killed, random _opforAiWallet] call grad_moneymenu_fnc_addFunds;
            };
            case 1: {
                // NATO unit killed
                if (_sideKiller == 0) then {
                    // OPFOR killed NATO
                    private _natoKillReward = arma3mercenaries_natoKillReward;
                    [_instigator, random _natoKillReward] call grad_moneymenu_fnc_addFunds;
                };

                // **NATO AI Wallet Amount**
                private _natoAiWallet = arma3mercenaries_natoAiWallet;
                if (!isPlayer _killed) then {
                    [_killed, random _natoAiWallet] call grad_moneymenu_fnc_addFunds;
                };
            };
            case 2: {
                // Independent unit killed
                if (_sideKiller == 0) then {
                    // OPFOR killed Independent
                    private _independentKillReward = arma3mercenaries_independentKillReward;
                    [_instigator, random _independentKillReward] call grad_moneymenu_fnc_addFunds;
                } else {
                    // NATO killed Independent (NATO allied)
                    private _natoPenaltyIndependent = arma3mercenaries_natoPenaltyIndependent;
                    [_instigator, -_natoPenaltyIndependent, true] call grad_moneymenu_fnc_addFunds;
                };

                // **Independent AI Wallet Amount**
                private _independentAiWallet = arma3mercenaries_independentAiWallet;
                if (!isPlayer _killed) then {
                    [_killed, random _independentAiWallet] call grad_moneymenu_fnc_addFunds;
                };
            };
            case 3: {
                // Civilian unit killed
                private _civilianKillPenalty = arma3mercenaries_civilianKillPenalty;
                [_instigator, -_civilianKillPenalty, true] call grad_moneymenu_fnc_addFunds;

                // **Civilian AI Wallet Amount**
                private _civilianAiWallet = arma3mercenaries_civilianAiWallet;
                if (!isPlayer _killed) then {
                    [_killed, random _civilianAiWallet] call grad_moneymenu_fnc_addFunds;
                };
            };
        };

        // **Handle Death Penalty**
        if (isPlayer _killed && _sideKiller != _sideKilled) then {
            private _deathPenalty = arma3mercenaries_deathPenalty;
            [_killed, -_deathPenalty, true] call grad_moneymenu_fnc_addFunds;

            // Send a hint to the killed player notifying them of the penalty
            private _message = format ["You died! %1 cr. has been deducted from your bank account.", _deathPenalty];
            if (arma3mercenaries_silentHints) then {
                [_message] remoteExec ["hintSilent", _killed];
            };
        };
    };
}];
