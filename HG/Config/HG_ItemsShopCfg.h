/*
    HG_itemsShopCfg.h
    Author - HoverGuy
    GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/

    Defines available items shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the shop
		
		class YourShopCategory - Shop category, can be whatever you want
		{
			displayName - STRING - Category display name
			items - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
			|- 2 - STRING - Condition that must return either true or false, if true the item appears in the list else no
		};
	};
*/

class HG_DefaultShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
		class Items
	{
	    displayName = "$STR_HG_SHOP_ITEMS";
		items[] =
		{
		    {"ItemWatch",50,"true"},
			{"ItemCompass",50,"true"},
			{"ItemRadio",50,"true"},
			{"ItemMap",50,"true"},
	        {"Binocular",100,"true"},
		    {"Laserbatteries",50,"true"}, 
		    {"FirstAidKit",100,"true"},
		    {"ItemGPS",100,"true"},
		    {"Laserdesignator",500,"true"},
		    {"Laserdesignator_02",500,"true"},
		    {"Laserdesignator_03",500,"true"},
		    {"Medikit",300,"true"},
		    {"MineDetector",300,"true"},
		    {"NVGoggles_INDEP",500,"true"},
		    {"NVGoggles_OPFOR",500,"true"},
		    {"NVGoggles",500,"true"},
		    {"Rangefinder",500,"true"},
		    {"ToolKit",300,"true"},
		    {"I_UavTerminal",10000,"true"},
		    // {"O_UavTerminal",10000},
		    {"B_UavTerminal",10000,"true"},
		    {"ACE_UAVBattery",10000,"true"}
		};
	};
	
	class Magazines
	{
	    displayName = "$STR_HG_SHOP_MAGAZINES";
		items[] =
		{
			{"10Rnd_127x108_Mag",1000,"true"},
			{"5Rnd_127x108_APDS_Mag",1000,"true"},
			{"150Rnd_762x51_Box",1000,"true"},
			{"150Rnd_762x54_Box",1000,"true"},
			{"150Rnd_762x51_Box_Tracer",1000,"true"},
			{"150Rnd_762x54_Box_Tracer",1000,"true"},
			{"20Rnd_762x51_Mag",1000,"true"},
			{"30Rnd_762x39_Mag_Green_F",1000,"true"},
			{"30Rnd_762x39_Mag_F",1000,"true"},
			{"30Rnd_762x39_Mag_Tracer_Green_F",1000,"true"},
			{"30Rnd_762x39_Mag_Tracer_F",1000,"true"},
			{"10Rnd_762x51_Mag",200,"true"},
			{"10Rnd_762x54_Mag",200,"true"},
			{"10Rnd_93x64_DMR_05_Mag",200,"true"},
			{"150Rnd_93x64_Mag",200,"true"},
			{"150Rnd_556x45_Drum_Mag_F",400,"true"},
			{"150Rnd_556x45_Drum_Mag_Tracer_F",400,"true"},
			{"200Rnd_556x45_Box_Red_F",400,"true"},
			{"200Rnd_556x45_Box_F",400,"true"},
			{"200Rnd_556x45_Box_Tracer_Red_F",400,"true"},
			{"200Rnd_556x45_Box_Tracer_F",400,"true"},
			{"20Rnd_556x45_UW_mag",400,"true"},
			{"30Rnd_556x45_Stanag_green",400,"true"},
			{"30Rnd_556x45_Stanag_red",400,"true"},
			{"30Rnd_556x45_Stanag",400,"true"},
			{"30Rnd_556x45_Stanag_Tracer_Green",400,"true"},
			{"30Rnd_556x45_Stanag_Tracer_Red",400,"true"},
			{"30Rnd_556x45_Stanag_Tracer_Yellow",400,"true"},
			{"100Rnd_580x42_Mag_F",400,"true"},
			{"100Rnd_580x42_Mag_Tracer_F",400,"true"},
			{"30Rnd_580x42_Mag_F",400,"true"},
			{"30Rnd_580x42_Mag_Tracer_F",400,"true"},
			{"100Rnd_65x39_caseless_mag",400,"true"},
			{"100Rnd_65x39_caseless_mag_Tracer",400,"true"},
			{"200Rnd_65x39_cased_Box",400,"true"},
			{"200Rnd_65x39_Belt",400,"true"},
			{"200Rnd_65x39_Belt_Tracer_Green",400,"true"},
			{"200Rnd_65x39_Belt_Tracer_Red",400,"true"},
			{"200Rnd_65x39_Belt_Tracer_Yellow",400,"true"},
			{"200Rnd_65x39_cased_Box_Tracer",400,"true"},
			{"20Rnd_650x39_Cased_Mag_F",400,"true"},
			{"30Rnd_65x39_caseless_mag",400,"true"},
			{"30Rnd_65x39_caseless_green_mag_Tracer",400,"true"},
			{"30Rnd_65x39_caseless_mag_Tracer",400,"true"},
			{"30Rnd_65x39_caseless_green",400,"true"},
			{"30Rnd_9x21_Mag",400,"true"},
			{"30Rnd_9x21_Mag_SMG_02",400,"true"},
			{"30Rnd_9x21_Green_Mag",400,"true"},
			{"30Rnd_9x21_Mag_SMG_02_Tracer_Green",400,"true"},
			{"30Rnd_9x21_Red_Mag",400,"true"},
			{"30Rnd_9x21_Mag_SMG_02_Tracer_Red",400,"true"},
			{"30Rnd_9x21_Yellow_Mag",400,"true"},
			{"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",400,"true"},
			{"10Rnd_338_Mag",200,"true"},
			{"130Rnd_338_Mag",200,"true"},
			{"7Rnd_408_Mag",200,"true"},
			{"11Rnd_45ACP_Mag",200,"true"},
			{"30Rnd_45ACP_Mag_SMG_01",200,"true"},
			{"30Rnd_45ACP_Mag_SMG_01_Tracer_Green",200,"true"},
			{"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",200,"true"},
			{"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",200,"true"},
			{"6Rnd_45ACP_Cylinder",200,"true"},
			{"9Rnd_45ACP_Mag",200,"true"},
			{"10Rnd_50BW_Mag_F",200,"true"},
			{"5Rnd_127x108_Mag",200,"true"},
			{"10Rnd_127x54_Mag",200,"true"},
			{"3Rnd_UGL_FlareGreen_F",200,"true"},
			{"3Rnd_UGL_FlareCIR_F",200,"true"},
			{"3Rnd_UGL_FlareRed_F",200,"true"},
			{"3Rnd_UGL_FlareWhite_F",200,"true"},
			{"3Rnd_UGL_FlareYellow_F",200,"true"},
			{"3Rnd_SmokeBlue_Grenade_shell",200,"true"},
			{"3Rnd_SmokeGreen_Grenade_shell",200,"true"},
			{"3Rnd_SmokeOrange_Grenade_shell",200,"true"},
			{"3Rnd_SmokePurple_Grenade_shell",200,"true"},
			{"3Rnd_SmokeRed_Grenade_shell",200,"true"},
			{"3Rnd_Smoke_Grenade_shell",200,"true"},
			{"3Rnd_SmokeYellow_Grenade_shell",200,"true"},
			{"3Rnd_HE_Grenade_shell",200,"true"},
			{"1Rnd_HE_Grenade_shell",200,"true"},
			{"30Rnd_545x39_Mag_Green_F",200,"true"},
			{"30Rnd_545x39_Mag_F",200,"true"},
			{"30Rnd_545x39_Mag_Tracer_Green_F",200,"true"},
			{"30Rnd_545x39_Mag_Tracer_F",200,"true"},
			{"6Rnd_GreenSignal_F",200,"true"},
			{"6Rnd_RedSignal_F",200,"true"},
			{"10Rnd_9x21_Mag",200,"true"},
			{"16Rnd_9x21_Mag",200,"true"},
			{"16Rnd_9x21_green_Mag",200,"true"},
			{"16Rnd_9x21_red_Mag",200,"true"},
			{"16Rnd_9x21_yellow_Mag",200,"true"},
			{"10Rnd_93x64_DMR_05_Mag",200,"true"},
			{"150Rnd_93x64_Mag",200,"true"}
		};
	};
	
	class Rockets
	{
	    displayName = "Rockets and Missiles";
		items[] =
		{
			{"Titan_AA",2000,"true"},
			{"Titan_AP",2000,"true"},
			{"Titan_AT",2000,"true"},
			{"NLAW_F",5000,"true"},
			{"RPG7_F",5000,"true"},
			{"RPG32_HE_F",5000,"true"},
			{"RPG32_F",5000,"true"},
		};
	};
	
	class Throwables
	{
	    displayName = "Throwables";
		items[] =
		{
			{"HandGrenade",100,"true"},
			{"MiniGrenade",100,"true"},
		    {"SmokeShell",0,"true"},
			{"SmokeShellRed",0,"true"},
			{"SmokeShellGreen",0,"true"},
			{"SmokeShellYellow",0,"true"},
			{"SmokeShellPurple",0,"true"},
			{"SmokeShellBlue",0,"true"},
			{"SmokeShellOrange",0,"true"},
			{"Chemlight_green",0,"true"},
			{"Chemlight_red",0,"true"},
			{"Chemlight_yellow",0,"true"},
			{"Chemlight_blue",0,"true"}
		};
	};
	
	class Explosives
	{
	    displayName = "Explosives";
		items[] =
		{
			{"APERSBoundingMine_Range_Mag",500,"true"},
			{"APERSMine_Range_Mag",500,"true"},
			{"APERSTripMine_Wire_Mag",500,"true"},
			{"ATMine_Range_Mag",500,"true"},
			{"ClaymoreDirectionalMine_Remote_Mag",500,"true"},
			{"DemoCharge_Remote_Mag",500,"true"},
			{"SatchelCharge_Remote_Mag",500,"true"},
			{"SLAMDirectionalMine_Wire_Mag",500,"true"},
			{"IEDLandBig_Remote_Mag",100000,"true"},
			{"IEDUrbanBig_Remote_Mag",100000,"true"},
			{"IEDLandSmall_Remote_Mag",100000,"true"},
			{"IEDUrbanSmall_Remote_Mag",100000,"true"}
		};
	};
	
	class Scopes
	{
	    displayName = "Weapon Optics";
		items[] =
		{
			// Standard Optics
			{"optic_Aco",300,"true"},
			{"optic_ACO_grn",300,"true"},
			{"optic_ACO_grn_smg",300,"true"},
			{"optic_Aco_smg",300,"true"},
			{"optic_Arco",300,"true"},
			{"optic_Arco_blk_F",300,"true"},
			{"optic_Arco_ghex_F",300,"true"},
			{"optic_ERCO_blk_F",300,"true"},
			{"optic_ERCO_khk_F",300,"true"},
			{"optic_ERCO_snd_F",300,"true"},
			{"optic_Hamr",300,"true"},
			{"optic_Hamr_khk_F",300,"true"},
			{"optic_Holosight",300,"true"},
			{"optic_Holosight_blk_F",300,"true"},
			{"optic_Holosight_khk_F",300,"true"},
			{"optic_Holosight_smg",300,"true"},
			{"optic_Holosight_smg_blk_F",300,"true"},
			{"optic_MRCO",300,"true"},
			{"optic_MRD",300,"true"},
			{"optic_Yorris",300,"true"},

			// Advanced Optics
			{"optic_AMS",500,"true"},
			{"optic_AMS_khk",500,"true"},
			{"optic_AMS_snd",500,"true"},
			{"optic_DMS",500,"true"},
			{"optic_DMS_ghex_F",500,"true"},
			{"optic_KHS_blk",500,"true"},
			{"optic_KHS_hex",500,"true"},
			{"optic_KHS_old",500,"true"},
			{"optic_KHS_tan",500,"true"},
			{"optic_LRPS",500,"true"},
			{"optic_LRPS_ghex_F",500,"true"},
			{"optic_LRPS_tna_F",500,"true"},
			{"optic_Nightstalker",500,"true"},
			{"optic_NVS",500,"true"},
			{"optic_SOS",500,"true"},
			{"optic_SOS_khk_F",500,"true"},
			{"optic_tws",500,"true"},
			{"optic_tws_mg",500,"true"}
		};
	};
	
	class Silencers
	{
	    displayName = "Weapon Silencers";
		items[] =
		{
			
			// Suppressors
			{"muzzle_snds_338_black",400,"true"},
			{"muzzle_snds_338_green",400,"true"},
			{"muzzle_snds_338_sand",400,"true"},
			{"muzzle_snds_58_blk_F",400,"true"},
			{"muzzle_snds_58_wdm_F",400,"true"},
			{"muzzle_snds_65_TI_blk_F",400,"true"},
			{"muzzle_snds_65_TI_ghex_F",400,"true"},
			{"muzzle_snds_65_TI_hex_F",400,"true"},
			{"muzzle_snds_93mmg",400,"true"},
			{"muzzle_snds_93mmg_tan",400,"true"},
			{"muzzle_snds_acp",400,"true"},
			{"muzzle_snds_B",400,"true"},
			{"muzzle_snds_B_khk_F",400,"true"},
			{"muzzle_snds_B_snd_F",400,"true"},
			{"muzzle_snds_H",400,"true"},
			{"muzzle_snds_H_khk_F",400,"true"},
			{"muzzle_snds_H_MG",400,"true"},
			{"muzzle_snds_H_MG_blk_F",400,"true"},
			{"muzzle_snds_H_MG_khk_F",400,"true"},
			{"muzzle_snds_H_snd_F",400,"true"},
			{"muzzle_snds_L",400,"true"},
			{"muzzle_snds_M",400,"true"},
			{"muzzle_snds_m_khk_F",400,"true"},
			{"muzzle_snds_m_snd_F",400,"true"}

		};
	};
	
	class Bipods
	{
	    displayName = "Weapon Bipods";
		items[] =
		{

			
			// Weapon Attachments
			{"bipod_01_F_blk",200,"true"},
			{"bipod_01_F_khk",200,"true"},
			{"bipod_01_F_mtp",200,"true"},
			{"bipod_01_F_snd",200,"true"},
			{"bipod_02_F_blk",200,"true"},
			{"bipod_02_F_hex",200,"true"},
			{"bipod_02_F_tan",200,"true"},
			{"bipod_03_F_blk",200,"true"},
			{"bipod_03_F_oli",200,"true"}
		};
	};
	
	class Lights
	{
	    displayName = "Weapon Lights";
		items[] =
		{

			
			// Weapon Attachments
			{"acc_flashlight",200,"true"},
			{"acc_pointer_IR",200,"true"}
			
		};
	};
	
};
