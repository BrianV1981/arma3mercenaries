removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "srifle_DMR_02_sniper_F";
player addWeapon "ACE_Flashlight_Maglite_ML300L";
player addPrimaryWeaponItem "muzzle_snds_338_sand";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "optic_AMS_snd";
player addPrimaryWeaponItem "10Rnd_338_Mag";
player addPrimaryWeaponItem "bipod_01_F_snd";

player forceAddUniform "U_B_CombatUniform_mcam";
player addVest "V_Chestrig_rgr";
player addBackpack "B_Kitbag_mcamo"; 

player addWeapon "Rangefinder";

for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";}; 
for "_i" from 1 to 4 do {player addItemToUniform "ACE_Splint";}; 
for "_i" from 1 to 4 do {player addItemToUniform "ACE_morphine";}; 
for "_i" from 1 to 2 do {player addItemToUniform "ACE_epinephrine";}; 
player addItemToUniform "ACE_CableTie"; 
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_key_master";

for "_i" from 1 to 4 do {player addItemToVest "ACE_bloodIV_250";}; 
for "_i" from 1 to 5 do {player addItemToVest "10Rnd_338_Mag";};
for "_i" from 1 to 2 do {player addItemToVest "MiniGrenade";};
player addItemToVest "SmokeShell";

for "_i" from 1 to 20 do {player addItemToBackpack "10Rnd_338_Mag";};  
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
