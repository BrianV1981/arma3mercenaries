comment "Remove existing items";
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
player addPrimaryWeaponItem "optic_AMS_snd";
player addPrimaryWeaponItem "100Rnd_65x39_caseless_mag_Tracer";
player addPrimaryWeaponItem "bipod_01_F_snd";
player addWeapon "launch_I_Titan_short_F";
player addSecondaryWeaponItem "Titan_AT";
player addWeapon "ACE_Flashlight_Maglite_ML300L";

player forceAddUniform "U_B_CombatUniform_mcam_worn";
player addVest "V_PlateCarrier2_rgr";
player addBackpack "B_Carryall_oli";

player addMagazine "Laserbatteries";
player addWeapon "Laserdesignator_03";

for "_i" from 1 to 8 do {player addItemToUniform "ACE_fieldDressing";};
player addItemToUniform "ACE_bloodIV";
player addItemToUniform "ACE_bloodIV_250";
player addItemToUniform "ACE_bloodIV_500";
player addItemToUniform "ACE_splint";
for "_i" from 1 to 2 do {player addItemToUniform "ACE_epinephrine";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_tourniquet";

for "_i" from 1 to 5 do {player addItemToVest "100Rnd_65x39_caseless_mag_Tracer";};

player addItemToBackpack "Toolkit";
player addItemToBackpack "MineDetector";
player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "ACE_EarPlugs";
player addItemToBackpack "ACE_DefusalKit";
player addItemToBackpack "ACE_Canteen";
player addItemToBackpack "ACE_Humanitarian_Ration";
player addItemToBackpack "optic_tws_mg";
player addItemToBackpack "Titan_AT";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToBackpack "HandGrenade";};
for "_i" from 1 to 20 do {player addItemToBackpack "ACE_CableTie";};

player addHeadgear "H_HelmetSpecB_snakeskin";
player addGoggles "G_Balaclava_oli";

player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "ItemGPS";
player linkItem "NVGogglesB_grn_F";
