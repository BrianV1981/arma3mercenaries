["acex_fortify_objectPlaced", {
    [ALiVE_SYS_LOGISTICS, "updateObject", [(_this select 2)]] call ALIVE_fnc_logistics;
    }] call CBA_fnc_addEventHandler;
 
["acex_fortify_objectDeleted", {
    [ALiVE_SYS_LOGISTICS, "removeObject", [(_this select 2)]] call ALIVE_fnc_logistics;
    }] call CBA_fnc_addEventHandler;