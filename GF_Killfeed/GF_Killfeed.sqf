//________________	Author : GEORGE FLOROS [GR]	___________	30.07.19	___________

/*
________________ GF Killfeed Script ________________

https://forums.bohemia.net/forums/topic/206593-headshot-killfeed-script/

Please keep the Credits or add them to your Diary

https://community.bistudio.com/wiki/SQF_syntax
Don't try to open this with the simple notepad.
For everything that is with comment  //  in front  or between /*
means that it is disabled , so there is no need to delete the extra lines.

You can open this ex:
with notepad++
https://notepad-plus-plus.org/

ArmA 3 | Notepad ++ SQF tutorial
https://www.youtube.com/watch?v=aI5P7gp3x90

and also use the extra pluggins
(this way will be better , it will give also some certain colors to be able to detect ex. problems )
http://www.armaholic.com/page.php?id=8680

or use any other program for editing .

For the Compilation List of my GF Scripts , you can search in:
https://forums.bohemia.net/forums/topic/215850-compilation-list-of-my-gf-scripts/

BI Forum Ravage Club Owner :
https://forums.bohemia.net/clubs/73-bi-forum-ravage-club/
*/


/* enhanced by BrianV1981

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

*/

diag_log "//________________ GF Killfeed Script _____________";

addMissionEventHandler ["EntityKilled", {
    params ["_killed", "_killer", "_instigator"];
    if (isNull _instigator) then { _instigator = _killer }; // Handle null instigator (road kill)

    // Handle reward for the killer
    if (isPlayer _killer) then {
        if (_killed isKindOf "CAManBase") then {
            private _killed_Name = "";
            private _kill_HUD = "";
            private _killed_Color = "#99D5FF";
            private _distance = _killer distance2D _killed;
            private _weapon = getText(configFile >> "CfgWeapons" >> currentWeapon (vehicle _killer) >> "displayname");
            private _pictureweapon = "";
            private _sideKiller = getNumber (configFile >> "cfgVehicles" >> typeOf _killer >> "side");
            private _sideKilled = getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side");

            // Get the killed unit's name
            if (!(isPlayer _killed)) then {
                _killed_Name = getText (configFile >> "CfgVehicles" >> format["%1", typeOf _killed] >> "Displayname");
            } else {
                _killed_Name = name _killed;
            };

            // Get the color based on the side of the killed unit
            _killed_Color = (side group _killed call BIS_fnc_sideColor) call BIS_fnc_colorRGBtoHTML;

            // Get weapon info
            _weapon = currentWeapon _killer;
            _pictureweapon = gettext (configFile >> "cfgWeapons" >> _weapon >> "picture");
            if (_pictureweapon == "") then {
                _weapon = typeOf (vehicle _killer);
                _pictureweapon = (getText (configFile >> "cfgVehicles" >> _weapon >> "picture"));
            };

            // Handle rewards and penalties
            switch (_sideKilled) do {
                case 0: {
                    // Player killed OPFOR
                    [_killer, random 10000] call grad_moneymenu_fnc_addFunds;
                    ["You killed a member of OPFOR, good job! 0-10,000 cr. has been added to your wallet. Don't forget to check the corpse for more money!"] remoteExec ["hintSilent", _killer];
                    // Add funds to the wallet of killed OPFOR NPC
                    if (local _killed) then {
                        [_killed, random 10000] call grad_moneymenu_fnc_addFunds;
                    };
                };
                case 1: {
                    // Player killed NATO
                    [_killer, -10000, true] call grad_moneymenu_fnc_addFunds;
                    ["You killed a NATO member! 10,000 cr. has been deducted from your bank account."] remoteExec ["hintSilent", _killer];
                };
                case 2: {
                    // Player killed Syndikat (NATO allied)
                    [_killer, -10000, true] call grad_moneymenu_fnc_addFunds;
                    ["You killed a Syndikat member! (NATO allied) 10,000 cr. has been deducted from your bank account."] remoteExec ["hintSilent", _killer];
                };
                case 3: {
                    // Player killed Civilian
                    [_killer, -10000, true] call grad_moneymenu_fnc_addFunds;
                    ["You killed a civilian! 10,000 cr. has been deducted from your bank account."] remoteExec ["hintSilent", _killer];
                };
				case 4: {
                    // Player is killed
                    [_killed, -10000, true] call grad_moneymenu_fnc_addFunds;
                    ["Youdied! 10,000 cr. has been deducted from your bank account."] remoteExec ["hintSilent", _k];
                };
            };

            // Display the killfeed notification
            _kill_HUD = format["<t size='0.3'>  Killed  <t size='0.5'> <t color='%1'>  %2  <t color='#%1'>  %3 m</t>", _killed_Color, _killed_Name, floor _distance];    
            [_kill_HUD, 0, 0, 8, 1, -1, 7017] spawn bis_fnc_dynamicText;

            // Play sound notification
            playSound "Killfeed_notification";
        };
    };
}];