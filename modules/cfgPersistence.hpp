// https://github.com/gruppe-adler/grad-persistence/wiki/Configuration
// https://github.com/gruppe-adler/grad-persistence/wiki/Saving-Variables
class CfgGradPersistence {
    missionTag = "my_persistent_mission";
    loadOnMissionStart = 1;
    missionWaitCondition = "true";
    playerWaitCondition = "true";

    saveUnits = 3;
    saveVehicles = 3;
    saveContainers = 3;
    saveStatics = 0;
	saveGradFortificationsStatics = 3;
	
    savePlayerInventory = 1;
    savePlayerDamage = 1;
    savePlayerPosition = 0;
    savePlayerMoney = 1;
	
    saveMarkers = 3;
    saveTasks = 0;
    saveTriggers = 0;
    saveTeamAccounts = 0;
	saveTimeAndDate = 0;
	
	class customVariables {
        class acexFood {
            varName = "acex_field_rations_hunger";
            varNamespace = "player";
            public = 1;
        };
        class acexWater {
            varName = "acex_field_rations_thirst";
            varNamespace = "player";
            public = 1;
        };
		class gradFortificationsVehicleInventory {
          varName = "grad_fortifications_myFortsHash";
          varNamespace = "vehicle";
          public = 1;
      };
      class gradFortificationsContainerInventory {
          varName = "grad_fortifications_myFortsHash";
          varNamespace = "container";
          public = 1;
      };
      class gradFortificationsPlayerInventory {
          varName = "grad_fortifications_myFortsHash";
          varNamespace = "player";
          public = 1;
      };
      class gradFortificationsUnitInventory {
          varName = "grad_fortifications_myFortsHash";
          varNamespace = "unit";
          public = 1;
      };
	   class gradFortificationsStore1ContainerInventory {
          varName = "container_1";
          varNamespace = "container";
          public = 1;
      };
	  class gradFortificationsStore2ContainerInventory {
          varName = "container_2";
          varNamespace = "container";
          public = 1;
	  };
	  class hgOwner {
          varName = "HG_Owner"; // custom variable
          varNamespace = "vehicle"; // Since this variable is related to vehicles
          public = 1; // Make it public if needed, 0 if not
		};
	  
		class aiUnit {
            varName = "arma3mercenaries_aiUnit";
            varNamespace = "unit";
            public = 1;  // Set to 1 if you need it broadcast across the network
        };
        class groupID {
            varName = "arma3mercenaries_groupID";
            varNamespace = "unit";
            public = 1;
        };
		class barracksGroupData {
            varName = "arma3mercenaries_barracksGroupsData";
            varNamespace = "missionNamespace"; // This stores data in the mission namespace
            public = 1; // Private to each player, not broadcast across the network
        };
    };
};