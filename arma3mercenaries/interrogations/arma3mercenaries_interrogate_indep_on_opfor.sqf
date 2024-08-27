/*
    arma3mercenaries_interrogate_indep_on_opfor.sqf
    Author: BrianV1981

    Description:
    This script allows Independent players to "interrogate" OPFOR soldiers within a 30-meter radius.
    Upon activation, the script notifies the player about the number of OPFOR soldiers being interrogated.
    After a 5-minute delay, each soldier is considered interrogated and is removed (killed).
    The player receives a financial reward for each soldier processed, simulating the extraction and processing of intelligence.
    This provides strategic benefits and gameplay incentives to Independent factions.
*/

// Get the player who activated the action
private _player = _this select 0;
if (side _player != independent) exitWith {
    hint "Only Independent members can perform this action.";
};

private _pos = getPos _player;
private _opforSoldiers = _pos nearEntities ["Man", 30];
private _totalReward = 0;

// Notify the player about the number of soldiers being interrogated
private _initialMessage = format ["%1 OPFOR soldiers are being interrogated. Payment will be received upon completion.", count _opforSoldiers];
_initialMessage cutText ["PLAIN", "PLAIN DOWN"];

// Delay processing of each soldier
[_opforSoldiers, _player] spawn {
    params ["_opforSoldiers", "_player"];
    sleep 300; // 5-minute delay

    // Process each OPFOR soldier within 30 meters
    {
        if (side _x == east && _x != _player) {
            _x setDamage 1; // "Kill" the OPFOR soldier
            private _reward = random [10000, 30000, 50000];
            _totalReward = _totalReward + _reward; // Accumulate total reward
        }
    } forEach _opforSoldiers;

    // Apply the total reward to the player
    [getPlayerUID _player, _totalReward] call grad_lbm_fnc_addFunds;

    // Provide dynamic feedback to the player
    private _completionMessage = format ["Interrogation complete. %1 cr. has been handed to you. Use it to support your operations.", _totalReward];
    _completionMessage cutText ["PLAIN", "PLAIN DOWN"];
};
