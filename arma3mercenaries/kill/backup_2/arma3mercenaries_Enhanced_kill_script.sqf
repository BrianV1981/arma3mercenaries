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
[this, -2000] call grad_moneymenu_fnc_addFunds; // subtracts 2000 from this objects wallet
[storageBox, 100] call grad_moneymenu_fnc_addFunds; // adds 100 to storageBox
[player, 1500, true] call grad_moneymenu_fnc_addFunds; // adds 1500 to unit/player bank

# **arma3mercenaries Kill Script: Kill Notification, Kill Reward, & Death Marker System**

## **Overview**
The `arma3mercenaries Enhanced Kill Script` provides comprehensive features for managing kill notifications (killfeed), rewards, penalties, and death markers in Arma 3 missions. The script supports a wide range of customizable options via CBA (Community Base Addons), enabling players and mission creators to tailor the experience to their needs.

## **Core Features**

### **Killfeed Notification**
- **Description**: Displays a HUD notification for every kill, showing the name and distance of the killed unit.
- **CBA Settings**:
  - **Enable Killfeed**: Toggles the display of the killfeed notification.
  - **Killfeed Display Duration**: Adjusts the duration (in seconds) that the killfeed notification remains on screen.
  - **Enable Kill Notification Sound**: Toggles the sound notification that plays when a kill is registered.

### **Rewards and Penalties**
- **Friendly Fire Penalty**:
  - **Description**: Deducts a specified amount of credits from the player’s bank account for friendly fire incidents.
  - **CBA Settings**:
    - **Friendly Fire Penalty (Bank)**: Sets the amount of credits deducted for friendly fire incidents.
- **Friendly Fire Compensation**:
  - **Description**: Awards a specified amount of credits to a player killed by friendly fire. Credits are added to the player’s bank account.
  - **CBA Settings**:
    - **Friendly Fire Compensation (Bank)**: Sets the amount of credits awarded to a player when killed by friendly fire.
- **Kill Rewards**:
  - **Description**: Awards a random amount of credits to the killer for killing enemy units.
  - **CBA Settings**:
    - **OPFOR Kill Reward (Random, Wallet)**: Sets the maximum random amount of credits awarded for killing an OPFOR unit.
    - **NATO Kill Reward (Random, Wallet)**: Sets the maximum random amount of credits awarded for killing a NATO unit.
    - **Independent Kill Reward (Random, Wallet)**: Sets the maximum random amount of credits awarded for killing an Independent unit.
- **Kill Penalties**:
  - **Description**: Deducts a specified amount of credits from the killer’s bank account for killing certain units, such as civilians or allied Independents.
  - **CBA Settings**:
    - **NATO Penalty for Killing Independent (Bank)**: Sets the amount of credits deducted for killing an Independent unit as NATO.
    - **Civilian Kill Penalty (Bank)**: Sets the amount of credits deducted for killing a civilian.

### **AI Wallet Management**
- **Description**: Adds a random amount of credits to the wallets of killed AI units, making them lootable.
- **CBA Settings**:
  - **OPFOR AI Wallet Amount (Random, Wallet)**: Sets the maximum random amount of credits found on a killed OPFOR AI unit.
  - **NATO AI Wallet Amount (Random, Wallet)**: Sets the maximum random amount of credits found on a killed NATO AI unit.
  - **Independent AI Wallet Amount (Random, Wallet)**: Sets the maximum random amount of credits found on a killed Independent AI unit.
  - **Civilian AI Wallet Amount (Random, Wallet)**: Sets the maximum random amount of credits found on a killed Civilian AI unit.

### **Kill Markers**
- **Description**: Creates markers on the map at the location where a player or AI unit was killed by the player. The marker includes the faction, killer’s name, weapon used, and the distance.
- **CBA Settings**:
  - **Enable Kill Markers**: Toggles the display of the kill markers.
  - **Kill Marker Size**: Sets the size of the kill markers on the map.

### **Death Markers**
- **Description**: Creates markers on the map at the location where a player was killed. The marker includes the faction, killer’s name, weapon used, and the distance.
- **CBA Settings**:
  - **Enable Death Markers**: Toggles the display of the death markers.
  - **Death Marker Size**: Sets the size of the death markers on the map.

### **Death Penalty**
- **Description**: Deducts a specified amount of credits from the player's bank account upon death.
- **CBA Settings**:
  - **Death Penalty Amount (Bank)**: Sets the amount of credits deducted when the player dies.

### **Silent Hints**
- **Description**: Provides notifications related to rewards and penalties without disrupting gameplay with loud hints.
- **CBA Settings**:
  - **Enable Silent Hints**: Toggles the display of silent hints related to kill rewards and penalties.

## **In-Game Experience**
- **Immersive Feedback**: Players receive immediate visual and audio feedback for their kills and deaths, enhancing the tactical experience.
- **Customization**: With the extensive CBA settings, mission creators and players can fine-tune how the script interacts with their gameplay, including adjusting rewards, penalties, killfeed behavior, and more.

## **Usage**
To integrate and use this script in your mission, simply add the script files to your main mission folder and ensure the CBA settings are configured to your preference.

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
            // **Friendly Fire Penalty (Configurable via CBA)**
            private _friendlyFirePenalty = arma3mercenaries_friendlyFirePenalty;
            [_instigator, -_friendlyFirePenalty, true] call grad_moneymenu_fnc_addFunds;

            // Send a hint to the instigator about the friendly fire
            private _message = format ["You killed a member of %1! %2 cr. has been deducted from your bank account.", _factionName, _friendlyFirePenalty];
            if (arma3mercenaries_silentHints) then {
                [_message] remoteExec ["hintSilent", _instigator];
            };
        };

        // Check if the player was killed by friendly fire
        if (isPlayer _killed && _sideKiller == _sideKilled && _instigator != _killed) then {
            // **Friendly Fire Compensation (Configurable via CBA)**
            private _friendlyFireCompensation = arma3mercenaries_friendlyFireCompensation;
            [_killed, _friendlyFireCompensation, true] call grad_moneymenu_fnc_addFunds;

            // Send a direct message to the player about the friendly fire
            private _message = format ["%1 were killed by friendly fire by %2 with a %3 from %4m. %5 cr. has been wired to your bank account.", name _killed, name _instigator, _weaponDisplayName, floor _distance, _friendlyFireCompensation];
            if (arma3mercenaries_silentHints) then {
                [_message] remoteExec ["hintSilent", _killed];
            };
        };

        // Spawn a separate thread to handle delayed actions
        [_killed, _instigator, _sideKilled, _sideKiller, _killed_Name, _kill_HUD, _killed_Color, _distance, _weaponDisplayName, _factionName] spawn {
            params ["_killed", "_instigator", "_sideKilled", "_sideKiller", "_killed_Name", "_kill_HUD", "_killed_Color", "_distance", "_weaponDisplayName", "_factionName"];
            
            // Introduce a 1-second delay to prevent death marker from being missed due to latency
            sleep 1;

            // Switch-case structure to handle different scenarios based on the side of the killed unit
            switch (_sideKilled) do {
                case 0: {
                    // OPFOR unit killed
                    // **OPFOR Kill Reward (Configurable via CBA)**
                    private _opforKillLoot = arma3mercenaries_opforKillReward;
                    [_instigator, random _opforKillLoot] call grad_moneymenu_fnc_addFunds;

                    // If the instigator is a player, send them a hint about the reward
                    if (isPlayer _instigator) then {
                        private _message = format ["You killed a member of %1, good job! 0-%2 cr. has been added to your wallet. Don't forget to check the corpse for more money!", _factionName, _opforKillLoot];
                        if (arma3mercenaries_silentHints) then {
                            [_message] remoteExec ["hintSilent", _instigator];
                        };
                    };

                    // **OPFOR AI Wallet Amount (Configurable via CBA)**
                    private _opforAiWallet = arma3mercenaries_opforAiWallet;
                    [_killed, random _opforAiWallet] call grad_moneymenu_fnc_addFunds;
                };
                case 1: {
                    // NATO unit killed
                    if (_sideKiller == 0) then {
                        // OPFOR killed NATO
                        // **NATO Kill Reward (Configurable via CBA)**
                        private _natoKillReward = arma3mercenaries_natoKillReward;
                        [_instigator, random _natoKillReward] call grad_moneymenu_fnc_addFunds;

                        // If the instigator is a player, send them a hint about the reward
                        if (isPlayer _instigator) then {
                            private _message = format ["You killed a member of %1, good job! 0-%2 cr. has been added to your wallet.", _factionName, _natoKillReward];
                            if (arma3mercenaries_silentHints) then {
                                [_message] remoteExec ["hintSilent", _instigator];
                            };
                        };
                    };

                    // **NATO AI Wallet Amount (Configurable via CBA)**
                    private _natoAiWallet = arma3mercenaries_natoAiWallet;
                    if (!isPlayer _killed) then {
                        [_killed, random _natoAiWallet] call grad_moneymenu_fnc_addFunds;
                    };
                };
                case 2: {
                    // Independent unit killed
                    if (_sideKiller == 0) then {
                        // OPFOR killed Independent
                        // **Independent Kill Reward (Configurable via CBA)**
                        private _independentKillReward = arma3mercenaries_independentKillReward;
                        [_instigator, random _independentKillReward] call grad_moneymenu_fnc_addFunds;

                        // If the instigator is a player, send them a hint about the reward
                        if (isPlayer _instigator) then {
                            private _message = format ["You killed a member of %1, good job! 0-%2 cr. has been added to your wallet.", _factionName, _independentKillReward];
                            if (arma3mercenaries_silentHints) then {
                                [_message] remoteExec ["hintSilent", _instigator];
                            };
                        };
                    } else {
                        // NATO killed Independent (NATO allied)
                        // **NATO Penalty for Killing Independent (Configurable via CBA)**
                        private _natoPenaltyIndependent = arma3mercenaries_natoPenaltyIndependent;
                        [_instigator, -_natoPenaltyIndependent, true] call grad_moneymenu_fnc_addFunds;

                        // If the instigator is a player, send them a hint about the penalty
                        if (isPlayer _instigator) then {
                            private _message = format ["You killed a member of %1! %2 cr. has been deducted from your bank account.", _factionName, _natoPenaltyIndependent];
                            if (arma3mercenaries_silentHints) then {
                                [_message] remoteExec ["hintSilent", _instigator];
                            };
                        };
                    };

                    // **Independent AI Wallet Amount (Configurable via CBA)**
                    private _independentAiWallet = arma3mercenaries_independentAiWallet;
                    if (!isPlayer _killed) then {
                        [_killed, random _independentAiWallet] call grad_moneymenu_fnc_addFunds;
                    };
                };
                case 3: {
                    // Civilian unit killed
                    // **Civilian Kill Penalty (Configurable via CBA)**
                    private _civilianKillPenalty = arma3mercenaries_civilianKillPenalty;
                    [_instigator, -_civilianKillPenalty, true] call grad_moneymenu_fnc_addFunds;

                    // If the instigator is a player, send them a hint about the penalty
                    if (isPlayer _instigator) then {
                        private _message = format ["You killed a member of %1! %2 cr. has been deducted from your bank account.", _factionName, _civilianKillPenalty];
                        if (arma3mercenaries_silentHints) then {
                            [_message] remoteExec ["hintSilent", _instigator];
                        };
                    };

                    // **Civilian AI Wallet Amount (Configurable via CBA)**
                    private _civilianAiWallet = arma3mercenaries_civilianAiWallet;
                    if (!isPlayer _killed) then {
                        [_killed, random _civilianAiWallet] call grad_moneymenu_fnc_addFunds;
                    };
                };
            };

            // **Killfeed HUD Display Duration (Configurable via CBA)**
            // Additional check for killfeed setting
            if (isPlayer _instigator && arma3mercenaries_killFeedEnabled) then {
                private _killFeedDuration = arma3mercenaries_killFeedDuration;
                _kill_HUD = format["<t size='0.3'>  Killed  <t size='0.5'> <t color='%1'>  %2  <t color='#%1'>  %3 m</t>", _killed_Color, _killed_Name, floor _distance];
                [_kill_HUD, 0, 0, _killFeedDuration, 1, -1, 7017] spawn bis_fnc_dynamicText;

                // **Killfeed Sound (Configurable via CBA)**
                private _killSoundEnabled = arma3mercenaries_killNotificationSound;
                if (_killSoundEnabled) then {
                    playSound "Killfeed_notification";
                };
            };

            // **Kill Marker Settings**
            if (arma3mercenaries_killMarkerEnabled && isPlayer _instigator) then {
                private _mrkName = "LastEnemyKilled";
                deleteMarker _mrkName;

                private _markerColor = switch (_sideKilled) do {
                    case 0: { "ColorEAST" };         // OPFOR
                    case 1: { "ColorWEST" };        // NATO
                    case 2: { "colorIndependent" }; // Independent
                    case 3: { "ColorCIV" };         // Civilian
                };

                private _markerSize = arma3mercenaries_killMarkerSize;
                private _m = createMarker [_mrkName, getPosATL _killed];
                _m setMarkerShape "ICON";
                _m setMarkerType "mil_dot";
                _m setMarkerColor _markerColor;
                _m setMarkerSize [_markerSize, _markerSize];
                _m setMarkerText format ["%1 killed by %2 with a %3 from %4m", _factionName, name _instigator, _weaponDisplayName, floor _distance];
            };

            // **Death Marker Settings**
            if (arma3mercenaries_deathMarkerEnabled && isPlayer _killed) then {
                private _mrkName = format ["%1", name _killed];
                deleteMarker _mrkName;

                private _markerSize = arma3mercenaries_deathMarkerSize;
                private _m = createMarker [_mrkName, getPosATL _killed];
                _m setMarkerShape "ICON";
                _m setMarkerType "mil_warning";
                _m setMarkerColor "ColorRed";
                _m setMarkerSize [_markerSize, _markerSize];
                _m setMarkerText format ["%1 killed by %2 with a %3 from %4m", name _killed, name _instigator, _weaponDisplayName, floor _distance];
            };

            // **Death Penalty Amount (Configurable via CBA)**
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
    };
}];
