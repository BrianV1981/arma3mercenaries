// Define the radius and the position to spawn the unit near the player
private _radius = 10;
private _playerPosition = getPos player;
private _randomSpawnPos = [_playerPosition, _radius, random 360] call BIS_fnc_relPos;

// Create the unit and add it to the player's group, and disable Vcom AI for this unit
"I_E_Support_AMort_F" createUnit [_randomSpawnPos, group player, "_this setVariable ['Vcm_Disable', true, true];", 0.5];

// Profile all non-profiled units with ALiVE
///[] call ALiVE_fnc_createProfilesFromUnitsRuntime;