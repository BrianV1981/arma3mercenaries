removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "SMG_05_F";
player addWeapon "ACE_Flashlight_Maglite_ML300L";
player addPrimaryWeaponItem "optic_LRPS";
player addPrimaryWeaponItem "30Rnd_9x21_Mag_SMG_02_Tracer_Red";
player addPrimaryWeaponItem "optic_ACO_grn_smg";

player forceAddUniform "U_Rangemaster";
player addVest "V_Rangemaster_belt";
player addBackpack "B_LegStrapBag_black_F";

for "_i" from 1 to 4 do {player addItemToUniform "ACE_fieldDressing";};
player addItemToUniform "ACE_Splint";
player addItemToUniform "ACE_morphine";
player addItemToUniform "ACE_CableTie";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_key_master";

for "_i" from 1 to 4 do {player addItemToVest "30Rnd_9x21_Mag_SMG_02_Tracer_Red";};

for "_i" from 1 to 6 do {player addItemToBackpack "30Rnd_9x21_Mag_SMG_02_Tracer_Red";};
player addItemToBackpack "ACE_EntrenchingTool";

player addHeadgear "H_Cap_headphones";

player linkItem "ItemMap";
player linkItem "NVGoggles";
player linkItem "ItemRadio";