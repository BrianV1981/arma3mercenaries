/*

arma3mercenaries Killfeed Script Overview
This script handles the display of kill notifications on the HUD in Arma 3, providing immediate feedback to the player about kills they have made. The notifications include the name and distance of the killed unit, along with a sound notification.

Script Breakdown
Initialization:

The script begins by logging the initialization of the arma3mercenaries Killfeed Script.
It adds an event handler to monitor whenever any entity (entityKilled) is killed in the mission.
Handling the entityKilled Event:

The script listens for the entityKilled event, which is triggered whenever an entity in the game dies.
It captures three parameters:
_killed: The unit that was killed.
_killer: The unit that killed the _killed unit.
_instigator: The unit or object that initiated the kill (e.g., the driver of a vehicle that runs over someone).
Instigator Check:

If the _instigator is null (such as in a road kill scenario), the script sets the _killer as the _instigator.
This ensures that the correct unit is credited with the kill.
Local Instigator and Human-Like Unit Check:

The script checks if the _instigator is local to the machine (i.e., controlled by the local client) and if the _killed unit is a human-like entity (CAManBase).
This ensures that the kill notification is only shown for relevant kills, such as those involving players or AI units.
Determine the Name and Color of the Killed Unit:

The script determines the name of the _killed unit:
If the _killed unit is AI, it retrieves the display name from the game's configuration files (CfgVehicles).
If the _killed unit is a player, it uses the player's in-game name.
It also determines the color associated with the killed unit’s faction using the BIS_fnc_sideColor function and converts it to an HTML color format.
Calculate the Distance Between the Killer and the Killed Unit:

The script calculates the distance between the _instigator (the killer) and the _killed unit.
This distance is used to provide additional context in the kill notification.
Killfeed HUD Notification:

A formatted string (_kill_HUD) is created to display the kill notification.
The notification includes:
The word "Killed."
The color of the killed unit’s faction.
The name of the killed unit.
The distance from which the kill occurred.
The notification is then displayed on the HUD using bis_fnc_dynamicText, which animates the text on the screen.
Sound Notification:

A sound is played whenever a kill is registered using playSound "Killfeed_notification".
This provides auditory feedback to the player that a kill has been made.
Summary
Functionality: The script provides immediate feedback on kills made by the player, including a visual notification on the HUD and a sound effect. The notification displays the name and distance of the killed unit and is color-coded based on the faction of the killed unit.
Logic: The script ensures that notifications are only triggered for relevant kills, such as those involving human-like units, and that the notifications are appropriately formatted and informative.


*/

diag_log "//________________ arma3mercenaries Killfeed Script ________________";

addMissionEventHandler ["entityKilled", {
    params ["_killed", "_killer", "_instigator"];

    // If the instigator is null (e.g., road kill), set the killer as the instigator
    if (isNull _instigator) then { _instigator = _killer };

    // Check if the instigator is local to the machine and the killed unit is a human-like unit
    if (local _instigator && _killed isKindOf "CAManBase") then {
        // Determine the name and color of the killed unit
        private _killed_Name = "";
        private _kill_HUD = "";
        private _killed_Color = (side group _killed call BIS_fnc_sideColor) call BIS_fnc_colorRGBtoHTML;

        // If the killed unit is AI, get its display name from the config
        if (!(isPlayer _killed)) then {
            _killed_Name = getText (configFile >> "CfgVehicles" >> format["%1", typeOf _killed] >> "Displayname");
        } else {
            // If the killed unit is a player, use their in-game name
            _killed_Name = name _killed;
        };

        // Calculate the distance between the killer and the killed unit
        private _distance = _instigator distance2D _killed;

        // Killfeed HUD Notification
        _kill_HUD = format["<t size='0.3'>  Killed  <t size='0.5'> <t color='%1'>  %2  <t color='#%1'>  %3 m</t>", _killed_Color, _killed_Name, floor _distance];
        [_kill_HUD, 0, 0, 8, 1, -1, 7017] spawn bis_fnc_dynamicText;

        // Play a sound notification
        playSound "Killfeed_notification";
    };
}];
