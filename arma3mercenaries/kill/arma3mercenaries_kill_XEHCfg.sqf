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

// CBA settings for arma3mercenaries Kill Script
[
    "arma3mercenaries_killFeedDuration", // Internal setting name
    "SLIDER", // setting type
    ["Killfeed Display Duration", "Adjust the duration (in seconds) the killfeed notification remains on screen."], // Pretty name and description
    "arma3mercenaries", // Category
    [1, 20, 5, 1], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_friendlyFirePenalty", // Internal setting name
    "SLIDER", // setting type
    ["Friendly Fire Penalty (Bank)", "Set the amount of credits deducted for friendly fire incidents from the player's bank account."], // Pretty name and description
    "arma3mercenaries", // Category
    [0, 100000, 10000, 1000], // data for this setting: [min, max, default, step size]
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_friendlyFireCompensation", // Internal setting name
    "SLIDER", // setting type
    ["Friendly Fire Compensation (Bank)", "Set the amount of credits awarded to a player when killed by friendly fire. Credits are added to the player's bank account."], // Pretty name and description
    "arma3mercenaries", // Category
    [0, 100000, 20000, 1000], // data for this setting: [min, max, default, step size]
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_opforKillReward", // Internal setting name
    "SLIDER", // setting type
    ["OPFOR Kill Reward (Random, Wallet)", "Set the maximum random amount of credits awarded for killing an OPFOR unit. Credits are added to the player's wallet."], // Pretty name and description
    "arma3mercenaries", // Category
    [0, 100000, 10000, 1000], // data for this setting: [min, max, default, step size]
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_opforAiWallet", // Internal setting name
    "SLIDER", // setting type
    ["OPFOR AI Wallet Amount (Random, Wallet)", "Set the amount of random credits awarded to a killed OPFOR AI unit. Credits are added to the AI unit's wallet."], // Pretty name and description
    "arma3mercenaries", // Category
    [0, 100000, 10000, 1000], // data for this setting: [min, max, default, step size]
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_natoKillReward", // Internal setting name
    "SLIDER", // setting type
    ["NATO Kill Reward (Random, Wallet)", "Set the maximum random amount of credits awarded for killing a NATO unit. Credits are added to the player's wallet."], // Pretty name and description
    "arma3mercenaries", // Category
    [0, 100000, 10000, 1000], // data for this setting: [min, max, default, step size]
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_natoAiWallet", // Internal setting name
    "SLIDER", // setting type
    ["NATO AI Wallet Amount (Random, Wallet)", "Set the amount of random credits awarded to a killed NATO AI unit. Credits are added to the AI unit's wallet."], // Pretty name and description
    "arma3mercenaries", // Category
    [0, 100000, 1000, 100], // data for this setting: [min, max, default, step size]
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_independentKillReward", // Internal setting name
    "SLIDER", // setting type
    ["Independent Kill Reward (Random, Wallet)", "Set the maximum random amount of credits awarded for killing an Independent unit. Credits are added to the player's wallet."], // Pretty name and description
    "arma3mercenaries", // Category
    [0, 100000, 10000, 1000], // data for this setting: [min, max, default, step size]
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_independentAiWallet", // Internal setting name
    "SLIDER", // setting type
    ["Independent AI Wallet Amount (Random, Wallet)", "Set the amount of random credits awarded to a killed Independent AI unit. Credits are added to the AI unit's wallet."], // Pretty name and description
    "arma3mercenaries", // Category
    [0, 100000, 1000, 100], // data for this setting: [min, max, default, step size]
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_natoPenaltyIndependent", // Internal setting name
    "SLIDER", // setting type
    ["NATO Penalty for Killing Independent (Bank)", "Set the amount of credits deducted from a NATO player's bank account for killing an Independent unit."], // Pretty name and description
    "arma3mercenaries", // Category
    [0, 100000, 10000, 1000], // data for this setting: [min, max, default, step size]
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_civilianKillPenalty", // Internal setting name
    "SLIDER", // setting type
    ["Civilian Kill Penalty (Bank)", "Set the amount of credits deducted from a player's bank account for killing a civilian."], // Pretty name and description
    "arma3mercenaries", // Category
    [0, 100000, 10000, 1000], // data for this setting: [min, max, default, step size]
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_civilianAiWallet", // Internal setting name
    "SLIDER", // setting type
    ["Civilian AI Wallet Amount (Random, Wallet)", "Set the amount of random credits awarded to a killed Civilian AI unit. Credits are added to the AI unit's wallet."], // Pretty name and description
    "arma3mercenaries", // Category
    [0, 100000, 1000, 100], // data for this setting: [min, max, default, step size]
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_deathPenalty", // Internal setting name
    "SLIDER", // setting type
    ["Death Penalty Amount (Bank)", "Set the amount of credits deducted from the player's bank account when they die."], // Pretty name and description
    "arma3mercenaries", // Category
    [0, 100000, 10000, 1000], // data for this setting: [min, max, default, step size]
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_killMarkerEnabled", // Internal setting name
    "CHECKBOX", // setting type
    ["Enable Kill Markers", "Toggles the creation of kill markers on the map."], // Pretty name and description
    "arma3mercenaries", // Category
    true, // default value
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_killMarkerSize", // Internal setting name
    "SLIDER", // setting type
    ["Kill Marker Size", "Set the size of the kill markers on the map."], // Pretty name and description
    "arma3mercenaries", // Category
    [0.1, 2, 0.5, 0.1], // data for this setting: [min, max, default, step size]
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_deathMarkerEnabled", // Internal setting name
    "CHECKBOX", // setting type
    ["Enable Death Markers", "Toggles the creation of death markers on the map."], // Pretty name and description
    "arma3mercenaries", // Category
    true, // default value
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_deathMarkerSize", // Internal setting name
    "SLIDER", // setting type
    ["Death Marker Size", "Set the size of the death markers on the map."], // Pretty name and description
    "arma3mercenaries", // Category
    [0.1, 2, 0.5, 0.1], // data for this setting: [min, max, default, step size]
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_killNotificationSound", // Internal setting name
    "CHECKBOX", // setting type
    ["Enable Kill Notification Sound", "Toggles the sound notification that plays when a kill is registered."], // Pretty name and description
    "arma3mercenaries", // Category
    true, // default value
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_silentHints", // Internal setting name
    "CHECKBOX", // setting type
    ["Enable Silent Hints", "Toggles the display of silent hints related to kill rewards and penalties."], // Pretty name and description
    "arma3mercenaries", // Category
    true, // default value
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_killFeedEnabled", // Internal setting name
    "CHECKBOX", // setting type
    ["Enable Killfeed", "Toggles the display of the killfeed notification."], // Pretty name and description
    "arma3mercenaries", // Category
    true, // default value
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_globalKillMarker", // Internal setting name
    "CHECKBOX", // setting type
    ["Enable Global Kill Marker Notifications", "Toggles the display of kill marker notifications in the global side chat."], // Pretty name and description
    "arma3mercenaries", // Category
    false, // default value
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_globalDeathMarker", // Internal setting name
    "CHECKBOX", // setting type
    ["Enable Global Death Marker Notifications", "Toggles the display of death marker notifications in the global side chat."], // Pretty name and description
    "arma3mercenaries", // Category
    false, // default value
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "arma3mercenaries_unconsciousMarkerEnabled", // Internal setting name
    "CHECKBOX", // setting type
    ["Enable Unconscious Marker", "Toggles the creation of markers for unconscious players on the map."], // Pretty name and description
    "arma3mercenaries", // Category
    true, // default value
    1, // "_isGlobal" flag
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;