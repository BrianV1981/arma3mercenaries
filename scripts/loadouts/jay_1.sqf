comment "Remove existing items";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "arifle_MX_SW_F";
player addPrimaryWeaponItem "muzzle_snds_H_MG";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "ACE_optic_Arco_PIP";
player addPrimaryWeaponItem "100Rnd_65x39_caseless_mag_Tracer";
player addPrimaryWeaponItem "bipod_01_F_snd";
player addWeapon "launch_RPG32_F";
player addSecondaryWeaponItem "RPG32_F";
player addWeapon "ACE_Flashlight_Maglite_ML300L";

player forceAddUniform "U_B_CombatUniform_mcam_vest";
player addVest "V_PlateCarrier2_rgr_noflag_F";
player addBackpack "B_Carryall_cbr";

player addMagazine "Laserbatteries";
player addWeapon "Laserdesignator_03";

for "_i" from 1 to 8 do {player addItemToUniform "ACE_fieldDressing";};
player addItemToUniform "ACE_bloodIV";
player addItemToUniform "ACE_bloodIV_250";
player addItemToUniform "ACE_bloodIV_500";
for "_i" from 1 to 4 do {player addItemToUniform "ACE_splint";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_epinephrine";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToVest "100Rnd_65x39_caseless_mag_Tracer";};

player addItemToBackpack "MineDetector";
player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "ACE_EarPlugs";
player addItemToBackpack "ACE_DefusalKit";
player addItemToBackpack "ACE_Canteen";
player addItemToBackpack "ACE_Humanitarian_Ration";
player addItemToBackpack "optic_tws_mg";
player addItemToBackpack "ACE_Clacker";
player addItemToBackpack "ACE_Chemlight_HiRed";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToBackpack "HandGrenade";};
player addItemToBackpack "B_IR_Grenade";
player addItemToBackpack "APERSTripMine_Wire_Mag";
player addItemToBackpack "DemoCharge_Remote_Mag";
player addItemToBackpack "RPG32_F";

player addHeadgear "H_HelmetSpecB_sand";
player addGoggles "G_Combat";

player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "ItemGPS";
player linkItem "NVGogglesB_grn_F";
