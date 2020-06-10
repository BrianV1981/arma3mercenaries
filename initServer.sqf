execVM "scripts\aliveTaskReward.sqf";
execVM "scripts\aliveAcexPersistence.sqf";
execVM "scripts\aliveDisableReward.sqf";
execVM "scripts\aliveFortificationWhitelist.sqf";
ALIVE_spawnProfileGroup = compile (preprocessFileLineNumbers "scripts\fnc_spawnProfileGroup.sqf");