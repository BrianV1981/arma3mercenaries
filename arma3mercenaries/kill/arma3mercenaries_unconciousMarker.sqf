// Add event handler to all players to monitor unconscious state
{
    if (isPlayer _x && {alive _x}) then {
        _x addEventHandler ["HandleDamage", {
            params ["_unit", "_selection", "_damage", "_source", "_projectile"];
            private _mrkName = format ["%1_unconscious", name _unit];
            
            // Check if the player is unconscious
            if ([_unit] call ace_medical_fnc_isUnconscious) then {
                deleteMarker _mrkName;
                private _m = createMarker [_mrkName, getPosATL _unit];
                _m setMarkerShape "ICON";
                _m setMarkerType "mil_warning";
                _m setMarkerColor "ColorYellow";
                _m setMarkerSize [0.7, 0.7];
                _m setMarkerText format ["%1 was knocked unconscious", name _unit];
            } else {
                deleteMarker _mrkName;
            };
        }];
    };
} forEach allPlayers;
