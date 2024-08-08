execVM "SA_AdvancedSlingLoading\functions\fn_advancedSlingLoadingInit.sqf";
///using ace towing now
///execVM "SA_AdvancedTowing\functions\fn_advancedTowingInit.sqf";
execVM "AR_AdvancedRappelling\functions\fn_advancedRappellingInit.sqf";
execVM "scripts\HG_initServer.sqf";

///execVM "scripts\deleteVehicles_Dock_1.sqf";
///execVM "scripts\deleteVehicles_Dock_2.sqf";
///execVM "scripts\deleteVehicles_Garage_1.sqf";
///execVM "scripts\deleteVehicles_Garage_2.sqf";

///temporarily disable alive reward systems (disable installation, complete task, and objective secured)
///execVM "scripts\aliveDisableReward.sqf";
///execVM "scripts\aliveTaskReward.sqf";
///execVM "scripts\aliveTaskRewardV2.sqf";

////http://alivemod.com/forum/4788-autosave-every-x-minutes/0 (directions say init.sqf but I think serverinit.sqf is better?)
10801 call ALiVE_fnc_AutoSave_PNS;

///https://github.com/gruppe-adler/grad-persistence/wiki/saveMission
[{[false, 3601] call grad_persistence_fnc_saveMission}, 7201, []] call CBA_fnc_addPerFrameHandler;