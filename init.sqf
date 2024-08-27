// execVM "arma3mercenaries\jukebox\arma3mercenaries_playRandomTracks.sqf"; it works but I'm sick of the songs now...
execVM "arma3mercenaries\ALiVE\aliveCaptured.sqf"; // civilain hostility increases the more we use ace handcuffs on them
//execVM "scripts\killedEventHandlers.sqf" // merged with GF killfeed which was merged with the below kill script
execVM "arma3mercenaries\kill\arma3mercenaries_Enhanced_kill_script.sqf";
[west, "LOADOUT1"] call BIS_fnc_addRespawnInventory;
[resistance, "LOADOUT2"] call BIS_fnc_addRespawnInventory;
[] execVM "Vcom\VcomInit.sqf";
////////////////////////https://forums.bohemia.net/forums/topic/190877-solved-respawn-delay-as-parameter////////////////////////////////
_respawnDelay = "respawnDelay" call BIS_fnc_getParamValue;
setPlayerRespawnTime _respawnDelay;

///http://alivemod.com/wiki/index.php/Script_Snippets
/// If you use the ALiVE saving feature one 'issue' is that AI members in the player's group do not get saved or restored. If they are editor-placed units then they will spawn at their original editor start location instead of wherever the player is. To work around this do the following:
// execVM "scripts\aliveGroupMemberPersistence.sqf";
///http://alivemod.com/wiki/index.php/Script_Snippets
ALIVE_spawnProfileGroup = compile (preprocessFileLineNumbers "arma3mercenaries\ALiVE\fnc_spawnProfileGroup.sqf");


// [] execVM "arma3mercenaries\claim_vehicle\arma3mercenaries_claimVehicle.sqf"; // does not work...yet
