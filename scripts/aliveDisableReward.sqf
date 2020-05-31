SAV_fnc_taskSucceeded = {
    params ["_logic", "_operation", "_args"];
 
    switch (_operation) do {
        case "handleEvent": {
[p_1,5000] call grad_lbm_fnc_addFunds;
[p_2,5000] call grad_lbm_fnc_addFunds;
[p_3,5000] call grad_lbm_fnc_addFunds;
[p_4,5000] call grad_lbm_fnc_addFunds;
[p_5,2500] call grad_lbm_fnc_addFunds;
[p_6,2500] call grad_lbm_fnc_addFunds;
[p_7,2500] call grad_lbm_fnc_addFunds;
[p_8,2500] call grad_lbm_fnc_addFunds;

            // do your reward stuff here
            // task data is in _args
        };
    };
};
 
private _listener = [nil, "create"] call ALIVE_fnc_baseClass;
_listener setVariable ["class", SAV_fnc_taskSucceeded];
 
private _listenerID = [ALIVE_eventLog, "addListener", [_listener, ["ASYMM_INSTALLATION_DESTROYED"]]] call ALIVE_fnc_eventLog;
