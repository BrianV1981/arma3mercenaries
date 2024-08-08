// healPlayerWhenIncapacitated.sqf

// Function to check and heal the player
private _checkAndHeal = {
    params ["_unit", "_state"];

    // Check if the player is incapacitated
    if (_state) then {
        private _groupUnits = units group _unit;
        
        // Find a medic in the group
        private _medic = objNull;
        {
            if (alive _x && {_x != _unit} && {!(_x getVariable ["ACE_isUnconscious", false])}) then {
                _medic = _x;
                breakOut "foreach";
            };
        } forEach _groupUnits;
        
        if (!isNull _medic) then {
            // Order the medic to heal the player
            [_medic, _unit] remoteExecCall ["ACE_medical_fnc_treatment", 2];
        };
    };
};

// Add event handler to the player
[player, "ace_medical_incapacitatedState", {
    _this call _checkAndHeal;
}] remoteExec ["addEventHandler", 0, true];
