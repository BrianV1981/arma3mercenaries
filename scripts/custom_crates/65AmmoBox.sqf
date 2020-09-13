params [
    ["_crate", objNull]
];

if !(isServer) exitWith {};

if (isNull _crate) exitWith {diag_log "65AmmoBox.sqf :: input is objNull"};

_crate allowDamage false;

clearWeaponCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearItemCargoGlobal _crate;
clearBackpackCargoGlobal _crate;
_crate addMagazineCargoGlobal ["30Rnd_65x39_caseless_black_mag_Tracer", 40];
_crate addMagazineCargoGlobal ["100Rnd_65x39_caseless_black_mag_tracer", 24];