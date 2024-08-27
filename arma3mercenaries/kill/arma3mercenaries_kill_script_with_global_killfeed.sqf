/*
________________	Author : GEORGE FLOROS [GR]	___________	30.07.19	___________

________________ GF Killfeed Script ________________

https://forums.bohemia.net/forums/topic/206593-headshot-killfeed-script/

________________	Enhanced by : BrianV1981	___________	8/10/2024 ___________

________________ arma3mercenaries Kill Script: Kill Notification, Kill Reward, & Death Marker Script ________________

https://forums.bohemia.net/forums/topic/134991-death-marker-script
https://forums.bohemia.net/forums/topic/211383-trigger-on-enemy-death/
https://forums.bohemia.net/forums/topic/225166-help-killed-event-handler/
https://community.bistudio.com/wiki/BIS_fnc_sideID
https://github.com/gruppe-adler/grad-moneyMenu/wiki/addFunds

[unit, amount, addToBankAccount] call grad_moneymenu_fnc_addFunds

Parameter -	Explanation
unit -	Object - The unit or storage object to add or detract from.
amount -	Number - The Amount to add. Negative value to subtract. Total funds will never go below 0.
addToBankAccount (optional)	Bool - Use true to add the amount to the unit's bank account instead of his wallet.

Example
[this, -2000] call grad_moneymenu_fnc_addFunds; // subtracts 2000 from wallet
[storageBox, 100] call grad_moneymenu_fnc_addFunds; // adds 100 to 
[player, 1500, true] call grad_moneymenu_fnc_addFunds; // adds 1500 to players bank

Script Summary: arma3mercenaries Killfeed, Reward, and Death Marker System
Overview:
This script manages killfeed notifications, rewards and penalties, and death markers for both AI and player-controlled units in an Arma 3 mission. It handles various scenarios based on the faction of the killed unit and applies appropriate rewards or penalties. The script also creates markers on the map to indicate where a player or AI unit was killed, enhancing the tactical experience of the mission.

Core Logic Breakdown:
Local Instigator Check:

The script verifies if the _instigator (the unit responsible for the kill) is local to the machine, ensuring that only relevant scenarios are processed.
It also checks if the killed unit is a human-like entity (CAManBase), limiting the script's application to appropriate scenarios.
Determine Sides of Killer and Killed Unit:

The script determines the faction (side) of both the killer and the killed unit by checking their configuration in the game.
These values are stored in _sideKiller and _sideKilled.
Determine Name and Color of Killed Unit:

The script retrieves the name and color associated with the killed unit.
For AI units, it uses the display name from the game’s configuration.
For player units, it uses the player’s in-game name.
The color of the unit is determined based on their faction and is stored in _killed_Color.
Calculate Distance Between Killer and Killed Unit:

The script calculates the distance between the killer and the killed unit, storing this value in _distance.
Retrieve Weapon Information:

The weapon used for the kill is identified, and its display name is retrieved from the game’s configuration.
If no weapon picture is available, the script checks for the vehicle used by the instigator.
Friendly Fire Detection:

If the killer and the killed unit belong to the same faction (friendly fire) and the killer is a player:
The script deducts 10,000 credits from the player’s bank account as a penalty.
A hint is sent to the player informing them of the friendly fire incident and the penalty.
If a player is killed by friendly fire, they receive 20,000 credits to their bank account (10,000 to offset the death penalty and 10,000 as compensation). A hint is sent to the player with details about the incident.
Side-Based Reward and Penalty Logic:

Case 0: OPFOR Killed

Reward: The killer (player or AI) receives a random reward of up to 10,000 credits added to their wallet. If the killer is a player, they receive an on-screen hint about the reward.
Additional Feature: The killed OPFOR unit receives a random amount of up to 10,000 credits in their wallet, making their corpse lootable.
Killfeed: A HUD notification displays the name and distance of the killed OPFOR unit.
Death Marker: If a player kills an OPFOR AI unit, a red death marker is placed on the map at the location of the kill, labeled with the faction name, killer’s name, weapon used, and the distance.
Case 1: NATO Killed

Reward/Penalty: If the killer is OPFOR, they receive a reward of up to 10,000 credits added to their wallet. If the killer is NATO (friendly fire), they are penalized with a 10,000 credit deduction from their bank account, and a hint is shown.
Additional Feature: The killed NATO unit receives a random amount of up to 1,000 credits in their wallet.
Killfeed: A HUD notification displays the kill information.
Death Marker: If a player kills a NATO AI unit, a blue death marker is placed on the map, labeled with the faction name, killer’s name, weapon used, and the distance.
Case 2: Independent Killed

Reward/Penalty: If the killer is OPFOR, they receive a reward of up to 10,000 credits added to their wallet. If the killer is NATO (NATO allied), they are penalized with a 10,000 credit deduction from their bank account, and a hint is shown.
Additional Feature: The killed Independent unit receives a random amount of up to 1,000 credits in their wallet.
Killfeed: A HUD notification displays the kill information.
Death Marker: If a player kills an Independent AI unit, a green death marker is placed on the map, labeled with the faction name, killer’s name, weapon used, and the distance.
Case 3: Civilian Killed

Penalty: The killer, regardless of side, is penalized with a 10,000 credit deduction from their bank account, and a hint is shown.
Additional Feature: The killed Civilian unit receives a random amount of up to 1,000 credits in their wallet.
Killfeed: A HUD notification displays the kill information.
Death Marker: If a player kills a Civilian AI unit, a purple death marker is placed on the map, labeled with the faction name, killer’s name, weapon used, and the distance.
Additional Features:

Killfeed HUD Notification:

A visual HUD notification is displayed for every kill, showing the name and distance of the killed unit.
Sound Notification:

A sound is played whenever a kill is registered.
AI Death Marker:

A death marker is placed on the map for the last AI unit killed by a player. The marker’s color corresponds to the side of the killed unit, and the label includes the faction name, killer’s name, weapon used, and distance.
Player Death Marker:

If a player is killed, a red warning marker is placed on the map at their death location, displaying the player’s name.
Death Penalty:

If a player dies, they receive a financial penalty of 10,000 credits deducted from their bank account, and a hint is displayed informing them of the deduction.
In-Game Experience:

Rewards and Penalties: Players and AI units receive financial rewards or penalties based on their actions, such as killing enemy units, committing friendly fire, or killing civilians.
Killfeed: Players receive immediate visual feedback about their kills through HUD notifications, enhancing the gameplay experience.
Death Markers: Markers placed on the map provide visual cues for the locations of recent kills, helping players track significant events during the mission.
Death Penalty: Players face financial consequences for dying, encouraging more careful and strategic gameplay.
This comprehensive system is designed to enhance the tactical and immersive aspects of arma3mercenaries missions by rewarding or penalizing actions based on faction dynamics while also providing players with clear and immediate feedback through visual and audio notifications.

*/

diag_log "//________________ arma3mercenaries Kill Notification, Kill Reward, & Death Marker Script ________________";

addMissionEventHandler ["entityKilled", {
    params ["_killed", "_killer", "_instigator"];
    
    // If the instigator is null (e.g., road kill), set the killer as the instigator
    if (isNull _instigator) then { _instigator = _killer };

    // Check if the instigator is local to the machine and the killed unit is a human-like unit
    if (local _instigator && _killed isKindOf "CAManBase") then {
        // Determine the sides of the killer and the killed unit
        private _sideKiller = getNumber (configFile >> "cfgVehicles" >> typeOf _instigator >> "side");
        private _sideKilled = getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side");

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

        // Get the weapon used for the kill and its display name
        private _weaponClass = currentWeapon _instigator;
        private _weaponDisplayName = getText(configFile >> "CfgWeapons" >> _weaponClass >> "displayName");

        // Get the weapon picture or vehicle picture if no weapon picture is available
        private _pictureweapon = getText(configFile >> "CfgWeapons" >> _weaponClass >> "picture");
        if (_pictureweapon == "") then {
            _weaponClass = typeOf (vehicle _instigator);
            _pictureweapon = getText(configFile >> "CfgVehicles" >> _weaponClass >> "picture");
        };

        // Get a readable name for the faction
        private _factionName = switch (_sideKilled) do {
            case 0: { "OPFOR" };
            case 1: { "NATO" };
            case 2: { "Independent" };
            case 3: { "Civilian" };
            default { "Unknown Faction" };
        };

        // Check if the kill was friendly fire (same side) and the instigator is a player
        if (_sideKiller == _sideKilled && isPlayer _instigator) then {
            // Penalty: Deduct 10,000 credits from the instigator's bank account
            [_instigator, -10000, true] call grad_moneymenu_fnc_addFunds;

            // Send a hint to the instigator about the friendly fire
            private _message = format ["You killed a member of %1! 10,000 cr. has been deducted from your bank account.", _factionName];
            [_message] remoteExec ["hintSilent", _instigator];
        };

        // Check if the player was killed by friendly fire
        if (isPlayer _killed && _sideKiller == _sideKilled && _instigator != _killed) then {
            // Friendly fire compensation: Add 20,000 credits to the killed player's bank account
            [_killed, 20000, true] call grad_moneymenu_fnc_addFunds;

            // Send a direct message to the player about the friendly fire
            private _message = format ["%1 were killed by friendly fire by %2 with a %3 from %4m. 10,000 cr. has been wired to your bank account.", name _killed, name _instigator, _weaponDisplayName, floor _distance];
            [_message] remoteExec ["hintSilent", _killed];
        };

        // Switch-case structure to handle different scenarios based on the side of the killed unit
        switch (_sideKilled) do {
            case 0: {
                // OPFOR unit killed
                // Reward: Add a random amount up to 10,000 credits to the instigator's wallet
                [_instigator, random 10000] call grad_moneymenu_fnc_addFunds;

                // If the instigator is a player, send them a hint about the reward
                if (isPlayer _instigator) then {
                    private _message = format ["You killed a member of %1, good job! 0-10,000 cr. has been added to your wallet. Don't forget to check the corpse for more money!", _factionName];
                    [_message] remoteExec ["hintSilent", _instigator];
                };

                // Add a random amount up to 10,000 credits to the wallet of the killed OPFOR AI unit
                if (!isPlayer _killed) then {
                    [_killed, random 10000] call grad_moneymenu_fnc_addFunds;
                };
            };
            case 1: {
                // NATO unit killed
                if (_sideKiller == 0) then {
                    // OPFOR killed NATO
                    // Reward: Add a random amount up to 10,000 credits to the instigator's wallet
                    [_instigator, random 10000] call grad_moneymenu_fnc_addFunds;

                    // If the instigator is a player, send them a hint about the reward
                    if (isPlayer _instigator) then {
                        private _message = format ["You killed a member of %1, good job! 0-10,000 cr. has been added to your wallet.", _factionName];
                        [_message] remoteExec ["hintSilent", _instigator];
                    };
                };

                // Ensure that every time a NATO AI is killed, they receive 1,000 random credits in their wallet
                if (!isPlayer _killed) then {
                    [_killed, random 1000] call grad_moneymenu_fnc_addFunds;
                };
            };
            case 2: {
                // Independent unit killed
                if (_sideKiller == 0) then {
                    // OPFOR killed Independent
                    // Reward: Add a random amount up to 10,000 credits to the instigator's wallet
                    [_instigator, random 10000] call grad_moneymenu_fnc_addFunds;

                    // If the instigator is a player, send them a hint about the reward
                    if (isPlayer _instigator) then {
                        private _message = format ["You killed a member of %1, good job! 0-10,000 cr. has been added to your wallet.", _factionName];
                        [_message] remoteExec ["hintSilent", _instigator];
                    };
                } else {
                    // NATO killed Independent (NATO allied)
                    // Penalty: Deduct 10,000 credits from the instigator's bank account
                    [_instigator, -10000, true] call grad_moneymenu_fnc_addFunds;

                    // If the instigator is a player, send them a hint about the penalty
                    if (isPlayer _instigator) then {
                        private _message = format ["You killed a member of %1! 10,000 cr. has been deducted from your bank account.", _factionName];
                        [_message] remoteExec ["hintSilent", _instigator];
                    };
                };

                // Add a random amount up to 1,000 credits to the wallet of the killed Independent AI unit
                if (!isPlayer _killed) then {
                    [_killed, random 1000] call grad_moneymenu_fnc_addFunds;
                };
            };
            case 3: {
                // Civilian unit killed
                // Penalty: Deduct 10,000 credits from the instigator's bank account
                [_instigator, -10000, true] call grad_moneymenu_fnc_addFunds;

                // If the instigator is a player, send them a hint about the penalty
                if (isPlayer _instigator) then {
                    private _message = format ["You killed a member of %1! 10,000 cr. has been deducted from your bank account.", _factionName];
                    [_message] remoteExec ["hintSilent", _instigator];
                };

                // Add a random amount up to 1,000 credits to the wallet of the killed Civilian AI unit
                if (!isPlayer _killed) then {
                    [_killed, random 1000] call grad_moneymenu_fnc_addFunds;
                };
            };
        };

        // Killfeed HUD Notification
        _kill_HUD = format["<t size='0.3'>  Killed  <t size='0.5'> <t color='%1'>  %2  <t color='#%1'>  %3 m</t>", _killed_Color, _killed_Name, floor _distance];
        [_kill_HUD, 0, 0, 8, 1, -1, 7017] spawn bis_fnc_dynamicText;

        // Play a sound notification
        playSound "Killfeed_notification";

        // AI Death Marker - Only if the killer is a player
        if (!isPlayer _killed && isPlayer _instigator) then {
            private _mrkName = "LastEnemyKilled";
            // Delete any existing marker with the same name
            deleteMarker _mrkName;

            // Determine the marker color based on the side of the killed unit
            private _markerColor = switch (_sideKilled) do {
                case 0: { "ColorEAST" };         // OPFOR
                case 1: { "ColorWEST" };        // NATO
                case 2: { "colorIndependent" }; // Independent
                case 3: { "ColorCIV" };         // Civilian
            };

            // Create a new marker at the AI's position
            private _m = createMarker [_mrkName, getPosATL _killed];
            // Set the shape of the marker to an icon
            _m setMarkerShape "ICON";
            // Set the type of the marker to a dot icon
            _m setMarkerType "mil_dot";
            // Set the color of the marker based on the killed unit's side
            _m setMarkerColor _markerColor;
            // Set the size of the marker
            _m setMarkerSize [0.5, 0.5];
            // Set the text of the marker to include the faction, killer's name, weapon used, and distance
            _m setMarkerText format ["%1 killed by %2 with a %3 from %4m", _factionName, name _instigator, _weaponDisplayName, floor _distance];
        };

        // Player Death Marker - Only for non-AI players
        if (isPlayer _killed) then {
            private _mrkName = format ["%1", name _killed];
            // Delete any existing marker with the same name
            deleteMarker _mrkName;

            // Create a new marker at the player's position
            private _m = createMarker [_mrkName, getPosATL _killed];
            // Set the shape of the marker to an icon
            _m setMarkerShape "ICON";
            // Set the type of the marker to a warning icon
            _m setMarkerType "mil_warning";
            // Set the color of the marker to red
            _m setMarkerColor "ColorRed";
            // Set the size of the marker
            _m setMarkerSize [0.5, 0.5];
            // Set the text of the marker to the player's name
            _m setMarkerText name _killed;
        };
    };

    // Apply a death penalty if a player dies
    if (isPlayer _killed && _sideKiller != _sideKilled) then {
        // Penalty: Deduct 10,000 credits from the killed player's bank account
        [_killed, -10000, true] call grad_moneymenu_fnc_addFunds;

        // Send a hint to the killed player notifying them of the penalty
        "You died! 10,000 cr. has been deducted from your bank account." remoteExec ["hintSilent", _killed];
    };
}];
