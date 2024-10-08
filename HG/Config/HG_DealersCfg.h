/*
    Author - HoverGuy
    GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
	
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
        // Armored
        {"O_APC_Tracked_02_cannon_F", 220000}, // Half of 440000
        {"O_APC_Tracked_02_AA_F", 220000}, // Half of 440000
        {"O_MBT_02_cannon_F", 287500}, // Half of 575000
        {"O_MBT_02_arty_F", 300000}, // Half of 600000
        {"O_APC_Wheeled_02_rcws_F", 210000}, // Half of 420000
        {"O_T_APC_Tracked_02_cannon_ghex_F", 225000}, // Half of 450000
        {"O_T_APC_Tracked_02_AA_ghex_F", 225000}, // Half of 450000
        {"O_T_APC_Wheeled_02_rcws_ghex_F", 215000}, // Half of 430000
        {"O_T_MBT_02_cannon_ghex_F", 290000}, // Half of 580000
        {"O_T_MBT_02_arty_ghex_F", 305000}, // Half of 610000

        // Car
        {"O_MRAP_02_F", 95000}, // Half of 190000
        {"O_MRAP_02_hmg_F", 112500}, // Half of 225000
        {"O_MRAP_02_gmg_F", 125000}, // Half of 250000
        {"O_G_Offroad_01_F", 10000}, // Half of 20000
        {"O_G_Offroad_01_armed_F", 10000}, // Half of 20000
        {"O_Quadbike_01_F", 2500}, // Half of 5000
        {"O_G_Quadbike_01_F", 2500}, // Half of 5000
        {"O_Truck_02_covered_F", 62500}, // Half of 125000
        {"O_Truck_02_transport_F", 60000}, // Half of 120000
        {"O_G_Van_01_transport_F", 7500}, // Half of 15000
        {"O_Truck_03_transport_F", 62500}, // Half of 125000
        {"O_Truck_03_covered_F", 62500}, // Half of 125000
        {"O_Truck_03_device_F", 70000}, // Half of 140000
        {"O_T_LSV_02_armed_F", 87500}, // Half of 175000
        {"O_T_LSV_02_armed_viper_F", 90000}, // Half of 180000
        {"O_T_LSV_02_unarmed_F", 75000}, // Half of 150000
        {"O_T_LSV_02_unarmed_viper_F", 77500}, // Half of 155000
        {"O_LSV_02_armed_F", 87500}, // Half of 175000
        {"O_LSV_02_armed_viper_F", 90000}, // Half of 180000
        {"O_LSV_02_unarmed_F", 75000}, // Half of 150000
        {"O_LSV_02_unarmed_viper_F", 77500}, // Half of 155000
        {"O_T_LSV_02_armed_black_F", 92500}, // Half of 185000
        {"O_T_LSV_02_armed_ghex_F", 92500}, // Half of 185000
        {"O_T_LSV_02_armed_arid_F", 92500}, // Half of 185000
        {"O_T_LSV_02_unarmed_black_F", 80000}, // Half of 160000
        {"O_T_LSV_02_unarmed_ghex_F", 80000}, // Half of 160000
        {"O_T_LSV_02_unarmed_arid_F", 80000}, // Half of 160000
        {"O_LSV_02_armed_black_F", 92500}, // Half of 185000
        {"O_LSV_02_armed_ghex_F", 92500}, // Half of 185000
        {"O_LSV_02_armed_arid_F", 92500}, // Half of 185000
        {"O_LSV_02_unarmed_black_F", 80000}, // Half of 160000
        {"O_LSV_02_unarmed_ghex_F", 80000}, // Half of 160000
        {"O_LSV_02_unarmed_arid_F", 80000}, // Half of 160000
        {"O_T_MRAP_02_ghex_F", 97500}, // Half of 195000
        {"O_T_MRAP_02_hmg_ghex_F", 115000}, // Half of 230000
        {"O_T_MRAP_02_gmg_ghex_F", 127500}, // Half of 255000
        {"O_T_Quadbike_01_ghex_F", 2500}, // Half of 5000
        {"O_T_Truck_03_transport_ghex_F", 62500}, // Half of 125000
        {"O_T_Truck_03_covered_ghex_F", 62500}, // Half of 125000
        {"O_T_Truck_03_device_ghex_F", 70000}, // Half of 140000

        // Boat
        {"O_Boat_Armed_01_hmg_F", 40000}, // Half of 80000
        {"O_Boat_Transport_01_F", 10000}, // Half of 20000
        {"O_Lifeboat", 5000}, // Half of 10000
        {"O_G_Boat_Transport_01_F", 10000}, // Half of 20000
        {"O_T_Boat_Armed_01_hmg_F", 42500}, // Half of 85000
        {"O_T_Boat_Transport_01_F", 11000}, // Half of 22000
        {"O_T_Lifeboat", 6000}, // Half of 12000
        {"O_G_Boat_Transport_02_F", 15000}, // Half of 30000
        {"O_SDV_01_F", 45000}, // Half of 90000

        // Support Trucks
        {"O_G_Offroad_01_repair_F", 17500}, // Half of 35000
        {"O_Truck_02_box_F", 37500}, // Half of 75000
        {"O_Truck_02_medical_F", 75000}, // Half of 150000
        {"O_Truck_02_Ammo_F", 87500}, // Half of 175000
        {"O_Truck_02_fuel_F", 75000}, // Half of 150000
        {"O_G_Van_01_fuel_F", 12500}, // Half of 25000
        {"O_Truck_03_repair_F", 75000}, // Half of 150000
        {"O_Truck_03_ammo_F", 87500}, // Half of 175000
        {"O_Truck_03_fuel_F", 75000}, // Half of 150000
        {"O_Truck_03_medical_F", 75000}, // Half of 150000
        {"Land_Pod_Heli_Transport_04_bench_F", 12500}, // Half of 25000
        {"Land_Pod_Heli_Transport_04_covered_F", 15000}, // Half of 30000
        {"Land_Pod_Heli_Transport_04_medevac_F", 20000}, // Half of 40000
        {"Land_Pod_Heli_Transport_04_bench_black_F", 13500}, // Half of 27000
        {"Land_Pod_Heli_Transport_04_covered_black_F", 16000}, // Half of 32000
        {"Land_Pod_Heli_Transport_04_medevac_black_F", 21000}, // Half of 42000

        // Helicopters
        {"O_Heli_Light_02_dynamicLoadout_F", 225000}, // Half of 450000
        {"O_Heli_Transport_04_bench_F", 150000}, // Half of 300000
        {"O_Heli_Transport_04_covered_F", 160000}, // Half of 320000
        {"O_Heli_Transport_04_armed_F", 275000}, // Half of 550000
        {"O_Heli_Transport_04_medevac_F", 170000}, // Half of 340000
        {"O_Heli_Attack_02_F", 475000}, // Half of 950000
        {"O_Heli_Attack_02_black_F", 480000}, // Half of 960000
        {"O_Heli_Light_02_unarmed_F", 200000}, // Half of 400000
        {"O_Heli_Light_02_viper_F", 210000}, // Half of 420000
        {"O_T_Heli_Attack_02_ghex_F", 480000}, // Half of 960000
        {"O_T_Heli_Light_02_dynamicLoadout_ghex_F", 230000}, // Half of 460000
        {"O_T_Heli_Light_02_unarmed_ghex_F", 205000}, // Half of 410000

        // Planes
        {"O_Plane_CAS_02_dynamicLoadout_F", 500000}, // Half of 1000000
        {"O_Plane_Transport_01_F", 450000}, // Half of 900000
        {"O_T_Plane_CAS_02_dynamicLoadout_ghex_F", 510000}, // Half of 1020000

        // Drones & Autonomous
        {"O_UAV_01_F", 2500}, // Half of 5000
        {"O_UAV_02_F", 37500}, // Half of 75000
        {"O_UAV_02_CAS_F", 50000}, // Half of 100000
        {"O_UGV_01_F", 5000}, // Half of 10000
        {"O_UGV_01_rcws_F", 25000}, // Half of 50000
        {"O_T_UGV_01_ghex_F", 5500}, // Half of 11000
        {"O_T_UGV_01_rcws_ghex_F", 26000}, // Half of 52000
        {"O_T_UAV_04_CAS_F", 52500} // Half of 105000
    };
};
