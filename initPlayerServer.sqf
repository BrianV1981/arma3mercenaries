/*
    Author - HoverGuy
    Website - https://northernimpulse.com
    Player server initialization
*/
params["_player"];

[_player] execVM "HG\Setup\fn_playerServerInitialization.sqf";

//////https://github.com/Ppgtjmad/SimpleShops/issues/54

//private _act = [(localize "STR_HG_GARAGE"),(localize "STR_HG_GARAGE"),"HG\UI\Icons\garage.paa",{["HG_DefaultGarage"] call HG_fnc_dialogOnLoadGarage},{(alive player) && !dialog},{},[],[],3] call ace_interact_menu_fnc_createAction;
//[HG_garage_1,0,["ACE_MainActions"],_act] call ace_interact_menu_fnc_addActionToObject;

//_act = [(localize "STR_HG_GARAGE_PARK"),(localize "STR_HG_GARAGE_PARK"),"HG\UI\Icons\garage.paa",{["HG_DefaultGarage"] call HG_fnc_storeVehicleClient},{(alive player) && !dialog},{},[],[],3] call ace_interact_menu_fnc_createAction;
//[HG_garage_1,0,["ACE_MainActions"],_act] call ace_interact_menu_fnc_addActionToObject;
