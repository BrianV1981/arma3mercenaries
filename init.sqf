execVM "Vcom\VcomInit.sqf";
execVM "scripts\killedEventHandlers.sqf";
execVM "GF_Killfeed\GF_Killfeed.sqf";
[west, "LOADOUT1"] call BIS_fnc_addRespawnInventory;
call compile preprocessFile "scripts\staticData.sqf";
10800 call ALiVE_fnc_AutoSave_PNS;
0 = [] execVM "scripts\VEH_autoflip.sqf";
enableSaving [false,false];