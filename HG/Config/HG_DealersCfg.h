/*
    Author - HoverGuy
    Website - https://northernimpulse.com
	
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
        {"O_APC_Tracked_02_cannon_F", 150000},
        {"O_APC_Tracked_02_AA_F", 150000},
        {"O_MBT_02_cannon_F", 200000},
        {"O_MBT_02_arty_F", 250000},
        {"O_APC_Wheeled_02_rcws_F", 150000},
        {"O_T_APC_Tracked_02_cannon_ghex_F", 75000},
        {"O_T_APC_Tracked_02_AA_ghex_F", 150000},
        {"O_T_APC_Wheeled_02_rcws_ghex_F", 75000},
        {"O_T_MBT_02_cannon_ghex_F", 225000},
        {"O_T_MBT_02_arty_ghex_F", 250000},

        // Car
        {"O_MRAP_02_F", 15000},
        {"O_MRAP_02_hmg_F", 37500},
        {"O_MRAP_02_gmg_F", 125000},
        {"O_G_Offroad_01_F", 3000},
        {"O_G_Offroad_01_armed_F", 5000},
        {"O_Quadbike_01_F", 37500},
        {"O_G_Quadbike_01_F", 37500},
        {"O_Truck_02_covered_F", 75000},
        {"O_Truck_02_transport_F", 75000},
        {"O_G_Van_01_transport_F", 37500},
        {"O_Truck_03_transport_F", 75000},
        {"O_Truck_03_covered_F", 75000},
        {"O_Truck_03_device_F", 75000},
        {"O_T_LSV_02_armed_F", 87500},
        {"O_T_LSV_02_armed_viper_F", 37500},
        {"O_T_LSV_02_unarmed_F", 75000},
        {"O_T_LSV_02_unarmed_viper_F", 37500},
        {"O_LSV_02_armed_F", 87500},
        {"O_LSV_02_armed_viper_F", 37500},
        {"O_LSV_02_unarmed_F", 75000},
        {"O_LSV_02_unarmed_viper_F", 37500},
        {"O_T_LSV_02_armed_black_F", 37500},
        {"O_T_LSV_02_armed_ghex_F", 37500},
        {"O_T_LSV_02_armed_arid_F", 37500},
        {"O_T_LSV_02_unarmed_black_F", 37500},
        {"O_T_LSV_02_unarmed_ghex_F", 37500},
        {"O_T_LSV_02_unarmed_arid_F", 37500},
        {"O_LSV_02_armed_black_F", 37500},
        {"O_LSV_02_armed_ghex_F", 37500},
        {"O_LSV_02_armed_arid_F", 37500},
        {"O_LSV_02_unarmed_black_F", 37500},
        {"O_LSV_02_unarmed_ghex_F", 37500},
        {"O_LSV_02_unarmed_arid_F", 37500},
        {"O_T_MRAP_02_ghex_F", 37500},
        {"O_T_MRAP_02_hmg_ghex_F", 37500},
        {"O_T_MRAP_02_gmg_ghex_F", 37500},
        {"O_T_Quadbike_01_ghex_F", 37500},
        {"O_T_Truck_03_transport_ghex_F", 125000},
        {"O_T_Truck_03_covered_ghex_F", 125000},
        {"O_T_Truck_03_device_ghex_F", 37500},

        // Boat
        {"O_Boat_Armed_01_hmg_F", 37500},
        {"O_Boat_Transport_01_F", 37500},
        {"O_Lifeboat", 37500},
        {"O_G_Boat_Transport_01_F", 37500},
        {"O_T_Boat_Armed_01_hmg_F", 37500},
        {"O_T_Boat_Transport_01_F", 37500},
        {"O_T_Lifeboat", 37500},
        {"O_G_Boat_Transport_02_F", 37500},
        {"O_SDV_01_F", 37500},

        // Support Trucks
        {"O_G_Offroad_01_repair_F", 25000},
        {"O_Truck_02_box_F", 75000},
        {"O_Truck_02_medical_F", 75000},
        {"O_Truck_02_Ammo_F", 75000},
        {"O_Truck_02_fuel_F", 75000},
        {"O_G_Van_01_fuel_F", 37500},
        {"O_Truck_03_repair_F", 75000},
        {"O_Truck_03_ammo_F", 75000},
        {"O_Truck_03_fuel_F", 75000},
        {"O_Truck_03_medical_F", 75000},
        {"Land_Pod_Heli_Transport_04_bench_F", 37500},
        {"Land_Pod_Heli_Transport_04_covered_F", 37500},
        {"Land_Pod_Heli_Transport_04_medevac_F", 37500},
        {"Land_Pod_Heli_Transport_04_bench_black_F", 37500},
        {"Land_Pod_Heli_Transport_04_covered_black_F", 37500},
        {"Land_Pod_Heli_Transport_04_medevac_black_F", 37500},
        {"O_T_Truck_03_repair_ghex_F", 137500},
        {"O_T_Truck_03_ammo_ghex_F", 137500},
        {"O_T_Truck_03_fuel_ghex_F", 137500},
        {"O_T_Truck_03_medical_ghex_F", 137500},
		
		 // Autonomous
        {"O_UAV_01_F", 5000},
        {"O_UAV_02_F", 5000},
        {"O_UAV_02_CAS_F", 75000},
        {"O_UGV_01_F", 5000},
        {"O_UGV_01_rcws_F", 37500},
        {"O_T_UGV_01_ghex_F", 5000},
        {"O_T_UGV_01_rcws_ghex_F", 37500},
        {"O_T_UAV_04_CAS_F", 100000}
    };
};