addMissionEventHandler ["entityKilled", {
  params ["_killed","_killer","_instigator"];
  if (local _instigator && getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side") == 0) then {
  [_instigator, random 5000] call grad_moneymenu_fnc_addFunds;
  }
}];
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