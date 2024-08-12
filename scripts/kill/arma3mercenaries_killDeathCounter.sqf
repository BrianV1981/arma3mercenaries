/*
**********UNTESTED**********
 scripts/kill/arma3mercenaries_killDeathCounter.sqf
 by BrianV1981
 
 // Load kill and death counters based on the player's UID
private _uid = getPlayerUID player;
arma3mercenaries_killCounter = profileNamespace getVariable [_uid + "_killCounter", 0];
arma3mercenaries_deathCounter = profileNamespace getVariable [_uid + "_deathCounter", 0];
 
*/

// Get the player's UID
private _uid = getPlayerUID player;

// Initialize player kill and death counters if not already initialized
if (isNil {profileNamespace getVariable [_uid + "_killCounter", nil]}) then {
    profileNamespace setVariable [_uid + "_killCounter", 0];
};
if (isNil {profileNamespace getVariable [_uid + "_deathCounter", nil]}) then {
    profileNamespace setVariable [_uid + "_deathCounter", 0];
};

// Function to save kill and death counters
private _saveCounters = {
    profileNamespace setVariable [_uid + "_killCounter", arma3mercenaries_killCounter];
    profileNamespace setVariable [_uid + "_deathCounter", arma3mercenaries_deathCounter];
    saveProfileNamespace;
};

// Event handler for entity killed
addMissionEventHandler ["entityKilled", {
    params ["_killed", "_killer", "_instigator"];

    // Only count kills if the instigator is the local player
    if (local _instigator && _instigator == player) then {
        arma3mercenaries_killCounter = arma3mercenaries_killCounter + 1;
        ["Your arma3mercenaries kill count: %1", arma3mercenaries_killCounter] call BIS_fnc_infoText;
    };

    // Save the updated kill counter
    call _saveCounters;
}];

// Event handler for player death
player addEventHandler ["Respawn", {
    arma3mercenaries_deathCounter = arma3mercenaries_deathCounter + 1;
    ["Your arma3mercenaries death count: %1", arma3mercenaries_deathCounter] call BIS_fnc_infoText;

    // Save the updated death counter
    call _saveCounters;
}];
