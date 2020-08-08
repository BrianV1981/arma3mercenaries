if (isServer) then {
    ["ace_captiveStatusChanged", {
        params ["_unit", "_state", "_reason"];
 
        if ((getPos _unit) inArea captured_trigger_1) then {
            _unit setVariable ["detained", true, true];
        };
    }] call CBA_fnc_addEventHandler;
 
    [{
        [getPos captured_trigger_1, [side player], -10] call ALIVE_fnc_updateSectorHostility;
    }, 10, []] call CBA_fnc_addPerFrameHandler;
};