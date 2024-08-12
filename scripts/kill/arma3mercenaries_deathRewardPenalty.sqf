/*

arma3mercenaries Death Reward/Penalty Script Overview
This script manages financial rewards and penalties based on kill events in Arma 3. It handles different scenarios based on the sides (factions) of the killer and the killed unit, applying appropriate rewards or penalties. Additionally, it deals with friendly fire incidents by penalizing or compensating players as necessary.

Script Breakdown
Initialization:

The script starts by logging the initialization of the arma3mercenaries Death Reward/Penalty Script.
It adds an event handler to listen for the entityKilled event, which triggers whenever an entity is killed in the mission.
Handling the entityKilled Event:

The script captures three key parameters:
_killed: The unit that was killed.
_killer: The unit responsible for the kill.
_instigator: The unit or object that initiated the kill (e.g., a vehicle driver).
Instigator Check:

If the _instigator is null (such as in a road kill scenario), the script sets the _killer as the _instigator to ensure the correct unit is credited with the kill.
Local Instigator and Human-Like Unit Check:

The script checks if the _instigator is local to the machine (i.e., controlled by the local client) and if the _killed unit is a human-like entity (CAManBase).
This ensures that rewards and penalties are applied only in relevant scenarios, such as when the unit is a player or AI controlled by a player.
Determine Sides of Killer and Killed Unit:

The script determines the faction (side) of both the killer and the killed unit by checking their configuration in the game.
It stores these values in _sideKiller and _sideKilled.
A readable name for the faction of the killed unit is also determined and stored in _factionName.
Friendly Fire Detection:

If the killer and the killed unit are from the same faction (friendly fire):
Penalty for the instigator (player): Deduct 10,000 credits from the player's bank account.
A hint is sent to the player informing them of the friendly fire incident and the penalty.
If a player is killed by friendly fire:
Compensation: The killed player receives 20,000 credits in their bank account (10,000 to offset the death penalty and 10,000 as compensation).
A direct message is sent to the killed player with details about the incident.
Side-Based Reward and Penalty Logic:

The script uses a switch-case structure to handle different scenarios based on the side of the killed unit:
Case 0: OPFOR Killed

Reward: The killer (player or AI) receives a random reward of up to 10,000 credits added to their wallet.
Additional Feature: The killed OPFOR unit also receives a random amount of up to 10,000 credits in their wallet, making their corpse lootable.
Case 1: NATO Killed

Reward: If the killer is OPFOR, they receive a reward of up to 10,000 credits added to their wallet.
Friendly Fire Penalty: If the killer is NATO (friendly fire), the script checks for friendly fire and handles penalties separately.
Additional Feature: The killed NATO unit also receives a random amount of up to 1,000 credits in their wallet.
Case 2: Independent Killed

Reward/Penalty: If the killer is OPFOR, they receive a reward of up to 10,000 credits added to their wallet. If the killer is NATO (friendly fire), they are penalized with a 10,000 credit deduction from their bank account, and a hint is shown.
Additional Feature: The killed Independent unit also receives a random amount of up to 1,000 credits in their wallet.
Case 3: Civilian Killed

Penalty: The killer, regardless of side, is penalized with a 10,000 credit deduction from their bank account, and a hint is shown.
Additional Feature: The killed Civilian unit also receives a random amount of up to 1,000 credits in their wallet.
Death Penalty for Players:

If a player dies and it's not friendly fire, they receive a 10,000 credit deduction from their bank account.
A hint is sent to the player notifying them of the penalty.
Summary
Functionality: This script manages financial rewards and penalties based on kill events. It applies rewards for killing enemy units, penalties for killing friendly or civilian units, and compensation for being killed by friendly fire. The script also ensures that AI units become lootable by adding random funds to their wallets upon death.
Logic: The script distinguishes between different factions, applying appropriate financial changes based on the side of the killer and the killed unit. It handles special cases like friendly fire and provides in-game notifications to keep players informed of their actions and consequences.

*/

diag_log "//________________ arma3mercenaries Death Reward/Penalty Script ________________";

addMissionEventHandler ["entityKilled", {
    params ["_killed", "_killer", "_instigator"];

    // If the instigator is null (e.g., road kill), set the killer as the instigator
    if (isNull _instigator) then { _instigator = _killer };

    // Check if the instigator is local to the machine and the killed unit is a human-like unit
    if (local _instigator && _killed isKindOf "CAManBase") then {
        // Determine the sides of the killer and the killed unit
        private _sideKiller = getNumber (configFile >> "cfgVehicles" >> typeOf _instigator >> "side");
        private _sideKilled = getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side");

        // Get a readable name for the faction
        private _factionName = switch (_sideKilled) do {
            case 0: { "OPFOR" };
            case 1: { "NATO" };
            case 2: { "Independent" };
            case 3: { "Civilian" };
            default { "Unknown Faction" };
        };

        // Check if the kill was friendly fire (same side) and the instigator is a player
        if (_sideKiller == _sideKilled && isPlayer _instigator) then {
            // Penalty: Deduct 10,000 credits from the instigator's bank account
            [_instigator, -10000, true] call grad_moneymenu_fnc_addFunds;

            // Send a hint to the instigator about the friendly fire
            private _message = format ["You killed a %1 member! 10,000 cr. has been deducted from your bank account.", _factionName];
            [_message] remoteExec ["hintSilent", _instigator];
        };

        // Check if the player was killed by friendly fire
        if (isPlayer _killed && _sideKiller == _sideKilled && _instigator != _killed) then {
            // Friendly fire compensation: Add 20,000 credits to the killed player's bank account
            [_killed, 20000, true] call grad_moneymenu_fnc_addFunds;

            // Send a direct message to the player about the friendly fire
            private _message = format ["%1 were killed by friendly fire by %2 with a %3 from %4m. 10,000 cr. has been wired to your bank account.", name _killed, name _instigator, _weaponDisplayName, floor _distance];
            [_message] remoteExec ["hintSilent", _killed];
        };

        // Switch-case structure to handle different scenarios based on the side of the killed unit
        switch (_sideKilled) do {
            case 0: {
                // OPFOR unit killed
                [_instigator, random 10000] call grad_moneymenu_fnc_addFunds;
                if (!isPlayer _killed) then {
                    [_killed, random 10000] call grad_moneymenu_fnc_addFunds;
                };
            };
            case 1: {
                if (_sideKiller == 0) then {
                    // OPFOR killed NATO
                    [_instigator, random 10000] call grad_moneymenu_fnc_addFunds;
                } else {
                    if (!isPlayer _killed) then {
                        [_killed, random 1000] call grad_moneymenu_fnc_addFunds;
                    };
                };
            };
            case 2: {
                if (_sideKiller == 0) then {
                    // OPFOR killed Independent
                    [_instigator, random 10000] call grad_moneymenu_fnc_addFunds;
                } else {
                    [_instigator, -10000, true] call grad_moneymenu_fnc_addFunds;
                    if (isPlayer _instigator) then {
                        private _message = format ["You killed an Independent member! (NATO allied) 10,000 cr. has been deducted from your bank account."];
                        [_message] remoteExec ["hintSilent", _instigator];
                    };
                    if (!isPlayer _killed) then {
                        [_killed, random 1000] call grad_moneymenu_fnc_addFunds;
                    };
                };
            };
            case 3: {
                [_instigator, -10000, true] call grad_moneymenu_fnc_addFunds;
                if (!isPlayer _killed) then {
                    [_killed, random 1000] call grad_moneymenu_fnc_addFunds;
                };
                if (isPlayer _instigator) then {
                    private _message = format ["You killed a civilian! 10,000 cr. has been deducted from your bank account."];
                    [_message] remoteExec ["hintSilent", _instigator];
                };
            };
        };
    };

    // Apply a death penalty if a player dies and it's not friendly fire
    if (isPlayer _killed && _sideKiller != _sideKilled) then {
        [_killed, -10000, true] call grad_moneymenu_fnc_addFunds;
        "You died! 10,000 cr. has been deducted from your bank account." remoteExec ["hintSilent", _killed];
    };
}];
