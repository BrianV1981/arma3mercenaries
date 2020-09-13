//https://forums.bohemia.net/forums/topic/211383-trigger-on-enemy-death/
///////////adds random 5k wallet for killing opfor, minus 5k wallet for ff////////////////
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 0) then {
  [_instigator, random 5000] call grad_moneymenu_fnc_addFunds;
  }
}];
///////////adds minus 5k BANK for ff ////////////////
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 1) then {
  [_instigator, -5000, true] call grad_moneymenu_fnc_addFunds;
  }
}];
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 2) then {
  [_instigator, -5000, true] call grad_moneymenu_fnc_addFunds;
  }
}];
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 3) then {
  [_instigator, -5000, true] call grad_moneymenu_fnc_addFunds;
  }
}];
///////////adds minus 5k WALLET for ff ////////////////
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 1) then {
  [_instigator, -5000] call grad_moneymenu_fnc_addFunds;
  }
}];
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 2) then {
  [_instigator, -5000] call grad_moneymenu_fnc_addFunds;
  }
}];
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 3) then {
  [_instigator, -5000] call grad_moneymenu_fnc_addFunds;
  }
}];
///////////adds random 1k to dead opfor////////////////
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 0) then {
  [_killed, random 1000] call grad_moneymenu_fnc_addFunds;
  }
}];
//////////adds minus 5k BANK for death! //////////////
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 1) then {
  [_killed, -5000, true] call grad_moneymenu_fnc_addFunds;
  }
}];
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 2) then {
  [_killed, -5000, true] call grad_moneymenu_fnc_addFunds;
  }
}];
//////////adds minus 5k WALLET for death! //////////////
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 1) then {
  [_killed, -5000] call grad_moneymenu_fnc_addFunds;
  }
}];
addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 2) then {
  [_killed, -5000] call grad_moneymenu_fnc_addFunds;
  }
}];
/////////side   https://community.bistudio.com/wiki/BIS_fnc_sideID     /////////////////