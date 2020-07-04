radiostate = "OFF";
jukestate = "OFF";
execVM "Vcom\VcomInit.sqf";
execVM "scripts\killedEventHandlers.sqf";
execVM "GF_Killfeed\GF_Killfeed.sqf";
[west, "LOADOUT1"] call BIS_fnc_addRespawnInventory;