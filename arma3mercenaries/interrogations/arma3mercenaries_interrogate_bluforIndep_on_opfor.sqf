/*
	arma3mercenaries_interrogate_bluforIndep_on_opfor.sqf
    Author: BrianV1981

    Description:
    This script allows Independent or BLUFOR players to "interrogate" OPFOR soldiers within a 30-meter radius.
    Upon activation, the script first notifies the player about the number of OPFOR soldiers being interrogated.
    Each soldier is assigned a unique variable and processed with a random delay between 1 and 5 minutes.
    The player receives a financial reward for each soldier processed, simulating the extraction 
    and processing of intelligence. This provides gameplay incentives and strategic benefits to Independent and BLUFOR factions.
*/

// Get the player who activated the action
private _player = _this select 0;
if (!(side _player in [west, independent])) exitWith {
    hint "Only Independent or BLUFOR members can perform this action.";
};

private _pos = getPos _player;
private _opforSoldiers = _pos nearEntities ["Man", 30];
_opforSoldiers = _opforSoldiers select {alive _x && side _x == east}; // Filter for alive OPFOR soldiers
private _totalReward = 0;

// Notify the player about the number of soldiers being interrogated
private _initialMessage = format ["%1 OPFOR soldiers are being interrogated. Payment will be received upon completion.", count _opforSoldiers];
[_initialMessage, 0.5, 0.1, 5, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _player, true];

// Process each OPFOR soldier with a random delay
{
    // Check if this soldier has been interrogated recently
    if ((_x getVariable ["lastInterrogationTime", 0]) > time - 300) exitWith {
        ["<t color='#FFFFFF' size='0.8'>One or more soldiers have already been interrogated recently.</t>", 0.5, 0.1, 5, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _player, true];
    };

    // Mark the soldier with the current time to prevent immediate re-interrogation
    _x setVariable ["lastInterrogationTime", time];

    // Generate a random delay and unique ID for this soldier
    private _delay = 60 + random 240; // Random delay between 1 minute (60 seconds) and 5 minutes (300 seconds)
    private _uniqueID = format ["interrogate_%1", diag_tickTime + (getPos _x select 0)]; // Use the X coordinate to help generate a unique ID
    _x setVariable [_uniqueID, true]; // Set the unique variable on the soldier

    [_x, _player, _uniqueID, _delay] spawn {
        params ["_soldier", "_player", "_id", "_delay"];
        sleep _delay; // Wait for the random delay

        if (!isNull _soldier && {_soldier getVariable [_id, false]}) then {
            _soldier setDamage 1; // "Kill" the soldier
            private _reward = 10000 + random 40000; // Random payout between 10,000 and 50,000 credits

            // Apply the reward to the player
            [_player, _reward] remoteExec ["grad_lbm_fnc_addFunds", _player, true];

            // Provide feedback to the player
            private _completionMessage = format ["<t color='#FFFFFF' size='0.8'>Interrogation complete. %1 has been handed to you.</t>", [_reward] call HG_fnc_currencyToText];
            [_completionMessage, 0.5, 0.1, 5, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _player, true];

            // Clean up the variable on the soldier
            _soldier setVariable [_id, nil];
        };
    };
} forEach _opforSoldiers;

// Clean up: Remove the temporary variable from the player
_player setVariable ["isProcessingInterrogation", nil];
