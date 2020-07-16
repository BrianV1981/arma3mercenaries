removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "srifle_LRR_camo_F";
player addPrimaryWeaponItem "optic_LRPS";
player addPrimaryWeaponItem "7Rnd_408_Mag";
player addWeapon "hgun_P07_F";
player addHandgunItem "muzzle_snds_L";
player addHandgunItem "16Rnd_9x21_Mag";

player forceAddUniform "U_B_FullGhillie_sard";
player addVest "V_Chestrig_rgr";
player addBackpack "B_Kitbag_mcamo"; 

player addWeapon "Rangefinder";

for "_i" from 1 to 4 do {player addItemToUniform "16Rnd_9x21_Mag";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";}; 
for "_i" from 1 to 4 do {player addItemToUniform "ACE_Splint";}; 
for "_i" from 1 to 4 do {player addItemToUniform "ACE_morphine";}; 
for "_i" from 1 to 2 do {player addItemToUniform "ACE_epinephrine";}; 
player addItemToUniform "ACE_CableTie"; 
player addItemToUniform "ACE_Canteen";
player addItemToUniform "ACE_Humanitarian_Ration";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_key_master";

for "_i" from 1 to 8 do {player addItemToVest "7Rnd_408_Mag";};
for "_i" from 1 to 4 do {player addItemToVest "SmokeShell";};
player addItemToVest "ACE_Clacker";

for "_i" from 1 to 12 do {player addItemToBackpack "7Rnd_408_Mag";};
for "_i" from 1 to 2 do {player addItemToBackpack "ClaymoreDirectionalMine_Remote_Mag";};
for "_i" from 1 to 2 do {player addItemToBackpack "APERSTripMine_Wire_Mag";};
player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "ACE_ATragMX";
player addItemToBackpack "ACE_MapTools";
player addItemToBackpack "ACE_Kestrel4500";
player addItemToBackpack "ACE_RangeCard";

player addHeadgear "H_HelmetB_plain_mcamo";
player addGoggles "G_Tactical_Clear";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "ItemGPS";
player linkItem "NVGoggles";