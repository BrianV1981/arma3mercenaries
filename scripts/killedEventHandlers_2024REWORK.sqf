// https://forums.bohemia.net/forums/topic/211383-trigger-on-enemy-death/
// https://community.bistudio.com/wiki/BIS_fnc_sideID

///////////adds random 10k wallet for killing opfor////////////////
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 0) then {
  [_instigator, random 10000] call grad_moneymenu_fnc_addFunds;
  }
}];
///////////adds random 10k WALLET to dead opfor////////////////
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 0) then {
  [_killed, random 10000] call grad_moneymenu_fnc_addFunds;
  }
}];
/////////// minus 10k BANK for ff ///////////////////////////adds 10k BANK for getting killed by ff ////////////////
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 1) then {
  [_instigator, -10000, true] call grad_moneymenu_fnc_addFunds;
  [_killed, 10000, true] call grad_moneymenu_fnc_addFunds;
  titleText ["<t color='#ff0000' size='3'>-10,000 cr.</t><br/><t color='#ffffff' size='1'>You killed a NATO member!<br/>10,000 cr. have been transfered to the victims account.", "PLAIN", -1, true, true];
  }
}];
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 2) then {
  [_instigator, -10000, true] call grad_moneymenu_fnc_addFunds;
  [_killed, 10000, true] call grad_moneymenu_fnc_addFunds;
  titleText ["<t color='#ff0000' size='3'>-10,000 cr.</t><br/><t color='#ffffff' size='1'>You killed a Syndikat member! (NATO allied)<br/>10,000 cr. have been transfered to the victims account.", "PLAIN", -1, true, true];
  }
}];
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 3) then {
  [_instigator, -10000, true] call grad_moneymenu_fnc_addFunds;
  titleText ["<t color='#ff0000' size='3'>-10,000 cr.</t><br/><t color='#ffffff' size='1'>You killed a civilian!<br/>10,000 cr. have been transfered to the victims account.", "PLAIN", -1, true, true];
  }
}];
////////// minus 10k BANK for death! //////////////
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 1) then {
  [_killed, -10000, true] call grad_moneymenu_fnc_addFunds;
  titleText ["<t color='#ff0000' size='3'>-10,000 cr.</t><br/><t color='#ffffff' size='1'>Test 1<br/>10,000 cr. has been deducted from your bank account.", "PLAIN", -1, true, true];
  }
}];
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 2) then {
  [_killed, -10000, true] call grad_moneymenu_fnc_addFunds;
  titleText ["<t color='#ff0000' size='3'>-10,000 cr.</t><br/><t color='#ffffff' size='1'>Test 2<br/>10,000 cr. has been deducted from your bank account.", "PLAIN", -1, true, true];
  }
}];