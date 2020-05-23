/////////https://github.com/gruppe-adler/grad-fortifications/wiki/Configuration///////////
class CfgGradFortifications {
	boundingBoxSizeFactor = 1; //Number - Global size factor of bounding box - smaller means collision detection is less strict
    buildTimeFactor = 1; //Number - Higher means building takes longer.
	demolishTimeFactor = 1; //Number - Higher means demolitions take longer.
	packUpTimeFactor = 1; //Number - Higher means packing up takes longer.
	playerInventorySize = 20; //Number - Size of the virtual inventory of units.
	vehicleInventorySizeFactor = 1; //Number - Size factor for vehicle inventories.
	canDemolishDefault = 1; //(1/0) - Can anyone demolish fortifications by default?
    canPackUpDefault = 1; // (1/0) - Can fortification owners pack up fortifications by default?
    canStoreInLandVehicles = 1 // (1/0) - Can fortifications be stored in land vehicles?
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
        class Land_BagFence_Long_F {
            boundingBoxSize = 0.8;
        };

        class Land_HBarrier_5_F {
            boundingBoxSize = 0.8;
        };
    };

    class Vehicles {
        class B_Truck_01_box_F {
            isStorage = 1;
          
        };
    };
};