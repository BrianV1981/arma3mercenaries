/*	
	arma3mercenaries_killFeed.sqf
	Author: BrianV1981

	Description:
	This script handles the display of a kill feed in Arma 3, providing real-time notifications to players when they 
	achieve a kill. The kill feed includes visual and auditory feedback, showing detailed information about the 
	enemy killed, the distance of the kill, and the weapon used.

	The script checks whether the killer is local to the machine and if the killed unit is a human-like entity 
	(CAManBase). It then formats a HUD message with the name of the killed unit, the distance of the kill, and the 
	weapon used. The message is displayed on the player's screen for a configurable duration and can be accompanied 
	by a notification sound if enabled in the CBA settings.

	Features:
	- Killfeed HUD: Displays the name of the killed unit, distance, and weapon used.
	- Killfeed Sound: Plays a configurable sound upon a successful kill.
	- Customization: Duration and sound can be customized via CBA settings.
	- Faction Colors: The kill feed uses faction-specific colors for better clarity.

	Usage:
	Integrate this script into your mission to provide players with immersive feedback on their combat performance. 
	This script enhances situational awareness by immediately informing players of their successful kills and providing 
	contextual information about the engagement.

	Dependencies:
	- The script relies on CBA (Community Base Addons) for settings management.
	- Works in conjunction with other modules from the arma3mercenaries framework.
*/

diag_log "//________________ arma3mercenaries Kill Feed Script ________________";

addMissionEventHandler ["entityKilled", {
    params ["_killed", "_killer", "_instigator"];

    // If the instigator is null (e.g., road kill), set the killer as the instigator
    if (isNull _instigator) then { _instigator = _killer };

    // Check if the instigator is local to the machine and the killed unit is a human-like unit
    if (local _instigator && _killed isKindOf "CAManBase") then {
        // Determine the sides of the killer and the killed unit
        private _sideKilled = getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side");

        // Determine the name and color of the killed unit
        private _killed_Name = if (isPlayer _killed) then {name _killed} else {getText (configFile >> "CfgVehicles" >> format["%1", typeOf _killed] >> "Displayname")};
        private _killed_Color = (side group _killed call BIS_fnc_sideColor) call BIS_fnc_colorRGBtoHTML;

        // Calculate the distance between the killer and the killed unit
        private _distance = _instigator distance2D _killed;

        // Get the weapon used for the kill and its display name
        private _weaponDisplayName = getText(configFile >> "CfgWeapons" >> (currentWeapon _instigator) >> "displayName");

        // **Killfeed HUD Display Duration (Configurable via CBA)**
        // Additional check for killfeed setting
        if (isPlayer _instigator && arma3mercenaries_killFeedEnabled) then {
            private _killFeedDuration = arma3mercenaries_killFeedDuration;
            private _kill_HUD = format["<t size='0.3'>  Killed  <t size='0.5'> <t color='%1'>  %2  <t color='#%1'>  %3 m</t>", _killed_Color, _killed_Name, floor _distance];
            [_kill_HUD, 0, 0, _killFeedDuration, 1, -1, 7017] spawn bis_fnc_dynamicText;

            // **Killfeed Sound (Configurable via CBA)**
            if (arma3mercenaries_killNotificationSound) then {
                playSound "Killfeed_notification";
            };
        };
    };
}];
