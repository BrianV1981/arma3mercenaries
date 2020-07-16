removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

this addWeapon "arifle_MXM_F";
this addPrimaryWeaponItem "muzzle_snds_H";
this addPrimaryWeaponItem "acc_pointer_IR";
this addPrimaryWeaponItem "ACE_optic_SOS_PIP";
this addPrimaryWeaponItem "ACE_30Rnd_65_Creedmor_mag";
this addPrimaryWeaponItem "bipod_01_F_blk";

this forceAddUniform "U_B_CTRG_1";
this addVest "V_PlateCarrierL_CTRG";
this addBackpack "B_AssaultPack_rgr";

this addWeapon "ACE_Vector";

this addItemToUniform "ACE_ATragMX";
this addItemToUniform "ACE_EarPlugs";
this addItemToUniform "ACE_Kestrel4500";
this addItemToUniform "ACE_MapTools";
this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_microDAGR";
this addItemToUniform "ACE_RangeCard";
this addItemToUniform "optic_Nightstalker";
this addItemToUniform "ACE_muzzle_mzls_H";
for "_i" from 1 to 14 do {this addItemToVest "ACE_30Rnd_65_Creedmor_mag";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_bloodIV_250";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_CableTie";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_Canteen";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_Humanitarian_Ration";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_splint";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_tourniquet";};
this addHeadgear "H_HelmetSpecB_snakeskin";
this addGoggles "G_Bandanna_oli";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
