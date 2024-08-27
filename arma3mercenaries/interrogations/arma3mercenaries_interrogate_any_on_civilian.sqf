/*
    arma3mercenaries_interrogate_any_on_civilian.sqf
    Author: BrianV1981

    Description:
    This script allows any player (BLUFOR, OPFOR, or Independent) to "interrogate" civilians within a 30-meter radius.
    Upon activation, the script first notifies the player about the number of civilians being interrogated.
    After a 5-minute delay, each civilian is considered interrogated and removed (killed). The player receives
    a financial reward for each civilian processed, simulating the extraction and processing of intelligence.
    This provides gameplay incentives and strategic benefits to any faction.
*/

// Get the player who activated the action
private _player = _this select 0;
private _pos = getPos _player;
private _civilians = _pos nearEntities ["Civilian", 30];
private _totalReward = 0;

// Notify the player about the number of civilians being interrogated
private _initialMessage = format ["%1 civilians are being interrogated. Payment will be received upon completion.", count _civilians];
_initialMessage cutText ["PLAIN", "PLAIN DOWN"];

// Delay processing of each civilian
[_civilians, _player] spawn {
    params ["_civilians", "_player"];
    sleep 300; // 5-minute delay

    // Process each civilian within 30 meters
    {
        if (side _x == civilian) {
            _x setDamage 1; // "Kill" the civilian
            private _reward = random [10000, 30000, 50000];
            _totalReward = _totalReward + _reward; // Accumulate total reward
        }
    } forEach _civilians;

    // Apply the total reward to the player
    [getPlayerUID _player, _totalReward] call grad_lbm_fnc_addFunds;

    // Provide dynamic feedback to the player
    private _completionMessage = format ["Interrogation complete. %1 cr. has been handed to you. Use it to fund your efforts.", _totalReward];
    _completionMessage cutText ["PLAIN", "PLAIN DOWN"];
};
