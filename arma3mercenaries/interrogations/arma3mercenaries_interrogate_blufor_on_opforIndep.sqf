/*
    arma3mercenaries_interrogate_blufor_on_opforIndep.sqf
    Author: BrianV1981

    Description:
    This script allows BLUFOR players to "interrogate" OPFOR and Independent soldiers within a 30-meter radius.
    Upon activation, the script first notifies the player about the number of OPFOR and Independent soldiers being interrogated.
    After a 5-minute delay, each soldier is considered interrogated and removed (killed). The player receives
    a financial reward for each soldier processed, but only after all have been killed, simulating the extraction 
    and processing of intelligence. This provides gameplay incentives and strategic benefits to BLUFOR factions.
*/

// Get the player who activated the action
private _player = _this select 0;
if (side _player != west) exitWith {
    hint "Only BLUFOR members can perform this action.";
};

private _pos = getPos _player;
private _targetSoldiers = _pos nearEntities ["Man", 30];
private _totalReward = 0;

// Filter OPFOR and Independent soldiers
_targetSoldiers = _targetSoldiers select {side _x in [east, independent] && _x != _player};

// Notify the player about the number of soldiers being interrogated
private _initialMessage = format ["%1 enemy soldiers (OPFOR and Independent) are being interrogated. Payment will be received upon completion.", count _targetSoldiers];
_initialMessage cutText ["PLAIN", "PLAIN DOWN"];

// Delay processing of each soldier
[_targetSoldiers, _player] spawn {
    params ["_targetSoldiers", "_player"];
    sleep 300; // 5-minute delay

    // Process each targeted soldier within 30 meters
    {
        _x setDamage 1; // "Kill" the soldier
        private _reward = random [10000, 30000, 50000];
        _totalReward = _totalReward + _reward; // Accumulate total reward
    } forEach _targetSoldiers;

    // Apply the total reward to the player
    [getPlayerUID _player, _totalReward] call grad_lbm_fnc_addFunds;

    // Provide dynamic feedback to the player
    private _completionMessage = format ["Interrogation complete. %1 cr. has been handed to you. Use it to fund the war effort.", _totalReward];
    _completionMessage cutText ["PLAIN", "PLAIN DOWN"];
};
