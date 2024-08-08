execVM "scripts\HG_initPlayerLocal.sqf";
execVM "scripts\deathMarker.sqf";
execVM "scripts\tutorial.sqf";
execVM "scripts\wearAllUniforms.sqf";
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], [player,"aliveStore_2",container_2,aHelipad_2,"Combat Support Menu","Emergency ALiVE Combat Support Services"] call grad_lbm_fnc_addInteraction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], [player,"haloStore_2",container_2,aHelipad_2,"High-altitude Military Parachuting","Emergency SAC Services"] call grad_lbm_fnc_addInteraction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], [player,"mercenaryStore_2",container_2,aHelipad_2,"Private Security Services Contractors For Hire","Emergency Constellis Holdings, Inc. Services"] call grad_lbm_fnc_addInteraction] call ace_interact_menu_fnc_addActionToObject;
player setUnitTrait ["UAVHacker",true];
player setUnitTrait ["explosiveSpecialist",true];
player setUnitTrait ["engineer",true];

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

*/