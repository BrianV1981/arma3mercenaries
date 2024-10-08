/*	

	arma3mercenaries_unconsciousMarkers.sqf
	Author: BrianV1981
	Dependencies:
	ACE3 and arma3mercenaries_killMarkers.sqf
	Description:
	Places a yellow warning marker on the map where a player becomes unconconcious.
	
*/	

/*	
    arma3mercenaries_unconsciousMarkers.sqf
    Author: BrianV1981
    Description:
    This script handles the creation of a yellow warning marker on the map whenever a player becomes unconscious.
    The marker is removed if the player regains consciousness. Removal upon player death is handled by the 
    `arma3mercenaries_killMarkers.sqf` script.
    
    Dependencies:
    - ACE3
    - arma3mercenaries_killMarkers.sqf (for handling the removal of unconscious markers when a player dies)
*/

diag_log "//________________ arma3mercenaries Unconscious Markers Script ________________";

// Handle Unconscious State with Multiple Checks and Immediate Removal on Death
{
    if (isPlayer _x && {alive _x}) then {
        // Add HandleDamage event handler to monitor unconscious state
        _x addEventHandler ["HandleDamage", {
            params ["_unit", "_selection", "_damage", "_source", "_projectile"];
            private _mrkName = format ["%1_unconscious", name _unit];
            private _alreadyNotified1 = _unit getVariable ["unconsciousNotification_1", false];
            private _alreadyNotified2 = _unit getVariable ["unconsciousNotification_2", false];
            private _alreadyNotified3 = _unit getVariable ["unconsciousNotification_3", false];

            if (arma3mercenaries_unconsciousMarkerEnabled) then {
                // Introduce a delay before the first unconscious check
                [_unit, _mrkName, _alreadyNotified1, _alreadyNotified2, _alreadyNotified3] spawn {
                    sleep 1; // Delay for 1 second before checking unconscious state

                    private _unit = _this select 0;
                    private _mrkName = _this select 1;
                    private _alreadyNotified1 = _this select 2;
                    private _alreadyNotified2 = _this select 3;
                    private _alreadyNotified3 = _this select 4;

                    // First check after delay
                    if (!alive _unit || !(_unit call ace_common_fnc_isAwake)) then {
                        if (!_alreadyNotified1) then {
                            deleteMarker _mrkName;
                            [ _mrkName, getPosATL _unit, "ICON", "mil_warning", "ColorYellow", 0.7, 0.7, format ["%1 was knocked unconscious", name _unit]] remoteExec ["createMarkerOptimized", 0, true];
                            private _message = format ["%1 was knocked unconscious", name _unit];
                            [_message] remoteExec ["systemChat", 0];
                            _unit setVariable ["unconsciousNotification_1", true, true];
                        };

                        // Second check 30 seconds later
                        sleep 30; // Wait for 30 seconds
                        if (!alive _unit || !(_unit call ace_common_fnc_isAwake)) then {
                            if (!_alreadyNotified2) then {
                                deleteMarker _mrkName;
                                [ _mrkName, getPosATL _unit, "ICON", "mil_warning", "ColorYellow", 0.7, 0.7, format ["%1 remains unconscious after 30 seconds", name _unit]] remoteExec ["createMarkerOptimized", 0, true];
                                private _message = format ["%1 is still unconscious after 30 seconds", name _unit];
                                [_message] remoteExec ["systemChat", 0];
                                _unit setVariable ["unconsciousNotification_2", true, true];
                            };

                            // Third check 2 minutes later
                            sleep 90; // Wait for an additional 90 seconds (total 2 minutes)
                            if (!alive _unit || !(_unit call ace_common_fnc_isAwake)) then {
                                if (!_alreadyNotified3) then {
                                    deleteMarker _mrkName;
                                    [ _mrkName, getPosATL _unit, "ICON", "mil_warning", "ColorYellow", 0.7, 0.7, format ["%1 remains unconscious after 2 minutes", name _unit]] remoteExec ["createMarkerOptimized", 0, true];
                                    private _message = format ["%1 is still unconscious after 2 minutes", name _unit];
                                    [_message] remoteExec ["systemChat", 0];
                                    _unit setVariable ["unconsciousNotification_3", true, true];
                                };
                            } else {
                                // Remove marker if the player is awake after the second check
                                deleteMarker _mrkName;
                                _unit setVariable ["unconsciousNotification_1", false, true];
                                _unit setVariable ["unconsciousNotification_2", false, true];
                                _unit setVariable ["unconsciousNotification_3", false, true];
                            };
                        } else {
                            // Remove marker if the player is awake after the first check
                            deleteMarker _mrkName;
                            _unit setVariable ["unconsciousNotification_1", false, true];
                            _unit setVariable ["unconsciousNotification_2", false, true];
                            _unit setVariable ["unconsciousNotification_3", false, true];
                        };
                    } else {
                        // Player is awake or dead, remove the marker
                        deleteMarker _mrkName;
                        _unit setVariable ["unconsciousNotification_1", false, true];
                        _unit setVariable ["unconsciousNotification_2", false, true];
                        _unit setVariable ["unconsciousNotification_3", false, true];
                    };
                };
            };
        }];

        // Add Killed event handler to remove the marker immediately upon death
        _x addEventHandler ["Killed", {
            params ["_unit"];
            private _mrkName = format ["%1_unconscious", name _unit];
            deleteMarker _mrkName; // Remove the unconscious marker immediately upon death
        }];
    };
} forEach allPlayers;
