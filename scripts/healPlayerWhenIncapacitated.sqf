// healPlayerWhenIncapacitated.sqf
//DOES NOT WORK
// Function to check and heal the player
private _checkAndHealPlayer = {
    params ["_unit"];

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
        // Order the medic to move to the player's location
        _medic doMove (getPos _unit);

        // Wait for the medic to get close to the player
        waitUntil {(_medic distance _unit) < 2};

        // Create smoke at the player's location
        [_medic, "SmokeShell"] call BIS_fnc_fire;
        sleep 1;  // Wait for the smoke to deploy

        // Fully heal the player using ACE medical function locally on the player
        [_unit] remoteExecCall ["ACE_medical_treatment_fnc_fullHealLocal", _unit];
    };
};

// Add event handler for unconscious state
player addEventHandler ["HitPart", {
    params ["_unit", "_selection", "_damage", "_hitIndex", "_source", "_projectile", "_hitPart"];

    // Check if the player is unconscious
    if (_unit getVariable ["ACE_isUnconscious", false]) then {
        [player] call _checkAndHealPlayer;
    };
}];
