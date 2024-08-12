/*
https://forums.bohemia.net/forums/topic/134991-death-marker-script

scripts\deathMarker.sqf

enhanced by BrianV1981

*/

// Iterate over all units in the mission
{
    // Check if the unit is a player (not an AI)
    if (isPlayer _x) then {
        // Add an event handler to the unit for when it gets killed
        _x addEventHandler ["Killed", {
            // _this select 0 is the unit that was killed
            _mrkName = format ["%1", name(_this select 0)];
            // Delete any existing marker with the same name
            deleteMarker _mrkName;

            // Create a new marker at the unit's position
            _m = createMarker [format ["%1", name(_this select 0)], getPosATL (_this select 0)];
            // Set the shape of the marker to an icon
            _m setMarkerShape "ICON";
            // Set the type of the marker to a warning icon
            _m setMarkerType "mil_warning";
            // Set the color of the marker to red
            _m setMarkerColor "ColorRed";
            // Set the size of the marker
            _m setMarkerSize [0.5, 0.5];
            // Set the text of the marker to the name of the unit
            _m setMarkerText _mrkName;
        }];
    }
} foreach allUnits;

