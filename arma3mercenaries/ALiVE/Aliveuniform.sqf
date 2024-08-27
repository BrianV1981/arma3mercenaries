/////////addd to description.ext/////////////
//class Extended_Init_EventHandlers {
// class Man {
//  init = "_this call (compile preprocessFileLineNumbers 'Aliveuniform.sqf')";
// };
//};
//////////////////////////////////////////////////////////////////
// Change Uniforms from spawned Alive thiss
//////////////////////////////////////////////////////////////////

if (!isServer) exitWith {};

private "_this";
_this = _this select 0;

//Blufor Config BW Kleiderkammer Uniform ==============================================================
if ((side _this == west) and (!isPlayer _this)) then {
//  removeallweapons _this;
//  removeGoggles _this;
  removeHeadgear _this;
  removeVest _this;
  removeUniform _this;
//  removeAllAssignedItems _this;
  removeBackpack _this;
  _this addHeadgear 'TBW_Helm_Schnee';
  _this addUniform 'TBW_U_Kampfanzug_Schnee';
  _this addVest 'TBW_Weste_schnee';
//  _this addItemToUniform "ace_earplugs";
//  _this linkItem "ItemMap";
//  _this linkItem "ItemGPS";
//  _this linkItem "ItemCompass";
//  _this linkItem "ACE_Altimeter";
//  _this addGoggles "BWA3_G_Combat_Black";
//  _this addItemToUniform "ACE_Flashlight_XL50";
//  _this addItemToUniform "ACE_IR_Strobe_Item";
//  _this addItemToUniform "itemAndroid";
//  _this addItemToUniform "ACE_CableTie";
  for "_i" from 1 to 2 do {_this addItemToUniform "ACE_fieldDressing";};
  for "_i" from 1 to 2 do {_this addItemToUniform "ACE_packingBandage";};
  for "_i" from 1 to 2 do {_this addItemToUniform "ACE_elasticBandage";};
  for "_i" from 1 to 2 do {_this addItemToUniform "ACE_quikclot";};
  for "_i" from 1 to 2 do {_this addItemToUniform "ACE_morphine";};
  for "_i" from 1 to 2 do {_this addItemToUniform "ACE_epinephrine";};
//  for "_i" from 1 to 4 do {_this addItemToUniform "ACE_tourniquet";};
  _this addBackPack 'B_Carryall_oucamo';
// { _this addItemToBackpack "BWA3_30Rnd_556x45_G36"; } forEach [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
// { _this addItemToBackpack "SmokeShell"; } forEach [1, 2, 3, 4];
// { _this addItem "FirstAidKit"; } forEach [1, 2, 3, 4, 5];
// _this addweapon 'BWA3_G36A1';
// _this addPrimaryWeaponItem 'rhsusf_acc_ACOG';
// _this linkItem "ItemMap";
};
//====================================================================================================
//OPFOR Config RHS MSV Uniform =======================================================================
if ((side _this == east) and (!isPlayer _this)) then {
//  removeallweapons _this;
//  removeGoggles _this;
  removeHeadgear _this;
  removeVest _this;
  removeUniform _this;
//  removeAllAssignedItems _this;
  removeBackpack _this;
  _this addHeadgear 'CUP_H_RUS_6B47_v2_Winter';
  _this addUniform 'CUP_U_O_CHDKZ_Commander';
  _this addVest 'CUP_V_CDF_6B3_4_SNW';
  for "_i" from 1 to 2 do {_this addItemToUniform "ACE_fieldDressing";};
  for "_i" from 1 to 2 do {_this addItemToUniform "ACE_packingBandage";};
  for "_i" from 1 to 2 do {_this addItemToUniform "ACE_elasticBandage";};
  for "_i" from 1 to 2 do {_this addItemToUniform "ACE_quikclot";};
  for "_i" from 1 to 2 do {_this addItemToUniform "ACE_morphine";};
  for "_i" from 1 to 2 do {_this addItemToUniform "ACE_epinephrine";};
  _this addBackPack 'CUP_O_RUS_Patrol_bag_Winter';
// { _this addItemToBackpack "BWA3_30Rnd_556x45_G36"; } forEach [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
// { _this addItemToBackpack "SmokeShell"; } forEach [1, 2, 3, 4];
// { _this addItem "FirstAidKit"; } forEach [1, 2, 3, 4, 5];
// _this addweapon 'BWA3_G36A1';
// _this addPrimaryWeaponItem 'rhsusf_acc_ACOG';
// _this linkItem "ItemMap";
};
//====================================================================================================