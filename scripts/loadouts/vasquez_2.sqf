removeAllWeapons player; 
removeAllItems player; 
removeAllAssignedItems player; 
removeUniform player; 
removeVest player; 
removeBackpack player; 
removeHeadgear player; 
removeGoggles player; 

player addWeapon "arifle_ARX_blk_F"; 
player addWeapon "ACE_Flashlight_Maglite_ML300L";
player addPrimaryWeaponItem "muzzle_snds_H"; 
player addPrimaryWeaponItem "acc_pointer_IR"; 
player addPrimaryWeaponItem "optic_AMS"; 
player addPrimaryWeaponItem "bipod_01_F_blk"; 
player addPrimaryWeaponItem "30Rnd_65x39_caseless_green_mag_Tracer"; 
player addPrimaryWeaponItem "10Rnd_50BW_Mag_F"; 

player forceAddUniform "U_B_CombatUniform_mcam_vest";
player addVest "V_PlateCarrierSpec_blk";
player addBackpack "B_Bergen_mcamo_F";

player addMagazine "Laserbatteries";
player addWeapon "Laserdesignator_01_khk_F";

for "_i" from 1 to 20 do {player addItemToUniform "ACE_fieldDressing";}; 
for "_i" from 1 to 5 do {player addItemToUniform "ACE_Splint";}; 
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";}; 
for "_i" from 1 to 2 do {player addItemToUniform "ACE_epinephrine";}; 
for "_i" from 1 to 2 do {player addItemToUniform "ACE_CableTie";}; 
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_key_master";

for "_i" from 1 to 5 do {player addItemToVest "ACE_bloodIV_250";}; 
for "_i" from 1 to 5 do {player addItemToVest "30Rnd_65x39_caseless_green_mag_Tracer";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 1 do {player addItemToVest "ACE_Canteen";};
for "_i" from 1 to 1 do {player addItemToVest "ACE_Humanitarian_Ration";};

for "_i" from 1 to 15 do {player addItemToBackpack "30Rnd_65x39_caseless_green_mag_Tracer";};
for "_i" from 1 to 10 do {player addItemToBackpack "10Rnd_50BW_Mag_F";};
player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "ToolKit";
player addItemToBackpack "ACE_ATragMX";
player addItemToBackpack "ACE_MapTools";
player addItemToBackpack "ACE_Kestrel4500";
player addItemToBackpack "ACE_RangeCard";

player addHeadgear "H_HelmetB_plain_mcamo";
player addGoggles "NVGogglesB_blk_F";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "ItemGPS";
player linkItem "NVGogglesB_blk_F";