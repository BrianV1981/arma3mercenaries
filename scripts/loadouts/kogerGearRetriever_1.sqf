removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "arifle_MXC_Black_F";
player addPrimaryWeaponItem "muzzle_snds_65_TI_blk_F";
player addPrimaryWeaponItem "optic_Arco_blk_F";
player addPrimaryWeaponItem "100Rnd_65x39_caseless_black_mag_tracer";

player forceAddUniform "U_O_CombatUniform_ocamo";
player addVest "V_PlateCarrierSpec_blk";
player addBackpack "B_AssaultPack_blk";

player addWeapon "Binocular";

for "_i" from 1 to 22 do {player addItemToUniform "ACE_fieldDressing";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_key_master";
for "_i" from 1 to 2 do {player addItemToUniform "ACE_epinephrine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_splint";};
player addItemToUniform "ACE_bloodIV_500";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_CableTie";};
for "_i" from 1 to 4 do {player addItemToVest "100Rnd_65x39_caseless_black_mag_tracer";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_bloodIV";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_CableTie";};
player addItemToBackpack "MineDetector";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_morphine";};
player addItemToBackpack "ToolKit";
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_CTS9";};
for "_i" from 1 to 2 do {player addItemToBackpack "MiniGrenade";};
player addHeadgear "H_HelmetLeaderO_ocamo";
player addGoggles "G_Bandanna_aviator";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "ItemGPS";
player linkItem "O_NVGoggles_hex_F";