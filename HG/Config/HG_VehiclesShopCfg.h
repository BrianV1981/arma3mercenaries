/*
    Author - HoverGuy
    GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
	
    Defines available vehicle shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the shop
		
		class YourShopCategory - Shop category, can be whatever you want
		{
			displayName - STRING - Category display name
			vehicles - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
			|- 2 - STRING - Condition that must return either true or false, if true the vehicle appears in the list else no
			spawnPoints - ARRAY OF ARRAYS - Spawn positions (markers/positions)
			|- 0 - STRING - Display name in the dialog
			|- 1 - ARRAY OF MIXED - Markers/positions
		};
	};
*/

class HG_DefaultShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
    conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
    class Civilian
	{
	    displayName = "$STR_HG_SHOP_CIVILIAN";
		vehicles[] =
		{
			// Helicopters
		    {"I_C_Heli_Light_01_civil_F",80000,"true"},
			
			// Fixed Wing
		    {"I_C_Plane_Civil_01_F",100000,"true"},
			
			// Ground Vehicles
			{"I_C_Offroad_02_unarmed_F",20000,"true"},
			{"I_C_Offroad_02_unarmed_brown_F",20000,"true"},
			{"I_C_Offroad_02_unarmed_olive_F",20000,"true"},
			{"I_C_Van_01_transport_F",25000,"true"},
			{"I_C_Van_01_transport_brown_F",25000,"true"},
			{"I_C_Van_01_transport_olive_F",25000,"true"},
			
			// Boats
			{"I_C_Boat_Transport_01_F",10000,"true"},
			{"I_C_Boat_Transport_02_F",12000,"true"}
		};
	    spawnPoints[] =
		{
			{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
		};
	};
	
	class Military
	{
	    displayName = "$STR_HG_SHOP_MILITARY";
		vehicles[] =
		{	
			//Statics Weapons
			{"B_HMG_01_F",25000,"true"},
			{"B_HMG_01_high_F",26000,"true"},
			{"B_HMG_01_A_F",27000,"true"},
			{"B_GMG_01_F",30000,"true"},
			{"B_GMG_01_high_F",31000,"true"},
			{"B_GMG_01_A_F",32000,"true"},
			{"B_Mortar_01_F",28000,"true"},
			{"B_G_Mortar_01_F",29000,"true"},
			{"B_static_AA_F",35000,"true"},
			{"B_static_AT_F",34000,"true"},
			{"B_Static_Designator_01_F",20000,"true"},
			{"B_T_Static_AA_F",36000,"true"},
			{"B_T_Static_AT_F",35000,"true"},
			{"B_T_GMG_01_F",32000,"true"},
			{"B_T_HMG_01_F",31000,"true"},
			{"B_T_Mortar_01_F",30000,"true"},
			
			// Helicopters
			{"O_Heli_Light_02_F",85000,"true"},
		    {"O_Heli_Light_02_unarmed_F",75000,"true"},
		    {"O_Heli_Light_02_v2_F",85000,"true"},
		    {"O_Heli_Attack_02_F",150000,"true"},
		    {"O_Heli_Attack_02_black_F",155000,"true"},
		    {"O_Heli_Transport_04_F",120000,"true"},
		    {"O_Heli_Transport_04_ammo_F",125000,"true"},
		    {"O_Heli_Transport_04_bench_F",115000,"true"},
		    {"O_Heli_Transport_04_box_F",130000,"true"},
		    {"O_Heli_Transport_04_covered_F",135000,"true"},
		    {"O_Heli_Transport_04_fuel_F",125000,"true"},
		    {"O_Heli_Transport_04_medevac_F",130000,"true"},
		    {"O_Heli_Transport_04_repair_F",125000,"true"},
		    {"O_Heli_Transport_04_black_F",130000,"true"},
		    {"O_Heli_Transport_04_ammo_black_F",135000,"true"},
		    {"O_Heli_Transport_04_bench_black_F",120000,"true"},
		    {"O_Heli_Transport_04_box_black_F",140000,"true"},
		    {"O_Heli_Transport_04_covered_black_F",145000,"true"},
		    {"O_Heli_Transport_04_fuel_black_F",135000,"true"},
		    {"O_Heli_Transport_04_medevac_black_F",140000,"true"},
		    {"O_Heli_Transport_04_repair_black_F",135000,"true"},
		    {"B_Heli_Light_01_F",85000,"true"},
		    {"B_Heli_Light_01_armed_F",95000,"true"},
		    {"B_Heli_Light_01_stripped_F",80000,"true"},
		    {"B_Heli_Attack_01_F",150000,"true"},
		    {"B_Heli_Transport_01_F",120000,"true"},
		    {"B_Heli_Transport_01_camo_F",125000,"true"},
		    {"B_Heli_Transport_03_F",130000,"true"},
		    {"B_Heli_Transport_03_unarmed_F",120000,"true"},
		    {"B_Heli_Transport_03_black_F",125000,"true"},
		    {"B_Heli_Transport_03_unarmed_green_F",120000,"true"},
		    {"B_CTRG_Heli_Transport_01_sand_F",110000,"true"},
		    {"B_CTRG_Heli_Transport_01_tropic_F",110000,"true"},
		    {"I_Heli_Transport_02_F",120000,"true"},
		    {"I_Heli_light_03_F",90000,"true"},
		    {"I_Heli_light_03_unarmed_F",85000,"true"},

			// Fixed Wing
		    {"O_Plane_CAS_02_F",200000,"true"},
		    {"O_Plane_Fighter_02_F",300000,"true"},
		    {"O_Plane_Fighter_02_Stealth_F",320000,"true"},
		    {"B_Plane_CAS_01_F",200000,"true"},
		    {"B_Plane_Fighter_01_F",300000,"true"},
		    {"B_Plane_Fighter_01_Stealth_F",320000,"true"},
		    {"I_Plane_Fighter_03_CAS_F",300000,"true"},
		    {"I_Plane_Fighter_03_AA_F",320000,"true"},
		    {"I_Plane_Fighter_04_F",300000,"true"},
		    {"O_T_VTOL_02_infantry_F",250000,"true"},
		    {"O_T_VTOL_02_vehicle_F",240000,"true"},
		    {"O_T_VTOL_02_infantry_hex_F",250000,"true"},
		    {"O_T_VTOL_02_infantry_ghex_F",250000,"true"},
		    {"O_T_VTOL_02_infantry_grey_F",260000,"true"},
		    {"O_T_VTOL_02_vehicle_hex_F",240000,"true"},
		    {"O_T_VTOL_02_vehicle_ghex_F",240000,"true"},
		    {"O_T_VTOL_02_vehicle_grey_F",250000,"true"},
		    {"B_T_VTOL_01_infantry_F",250000,"true"},
		    {"B_T_VTOL_01_vehicle_F",240000,"true"},
		    {"B_T_VTOL_01_armed_F",270000,"true"},
		    {"B_T_VTOL_01_infantry_blue_F",250000,"true"},
		    {"B_T_VTOL_01_infantry_olive_F",250000,"true"},
		    {"B_T_VTOL_01_armed_blue_F",280000,"true"},
		    {"B_T_VTOL_01_armed_olive_F",280000,"true"},

			// Tanks
			{"O_MBT_02_cannon_F",400000,"true"},
		    {"O_MBT_02_arty_F",450000,"true"},
		    {"B_MBT_01_cannon_F",400000,"true"},
		    {"B_MBT_01_arty_F",450000,"true"},
		    {"B_MBT_01_mlrs_F",480000,"true"},
		    {"B_MBT_01_TUSK_F",420000,"true"},
		    {"B_T_MBT_01_cannon_F",410000,"true"},
		    {"B_T_MBT_01_arty_F",460000,"true"},
		    {"B_T_MBT_01_mlrs_F",490000,"true"},
		    {"B_T_MBT_01_TUSK_F",430000,"true"},
		    {"I_MBT_03_cannon_F",400000,"true"},

			// APCs
			{"O_APC_Tracked_02_cannon_F",200000,"true"},
		    {"O_APC_Tracked_02_AA_F",210000,"true"},
		    {"O_APC_Wheeled_02_rcws_F",180000,"true"},
		    {"O_T_APC_Tracked_02_cannon_ghex_F",210000,"true"},
		    {"O_T_APC_Tracked_02_AA_ghex_F",220000,"true"},
		    {"O_T_APC_Wheeled_02_rcws_ghex_F",190000,"true"},
		    {"B_APC_Tracked_01_rcws_F",200000,"true"},
		    {"B_APC_Tracked_01_AA_F",210000,"true"},
		    {"B_APC_Wheeled_01_cannon_F",180000,"true"},
		    {"B_T_APC_Tracked_01_AA_F",220000,"true"},
		    {"B_T_APC_Tracked_01_rcws_F",210000,"true"},
		    {"B_T_APC_Wheeled_01_cannon_F",190000,"true"},
		    {"I_APC_tracked_03_cannon_F",200000,"true"},
		    {"I_APC_Wheeled_03_cannon_F",180000,"true"},
			{"B_APC_Tracked_01_CRV_F",200000,"true"},
		    {"B_T_APC_Tracked_01_CRV_F",210000,"true"},

			// UAVs/UGVs
		    {"O_UAV_01_F",50000,"true"},
		    {"O_UAV_02_F",75000,"true"},
		    {"O_UAV_02_CAS_F",85000,"true"},
		    {"O_UGV_01_F",45000,"true"},
		    {"O_UGV_01_rcws_F",50000,"true"},
		    {"O_T_UGV_01_ghex_F",48000,"true"},
		    {"O_T_UGV_01_rcws_ghex_F",52000,"true"},
		    {"O_T_UAV_04_CAS_F",90000,"true"},
		    {"B_UAV_01_F",50000,"true"},
		    {"B_UAV_02_F",75000,"true"},
		    {"B_UAV_02_CAS_F",85000,"true"},
		    {"B_UGV_01_F",45000,"true"},
		    {"B_UGV_01_rcws_F",50000,"true"},
		    {"B_T_UAV_03_F",70000,"true"},
		    {"I_UAV_01_F",50000,"true"},
		    {"I_UAV_02_F",75000,"true"},
		    {"I_UAV_02_CAS_F",85000,"true"},
		    {"I_UGV_01_F",45000,"true"},
		    {"I_UGV_01_rcws_F",50000,"true"},

			// Ground Vehicles (MRAPs, Offroads, Trucks)
		    {"O_MRAP_02_F",100000,"true"},
		    {"O_MRAP_02_hmg_F",110000,"true"},
		    {"O_MRAP_02_gmg_F",115000,"true"},
		    {"O_G_Offroad_01_F",20000,"true"},
		    {"O_G_Offroad_01_armed_F",30000,"true"},
		    {"O_Quadbike_01_F",10000,"true"},
		    {"O_G_Quadbike_01_F",10000,"true"},
		    {"O_Truck_02_covered_F",50000,"true"},
		    {"O_Truck_02_transport_F",40000,"true"},
		    {"O_G_Van_01_transport_F",25000,"true"},
		    {"O_Truck_03_transport_F",60000,"true"},
		    {"O_Truck_03_covered_F",65000,"true"},
		    {"O_Truck_03_device_F",70000,"true"},
		    {"O_T_LSV_02_armed_F",120000,"true"},
		    {"O_T_LSV_02_armed_viper_F",125000,"true"},
		    {"O_T_LSV_02_unarmed_F",100000,"true"},
		    {"O_T_LSV_02_unarmed_viper_F",105000,"true"},
		    {"O_LSV_02_armed_F",120000,"true"},
		    {"O_LSV_02_armed_viper_F",125000,"true"},
		    {"O_LSV_02_unarmed_F",100000,"true"},
		    {"O_LSV_02_unarmed_viper_F",105000,"true"},
		    {"O_T_LSV_02_armed_black_F",125000,"true"},
		    {"O_T_LSV_02_armed_ghex_F",130000,"true"},
		    {"O_T_LSV_02_armed_arid_F",135000,"true"},
		    {"O_T_LSV_02_unarmed_black_F",105000,"true"},
		    {"O_T_LSV_02_unarmed_ghex_F",110000,"true"},
		    {"O_T_LSV_02_unarmed_arid_F",115000,"true"},
		    {"B_MRAP_01_F",100000,"true"},
		    {"B_MRAP_01_gmg_F",115000,"true"},
		    {"B_MRAP_01_hmg_F",110000,"true"},
		    {"B_G_Offroad_01_F",20000,"true"},
		    {"B_G_Offroad_01_armed_F",30000,"true"},
		    {"B_Quadbike_01_F",10000,"true"},
		    {"B_G_Quadbike_01_F",10000,"true"},
		    {"B_Truck_01_transport_F",50000,"true"},
		    {"B_Truck_01_covered_F",55000,"true"},
		    {"B_Truck_01_mover_F",40000,"true"},
		    {"B_Truck_01_box_F",60000,"true"},
		    {"B_G_Van_01_transport_F",25000,"true"},
		    {"B_T_LSV_01_armed_F",120000,"true"},
		    {"B_T_LSV_01_armed_CTRG_F",125000,"true"},
		    {"B_T_LSV_01_unarmed_F",100000,"true"},
		    {"B_T_LSV_01_unarmed_CTRG_F",105000,"true"},
		    {"B_LSV_01_armed_F",120000,"true"},
		    {"B_LSV_01_unarmed_F",100000,"true"},
		    {"B_CTRG_LSV_01_light_F",105000,"true"},
		    {"B_LSV_01_armed_black_F",125000,"true"},
		    {"B_LSV_01_armed_olive_F",130000,"true"},
		    {"B_LSV_01_armed_sand_F",135000,"true"},
		    {"B_LSV_01_unarmed_black_F",105000,"true"},
		    {"B_LSV_01_unarmed_olive_F",110000,"true"},
		    {"B_LSV_01_unarmed_sand_F",115000,"true"},
		    {"B_T_LSV_01_armed_black_F",130000,"true"},
		    {"B_T_LSV_01_armed_olive_F",135000,"true"},
		    {"B_T_LSV_01_armed_sand_F",140000,"true"},
		    {"B_T_LSV_01_unarmed_black_F",110000,"true"},
		    {"B_T_LSV_01_unarmed_olive_F",115000,"true"},
		    {"B_T_LSV_01_unarmed_sand_F",120000,"true"},
		    {"B_GEN_Offroad_01_gen_F",20000,"true"},
		    {"I_MRAP_03_F",100000,"true"},
		    {"I_MRAP_03_hmg_F",110000,"true"},
		    {"I_MRAP_03_gmg_F",115000,"true"},
		    {"I_G_Offroad_01_F",20000,"true"},
		    {"I_G_Offroad_01_armed_F",30000,"true"},
		    {"I_Quadbike_01_F",10000,"true"},
		    {"I_G_Quadbike_01_F",10000,"true"},
		    {"I_Truck_02_covered_F",50000,"true"},
		    {"I_Truck_02_transport_F",40000,"true"},
		    {"I_G_Van_01_transport_F",25000,"true"},

			// Boats
		    {"O_Boat_Armed_01_hmg_F",60000,"true"},
		    {"O_Boat_Transport_01_F",15000,"true"},
		    {"O_Lifeboat",10000,"true"},
		    {"O_G_Boat_Transport_01_F",16000,"true"},
		    {"O_T_Boat_Armed_01_hmg_F",62000,"true"},
		    {"O_T_Boat_Transport_01_F",15000,"true"},
		    {"O_T_Lifeboat",10000,"true"},
		    {"O_G_Boat_Transport_02_F",18000,"true"},
		    {"O_SDV_01_F",70000,"true"},
		    {"B_Boat_Armed_01_minigun_F",60000,"true"},
		    {"B_Boat_Transport_01_F",15000,"true"},
		    {"B_Lifeboat",10000,"true"},
		    {"B_G_Boat_Transport_01_F",16000,"true"},
		    {"B_T_Boat_Armed_01_minigun_F",62000,"true"},
		    {"B_T_Boat_Transport_01_F",15000,"true"},
		    {"B_T_Lifeboat",10000,"true"},
		    {"B_G_Boat_Transport_02_F",18000,"true"},
		    {"B_SDV_01_F",70000,"true"},
		    {"I_Boat_Armed_01_minigun_F",60000,"true"},
		    {"I_Boat_Transport_01_F",15000,"true"},
		    {"I_G_Boat_Transport_01_F",16000,"true"},
		    {"I_C_Boat_Transport_01_F",15000,"true"},
		    {"I_G_Boat_Transport_02_F",18000,"true"},
		    {"I_C_Boat_Transport_02_F",18000,"true"},
		    {"I_SDV_01_F",70000,"true"},

			// Support Vehicles
		    {"O_G_Offroad_01_repair_F",40000,"true"},
		    {"O_Truck_02_box_F",60000,"true"},
		    {"O_Truck_02_medical_F",55000,"true"},
		    {"O_Truck_02_Ammo_F",50000,"true"},
		    {"O_Truck_02_fuel_F",50000,"true"},
		    {"O_G_Van_01_fuel_F",30000,"true"},
		    {"O_Truck_03_repair_F",65000,"true"},
		    {"O_Truck_03_ammo_F",60000,"true"},
		    {"O_Truck_03_fuel_F",60000,"true"},
		    {"O_Truck_03_medical_F",55000,"true"},
		    {"Land_Pod_Heli_Transport_04_bench_F",70000,"true"},
		    {"Land_Pod_Heli_Transport_04_covered_F",75000,"true"},
		    {"Land_Pod_Heli_Transport_04_medevac_F",80000,"true"},
		    {"Land_Pod_Heli_Transport_04_bench_black_F",75000,"true"},
		    {"Land_Pod_Heli_Transport_04_covered_black_F",80000,"true"},
		    {"Land_Pod_Heli_Transport_04_medevac_black_F",85000,"true"},
		    {"O_T_Truck_03_repair_ghex_F",70000,"true"},
		    {"O_T_Truck_03_ammo_ghex_F",65000,"true"},
		    {"O_T_Truck_03_fuel_ghex_F",65000,"true"},
		    {"O_T_Truck_03_medical_ghex_F",60000,"true"},
		    {"B_APC_Tracked_01_CRV_F",200000,"true"},
		    {"B_Truck_01_Repair_F",65000,"true"},
		    {"B_Truck_01_ammo_F",60000,"true"},
		    {"B_Truck_01_fuel_F",60000,"true"},
		    {"B_Truck_01_medical_F",55000,"true"},
		    {"B_G_Van_01_fuel_F",30000,"true"},
		    {"B_T_Truck_01_mover_F",40000,"true"},
		    {"B_T_Truck_01_box_F",60000,"true"},
		    {"B_T_Truck_01_transport_F",50000,"true"},
		    {"B_T_Truck_01_covered_F",55000,"true"},
		    {"B_T_Truck_01_ammo_F",65000,"true"},
		    {"B_T_Truck_01_fuel_F",65000,"true"},
		    {"B_T_Truck_01_medical_F",60000,"true"},
		    {"B_T_Truck_01_Repair_F",70000,"true"},
		    {"B_T_APC_Tracked_01_CRV_F",210000,"true"},
		    {"I_G_Offroad_01_repair_F",40000,"true"},
		    {"I_Truck_02_ammo_F",60000,"true"},
		    {"I_Truck_02_box_F",60000,"true"},
		    {"I_Truck_02_medical_F",55000,"true"},
		    {"I_Truck_02_fuel_F",50000,"true"},
		    {"I_G_Van_01_fuel_F",30000,"true"}
		};
		spawnPoints[] =
		{
			{"$STR_HG_MARKER_2",{"military_vehicles_spawn_1"}}
		};
	};
};
