class CfgGradPersistence {
    missionTag = "my_persistent_mission";
    loadOnMissionStart = 1;
    missionWaitCondition = "true";
    playerWaitCondition = "true";

    saveUnits = 0;
    saveVehicles = 0;
    saveContainers = 0;
    saveStatics = 0;
	saveGradFortificationsStatics = 3;
	
    savePlayerInventory = 0;
    savePlayerDamage = 0;
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
    };
};