removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

this addWeapon "srifle_GM6_F";
this addPrimaryWeaponItem "ACE_optic_SOS_PIP";
this addPrimaryWeaponItem "ACE_5Rnd_127x99_API_Mag";
this addWeapon "hgun_Rook40_F";
this addHandgunItem "muzzle_snds_L";
this addHandgunItem "30Rnd_9x21_Mag";

this forceAddUniform "U_B_FullGhillie_sard";
this addVest "V_PlateCarrierH_CTRG";
this addBackpack "B_Bergen_mcamo_F";

this addWeapon "ACE_Vector";

this addItemToUniform "ACE_ATragMX";
this addItemToUniform "ACE_EarPlugs";
this addItemToUniform "ACE_IR_Strobe_Item";
this addItemToUniform "ACE_microDAGR";
this addItemToUniform "ACE_SpraypaintBlue";
this addItemToUniform "ACE_RangeCard";
this addItemToUniform "ACE_MapTools";
this addItemToUniform "ACE_Clacker";
this addItemToUniform "optic_Nightstalker";
for "_i" from 1 to 2 do {this addItemToUniform "30Rnd_9x21_Mag";};
for "_i" from 1 to 10 do {this addItemToVest "ACE_10Rnd_338_API526_Mag";};
this addItemToBackpack "ACE_Tripod";
this addItemToBackpack "ToolKit";
this addItemToBackpack "MineDetector";
this addItemToBackpack "ACE_EntrenchingTool";
this addItemToBackpack "ACE_DefusalKit";
this addItemToBackpack "ACE_personalAidKit";
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_bloodIV_250";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_Canteen";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_CableTie";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_Humanitarian_Ration";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_splint";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_5Rnd_127x99_API_Mag";};
this addHeadgear "H_HelmetSpecB_snakeskin";
this addGoggles "G_Bandanna_oli";

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "ItemRadio";
this linkItem "ItemGPS";
