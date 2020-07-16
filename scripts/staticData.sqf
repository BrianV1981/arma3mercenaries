if (!isServer) exitWith {};
 
waitUntil {!isNil "ALiVE_STATIC_DATA_LOADED"};

[ALIVE_factionDefaultAirTransport, "BLU_F", ["B_Heli_Light_01_F",""]] call ALIVE_fnc_hashSet;
[ALIVE_factionDefaultAirTransport, "OPF_F", ["O_Heli_Attack_02_F",""]] call ALIVE_fnc_hashSet;