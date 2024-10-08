/*
 rename and make this your XEH_postInit.sqf and put it in your main mission folder...
 
 ...or,
 
 call/execute this script located at "scripts\kill\arma3mercenaries_kill_XEHCfg.sqf" in the  XEH_postInit.sqf that is usually in your main mission folder because multiple mods/scripts utilize it for CBA.

execVM "scripts\kill\arma3mercenaries_kill_XEHCfg.sqf";

by BrianV1981

 */
 
// Initialize CBA settings for arma3mercenaries
if (isServer) then {
    ["initialize", "arma3mercenaries"] call CBA_settings_fnc_init;
};

// CBA settings for Kill Feed
[
    "arma3mercenaries_killFeedDuration",
    "SLIDER",
    ["Killfeed Display Duration", "Adjust the duration (in seconds) the killfeed notification remains on screen."],
    "arma3mercenaries Killfeed Settings",
    [1, 20, 5, 1],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_killFeedEnabled",
    "CHECKBOX",
    ["Enable Killfeed", "Toggles the display of the killfeed notification."],
    "arma3mercenaries Killfeed Settings",
    true,
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_killNotificationSound",
    "CHECKBOX",
    ["Enable Kill Notification Sound", "Toggles the sound notification that plays when a kill is registered."],
    "arma3mercenaries Killfeed Settings",
    true,
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_silentHints",
    "CHECKBOX",
    ["Enable Silent Hints", "Toggles the display of silent hints related to kill rewards and penalties."],
    "arma3mercenaries Killfeed Settings",
    true,
    1,
    {}
] call CBA_fnc_addSetting;

// CBA settings for Reward System
[
    "arma3mercenaries_friendlyFirePenalty",
    "SLIDER",
    ["Friendly Fire Penalty (Bank)", "Set the amount of credits deducted for friendly fire incidents from the player's bank account."],
    "arma3mercenaries Reward Settings",
    [0, 100000, 10000, 1000],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_friendlyFireCompensation",
    "SLIDER",
    ["Friendly Fire Compensation (Bank)", "Set the amount of credits awarded to a player when killed by friendly fire. Credits are added to the player's bank account."],
    "arma3mercenaries Reward Settings",
    [0, 100000, 20000, 1000],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_opforKillReward",
    "SLIDER",
    ["OPFOR Kill Reward (Random, Wallet)", "Set the maximum random amount of credits awarded for killing an OPFOR unit. Credits are added to the player's wallet."],
    "arma3mercenaries Reward Settings",
    [0, 100000, 10000, 1000],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_opforAiWallet",
    "SLIDER",
    ["OPFOR AI Wallet Amount (Random, Wallet)", "Set the amount of random credits awarded to a killed OPFOR AI unit. Credits are added to the AI unit's wallet."],
    "arma3mercenaries Reward Settings",
    [0, 100000, 10000, 1000],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_natoKillReward",
    "SLIDER",
    ["NATO Kill Reward (Random, Wallet)", "Set the maximum random amount of credits awarded for killing a NATO unit. Credits are added to the player's wallet."],
    "arma3mercenaries Reward Settings",
    [0, 100000, 10000, 1000],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_natoAiWallet",
    "SLIDER",
    ["NATO AI Wallet Amount (Random, Wallet)", "Set the amount of random credits awarded to a killed NATO AI unit. Credits are added to the AI unit's wallet."],
    "arma3mercenaries Reward Settings",
    [0, 100000, 1000, 100],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_independentKillReward",
    "SLIDER",
    ["Independent Kill Reward (Random, Wallet)", "Set the maximum random amount of credits awarded for killing an Independent unit. Credits are added to the player's wallet."],
    "arma3mercenaries Reward Settings",
    [0, 100000, 10000, 1000],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_independentAiWallet",
    "SLIDER",
    ["Independent AI Wallet Amount (Random, Wallet)", "Set the amount of random credits awarded to a killed Independent AI unit. Credits are added to the AI unit's wallet."],
    "arma3mercenaries Reward Settings",
    [0, 100000, 1000, 100],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_natoPenaltyIndependent",
    "SLIDER",
    ["NATO Penalty for Killing Independent (Bank)", "Set the amount of credits deducted from a NATO player's bank account for killing an Independent unit."],
    "arma3mercenaries Reward Settings",
    [0, 100000, 10000, 1000],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_civilianKillPenalty",
    "SLIDER",
    ["Civilian Kill Penalty (Bank)", "Set the amount of credits deducted from a player's bank account for killing a civilian."],
    "arma3mercenaries Reward Settings",
    [0, 100000, 10000, 1000],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_civilianAiWallet",
    "SLIDER",
    ["Civilian AI Wallet Amount (Random, Wallet)", "Set the amount of random credits awarded to a killed Civilian AI unit. Credits are added to the AI unit's wallet."],
    "arma3mercenaries Reward Settings",
    [0, 100000, 1000, 100],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_deathPenalty",
    "SLIDER",
    ["Death Penalty Amount (Bank)", "Set the amount of credits deducted from the player's bank account when they die."],
    "arma3mercenaries Reward Settings",
    [0, 100000, 10000, 1000],
    1,
    {}
] call CBA_fnc_addSetting;

// CBA settings for Marker System
[
    "arma3mercenaries_killMarkerEnabled",
    "CHECKBOX",
    ["Enable Kill Markers", "Toggles the creation of kill markers on the map."],
    "arma3mercenaries Marker Settings",
    true,
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_killMarkerSize",
    "SLIDER",
    ["Kill Marker Size", "Set the size of the kill markers on the map."],
    "arma3mercenaries Marker Settings",
    [0.1, 2, 0.5, 0.1],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_deathMarkerEnabled",
    "CHECKBOX",
    ["Enable Death Markers", "Toggles the creation of death markers on the map."],
    "arma3mercenaries Marker Settings",
    true,
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_deathMarkerSize",
    "SLIDER",
    ["Death Marker Size", "Set the size of the death markers on the map."],
    "arma3mercenaries Marker Settings",
    [0.1, 2, 0.5, 0.1],
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_globalKillMarker",
    "CHECKBOX",
    ["Enable Global Kill Marker Notifications", "Toggles the display of kill marker notifications in the global side chat."],
    "arma3mercenaries Marker Settings",
    false,
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_globalDeathMarker",
    "CHECKBOX",
    ["Enable Global Death Marker Notifications", "Toggles the display of death marker notifications in the global side chat."],
    "arma3mercenaries Marker Settings",
    false,
    1,
    {}
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_unconsciousMarkerEnabled",
    "CHECKBOX",
    ["Enable Unconscious Marker", "Toggles the creation of markers for unconscious players on the map."],
    "arma3mercenaries Marker Settings",
    true,
    1,
    {}
] call CBA_fnc_addSetting;
