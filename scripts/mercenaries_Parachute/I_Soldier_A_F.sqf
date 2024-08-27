
/*

	*unit class name*.sqf
	Author: BrianV1981
	Description:
	AI unit creation for arma3mercenaries mission

*/
private _randomSpawnPos = player getPos [(random 20) + 1, random 359];

// Generate a unique identifier for the unit
private _playerUID = getPlayerUID player;
private _uniqueUnitID = str (diag_tickTime + random 1000);

// Construct the AI Unit ID and Group ID based on the player's UID
private _aiUnitID = format ["arma3mercenaries_aiUnit_%1_%2", _uniqueUnitID, _playerUID];
private _groupID = format ["arma3mercenaries_groupID_%1", _playerUID];

// Create the unit and assign the necessary variables
"I_Soldier_A_F" createUnit [_randomSpawnPos, (group player), format [
    "this setVariable ['arma3mercenaries_aiUnit', '%1', true];
     this setVariable ['arma3mercenaries_groupID', '%2', true];
	this setVariable ['Vcm_Disable', true, true];
	chute = 'Steerable_Parachute_F' createVehicle [0,0,0];
	chute setPos [getPos this select 0, getPos this select 1, 150];
	this moveInDriver chute;",
    _aiUnitID, _groupID
], 0.5, 'PRIVATE'];