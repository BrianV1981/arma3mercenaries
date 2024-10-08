// execVM "arma3mercenaries\jukebox\arma3mercenaries_playRandomTracks.sqf"; moved to initServer
// execVM "arma3mercenaries\ALiVE\aliveCaptured.sqf"; // civilain hostility increases the more we use ace handcuffs on them (conflicts with decativating Group AI)

execVM "arma3mercenaries\kill\arma3mercenaries_killFeed.sqf";
execVM "arma3mercenaries\kill\arma3mercenaries_killRewards.sqf";
execVM "arma3mercenaries\kill\arma3mercenaries_killMarkers.sqf";
// execVM "arma3mercenaries\kill\arma3mercenaries_unconsciousMarkers.sqf"; // work in progress. it works, but not as intended.

[west, "LOADOUT1"] call BIS_fnc_addRespawnInventory;
[resistance, "LOADOUT2"] call BIS_fnc_addRespawnInventory;
[] execVM "Vcom\VcomInit.sqf";
////////////////////////https://forums.bohemia.net/forums/topic/190877-solved-respawn-delay-as-parameter////////////////////////////////
_respawnDelay = "respawnDelay" call BIS_fnc_getParamValue;
setPlayerRespawnTime _respawnDelay;

///http://alivemod.com/wiki/index.php/Script_Snippets
/// If you use the ALiVE saving feature one 'issue' is that AI members in the player's group do not get saved or restored. If they are editor-placed units then they will spawn at their original editor start location instead of wherever the player is. To work around this do the following:
// execVM "arma3mercenaries\ALiVE\aliveGroupMemberPersistence.sqf";
///http://alivemod.com/wiki/index.php/Script_Snippets
ALIVE_spawnProfileGroup = compile (preprocessFileLineNumbers "arma3mercenaries\ALiVE\fnc_spawnProfileGroup.sqf");
