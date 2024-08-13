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
player addBackpack "B_Carryall_khk";

player addMagazine "Laserbatteries";
player addWeapon "Laserdesignator_03";

for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_splint";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_epinephrine";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_IR_Strobe_Item";
player addItemToUniform "ACE_EarPlugs";

for "_i" from 1 to 4 do {player addItemToVest "100Rnd_65x39_caseless_black_mag_tracer";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_WaterBottle";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_Humanitarian_Ration";};
player addItemToBackpack "ACE_DefusalKit";
player addItemToBackpack "ACE_EntrenchingTool";
for "_i" from 1 to 8 do {player addItemToBackpack "ACE_CableTie";};
for "_i" from 1 to 13 do {player addItemToBackpack "ACE_fieldDressing";};
player addItemToBackpack "ACE_M26_Clacker";
player addItemToBackpack "ToolKit";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_splint";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_epinephrine";};
player addItemToBackpack "MineDetector";
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_bloodIV";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_bloodIV_500";};
player addItemToBackpack "ACE_Flashlight_XL50";
for "_i" from 1 to 2 do {player addItemToBackpack "DemoCharge_Remote_Mag";};
for "_i" from 1 to 4 do {player addItemToBackpack "3Rnd_HE_Grenade_shell";};
player addHeadgear "H_HelmetO_ViperSP_hex_F";
player addGoggles "G_Balaclava_TI_G_blk_F";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "B_UavTerminal";
