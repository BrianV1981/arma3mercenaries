//https://forums.bohemia.net/forums/topic/211383-trigger-on-enemy-death/
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
  
  }
}];
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 2) then {
  [_instigator, -10000, true] call grad_moneymenu_fnc_addFunds;
  [_killed, 10000, true] call grad_moneymenu_fnc_addFunds;
  
  }
}];
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 3) then {
  [_instigator, -10000, true] call grad_moneymenu_fnc_addFunds;
  
  }
}];
////////// minus 10k BANK for death! //////////////
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 1) then {
  [_killed, -10000, true] call grad_moneymenu_fnc_addFunds;
  }
}];
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 2) then {
  [_killed, -10000, true] call grad_moneymenu_fnc_addFunds;
  }
}];
/////////side   https://community.bistudio.com/wiki/BIS_fnc_sideID     /////////////////