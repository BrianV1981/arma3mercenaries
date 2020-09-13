params [
    ["_crate", objNull]
];

if !(isServer) exitWith {};

if (isNull _crate) exitWith {diag_log "MXRPG32SupplyBox.sqf :: input is objNull"};

_crate allowDamage false;

clearWeaponCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearItemCargoGlobal _crate;
clearBackpackCargoGlobal _crate;

_crate addWeaponCargoGlobal ["ACE_Flashlight_Maglite_ML300L", 5];
_crate addWeaponCargoGlobal ["arifle_MX_RCO_pointer_snds_F", 5];
_crate addMagazineCargoGlobal ["100Rnd_65x39_caseless_mag_Tracer", 20];

_crate addWeaponCargoGlobal ["launch_RPG32_F", 5];
_crate addMagazineCargoGlobal ["RPG32_F", 5];
_crate addMagazineCargoGlobal ["RPG32_HE_F", 5];

_crate addMagazineCargoGlobal ["ACE_Chemlight_HiRed", 5];
_crate addMagazineCargoGlobal ["SmokeShell", 5];
_crate addMagazineCargoGlobal ["HandGrenade", 5];

_crate addItemCargoGlobal ["U_B_CombatUniform_mcam", 5];
_crate addItemCargoGlobal ["V_PlateCarrier2_blk", 5];
_crate addItemCargoGlobal ["H_HelmetSpecB_blk", 5];
_crate addItemCargoGlobal ["NVGoggles", 5];
_crate addItemCargoGlobal ["ItemRadio", 5];
_crate addItemCargoGlobal ["ItemWatch", 5];
_crate addItemCargoGlobal ["ItemCompass", 5];
_crate addItemCargoGlobal ["ItemGPS", 5];
_crate addItemCargoGlobal ["Binocular", 5];
_crate addItemCargoGlobal ["ToolKit", 5];
_crate addItemCargoGlobal ["ACE_EarPlugs", 5];
_crate addItemCargoGlobal ["ACE_CableTie", 5];
_crate addItemCargoGlobal ["ACE_EntrenchingTool", 5];
_crate addItemCargoGlobal ["DemoCharge_Remote_Mag", 3];
_crate addItemCargoGlobal ["ACE_Clacker", 3];
_crate addItemCargoGlobal ["ACE_DefusalKit", 5];

_crate addBackpackCargoGlobal ["ACE_TacticalLadder_Pack", 3];
_crate addBackpackCargoGlobal ["B_Respawn_TentDome_F", 3];
_crate addBackpackCargoGlobal ["B_Carryall_mcamo", 5];