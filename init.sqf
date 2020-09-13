execVM "scripts\aliveCaptured.sqf";
execVM "scripts\killedEventHandlers.sqf";
execVM "GF_Killfeed\GF_Killfeed.sqf";
[west, "LOADOUT1"] call BIS_fnc_addRespawnInventory;
[] spawn VCM_fnc_VcomInit;
////////////////////////https://forums.bohemia.net/forums/topic/190877-solved-respawn-delay-as-parameter////////////////////////////////
_respawnDelay = "respawnDelay" call BIS_fnc_getParamValue;
setPlayerRespawnTime _respawnDelay;