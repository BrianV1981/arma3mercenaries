
//execVM "scripts\healPlayerWhenIncapacitated.sqf"; // still never gfot this to work...on the backburner.
execVM "scripts\HG_initPlayerLocal.sqf";
execVM "arma3mercenaries\tutorials\tutorial.sqf";
execVM "scripts\wearAllUniforms.sqf";
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], [player,"aliveStore_2",container_2,aHelipad_2,"Combat Support Menu","Emergency ALiVE Combat Support Services"] call grad_lbm_fnc_addInteraction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], [player,"haloStore_2",container_2,aHelipad_2,"High-altitude Military Parachuting","Emergency SAC Services"] call grad_lbm_fnc_addInteraction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], [player,"mercenaryStore_parachute",container_2,aHelipad_2,"Private Security Services Contractors For Hire","Emergency Constellis Holdings, Inc. Services"] call grad_lbm_fnc_addInteraction] call ace_interact_menu_fnc_addActionToObject;
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
*/
//////////////////////////
// this creates an event handler that fires off when the player hits escape and disables the abort button
///execVM "arma3mercenaries\disable_abort_button\arma3mercenaries_disableAbortBtn.sqf"; /// trying description.ext pauseonstart execute 
//////////////////////////
/*
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


*/

////////////////////////////////////////////
// Enable full spectator in respawn screen
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

//////////////////////////////////////enhanced grad persistence modification for grouped units by BrianV1981
// initPlayerLocal.sqf


/* 

///////////OLD VERSION
// Get the player's UID
private _playerUID = getPlayerUID player;

// Custom function to reassign units (can be placed in your function library)
player addEventHandler ["Respawn", {
    params ["_newUnit"];

    // Check if the new unit belongs to the player
    private _unitOwnerUID = _newUnit getVariable ["arma3mercenaries_groupOwner", ""];
    if (_unitOwnerUID == getPlayerUID player) then {
        // Reassign the unit to the player's group
        _newUnit joinSilent group player;
    };
}];

// Reassign existing units that belong to the player without looping
{
    private _unitOwnerUID = _x getVariable ["arma3mercenaries_groupOwner", ""];
    if (_unitOwnerUID == _playerUID) then {
        _x joinSilent group player;
    };
} forEach (allUnits select {_x getVariable ["arma3mercenaries_groupOwner", ""] == _playerUID});



///////// FAIL
// initPlayerLocal.sqf

// Get the player's UID
private _playerUID = getPlayerUID player;

// Retrieve the player's group ID from the saved data (this should be loaded elsewhere, such as in the load script)
private _groupID = player getVariable ["arma3mercenaries_groupID", ""];

// Ensure the player has their group ID reapplied on respawn or join
if (!isNil "_groupID" && {_groupID != ""}) then {
    player setVariable ["arma3mercenaries_groupID", _groupID, true];
};

// Reassign existing units to the player's group if they match the player's group ID
{
    private _unit = _x;
    private _unitGroupID = _unit getVariable ["arma3mercenaries_groupID", ""];

    // Check if the unit's group ID matches the player's group ID
    if (_unitGroupID == _groupID) then {
        // Reassign the unit to the player's group silently
        _unit joinSilent group player;
    };
} forEach (allUnits select {
    !isNull _x && {_x getVariable ["arma3mercenaries_groupID", ""] == _groupID}
});

*/

// initPlayerLocal.sqf

// Get the player's UID
private _playerUID = getPlayerUID player;

// Create the group ID using the player's UID
private _groupID = format ["arma3mercenaries_groupID_%1", _playerUID];

// Assign the group ID to the player
player setVariable ["arma3mercenaries_groupID", _groupID, true];

// Wait until the player is fully loaded
waitUntil {time > 0 && !isNull player};

// Reassign AI units with the matching group ID to the player's group
{
    private _unit = _x;
    if (!isPlayer _unit) then {
        [_unit] joinSilent group player;
    };
} forEach (allUnits select {
    _x getVariable ["arma3mercenaries_groupID", ""] == player getVariable ["arma3mercenaries_groupID", ""]
});

