// plays random tracks for each player independently of eachother
execVM "arma3mercenaries\jukebox\arma3mercenaries_playRandomTracks.sqf";

// ambiant radio chatter
execVM "arma3mercenaries\jukebox\ambientRadioChatter.sqf";

//execVM "scripts\healPlayerWhenIncapacitated.sqf"; // still never got this to work...on the backburner.

execVM "scripts\HG_initPlayerLocal.sqf";
execVM "arma3mercenaries\tutorials\quickTutorial.sqf";
execVM "scripts\wearAllUniforms.sqf";

[player, 1, ["ACE_SelfActions", "ACE_Equipment"], [player,"aliveStore_2",container_2,aHelipad_2,"Combat Support Menu","Emergency ALiVE Combat Support Services"] call grad_lbm_fnc_addInteraction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], [player,"haloStore_2",container_2,aHelipad_2,"High-altitude Military Parachuting","Emergency SAC Services"] call grad_lbm_fnc_addInteraction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], [player,"mercenaryStore_parachute",container_2,aHelipad_2,"Private Security Services Contractors For Hire","Emergency Constellis Holdings, Inc. Services"] call grad_lbm_fnc_addInteraction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], [player,"supplyDropStore_1",container_2,aHelipad_2,"Supply Drops","Emergency Supply Drops"] call grad_lbm_fnc_addInteraction] call ace_interact_menu_fnc_addActionToObject;


/*
// player traits
Abilities:
Boolean engineer - Ability to partially repair vehicles with toolkit, equivalent to engineer = 1; in CfgVehicles
Boolean explosiveSpecialist - Ability to defuse mines with toolkit, equivalent to canDeactivateMines = 1; in CfgVehicles
Boolean medic - Ability to treat self and others with medikit, equivalent to attendant = 1; in CfgVehicles
Boolean UAVHacker - Ability to hack enemy and frendly drones, equivalent to uavHacker = 1; in CfgVehicles
Modifiers:
Number audibleCoef - A lower value means the unit is harder to hear
Number camouflageCoef - A lower value means the unit is harder to spot
Number loadCoef - Equipment weight multiplier affecting fatigue and stamina

Syntax:
unit setUnitTrait [skillName, value, isCustom]
*/

player setUnitTrait ["UAVHacker",true];
player setUnitTrait ["explosiveSpecialist",true];
// player setUnitTrait ["engineer",true]; 

// initPlayerLocal.sqf
/*
// This script deducts funds from a player's bank account every time they respawn.
// Adding a respawn event handler
player addEventHandler ["Respawn", {
    params ["_unit", "_corpse"];
    [_unit, -10000, true] call grad_moneymenu_fnc_addFunds;
    ["You have died and 10,000 cr. has been deducted from your bank account."] remoteExec ["hintSilent", _unit];
}];

myaction = ['TestAction 1','ALiVE','pictures\icon_interact-main_64.paa',''] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], myaction] call ace_interact_menu_fnc_addActionToObject;
myaction = ['TestAction 2','Combat Support Menu','pictures\icon_interact-cs_64.paa',{["radio"] call ALIVE_fnc_radioAction},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","TestAction 1"], myaction] call ace_interact_menu_fnc_addActionToObject;
myaction = ['TestAction 3','Task Menu','pictures\icon_interact-c2_task_64.paa',{["OPEN",[]] call ALIVE_fnc_C2TabletOnAction},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","TestAction 1"], myaction] call ace_interact_menu_fnc_addActionToObject;
myaction = ['TestAction 4','Personnel Menu','pictures\icon_interact-c2_pers_64.paa',{["OPEN",[]] call ALIVE_fnc_GMTabletOnAction},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","TestAction 1"], myaction] call ace_interact_menu_fnc_addActionToObject;

//https://github.com/ALiVEOS/ALiVE.OS/blob/24e5b33bf099166a6e2a4448c9dfa33c864f4916/addons/sys_acemenu/fnc_aceMenuC2.sqf#L49
// Tasks item //
private _action = [
    "C2_Tasks",
    "Tasks",
    QMENUICON2(c2,task),
    {["OPEN",[]] call ALIVE_fnc_C2TabletOnAction},
    _c2Cond
] call ace_interact_menu_fnc_createAction;



///first try, didn't work...
[player, 1, ["ACE_SelfActions", "ACE_Equipment"],"C2_Tasks", "Tasks",QMENUICON2(c2,task),{["OPEN",[]] call ALIVE_fnc_C2TabletOnAction},_c2Cond] call ace_interact_menu_fnc_addActionToObject;


//second try, failed...
private _action = [
    "C2_Tasks",
    "Tasks",
    QMENUICON2(c2,task), // Ensure you have the correct icon path or macro
    {["OPEN",[]] call ALIVE_fnc_C2TabletOnAction},
    _c2Cond
] call ace_interact_menu_fnc_createAction;

// Add the action to the player's ACE self-interaction menu
[player, 1, _menupath, _action] call ace_interact_menu_fnc_addActionToObject;




3rd try failed
// Assuming earlier definition of _menupath and _c2Cond

// Check if the necessary condition is defined; if not, define it
if (isNil "_c2Cond") then {
    _c2Cond = { player hasWeapon "ItemMap" }; // Example condition: player must have a map
}

// Define the tasks action with the ALiVE function
private _action = [
    "C2_Tasks",  // Action ID
    "Tasks",     // Display name on the menu
    QMENUICON2(c2,task),  // Icon for the action, make sure this macro is correctly defined
    {["OPEN",[]] call ALIVE_fnc_C2TabletOnAction},  // Function to call when the action is used
    _c2Cond  // Condition for the action to be visible
] call ace_interact_menu_fnc_createAction;

// Add the action to the ACE self-interaction menu at the specified path
[player, 1, _menupath, _action] call ace_interact_menu_fnc_addActionToObject;


// It apears that I gave up on the ace self interact to call the alive mission function...
*/

////////////////////////////////////////////
// Enable full spectator in respawn screen (after testing, it can cause respawn issues, such as dropping you drom the sky and killing you, etc.)

/*
{
    missionNamespace setVariable [_x, true];
} forEach [
    "BIS_respSpecAI",                   // Allow spectating of AI
    "BIS_respSpecAllowFreeCamera",      // Allow moving the camera independent from units (players)
    "BIS_respSpecAllow3PPCamera",       // Allow 3rd person camera
    "BIS_respSpecShowFocus",            // Show info about the selected unit (disappears behind the respawn UI)
    "BIS_respSpecShowCameraButtons",    // Show buttons for switching between free camera, 1st and 3rd person view (partially overlayed by respawn UI)
    "BIS_respSpecShowControlsHelper",   // Show the controls tutorial box
    "BIS_respSpecShowHeader",           // Top bar of the spectator UI including mission time
    "BIS_respSpecLists"                 // Show list of available units and locations on the left-hand side
];

*/

//////////////////////////////////////enhanced grad persistence modification for grouped units by BrianV1981
[] execVM "arma3mercenaries\set_group_captive\groupRejoin.sqf"; // introduced a captive system for grouped AI units when the group leader/player logs out (currently a WIP)

_action = ["groupTeleport","Group Recall","",{execVM "arma3mercenaries\group_teleport\groupTeleport.sqf"},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["groupSetCaptive","Group Deactivate","",{execVM "arma3mercenaries\set_group_captive\setGroupCaptive_proofOfConcept.sqf"},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["groupRejoin","Group Reactivate","",{execVM "arma3mercenaries\set_group_captive\groupRejoin_proofOfConcept.sqf"},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

