/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
	
    Defines available traders
	
	class YourDealerClass - Used as a param for the call, basically the dealer you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the dealer
		
		interestedIn - ARRAY OF ARRAYS - Vehicles that the dealer is interested in buying
		|- 0 - STRING - Vehicle classname
		|- 1 - INTEGER - Vehicle sell price
	};
*/

class HG_DefaultDealer // HG_DefaultDealer is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	interestedIn[] = 
	{
		{"C_Truck_02_box_F",75000},
		{"C_Truck_02_fuel_F",75000},
		{"C_Truck_02_transport_F",75000},
		{"C_Truck_02_covered_F",75000},
		{"C_Offroad_01_repair_F",25000},
		{"C_Van_02_medevac_F",25000},
		{"C_Van_02_service_F",25000},
		{"O_Heli_Light_02_dynamicLoadout_F",150000},
		{"O_Heli_Light_02_unarmed_F",100000},
		{"O_Heli_Attack_02_dynamicLoadout_F",287500},
		{"O_APC_Tracked_02_cannon_F",220000},
		{"O_APC_Tracked_02_AA_F",220000},
		{"O_MBT_02_cannon_F",287500},
		{"O_MBT_02_arty_F",350000},
		{"O_MRAP_02_F",85000},
		{"O_MRAP_02_hmg_F",112500},
		{"O_MRAP_02_gmg_F",125000},
		{"O_G_Offroad_01_repair_F",25000},
		{"O_G_Offroad_01_armed_F",5000},
		{"O_G_Offroad_01_AT_F",10000},
		{"O_Truck_02_covered_F",75000},
		{"O_Truck_02_transport_F",75000},
		{"O_Truck_02_box_F",75000},
		{"O_Truck_02_medical_F",75000},
		{"O_Truck_02_Ammo_F",75000},
		{"O_Truck_02_fuel_F",75000},
		{"O_Plane_CAS_02_dynamicLoadout_F",325000},
		{"O_Plane_Fighter_02_F",325000},
		{"O_Plane_Fighter_02_Stealth_F",350000},
		{"O_APC_Wheeled_02_rcws_v2_F",210000},
		{"O_Truck_03_transport_F",75000},
		{"O_Truck_03_covered_F",75000},
		{"O_Truck_03_repair_F",75000},
		{"O_Truck_03_ammo_F",75000},
		{"O_Truck_03_fuel_F",75000},
		{"O_Truck_03_medical_F",75000},
		{"O_Truck_03_device_F",75000},
		{"O_Heli_Transport_04_F",175000},
		{"O_Heli_Transport_04_ammo_F",175000},
		{"O_Heli_Transport_04_bench_F",175000},
		{"O_Heli_Transport_04_box_F",175000},
		{"O_Heli_Transport_04_covered_F",175000},
		{"O_Heli_Transport_04_fuel_F",175000},
		{"O_Heli_Transport_04_medevac_F",175000},
		{"O_Heli_Transport_04_repair_F",175000},
		{"O_LSV_02_unarmed_F",75000},
		{"O_LSV_02_AT_F",87500},
		{"O_LSV_02_armed_F",87500},
		{"O_MBT_04_cannon_F",312500},
		{"O_MBT_04_command_F",337500},
		{"O_Radar_System_02_F",250000},
		{"O_SAM_System_04_F",500000},
		{"O_G_Offroad_01_F",3000},
		{"O_G_Offroad_01_AT_F",3000}
	};
};
