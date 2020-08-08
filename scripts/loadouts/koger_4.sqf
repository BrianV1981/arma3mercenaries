removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "arifle_MX_GL_Black_F";
player addPrimaryWeaponItem "muzzle_snds_65_TI_blk_F";
player addPrimaryWeaponItem "optic_Arco_blk_F";
player addPrimaryWeaponItem "100Rnd_65x39_caseless_black_mag_tracer";
player addPrimaryWeaponItem "3Rnd_HE_Grenade_shell";

player forceAddUniform "U_O_V_Soldier_Viper_hex_F";
player addVest "V_PlateCarrierSpec_blk";
player addBackpack "B_ViperHarness_blk_F";

player addMagazine "Laserbatteries";
player addWeapon "Laserdesignator_03";

for "_i" from 1 to 15 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_epinephrine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 4 do {player addItemToVest "100Rnd_65x39_caseless_black_mag_tracer";};
player addItemToBackpack "ToolKit";
player addItemToBackpack "ACE_surgicalKit";
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_splint";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_bloodIV_500";};
player addItemToBackpack "MineDetector";
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_fieldDressing";};
player addItemToBackpack "ACE_personalAidKit";
for "_i" from 1 to 6 do {player addItemToBackpack "ACE_bloodIV_250";};
for "_i" from 1 to 2 do {player addItemToBackpack "HandGrenade";};
for "_i" from 1 to 2 do {player addItemToBackpack "MiniGrenade";};
for "_i" from 1 to 5 do {player addItemToBackpack "3Rnd_HE_Grenade_shell";};
player addItemToBackpack "100Rnd_65x39_caseless_black_mag_tracer";
player addHeadgear "H_HelmetO_ViperSP_hex_F";
player addGoggles "G_Balaclava_TI_G_blk_F";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "B_UavTerminal";