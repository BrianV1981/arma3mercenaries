SAV_fnc_taskSucceeded = {
    params ["_logic", "_operation", "_args"];
 
    switch (_operation) do {
        case "handleEvent": {
[p_1,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
[p_2,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
[p_3,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
[p_4,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
[p_5,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
[p_6,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
[p_7,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
[p_8,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
[p_9,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
[p_10,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
[p_11,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
[p_12,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
[p_13,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
[p_14,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
[p_15,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
[p_16,random [10000,30000,50000]] call grad_lbm_fnc_addFunds;
["The installation has been disabled. The payment amount will depend on the intelligence gathered and will be been delivered to you in person by a CIA courier.", "hint", true, true] call BIS_fnc_MP;

            // do your reward stuff here
            // task data is in _args
        };
    };
};
 
private _listener = [nil, "create"] call ALIVE_fnc_baseClass;
_listener setVariable ["class", SAV_fnc_taskSucceeded];
 
private _listenerID = [ALIVE_eventLog, "addListener", [_listener, ["ASYMM_INSTALLATION_DESTROYED"]]] call ALIVE_fnc_eventLog;
