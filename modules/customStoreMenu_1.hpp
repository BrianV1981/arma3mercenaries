    //buyables set/store:
    class customStore_1 {
		 //category:  
        class units_1 {
            displayname = "Constellis Loadouts (Blufor)";
            kindOf = "other";
            tracking = 1;
					
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
			class B_recon_exp_F {
                displayName = "Constellis Demo Specialist Loadout (Blufor)";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a Demo Specialist loadout";
                price = 15000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\reconDemoSpecialist.sqf"] call BIS_fnc_execVM;
            };
			class B_sniper_F {
                displayName = "Constellis Sniper Loadout (Blufor)";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is sniper loadout.";
                price = 20000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\reconSniperArid.sqf"] call BIS_fnc_execVM;
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
			class B_W_Soldier_CBRN_F {
                displayName = "Constellis CBRN Specialist Loadout (Blufor)";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a Anti-Air loadout.";
                price = 30000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\CBRNspecialist.sqf"] call BIS_fnc_execVM;
            };
		};
        //category: 
		class units_2 {
            displayname = "Custom Loadouts";
            kindOf = "other";
			tracking = 1;

			class B_recon_LAT_F {
                displayName = "Vasquez Loadout 1";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a custom loadout for Vasquez.";
                price = 45000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\vasquez_1.sqf"] call BIS_fnc_execVM;
            };
			class B_Soldier_unarmed_F {
                displayName = "Vasquez Loadout 2";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a custom loadout for Vasquez.";
                price = 15000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\vasquez_2.sqf"] call BIS_fnc_execVM;
            };
			class B_recon_TL_F {
                displayName = "Jay Loadout";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a custom loadout for Jay.";
                price = 35000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\jay_1.sqf"] call BIS_fnc_execVM;
            };
			class B_ghillie_ard_F {
                displayName = "RGMK1";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a custom loadout for Recoded.";
                price = 15000;
                amount = 1;
                stock = 9999;
				picture = "pictures\recodedcustompicture_1.paa";
				code = [player,"scripts\loadouts\recoded_1.sqf"] call BIS_fnc_execVM;
            };
			class B_ghillie_sard_F {	
                displayName = "RGMK2";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a custom loadout for Recoded.";
                price = 25000;
                amount = 1;
                stock = 9999;
				picture = "pictures\recodedcustompicture_2.paa";
				code = [player,"scripts\loadouts\recoded_2.sqf"] call BIS_fnc_execVM;
            };
			class B_Soldier_VR_F {	
                displayName = "RGSK";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a custom loadout for Recoded.";
                price = 35000;
                amount = 1;
                stock = 9999;
				picture = "pictures\recodedcustompicture_3.paa";
				code = [player,"scripts\loadouts\recoded_3.sqf"] call BIS_fnc_execVM;
            };
			class O_V_Soldier_hex_F {	
                displayName = "Koger Medic/Engineer Loadout 1";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a custom loadout for Recoded.";
                price = 35000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\kogerMedicEngineer_1.sqf"] call BIS_fnc_execVM;
            };
			class O_V_Soldier_Exp_hex_F {	
                displayName = "Koger Medic/Engineer Loadout 2";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a custom loadout for Recoded.";
                price = 35000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\kogerMedicEngineer_2.sqf"] call BIS_fnc_execVM;
            };
			class O_V_Soldier_LAT_hex_F {	
                displayName = "Koger Lite AT Loadout";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a custom loadout for Recoded.";
                price = 35000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\kogerLiteAT_1.sqf"] call BIS_fnc_execVM;
            };
			class O_V_Soldier_Medic_hex_F {	
                displayName = "Koger Gear Reitriever Loadout";
                description = "***WARNING***ALL ITEMS THAT ARE IN YOUR INVENTORY AND CURRENTLY EQUIPPED WILL BE DELETED***This is a custom loadout for Recoded.";
                price = 35000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\loadouts\kogerGearRetriever_1.sqf"] call BIS_fnc_execVM;
            };
		};
	};