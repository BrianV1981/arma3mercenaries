SAV_fnc_taskSucceeded = {
    params ["_logic", "_operation", "_args"];
 
    switch (_operation) do {
        case "handleEvent": {
[p_1, 100000] call grad_lbm_fnc_addFunds;
[p_2, 100000] call grad_lbm_fnc_addFunds;
[p_3, 100000] call grad_lbm_fnc_addFunds;
[p_4, 100000] call grad_lbm_fnc_addFunds;
[p_5, 100000] call grad_lbm_fnc_addFunds;
[p_6, 100000] call grad_lbm_fnc_addFunds;
[p_7, 100000] call grad_lbm_fnc_addFunds;
[p_8, 100000] call grad_lbm_fnc_addFunds;
[p_9, 100000] call grad_lbm_fnc_addFunds;
[p_10, 100000] call grad_lbm_fnc_addFunds;
[p_11, 100000] call grad_lbm_fnc_addFunds;
[p_12, 100000] call grad_lbm_fnc_addFunds;
[p_13, 100000] call grad_lbm_fnc_addFunds;
[p_14, 100000] call grad_lbm_fnc_addFunds;
[p_15, 100000] call grad_lbm_fnc_addFunds;
[p_16, 100000] call grad_lbm_fnc_addFunds;
private _paymentMessage = "An OPCOM task has been completed and a payment of 100,000 Cr. has been delivered to you in person by a CIA courier.";
[_paymentMessage, 0.0, 0.1, 5, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", 0, true];


            // do your reward stuff here
            // task data is in _args
        };
    };
};
 
private _listener = [nil, "create"] call ALIVE_fnc_baseClass;
_listener setVariable ["class", SAV_fnc_taskSucceeded];
 
private _listenerID = [ALIVE_eventLog, "addListener", [_listener, ["OPCOM_RESERVE"]]] call ALIVE_fnc_eventLog;