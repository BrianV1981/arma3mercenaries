// execVM "arma3mercenaries\salvaging\arma3mercenaries_salvagingInit.sqf"; // failed idea so far...
// execVM "arma3mercenaries\salvaging\vehicleDestroyedTest.sqf"; // failed idea so far...
execVM "arma3mercenaries\sector_control\spawn\arma3mercenaries_fn_spawnSectorControlUnit_12.sqf";
execVM "arma3mercenaries\sector_control\spawn\arma3mercenaries_fn_spawnSectorControlUnit_11.sqf";
execVM "arma3mercenaries\sector_control\spawn\arma3mercenaries_fn_spawnSectorControlUnit_10.sqf";
execVM "arma3mercenaries\sector_control\spawn\arma3mercenaries_fn_spawnSectorControlUnit_9.sqf";
execVM "arma3mercenaries\sector_control\spawn\arma3mercenaries_fn_spawnSectorControlUnit_8.sqf";
execVM "arma3mercenaries\sector_control\spawn\arma3mercenaries_fn_spawnSectorControlUnit_7.sqf";
execVM "arma3mercenaries\sector_control\spawn\arma3mercenaries_fn_spawnSectorControlUnit_6.sqf";
execVM "arma3mercenaries\sector_control\spawn\arma3mercenaries_fn_spawnSectorControlUnit_5.sqf";
execVM "arma3mercenaries\sector_control\spawn\arma3mercenaries_fn_spawnSectorControlUnit_4.sqf";
execVM "arma3mercenaries\sector_control\spawn\arma3mercenaries_fn_spawnSectorControlUnit_3.sqf";
execVM "arma3mercenaries\sector_control\spawn\arma3mercenaries_fn_spawnSectorControlUnit_2.sqf";
execVM "arma3mercenaries\sector_control\spawn\arma3mercenaries_fn_spawnSectorControlUnit_1.sqf";

[] execVM "arma3mercenaries\sector_control\reward_system\arma3mercenaries_fn_sector_control_RewardSystem_1.sqf";
[] execVM "arma3mercenaries\sector_control\reward_system\arma3mercenaries_fn_sector_control_RewardSystem_2.sqf";
[] execVM "arma3mercenaries\sector_control\reward_system\arma3mercenaries_fn_sector_control_RewardSystem_3.sqf";
[] execVM "arma3mercenaries\sector_control\reward_system\arma3mercenaries_fn_sector_control_RewardSystem_4.sqf";
[] execVM "arma3mercenaries\sector_control\reward_system\arma3mercenaries_fn_sector_control_RewardSystem_5.sqf";
[] execVM "arma3mercenaries\sector_control\reward_system\arma3mercenaries_fn_sector_control_RewardSystem_6.sqf";
[] execVM "arma3mercenaries\sector_control\reward_system\arma3mercenaries_fn_sector_control_RewardSystem_7.sqf";
[] execVM "arma3mercenaries\sector_control\reward_system\arma3mercenaries_fn_sector_control_RewardSystem_8.sqf";
[] execVM "arma3mercenaries\sector_control\reward_system\arma3mercenaries_fn_sector_control_RewardSystem_9.sqf";
[] execVM "arma3mercenaries\sector_control\reward_system\arma3mercenaries_fn_sector_control_RewardSystem_10.sqf";
[] execVM "arma3mercenaries\sector_control\reward_system\arma3mercenaries_fn_sector_control_RewardSystem_11.sqf";
[] execVM "arma3mercenaries\sector_control\reward_system\arma3mercenaries_fn_sector_control_RewardSystem_12.sqf";



/// temporarily disable alive reward systems (disable installation, complete task, and objective secured)
// execVM "scripts\aliveDisableReward.sqf"; (fires off all the time - randomly)
// execVM "arma3mercenaries\ALiVE\aliveTaskReward.sqf"; (fires off all the time - randomly)

///using ace towing now
///execVM "SA_AdvancedTowing\functions\fn_advancedTowingInit.sqf";
execVM "AR_AdvancedRappelling\functions\fn_advancedRappellingInit.sqf";
execVM "SA_AdvancedSlingLoading\functions\fn_advancedSlingLoadingInit.sqf";
execVM "scripts\HG_initServer.sqf";

///execVM "scripts\deleteVehicles_Dock_1.sqf";
///execVM "scripts\deleteVehicles_Dock_2.sqf";
///execVM "scripts\deleteVehicles_Garage_1.sqf";
///execVM "scripts\deleteVehicles_Garage_2.sqf";

////http://alivemod.com/forum/4788-autosave-every-x-minutes/0 (directions say init.sqf but I think serverinit.sqf is better?)
21601 call ALiVE_fnc_AutoSave_PNS;

///https://github.com/gruppe-adler/grad-persistence/wiki/saveMission
[{[false, 3601] call grad_persistence_fnc_saveMission}, 21000, []] call CBA_fnc_addPerFrameHandler;

