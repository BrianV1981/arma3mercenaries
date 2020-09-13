params [
    ["_crate", objNull]
];

if !(isServer) exitWith {};

if (isNull _crate) exitWith {diag_log "MedicalSupply_1.sqf :: input is objNull"};

_crate allowDamage false;

_crate addItemCargoGlobal ["ACE_EarPlugs", 25];
_crate addItemCargoGlobal ["ACE_bloodIV", 10];
_crate addItemCargoGlobal ["ACE_bloodIV_500", 10];
_crate addItemCargoGlobal ["ACE_bloodIV_250", 10];
_crate addItemCargoGlobal ["ACE_fieldDressing", 200];
_crate addItemCargoGlobal ["ACE_Humanitarian_Ration", 25];
_crate addItemCargoGlobal ["ACE_Splint", 25];