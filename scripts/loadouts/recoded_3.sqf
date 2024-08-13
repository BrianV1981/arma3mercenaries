removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "srifle_LRR_camo_F";
player addPrimaryWeaponItem "ACE_optic_SOS_PIP";
player addPrimaryWeaponItem "7Rnd_408_Mag";
player addWeapon "hgun_Rook40_F";
player addHandgunItem "muzzle_snds_L";
player addHandgunItem "30Rnd_9x21_Mag";

player forceAddUniform "U_B_FullGhillie_sard";
player addVest "V_PlateCarrierH_CTRG";
player addBackpack "B_Bergen_mcamo_F";

player addWeapon "ACE_Vector";

player addItemToUniform "ACE_ATragMX";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_IR_Strobe_Item";
player addItemToUniform "ACE_microDAGR";
player addItemToUniform "ACE_SpraypaintBlue";
player addItemToUniform "ACE_Kestrel4500";

player addItemToUniform "ACE_RangeCard";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Clacker";
player addItemToUniform "optic_Nightstalker";
for "_i" from 1 to 2 do {player addItemToUniform "30Rnd_9x21_Mag";};
for "_i" from 1 to 10 do {player addItemToVest "7Rnd_408_Mag";};
player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "ACE_DefusalKit";
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_bloodIV_250";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_Canteen";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_CableTie";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_Humanitarian_Ration";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_splint";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_tourniquet";};
player addItemToBackpack "ACE_Tripod";
player addItemToBackpack "ToolKit";
player addItemToBackpack "ACE_personalAidKit";
player addItemToBackpack "MineDetector";
for "_i" from 1 to 10 do {player addItemToBackpack "7Rnd_408_Mag";};
player addHeadgear "H_HelmetSpecB_snakeskin";
player addGoggles "G_Bandanna_oli";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "ItemRadio";
player linkItem "ItemGPS";
player linkItem "NVGogglesB_grn_F";
