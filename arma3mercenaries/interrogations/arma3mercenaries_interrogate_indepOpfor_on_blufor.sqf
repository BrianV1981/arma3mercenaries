/*
	arma3mercenaries_interrogate_indepOpfor_on_blufor.sqf
     Author: BrianV1981

    Description:
    This script allows Independent and OPFOR players to "interrogate" BLUFOR soldiers within a 30-meter radius.
    Upon activation, the script first notifies the player about the number of BLUFOR soldiers being interrogated.
    After a 5-minute delay, each soldier is considered interrogated and removed (killed). The player receives
    a financial reward for each soldier processed, but only after all have been killed, simulating the extraction 
    and processing of intelligence. This provides gameplay incentives and strategic benefits to Independent and OPFOR factions.
*/

// Get the player who activated the action
private _player = _this select 0;
if (!(side _player in [east, independent])) exitWith {
    hint "Only Independent or OPFOR members can perform this action.";
};

private _pos = getPos _player;
private _bluforSoldiers = _pos nearEntities ["Man", 30]; // Searching for BLUFOR soldiers within 30 meters
private _totalReward = 0;

// Notify the player about the number of soldiers being interrogated
private _initialMessage = format ["%1 BLUFOR soldiers are being interrogated. Payment will be received upon completion.", count _bluforSoldiers];
_initialMessage cutText ["PLAIN", "PLAIN DOWN"];

// Delay processing of each soldier
[_bluforSoldiers, _player] spawn {
    params ["_bluforSoldiers", "_player"];
    sleep 300; // 5-minute delay

    // Process each BLUFOR soldier within 30 meters
    {
        if (side _x == west && _x != _player) {
            _x setDamage 1; // "Kill" the BLUFOR soldier
            private _reward = random [10000, 30000, 50000];
            _totalReward = _totalReward + _reward; // Accumulate total reward
        }
    } forEach _bluforSoldiers;

    // Apply the total reward to the player
    [getPlayerUID _player, _totalReward] call grad_lbm_fnc_addFunds;

    // Provide dynamic feedback to the player
    private _completionMessage = format ["Interrogation complete. %1 cr. has been handed to you. Use it to fund the war effort.", _totalReward];
    _completionMessage cutText ["PLAIN", "PLAIN DOWN"];
};
