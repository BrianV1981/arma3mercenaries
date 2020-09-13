params [
    ["_crate", objNull]
];

if !(isServer) exitWith {};

if (isNull _crate) exitWith {diag_log "MedicalContainers.sqf :: input is objNull"};

_crate allowDamage false;

clearWeaponCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearItemCargoGlobal _crate;
clearBackpackCargoGlobal _crate;

_crate addItemCargoGlobal ["ACE_personalAidKit", 5];
_crate addItemCargoGlobal ["ACE_EarPlugs", 40];
_crate addItemCargoGlobal ["ACE_bloodIV", 40];
_crate addItemCargoGlobal ["ACE_bloodIV_500", 40];
_crate addItemCargoGlobal ["ACE_bloodIV_250", 40];
_crate addItemCargoGlobal ["ACE_epinephrine", 40];
_crate addItemCargoGlobal ["ACE_morphine", 40];
_crate addItemCargoGlobal ["ACE_fieldDressing", 400];
_crate addItemCargoGlobal ["ACE_Humanitarian_Ration", 40];
_crate addItemCargoGlobal ["ACE_Splint", 40];