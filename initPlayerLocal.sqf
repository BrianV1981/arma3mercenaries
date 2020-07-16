execVM "scripts\deathMarker.sqf";
execVM "scripts\tutorial.sqf";
execVM "scripts\wearAllUniforms.sqf";
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], [player,"aliveStore_2",container_2,aHelipad_2,"Combat Support Menu","ALiVE Combat Support Services"] call grad_lbm_fnc_addInteraction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], [player,"haloStore_2",container_2,aHelipad_2,"High-altitude Military Parachuting","Emergency SAC Services"] call grad_lbm_fnc_addInteraction] call ace_interact_menu_fnc_addActionToObject;
player setUnitTrait ["UAVHacker",true];
player setUnitTrait ["Medic",true];
player setUnitTrait ["explosiveSpecialist",true];
player setUnitTrait ["engineer",true];