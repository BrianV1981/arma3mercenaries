// Wrapper script for task reward creation
private ["_originalFunction", "_wrapperFunction"];

// Preserve the original ALiVE function
_originalFunction = compileFinal preprocessFileLineNumbers "\x\alive\addons\mil_C2ISTAR\fn_taskCreateReward.sqf";

// Define the wrapper function
_wrapperFunction = {
    params ["_taskDialog", "_taskSide", "_taskFaction"];

    // Display a dynamic text hint that the wrapper has executed
    ["<t color='#00ff00' size='2'>Wrapper Executed!</t>", -1, -1, 4, 1, 0, 789] spawn BIS_fnc_dynamicText;

    // Insert custom logic before calling the original function
    diag_log format ["Task Reward Being Created: Dialog: %1, Side: %2, Faction: %3", _taskDialog, _taskSide, _taskFaction];

    // Call the original function to preserve default behavior
    private _result = [_taskDialog, _taskSide, _taskFaction] call _originalFunction;

    // Display a dynamic text hint that the reward has been created
    ["<t color='#00ff00' size='2'>Wrapper Fired Off!</t>", -1, -1, 4, 1, 0, 789] spawn BIS_fnc_dynamicText;

    // Insert custom logic after calling the original function
    diag_log format ["Task Reward Created: %1", _result];

    // Return the result
    _result
};

// Replace the original ALIVE taskCreateReward function with the wrapper
ALIVE_fnc_taskCreateReward = _wrapperFunction;
