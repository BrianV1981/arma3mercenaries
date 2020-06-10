[] execvm "scripts\kk_fnc_arrayshuffle.sqf";
radiostate = "OFF";
jukestate = "OFF";
execVM "Vcom\VcomInit.sqf";
execVM "scripts\killedEventHandlers.sqf";
[west, "LOADOUT1"] call BIS_fnc_addRespawnInventory;