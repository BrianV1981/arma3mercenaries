    //buyables set/store:
    class customStore_1 {
		 //category:  
        class units_1 {
            displayname = "Constellis Loadouts (Blufor)";
            kindOf = "other";
            tracking = 0;
					
			class B_RangeMaster_F {
                displayName = "Constellis Scrub Loadout (Blufor)";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a loadout free of charge because you are a scrub.";
                price = 0;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\scrub.sqf"] call BIS_fnc_execVM;
            };
		class B_recon_medic_F {
                displayName = "Constellis Paramedic Loadout (Blufor)";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a Paramedic loadout.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\reconParamedic.sqf"] call BIS_fnc_execVM;
            };
			class B_Recon_Sharpshooter_F {
                displayName = "Constellis Sharpshooter Loadout (Blufor)";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a Sharpshooter loadout.";
                price = 15000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\reconSharpshooter.sqf"] call BIS_fnc_execVM;
            };			
			class B_sniper_F {
                displayName = "Constellis Sniper Loadout (Blufor)";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is sniper loadout.";
                price = 20000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\reconSniperArid.sqf"] call BIS_fnc_execVM;
			};
			class B_recon_exp_F {
                displayName = "Constellis Demo Specialist Loadout (Blufor)";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a Demo Specialist loadout";
                price = 20000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\reconDemoSpecialist.sqf"] call BIS_fnc_execVM;
            };
			class B_soldier_AT_F {
                displayName = "Constellis AT Loadout (Blufor)";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a Anti-Tank loadout.";
                price = 30000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\reconATSpecialist.sqf"] call BIS_fnc_execVM;
            };
			class B_soldier_AA_F {
                displayName = "Constellis AA Loadout (Blufor)";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a Anti-Air loadout.";
                price = 30000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\reconAASpecialist.sqf"] call BIS_fnc_execVM;
            };
		};
        //category: 
		class units_2 {
            displayname = "Custom Loadouts";
            kindOf = "other";

			class B_recon_LAT_F {
                displayName = "Vasquez Loadout";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a custom loadout for Vasquez.";
                price = 45000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\vasquez_1.sqf"] call BIS_fnc_execVM;
            };
			class B_CTRG_Soldier_M_tna_F {
                displayName = "Jay Loadout";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a custom loadout for Jay.";
                price = 35000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\jay_1.sqf"] call BIS_fnc_execVM;
            };
			class B_ghillie_ard_F {
                displayName = "Recoded Loadout 1";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a custom loadout for Recoded.";
                price = 45000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\recoded_1.sqf"] call BIS_fnc_execVM;
            };
			class B_ghillie_sard_F {
                displayName = "Recoded Loadout 2";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a custom loadout for Recoded.";
                price = 25000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\recoded_2.sqf"] call BIS_fnc_execVM;
            };
		};
	};
