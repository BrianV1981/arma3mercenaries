removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "arifle_MXC_Black_F";
player addPrimaryWeaponItem "acc_flashlight";
player addPrimaryWeaponItem "optic_Holosight_blk_F";
player addPrimaryWeaponItem "30Rnd_65x39_caseless_black_mag";
player addWeapon "hgun_P07_khk_F";
player addHandgunItem "16Rnd_9x21_Mag";

player forceAddUniform "U_B_CBRN_Suit_01_Wdl_F";
player addVest "V_PlateCarrier1_wdl";
player addBackpack "B_CombinationUnitRespirator_01_F";

for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";}; 
for "_i" from 1 to 4 do {player addItemToUniform "ACE_Splint";}; 
for "_i" from 1 to 4 do {player addItemToUniform "ACE_morphine";}; 
for "_i" from 1 to 2 do {player addItemToUniform "ACE_epinephrine";}; 
player addItemToUniform "ACE_CableTie"; 
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_key_master";
player addItemToUniform "FirstAidKit";
player addItemToUniform "30Rnd_65x39_caseless_black_mag";

for "_i" from 1 to 7 do {player addItemToVest "30Rnd_65x39_caseless_black_mag";};
for "_i" from 1 to 2 do {player addItemToVest "16Rnd_9x21_Mag";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {player addItemToVest "Chemlight_green";};
player addItemToVest "SmokeShell";
player addItemToVest "SmokeShellGreen";

player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "ACE_Canteen";
player addItemToBackpack "ACE_Humanitarian_Ration";

player addHeadgear "H_HelmetB";
player addGoggles "G_AirPurifyingRespirator_01_nofilter_F";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "NVGoggles_INDEP";