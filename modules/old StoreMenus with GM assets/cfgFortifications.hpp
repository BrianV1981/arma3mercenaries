/////////https://github.com/gruppe-adler/grad-fortifications/wiki/Configuration///////////
class CfgGradFortifications {
	boundingBoxSizeFactor = 1; //Number - Global size factor of bounding box - smaller means collision detection is less strict
    buildTimeFactor = 1; //Number - Higher means building takes longer.
	demolishTimeFactor = 1; //Number - Higher means demolitions take longer.
	packUpTimeFactor = 1; //Number - Higher means packing up takes longer.
	playerInventorySize = 30; //Number - Size of the virtual inventory of units.
	vehicleInventorySizeFactor = 1; //Number - Size factor for vehicle inventories.
	canDemolishDefault = 1; //(1/0) - Can anyone demolish fortifications by default?
    canPackUpDefault = 1; // (1/0) - Can fortification owners pack up fortifications by default?
    canStoreInLandVehicles = 1; // (1/0) - Can fortifications be stored in land vehicles?
    canStoreInShips = 1; //(1/0) - Can fortifications be stored in ships?
    canStoreInHelicopters = 1; //(1/0) - Can fortifications be stored in helicopters?
    canStoreInPlanes = 1; //(1/0) - Can fortifications be stored in planes?
    canStoreInContainers = 1; //(1/0) - Can fortifications be stored in containers (anything with an inventory that's not one of the above)?
	fortificationOwnerType = "SIDE"; //String - Who owns a fortification? Owner demolishes more quickly and can pack up the fortification. ("BUILDER"/"GROUP"/"SIDE")
	onPlaceStart = ""; //String - Code that is executed when unit starts placement. Local to unit. Passed: [unit,fort class name,local fort object]
	onPlaceCancel = ""; //String - Code that is executed when unit cancels placement. Local to unit. Passed: [unit,fort class name,local fort object]
	onBuildStart = ""; //String - Code that is executed when unit starts building. Local to unit. Passed: [unit,fort class name,local fort object]
    onBuildComplete = ""; //String - Code that is executed when unit completes building and server spawns the actual object. Local to server. Passed: [unit,fort object]
	
    class Fortifications {
		
		class ACE_TacticalLadder {
            buildTime = 1;
			packUpTime = 1;
			demolitionTime = 10;
        };
		class Land_Pod_Heli_Transport_04_medevac_F {
            canPackUp = 0;
        };
		class Land_Pod_Heli_Transport_04_repair_F {
            canPackUp = 0;
        };
		class Land_RepairDepot_01_green_F {
            canPackUp = 0;
        };
		class Land_PaperBox_01_small_closed_brown_IDAP_F {
            canPackUp = 0;
        };
		class C_IDAP_supplyCrate_F {
            canPackUp = 0;
        };
		class ACE_Box_Ammo {
            canPackUp = 0;
        };
		class ACE_Box_Misc {
            canPackUp = 0;
        };
		class Box_Syndicate_WpsLaunch_F {
            canPackUp = 0;
        };
		class Box_Syndicate_Ammo_F {
            canPackUp = 0;
        };
		class Box_Syndicate_Wps_F {
            canPackUp = 0;
        };
		class ACE_medicalSupplyCrate {
            canPackUp = 0;
        };
		class ACE_Box_Chemlights {
            canPackUp = 0;
        };
		class VirtualReammoBox_F {
            canPackUp = 0;
        };
		class VirtualReammoBox_camonet_F {
            canPackUp = 0;
        };
		class Land_WoodenCrate_01_F {
            canPackUp = 0;
        };
		class VirtualReammoBox_Small_F {
            canPackUp = 0;
        };
        class Land_BarrelWater_F {
            canPackUp = 0;
        };

        class Land_StallWater_F {
            canPackUp = 0;
        };
		
		class StorageBladder_02_water_forest_F {
            canPackUp = 0;
        };
		
		class WaterPump_01_forest_F {
            canPackUp = 0;
        };
		
		class Land_CanisterFuel_F {
            canPackUp = 0;
        };
		
		class FlexibleTank_01_sand_F {
            canPackUp = 0;
        };
		
		class StorageBladder_01_fuel_sand_F {
            canPackUp = 0;
        };
		
		class Box_NATO_Wps_F {
            canPackUp = 0;
        };
		
		class Box_NATO_WpsSpecial_F {
            canPackUp = 0;
        };
		
		class Box_NATO_Ammo_F {
            canPackUp = 0;
        };
		
		class Box_NATO_Grenades {
            canPackUp = 0;
        };
		
		class Box_NATO_WpsLaunch_F {
            canPackUp = 0;
        };
		
		class Box_NATO_Support_F {
            canPackUp = 0;
        };
		
		class Box_NATO_AmmoVeh_F {
            canPackUp = 0;
        };
		
		class B_supplyCrate_F {
            canPackUp = 0;
        };
		
		class Box_Ammo_F {
            canPackUp = 0;
        };
		
		class Box_Wps_F {
            canPackUp = 0;
        };
		
		class Box_NATO_Equip_F {
            canPackUp = 0;
        };
		
		class Box_NATO_Uniforms_F {
            canPackUp = 0;
        };
		
		class Box_IED_Exp_F {
            canPackUp = 0;
        };
		
		class Land_PaperBox_01_small_closed_brown_food_F {
            canPackUp = 0;
        };
		
		class CargoNet_01_box_F {
            canPackUp = 0;
        };
		
		class Land_FoodSacks_01_cargo_white_idap_F {
            canPackUp = 0;
        };
		
		class CargoNet_01_barrels_F {
            canPackUp = 0;
        };
		
		class Fridge_01_closed_F {
            canPackUp = 0;
        };
		
		class B_Slingload_01_Cargo_F {
            canPackUp = 0;
        };
		
		class B_Slingload_01_Ammo_F {
            canPackUp = 0;
        };
		
		class B_Slingload_01_Fuel_F {
            canPackUp = 0;
        };
		
		class B_Slingload_01_Medevac_F {
            canPackUp = 0;
        };
		
		class B_Slingload_01_Repair_F {
            canPackUp = 0;
        };
		
		class B_HMG_01_F {
            canPackUp = 0;
        };
		
		class B_HMG_01_high_F {
            canPackUp = 0;
        };
		
		class B_GMG_01_F {
            canPackUp = 0;
        };
		
		class B_GMG_01_high_F {
            canPackUp = 0;
        };
		
		class B_Mortar_01_F {
            canPackUp = 0;
        };
		
		class CamoNet_BLUFOR_F {
            size = 5;
        };
		
		class CamoNet_BLUFOR_open_F {
            size = 5;
        };
		
		class CamoNet_BLUFOR_big_F {
            size = 5;
        };
		
		class Land_HelipadCircle_F {
            size = 1;
        };
		
		class Land_Cargo_Tower_V1_F {
            size = 30;
        };
		
		class Land_Cargo_HQ_V1_F {
            size = 30;
        };
		
		class Land_TTowerBig_1_F {
            size = 30;
        };
		
		class Land_TTowerBig_2_F {
            size = 30;
        };
		
    };

    class Vehicles {
        class B_Truck_01_box_F {
            isStorage = 1;
          
        };
    };
};