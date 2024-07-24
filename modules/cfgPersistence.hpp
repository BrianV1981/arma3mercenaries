class CfgGradPersistence {
    missionTag = "my_persistent_mission";
    loadOnMissionStart = 1;
    missionWaitCondition = "true";
    playerWaitCondition = "true";

    saveUnits = 3;
    saveVehicles = 0;
    saveContainers = 0;
    saveStatics = 0;
	saveGradFortificationsStatics = 3;
	
    savePlayerInventory = 1;
    savePlayerDamage = 1;
    savePlayerPosition = 0;
    savePlayerMoney = 1;
	
    saveMarkers = 0;
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
    };
};