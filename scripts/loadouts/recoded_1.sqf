removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "srifle_DMR_02_F";
player addPrimaryWeaponItem "muzzle_snds_338_black";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "optic_KHS_blk";
player addPrimaryWeaponItem "10Rnd_338_Mag";
player addPrimaryWeaponItem "bipod_01_F_blk";
player addWeapon "launch_I_Titan_short_F";
player addSecondaryWeaponItem "Titan_AT";
player addWeapon "hgun_Rook40_F";
player addHandgunItem "muzzle_snds_L";
player addHandgunItem "30Rnd_9x21_Mag";

player forceAddUniform "U_B_FullGhillie_sard";
player addVest "V_PlateCarrierH_CTRG";
player addBackpack "B_Bergen_mcamo_F";

player addMagazine "Laserbatteries";
player addWeapon "Laserdesignator_03";

player addItemToUniform "acc_flashlight";
player addItemToUniform "ACE_muzzle_mzls_338";
player addItemToUniform "ACE_ATragMX";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Kestrel4500";
player addItemToUniform "ACE_RangeCard";
player addItemToUniform "ACE_IR_Strobe_Item";
for "_i" from 1 to 4 do {player addItemToUniform "30Rnd_9x21_Mag";};

player addItemToVest "ACE_Flashlight_XL50";
player addItemToVest "ACE_DefusalKit";
player addItemToVest "ACE_Clacker";
for "_i" from 1 to 3 do {player addItemToVest "ACE_CableTie";};
for "_i" from 1 to 9 do {player addItemToVest "10Rnd_338_Mag";};

player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "ToolKit";
player addItemToBackpack "ACE_personalAidKit";
player addItemToBackpack "MineDetector";
player addItemToBackpack "ACE_SpraypaintBlue";
for "_i" from 1 to 6 do {player addItemToBackpack "ACE_Humanitarian_Ration";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_Canteen";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_bloodIV_250";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_splint";};
player addItemToBackpack "ACE_tourniquet";
for "_i" from 1 to 2 do {player addItemToBackpack "Titan_AT";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};

player addHeadgear "H_HelmetSpecB_snakeskin";
player addGoggles "G_Bandanna_oli";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "B_UavTerminal";
