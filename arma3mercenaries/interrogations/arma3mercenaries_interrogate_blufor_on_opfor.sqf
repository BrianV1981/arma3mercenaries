/*
    arma3mercenaries_interrogate_blufor_on_opfor.sqf
	Author: BrianV1981

    Description:
    This script allows BLUFOR players to "capture" OPFOR soldiers within a 30-meter radius of an activation point.
    Upon triggering the action, the player is notified about the number of OPFOR soldiers being captured. After a 5-minute delay,
    each OPFOR soldier is considered captured and removed (killed). The player then receives a financial reward for each soldier processed,
    simulating the strategic extraction and detention of enemy combatants. This provides gameplay incentives and strategic benefits to BLUFOR factions.
*/

// Get the player who activated the action
private _player = _this select 0;
if (side _player != west) exitWith {
    hint "Only BLUFOR members can perform this action.";
};

private _pos = getPos _player;
private _opforSoldiers = _pos nearEntities ["Man", 30];
private _totalReward = 0;

// Notify the player about the number of OPFOR soldiers being captured
private _initialMessage = format ["%1 OPFOR soldiers are being captured. Payment will be received upon completion.", count _opforSoldiers];
_initialMessage cutText ["PLAIN", "PLAIN DOWN"];

// Delay processing of each OPFOR soldier in a non-blocking manner
[_opforSoldiers, _player] spawn {
    params ["_opforSoldiers", "_player"];
    sleep 300; // 5-minute non-blocking delay

    // Process each OPFOR soldier within 30 meters
    {
        if (side _x == east && _x != _player) {
            _x setDamage 1; // "Capture" the OPFOR soldier
            private _reward = random [10000, 30000, 50000];
            _totalReward = _totalReward + _reward; // Accumulate total reward
        }
    } forEach _opforSoldiers;

    // Apply the total reward to the player
    [getPlayerUID _player, _totalReward] call grad_lbm_fnc_addFunds;

    // Provide dynamic feedback to the player
    private _completionMessage = format ["Capture operation complete. %1 cr. has been handed to you. Use it to fund the war effort.", _totalReward];
    _completionMessage cutText ["PLAIN", "PLAIN DOWN"];
};
