execVM "scripts\jukebox\playRandomTracks.sqf";
execVM "scripts\aliveCaptured.sqf";
//execVM "scripts\killedEventHandlers.sqf";merged with GF killfeed
execVM "GF_Killfeed\GF_Killfeed.sqf";
[west, "LOADOUT1"] call BIS_fnc_addRespawnInventory;
[resistance, "LOADOUT2"] call BIS_fnc_addRespawnInventory;
[] spawn VCM_fnc_VcomInit;
////////////////////////https://forums.bohemia.net/forums/topic/190877-solved-respawn-delay-as-parameter////////////////////////////////
_respawnDelay = "respawnDelay" call BIS_fnc_getParamValue;
setPlayerRespawnTime _respawnDelay;

///http://alivemod.com/wiki/index.php/Script_Snippets
/// If you use the ALiVE saving feature one 'issue' is that AI members in the player's group do not get saved or restored. If they are editor-placed units then they will spawn at their original editor start location instead of wherever the player is. To work around this do the following:
execVM "scripts\aliveGroupMemberPersistence.sqf";
