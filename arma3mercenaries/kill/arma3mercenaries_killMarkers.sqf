/*	
	arma3mercenaries_killMarkers.sqf
	Author: BrianV1981

	Description:
	This script creates and manages kill and death markers on the map in Arma 3. When a player or AI unit is killed, 
	it places a marker at the location of the event, displaying detailed information about the incident. The script 
	also handles notifications in the system chat, providing context such as the factions involved, the names of the 
	killer and the killed, the weapon used, and the distance of the kill.

	Markers are color-coded based on the faction of the killed unit, and the script supports global notifications, 
	silent hints, and a configurable death penalty for players. The script also includes a function for optimized 
	marker creation, ensuring efficient use of network resources.

	Dependencies:
	- This script is designed to work as part of the arma3mercenaries mission framework and relies on the CBA mod 
	  for handling settings and configurations.

	Usage:
	Integrate this script into your mission to enhance situational awareness by marking kill and death locations on 
	the map and providing real-time feedback to players through chat notifications and visual markers.
*/

diag_log "//________________ arma3mercenaries Kill Markers Script ________________";

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

// Handle Kill and Death Markers
addMissionEventHandler ["entityKilled", {
    params ["_killed", "_killer", "_instigator"];

    // If the instigator is null (e.g., road kill), set the killer as the instigator
    if (isNull _instigator) then { _instigator = _killer };

    // Check if the instigator is local to the machine and the killed unit is a human-like unit
    if (local _instigator && _killed isKindOf "CAManBase") then {
        // Determine the sides of the killer and the killed unit
        private _sideKiller = getNumber (configFile >> "cfgVehicles" >> typeOf _instigator >> "side");
        private _sideKilled = getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side");
        private _killed_Name = if !(isPlayer _killed) then {getText (configFile >> "CfgVehicles" >> format["%1", typeOf _killed] >> "displayname")} else {name _killed};
        private _instigator_Name = if !(isPlayer _instigator) then {getText (configFile >> "CfgVehicles" >> format["%1", typeOf _instigator] >> "displayname")} else {name _instigator};
        private _distance = _instigator distance2D _killed;
        private _weaponDisplayName = getText(configFile >> "CfgWeapons" >> (currentWeapon _instigator) >> "displayName");
        private _factionNameKilled = switch (_sideKilled) do {
            case 0: { "OPFOR" };
            case 1: { "NATO" };
            case 2: { "Independent" };
            case 3: { "Civilian" };
            default { "Unknown Faction" };
        };
        private _factionNameKiller = switch (_sideKiller) do {
            case 0: { "OPFOR" };
            case 1: { "NATO" };
            case 2: { "Independent" };
            case 3: { "Civilian" };
            default { "Unknown Faction" };
        };

        // Handle Kill Marker
        if (arma3mercenaries_killMarkerEnabled && isPlayer _instigator) then {
            private _mrkName = format ["%1_LastKill", name _instigator];
            deleteMarker _mrkName;
            private _markerColor = switch (_sideKilled) do {
                case 0: { "ColorEAST" };
                case 1: { "ColorWEST" };
                case 2: { "colorIndependent" };
                case 3: { "ColorCIV" };
            };
            [ _mrkName, getPosATL _killed, "ICON", "mil_dot", _markerColor, arma3mercenaries_killMarkerSize, arma3mercenaries_killMarkerSize, format ["%1 %2 killed by %3 %4 with a %5 from %6m", _factionNameKilled, _killed_Name, _factionNameKiller, _instigator_Name, _weaponDisplayName, floor _distance]] remoteExec ["createMarkerOptimized", 0, true];

            // Global Kill Marker Notification
            if (arma3mercenaries_globalKillMarker) then {
                private _killFeedMessage = format ["%1 %2 killed by %3 %4 with a %5 from %6m", _factionNameKilled, _killed_Name, _factionNameKiller, _instigator_Name, _weaponDisplayName, floor _distance];
                [_killFeedMessage] remoteExec ["systemChat", 0];
            };
        };

        // Handle Death Marker
        if (arma3mercenaries_deathMarkerEnabled && isPlayer _killed) then {
            private _mrkName = format ["%1_LastDeath", name _killed];
            deleteMarker _mrkName;
            [ _mrkName, getPosATL _killed, "ICON", "mil_warning", "ColorRed", arma3mercenaries_deathMarkerSize, arma3mercenaries_deathMarkerSize, format ["%1 %2 killed by %3 %4 with a %5 from %6m", _factionNameKilled, _killed_Name, _factionNameKiller, _instigator_Name, _weaponDisplayName, floor _distance]] remoteExec ["createMarkerOptimized", 0, true];

            // Global Death Marker Notification
            if (arma3mercenaries_globalDeathMarker) then {
                private _deathFeedMessage = format ["%1 %2 was killed by %3 %4 with a %5 from %6m", _factionNameKilled, _killed_Name, _factionNameKiller, _instigator_Name, _weaponDisplayName, floor _distance];
                [_deathFeedMessage] remoteExec ["systemChat", 0];
            };
        };

        // Handle Death Penalty
        if (isPlayer _killed && _sideKiller != _sideKilled) then {
            private _deathPenalty = arma3mercenaries_deathPenalty;
            [_killed, -_deathPenalty, true] call grad_moneymenu_fnc_addFunds;

            // Send a hint to the killed player notifying them of the penalty
            private _message = format ["You died! %1 cr. has been deducted from your bank account.", _deathPenalty];
            if (arma3mercenaries_silentHints) then {
                [_message] remoteExec ["hintSilent", _killed];
            };
        };
    };
}];