removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "arifle_MXM_F";
player addPrimaryWeaponItem "muzzle_snds_H";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "ACE_optic_SOS_PIP";
player addPrimaryWeaponItem "ACE_30Rnd_65_Creedmor_mag";
player addPrimaryWeaponItem "bipod_01_F_blk";

player forceAddUniform "U_B_CTRG_1";
player addVest "V_PlateCarrierL_CTRG";
player addBackpack "B_AssaultPack_rgr";

player addWeapon "ACE_Vector";

player addItemToUniform "ACE_ATragMX";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_Kestrel4500";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_microDAGR";
player addItemToUniform "ACE_RangeCard";
player addItemToUniform "ACE_key_master";
player addItemToUniform "optic_Nightstalker";
player addItemToUniform "ACE_muzzle_mzls_H";
for "_i" from 1 to 14 do {player addItemToVest "ACE_30Rnd_65_Creedmor_mag";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_bloodIV_250";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_CableTie";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_Canteen";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_Humanitarian_Ration";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_splint";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_tourniquet";};
player addHeadgear "H_HelmetSpecB_snakeskin";
player addGoggles "G_Bandanna_oli";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
