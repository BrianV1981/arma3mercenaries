
// Define the radius and the position to spawn the unit near the player
private _radius = 10;
private _playerPosition = getPos player;
private _randomSpawnPos = [_playerPosition, _radius, random 360] call BIS_fnc_relPos;

// Create the unit and add it to the player's group, and disable Vcom AI for this unit
"B_support_AMG_F" createUnit [_randomSpawnPos, group player, "_this setVariable ['Vcm_Disable', true, true];chute = 'Steerable_Parachute_F' createVehicle [0,0,0]; chute setPos [getPos this select 0, getPos this select 1, 150]; this moveIndriver chute;", 0.5, "PRIVATE", 0.5];

// Profile all non-profiled units with ALiVE
[] call ALiVE_fnc_createProfilesFromUnitsRuntime;
