/*
    arma3mercenaries_interrogate_opfor_on_indep.sqf
    Author: BrianV1981

    Description:
    This script allows OPFOR players to "interrogate" Independent soldiers within a 30-meter radius.
    Upon activation, the script notifies the player about the number of Independent soldiers being interrogated.
    After a 5-minute delay, each soldier is considered interrogated and is removed (killed).
    The player receives a financial reward for each soldier processed, simulating the extraction and processing of intelligence.
    This provides strategic benefits and gameplay incentives to OPFOR factions.
*/

// Get the player who activated the action
private _player = _this select 0;
if (side _player != east) exitWith {
    hint "Only OPFOR members can perform this action.";
};

private _pos = getPos _player;
private _indepSoldiers = _pos nearEntities ["Man", 30];
private _totalReward = 0;

// Notify the player about the number of soldiers being interrogated
private _initialMessage = format ["%1 Independent soldiers are being interrogated. Payment will be received upon completion.", count _indepSoldiers];
_initialMessage cutText ["PLAIN", "PLAIN DOWN"];

// Delay processing of each soldier
[_indepSoldiers, _player] spawn {
    params ["_indepSoldiers", "_player"];
    sleep 300; // 5-minute delay

    // Process each Independent soldier within 30 meters
    {
        if (side _x == independent && _x != _player) {
            _x setDamage 1; // "Kill" the Independent soldier
            private _reward = random [10000, 30000, 50000];
            _totalReward = _totalReward + _reward; // Accumulate total reward
        }
    } forEach _indepSoldiers;

    // Apply the total reward to the player
    [getPlayerUID _player, _totalReward] call grad_lbm_fnc_addFunds;

    // Provide dynamic feedback to the player
    private _completionMessage = format ["Interrogation complete. %1 cr. has been handed to you. Use it to support your military operations.", _totalReward];
    _completionMessage cutText ["PLAIN", "PLAIN DOWN"];
};
