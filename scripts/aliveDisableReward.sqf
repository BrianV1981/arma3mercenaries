SAV_fnc_taskSucceeded = {
    params ["_logic", "_operation", "_args"];
 
    switch (_operation) do {
        case "handleEvent": {
[p_1,random 5000] call grad_lbm_fnc_addFunds;
[p_2,random 5000] call grad_lbm_fnc_addFunds;
[p_3,random 5000] call grad_lbm_fnc_addFunds;
[p_4,random 5000] call grad_lbm_fnc_addFunds;
[p_5,random 2500] call grad_lbm_fnc_addFunds;
[p_6,random 2500] call grad_lbm_fnc_addFunds;
[p_7,random 2500] call grad_lbm_fnc_addFunds;
[p_8,random 2500] call grad_lbm_fnc_addFunds;
hint "The installation has been disabled. The payment amount will depend on the intelligence gathered and will be deposted into your account."

            // do your reward stuff here
            // task data is in _args
        };
    };
};
 
private _listener = [nil, "create"] call ALIVE_fnc_baseClass;
_listener setVariable ["class", SAV_fnc_taskSucceeded];
 
private _listenerID = [ALIVE_eventLog, "addListener", [_listener, ["ASYMM_INSTALLATION_DESTROYED"]]] call ALIVE_fnc_eventLog;
