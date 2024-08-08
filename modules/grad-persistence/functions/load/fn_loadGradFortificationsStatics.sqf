/*

fn_loadGradFortificationStatics.sqf

*/

#include "script_component.hpp"

// Exit if not executed on the server
if (!isServer) exitWith {};

// Get the mission-specific tag for namespacing
private _missionTag = [] call FUNC(getMissionTag);
private _gradFortificationsTag = _missionTag + "_gradFortificationsStatics";

// Retrieve saved data associated with the grad fortifications tag
private _gradFortificationsData = [_gradFortificationsTag] call FUNC(getSaveData);

// Process each saved grad fortification
{
    private _thisGradFortificationsStaticsHash = _x;

    // Retrieve the variable name (if any) from the saved data
    private _vehVarName = [_thisGradFortificationsStaticsHash,"varName"] call CBA_fnc_hashGet;

    // Retrieve the type of the object and create it
    private _type = [_thisGradFortificationsStaticsHash,"type"] call CBA_fnc_hashGet;
    private _thisGradFortificationsStatic = createVehicle [_type,[0,0,0],[],0,"CAN_COLLIDE"];

    // Wait until the object is created and not null before proceeding
    [{!isNull (_this select 0)}, {
        params ["_thisGradFortificationsStatic","_thisGradFortificationsStaticsHash"];

        // Retrieve saved attributes and apply them to the object
        private _posASL = [_thisGradFortificationsStaticsHash,"posASL"] call CBA_fnc_hashGet;
        private _vectorDirAndUp = [_thisGradFortificationsStaticsHash,"vectorDirAndUp"] call CBA_fnc_hashGet;
        private _damage = [_thisGradFortificationsStaticsHash,"damage"] call CBA_fnc_hashGet;
        private _isGradMoneymenuStorage = [_thisGradFortificationsStaticsHash,"isGradMoneymenuStorage"] call CBA_fnc_hashGet;
        private _gradMoneymenuOwner = [_thisGradFortificationsStaticsHash,"gradMoneymenuOwner"] call CBA_fnc_hashGet;
        private _thisLbmMoney = [_thisGradFortificationsStaticsHash,"gradLbmMoney"] call CBA_fnc_hashGet;
        private _gradFortificationsOwner = [_thisGradFortificationsStaticsHash,"gradFortificationsOwner"] call CBA_fnc_hashGet;

        _thisGradFortificationsStatic setVectorDirAndUp _vectorDirAndUp;
        _thisGradFortificationsStatic setPosASL _posASL;
        _thisGradFortificationsStatic setDamage _damage;

        // Set the owner variable for the object
        _thisGradFortificationsStatic setVariable ["grad_fortifications_fortOwner",_gradFortificationsOwner,true];

        // Initialize fortifications if the GRAD_fortifications function is present
        if (isClass (missionConfigFile >> "CfgFunctions" >> "GRAD_fortifications")) then {
            [_thisGradFortificationsStatic,objNull] remoteExec ["grad_fortifications_fnc_initFort",0,true];
        };

        // Handle money menu storage and owner settings
        if (_isGradMoneymenuStorage && {!(_gradMoneymenuOwner isEqualType false)}) then {
            if !(objNull isEqualTo _gradMoneymenuOwner) then {
                [_thisGradFortificationsStatic,_gradMoneymenuOwner] remoteExec ["grad_moneymenu_fnc_setStorage",0,true];
            } else {
                [_thisGradFortificationsStatic] remoteExec ["grad_moneymenu_fnc_setStorage",0,true];
            };

            if (_thisLbmMoney isEqualType 0 && {_thisLbmMoney > 0}) then {
                _thisGradFortificationsStatic setVariable ["grad_lbm_myFunds",_thisLbmMoney,true];
            };
        };

        // Retrieve and apply saved variables to the object
        private _vars = [_thisGradFortificationsStaticsHash,"vars"] call CBA_fnc_hashGet;
        [_vars,_thisGradFortificationsStatic] call FUNC(loadObjectVars);

    }, [_thisGradFortificationsStatic,_thisGradFortificationsStaticsHash]] call CBA_fnc_waitUntilAndExecute;

} forEach _gradFortificationsData;
