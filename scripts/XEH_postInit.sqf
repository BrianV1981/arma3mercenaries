[
    "LootToVehicleExtended_MaxTransferDistance", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Max Transfer Distance", "Maxium distance interaction will show from target vehicle"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Loot to Vehicle for ACE", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 100, 15, 1], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;
[
    "LootToVehicleExtended_TransferSpeedSeconds", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Transfer speed in seconds", "Amount of seconds to transfer 100 units of weight\nFor example, most rifles in the game are 100 weight units, so a value of 1 second would take 1 second to transfer\nSet to 0 to disable interaction time."], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Loot to Vehicle for ACE", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 10, 1, 1], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;
/*
[
    "LootToVehicleExtended_PlaySound", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    ["Play sound effect when looting?"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Loot to Vehicle for ACE", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    false, // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;
*/
[
    "LootToVehicleExtended_TransferUniform", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    ["Transfer Uniforms?","TRUE: Uniforms will be transfered to target\nFALSE: Uniforms will NOT be transfered to target"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Loot to Vehicle for ACE", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    true, // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;
[
    "LootToVehicleExtended_PlayAnimation", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    ["Play animation while transfering?","TRUE: Animation will be played until action is finished or canceled\nFALSE: No animation will be played"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Loot to Vehicle for ACE", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    true, // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;
[
    "LootToVehicleExtended_DeleteBodies", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    ["Delete bodies after looting?"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Loot to Vehicle for ACE", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    true, // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

private _action = [
    "LootToVehicleExtended_transferAction", "Load Loot to Vehicle", "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa",
    {
        params ["_target", "_player"];
        
        (nearestObjects [_player, ace_cargo_cargoHolderTypes, LootToVehicleExtended_MaxTransferDistance]) select {
            (_x != _target) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < LootToVehicleExtended_MaxTransferDistance}
        } params [["_nearestVehicle", objNull]];
        
        if (isNull _nearestVehicle) then {
            systemChat "1Tac Antistasi Looter: Error: couldn't find any nearby vehicle";
        } else {
            systemChat "1Tac Antistasi Looter: Using nearest vehicle";
            [_nearestVehicle,[_target],_player] call LootToVehicleExtended_fnc_transferToVehicle;
        };
    },
    {
        (_target isKindOf "WeaponHolderSimulated" || _target isKindOf "WeaponHolder" || !alive _target) &&
        {!(_target getVariable ["LootToVehicleExtended", false])} &&
        {[_player, _target] call ace_common_fnc_canInteractWith} &&
        {
            0 < {
                (_x != _target) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < LootToVehicleExtended_MaxTransferDistance}
            } count (nearestObjects [_player, ace_cargo_cargoHolderTypes, LootToVehicleExtended_MaxTransferDistance])
        }
    },
    {
        private _statement = {
            params ["_target", "_player", "_vehicle"];
            [_vehicle,[_target],_player] call LootToVehicleExtended_fnc_transferToVehicle;
        };
        
        private _vehicles = (nearestObjects [_target, ace_cargo_cargoHolderTypes, LootToVehicleExtended_MaxTransferDistance]) select {
            (_x != _target) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < LootToVehicleExtended_MaxTransferDistance}
        };

        [_vehicles, _statement, _target] call ace_interact_menu_fnc_createVehiclesActions;
    }
] call ace_interact_menu_fnc_createAction;

["CAManBase", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["WeaponHolder", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["WeaponHolderSimulated", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

private _transferBetweenAction = [
    "LootToVehicleExtended_transferBetweenAction", "Unload Cargo to Seperate Vehicle", "a3\ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa",
    {
        
        params ["_target", "_player"];
        
        (nearestObjects [_player, ace_cargo_cargoHolderTypes, LootToVehicleExtended_MaxTransferDistance]) select {
            (_x != _target) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < LootToVehicleExtended_MaxTransferDistance}
        } params [["_nearestVehicle", objNull]];
        
        if (isNull _nearestVehicle) then {
            systemChat "1Tac Antistasi Looter: Error: couldn't find any nearby vehicle";
        } else {
            systemChat "1Tac Antistasi Looter: Using nearest vehicle";
            [_nearestVehicle,[_target],_player] call LootToVehicleExtended_fnc_transferToVehicle;
        };
    },
    {
        count ((nearestObjects [_target, ace_cargo_cargoHolderTypes, LootToVehicleExtended_MaxTransferDistance]) select {
            (_x != _target) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < LootToVehicleExtended_MaxTransferDistance}
        }) > 0;
    },
    {
        private _statement = {
            params ["_target", "_player", "_vehicle"];
            [_vehicle,[_target],_player] call LootToVehicleExtended_fnc_transferToVehicle;
        };
        
        private _vehicles = (nearestObjects [_target, ["landVehicle","air","ship","ReammoBox_F"], LootToVehicleExtended_MaxTransferDistance]) select {
            (_x != _target) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < LootToVehicleExtended_MaxTransferDistance} && (getNumber(configFile >> "CfgVehicles" >> typeOf _x >> "transportMaxBackpacks") + getNumber(configFile >> "CfgVehicles" >> typeOf _x >> "transportMaxMagazines") + getNumber(configFile >> "CfgVehicles" >> typeOf _x >> "transportMaxWeapons") != 0)
        };

        [_vehicles, _statement, _target] call ace_interact_menu_fnc_createVehiclesActions;
    }
] call ace_interact_menu_fnc_createAction;

private _actionVehicle = [
    "LootToVehicleExtended_transferActionVehicle", "Load Loot to Vehicle", "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa",
    {
        params ["_target", "_player"];
        private _containerList = (nearestObjects[_target,["CAManBase","WeaponHolder","WeaponHolderSimulated"],LootToVehicleExtended_MaxTransferDistance] select {!alive _x || !(_x isKindOf "CAManBase")});
        [_target,_containerList,_player] call LootToVehicleExtended_fnc_transferToVehicle;
    },
    {
        (getNumber(configFile >> "CfgVehicles" >> typeOf _target >> "transportMaxBackpacks") + getNumber(configFile >> "CfgVehicles" >> typeOf _target >> "transportMaxMagazines") + getNumber(configFile >> "CfgVehicles" >> typeOf _target >> "transportMaxWeapons") != 0) && (count (nearestObjects[_target,["CAManBase","WeaponHolder","WeaponHolderSimulated"],LootToVehicleExtended_MaxTransferDistance] select {!alive _x || !(_x isKindOf "CAManBase")}) > 0);
    },
    {}] call ace_interact_menu_fnc_createAction;

{
    [_x, 0, ["ACE_MainActions"], _transferBetweenAction, true] call ace_interact_menu_fnc_addActionToClass;
    [_x, 1, ["ACE_MainActions"], _transferBetweenAction, true] call ace_interact_menu_fnc_addActionToClass;
    [_x, 0, ["ACE_MainActions"], _actionVehicle, true] call ace_interact_menu_fnc_addActionToClass;
    [_x, 1, ["ACE_MainActions"], _actionVehicle, true] call ace_interact_menu_fnc_addActionToClass;
} forEach ["landVehicle","air","ship","ReammoBox_F"];