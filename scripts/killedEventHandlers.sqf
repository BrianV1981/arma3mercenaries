/*

	killedEventHandlers.sqf
	Author: BrianV1981


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



	*****THIS IS OBSOLETE AND HAS BEEN INTEGRATED INTO THE arma3mercenaries KILL SCRIPT!*****

*/

///////////adds random 10k wallet for killing opfor////////////////
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 0) then {
  [_instigator, random 10000] call grad_moneymenu_fnc_addFunds;
  "BLUFOR killed a member of OPFOR, good job! 0-10,000 cr. has been added to their wallet. Don't forget to check the corpse for more money!" remoteExec ["hintSilent"];
  }
}];
///////////adds random 10k WALLET to dead opfor////////////////
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 0) then {
  [_killed, random 10000] call grad_moneymenu_fnc_addFunds;
  }
}];
/////////// minus 10k BANK for ff /////////////
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 1) then {
  [_instigator, -10000, true] call grad_moneymenu_fnc_addFunds;
  "BLUFOR killed a NATO member! 10,000 cr. has been deducted from their bank account." remoteExec ["hintSilent"];
  }
}];
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 2) then {
  [_instigator, -10000, true] call grad_moneymenu_fnc_addFunds;
  "BLUFOR killed a Syndikat member! (NATO allied) 10,000 cr. has been deducted from their bank account." remoteExec ["hintSilent"];
  }
}];
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 3) then {
  [_instigator, -10000, true] call grad_moneymenu_fnc_addFunds;
  "BLUFOR killed a civilian! 10,000 cr. has been deducted from their bank account." remoteExec ["hintSilent"];
  }
}];