/*	
	arma3mercenaries_unconsciousMarkers(standalone).sqf
	Author: BrianV1981
	
	Description:
	This script is designed to place a yellow warning marker on the map at the location where a player becomes unconscious. 
	It includes a delay before the marker is placed, followed by a second check 10 seconds later to verify the player's state 
	(still unconscious, dead, or awake). If the player is still unconscious or dead after the second check, the marker remains 
	or is updated. If the player wakes up, the marker is removed.

	Dependencies:
	- ACE3: Required for checking the unconscious state of players.

	Usage:
	Include this script in your mission to automatically track and mark unconscious players on the map, providing clear visual 
	indicators for other players or command elements.
*/	

diag_log "//________________ arma3mercenaries Unconscious Markers Script ________________";

// Function to create a marker
createMarkerOptimized = {
    params ["_name", "_pos", "_shape", "_type", "_color", "_sizeX", "_sizeY", "_text"];
    
    // Create marker locally
    private _m = createMarkerLocal [_name, _pos];
    _m setMarkerShape _shape;
    _m setMarkerSize [_sizeX, _sizeY];
    _m setMarkerText _text;

    // Finalize the marker with a global command (like setMarkerType) to broadcast changes
    _m setMarkerType _type;
    _m setMarkerColor _color;
};

// Handle Unconscious State with Delay and Second Check
{
    if (isPlayer _x && {alive _x}) then {
        _x addEventHandler ["HandleDamage", {
            params ["_unit", "_selection", "_damage", "_source", "_projectile"];
            private _mrkName = format ["%1_unconscious", name _unit];
            private _alreadyNotified = _unit getVariable ["unconsciousNotified", false];

            if (arma3mercenaries_unconsciousMarkerEnabled) then {
                // Introduce a delay before the first unconscious check
                [_unit, _mrkName, _alreadyNotified] spawn {
                    sleep 1; // Delay for 1 second before checking unconscious state

                    private _unit = _this select 0;
                    private _mrkName = _this select 1;
                    private _alreadyNotified = _this select 2;

                    // First check after delay
                    if (!alive _unit || !(_unit call ace_common_fnc_isAwake)) then {
                        if (!_alreadyNotified) then {
                            deleteMarker _mrkName;
                            [ _mrkName, getPosATL _unit, "ICON", "mil_warning", "ColorYellow", 0.7, 0.7, format ["%1 was knocked unconscious", name _unit]] remoteExec ["createMarkerOptimized", 0, true];
                            private _message = format ["%1 was knocked unconscious", name _unit];
                            [_message] remoteExec ["systemChat", 0];
                            _unit setVariable ["unconsciousNotified", true, true];
                        };

                        // Second check 10 seconds later
                        sleep 10; // Wait for 10 seconds
                        if (!alive _unit || !(_unit call ace_common_fnc_isAwake)) then {
                            // Update marker if still unconscious or dead
                            deleteMarker _mrkName;
                            [ _mrkName, getPosATL _unit, "ICON", "mil_warning", "ColorYellow", 0.7, 0.7, format ["%1 remains unconscious", name _unit]] remoteExec ["createMarkerOptimized", 0, true];
                            private _message = format ["%1 is still unconscious after 10 seconds", name _unit];
                            [_message] remoteExec ["systemChat", 0];
                        } else {
                            // Remove marker if the player is awake
                            deleteMarker _mrkName;
                            _unit setVariable ["unconsciousNotified", false, true];
                        };
                    };
                };
            };
        }];
    };
} forEach allPlayers;
