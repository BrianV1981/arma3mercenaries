removeAllWeapons player; 
removeAllItems player; 
removeAllAssignedItems player; 
removeUniform player; 
removeVest player; 
removeBackpack player; 
removeHeadgear player; 
removeGoggles player; 

player addWeapon "arifle_MX_F"; 
player addPrimaryWeaponItem "muzzle_snds_H"; 
player addPrimaryWeaponItem "acc_pointer_IR"; 
player addPrimaryWeaponItem "optic_AMS"; 
player addPrimaryWeaponItem "bipod_01_F_blk"; 
player addPrimaryWeaponItem "30Rnd_65x39_caseless_mag"; 

player forceAddUniform "U_B_CombatUniform_mcam_tshirt"; 
player addVest "V_Chestrig_rgr"; 
player addBackpack "B_Kitbag_mcamo"; 

player addWeapon "Rangefinder";

for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";}; 
for "_i" from 1 to 4 do {player addItemToUniform "ACE_Splint";}; 
for "_i" from 1 to 4 do {player addItemToUniform "ACE_morphine";}; 
for "_i" from 1 to 2 do {player addItemToUniform "ACE_epinephrine";}; 
player addItemToUniform "ACE_CableTie"; 
player addItemToUniform "ACE_Clacker"; 
player addItemToUniform "ACE_DefusalKit"; 
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_key_master";

for "_i" from 1 to 4 do {player addItemToVest "ACE_bloodIV_250";}; 
for "_i" from 1 to 8 do {player addItemToVest "30Rnd_65x39_caseless_mag";}; 
for "_i" from 1 to 1 do {player addItemToVest "16Rnd_9x21_Mag";}; 
for "_i" from 1 to 2 do {player addItemToVest "APERSMine_Range_Mag";}; 
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";}; 
player addItemToVest "ACE_Canteen";
player addItemToVest "ACE_Humanitarian_Ration";

for "_i" from 1 to 2 do {player addItemToBackpack "ClaymoreDirectionalMine_Remote_Mag";}; 
for "_i" from 1 to 2 do {player addItemToBackpack "APERSBoundingMine_Range_Mag";}; 
for "_i" from 1 to 2 do {player addItemToBackpack "SLAMDirectionalMine_Wire_Mag";}; 
player addItemToBackpack "DemoCharge_Remote_Mag"; 
player addItemToBackpack "ToolKit"; 
player addItemToBackpack "MineDetector"; 
player addItemToBackpack "ACE_EntrenchingTool";

player addHeadgear "H_HelmetB_plain_mcamo";
player addGoggles "G_Tactical_Clear";

player linkItem "ItemMap"; 
player linkItem "ItemCompass"; 
player linkItem "ItemWatch"; 
player linkItem "ItemRadio"; 
player linkItem "ItemGPS"; 
player linkItem "NVGoggles"; 