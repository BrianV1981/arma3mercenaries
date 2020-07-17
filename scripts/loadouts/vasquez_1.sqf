removeAllWeapons player; 
removeAllItems player; 
removeAllAssignedItems player; 
removeUniform player; 
removeVest player; 
removeBackpack player; 
removeHeadgear player; 
removeGoggles player; 

player addWeapon "arifle_MX_F"; 
player addWeapon "launch_B_Titan_short_F";
player addWeapon "ACE_Flashlight_Maglite_ML300L";
player addPrimaryWeaponItem "muzzle_snds_H"; 
player addPrimaryWeaponItem "acc_pointer_IR"; 
player addPrimaryWeaponItem "optic_AMS"; 
player addPrimaryWeaponItem "bipod_01_F_blk"; 
player addPrimaryWeaponItem "100Rnd_65x39_caseless_black_mag_tracer"; 
player addSecondaryWeaponItem "Titan_AT"; 

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
for "_i" from 1 to 2 do {player addItemToVest "100Rnd_65x39_caseless_black_mag_tracer";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 1 do {player addItemToVest "ACE_Canteen";};
for "_i" from 1 to 1 do {player addItemToVest "ACE_Humanitarian_Ration";};
for "_i" from 1 to 2 do {player addItemToVest "MiniGrenade";};

for "_i" from 1 to 2 do {player addItemToBackpack "Titan_AT";};
for "_i" from 1 to 7 do {player addItemToBackpack "100Rnd_65x39_caseless_black_mag_tracer";};
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
player linkItem "B_UavTerminal";
player linkItem "NVGogglesB_blk_F";