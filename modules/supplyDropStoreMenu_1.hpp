    //emergency store that is in the ace self interact menu
	//buyables set/store:
    class supplyDropStore_1 {
		
		class supplyDrops_1 {
            displayname = "Emergency Supply Drops";
            kindOf = "other";
			tracking = 0;

				class C_IDAP_supplyCrate_F {
                displayName = "Medical Suppply Drop";
                description = "This is an emergency supply drop of medical and other essential items such as zip ties, respawn camps, backpack ladders, water, and rations.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = execVM "arma3mercenaries\supply_drops\supplyDrop_medical.sqf";
				// code = [player, "arma3mercenaries\supply_drops\supplyDrop_medical.sqf"] remoteExec ["execVM"];
            };
			
			class Box_NATO_Equip_F {
                displayName = "Drone Suppply Drop";
                description = "This is an emergency supply drop of NATO drone backpacks and batteries";
                price = 25000;
                amount = 1;
                stock = 9999;
				code = execVM "arma3mercenaries\supply_drops\supplyDrop_natoDrones.sqf";
				// code = [player, "arma3mercenaries\supply_drops\supplyDrop_natoDrones.sqf"] remoteExec ["execVM"];
            };

			class Box_NATO_WpsSpecial_F {
                displayName = "Titan AT Suppply Drop";
                description = "This is an emergency supply drop of 20 Titan AT missles.";
                price = 50000;
                amount = 1;
                stock = 9999;
				code = execVM "arma3mercenaries\supply_drops\supplyDrop_AT.sqf";
				// code = [player, "arma3mercenaries\supply_drops\supplyDrop_AT.sqf"] remoteExec ["execVM"];
            };
			
			class Box_IND_WpsSpecial_F {
                displayName = "Titan AA Suppply Drop";
                description = "This is an emergency supply drop of 20 Titan AA missles.";
                price = 50000;
                amount = 1;
                stock = 9999;
				code = execVM "arma3mercenaries\supply_drops\supplyDrop_AA.sqf";
				// code = [player, "arma3mercenaries\supply_drops\supplyDrop_AA.sqf"] remoteExec ["execVM"];
            };
			
			class B_CargoNet_01_ammo_F {
                displayName = "Titan Suppply Drop";
                description = "This is an emergency supply drop of Titan AA/AT launchers and missles.";
                price = 300000;
                amount = 1;
                stock = 9999;
				code = execVM "arma3mercenaries\supply_drops\supplyDrop_titan.sqf";
				// code = [player, "arma3mercenaries\supply_drops\supplyDrop_titan.sqf"] remoteExec ["execVM"];
            };
			
			class B_Slingload_01_Cargo_F {
                displayName = "Advanced FOB Suppply Drop";
                description = "This is an emergency supply drop of an advaced FOB.";
                price = 500000;
                amount = 1;
                stock = 9999;
				code = execVM "arma3mercenaries\supply_drops\supplyDrop_FOB_advanced.sqf";
				// code = [player, "arma3mercenaries\supply_drops\supplyDrop_FOB_advanced.sqf"] remoteExec ["execVM"];
            };
			
			
		};   
	};