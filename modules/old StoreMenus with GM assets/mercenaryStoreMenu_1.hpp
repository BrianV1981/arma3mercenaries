    //buyables set/store:
    class mercenaryStore_1 {
        //category:  
		class units_1 {
            displayname = "CTRG Mercenaries";
            kindOf = "other";

			class B_CTRG_Soldier_TL_tna_F {
                displayName = "CTRG Team Leader";
                description = "This is a Combat Technology Research Group team leader.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_CTRG_Soldier_TL_tna_F.sqf"] call BIS_fnc_execVM;
            };
			class B_CTRG_Soldier_Exp_tna_F {
                displayName = "CTRG Demo Specialist";
                description = "This is a Combat Technology Research Group demo specialist.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_CTRG_Soldier_Exp_tna_F.sqf"] call BIS_fnc_execVM;
            };
			class B_CTRG_Soldier_Medic_tna_F {
                displayName = "CTRG Paramedic";
                description = "This is a Combat Technology Research Group paramedic.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_CTRG_Soldier_Medic_tna_F.sqf"] call BIS_fnc_execVM;
            };
			class B_CTRG_Soldier_M_tna_F {
                displayName = "CTRG Marksman";
                description = "This is a Combat Technology Research Group marksman.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_CTRG_Soldier_M_tna_F.sqf"] call BIS_fnc_execVM;
            };
			class B_CTRG_Soldier_tna_F {
                displayName = "CTRG Scout";
                description = "This is a Combat Technology Research Group scout.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_CTRG_Soldier_tna_F.sqf"] call BIS_fnc_execVM;
            };
			class B_CTRG_Soldier_LAT_tna_F {
                displayName = "CTRG Scout (AT)";
                description = "This is a Combat Technology Research Group scout (AT).";
                price = 12000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_CTRG_Soldier_LAT_tna_F.sqf"] call BIS_fnc_execVM;
            };
			class B_CTRG_Soldier_AR_tna_F {
                displayName = "CTRG Autorifleman";
                description = "This is a Combat Technology Research Group autorifleman.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_CTRG_Soldier_AR_tna_F.sqf"] call BIS_fnc_execVM;
            };
			class B_CTRG_Soldier_JTAC_tna_F {
                displayName = "CTRG JTAC";
                description = "This is a Combat Technology Research Group JTAC.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_CTRG_Soldier_JTAC_tna_F.sqf"] call BIS_fnc_execVM;
            };
	};
		//category:  
        class units_2 {
            displayname = "FIA Mercenaries";
            kindOf = "other";
            tracking = 0;
			
		
			class I_G_Soldier_unarmed_F {
                displayName = "FIA Rifleman (Unarmed)";
                description = "This is a FIA Rifleman (Unarmed).";
                price = 1000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_Soldier_unarmed_F.sqf"] call BIS_fnc_execVM;
            };		
			class I_G_Soldier_F {
                displayName = "FIA Rifleman";
                description = "This is a FIA Rifleman.";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_Soldier_F.sqf"] call BIS_fnc_execVM;
            };
			class I_G_Soldier_lite_F {
                displayName = "FIA Rifleman (Light)";
                description = "This is a FIA Rifleman (Light).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_Soldier_lite_F.sqf"] call BIS_fnc_execVM;
            };
			class I_G_Soldier_SL_F {
                displayName = "FIA Squad Leader";
                description = "This is a FIA Squad Leader.";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_Soldier_SL_F.sqf"] call BIS_fnc_execVM;
            };
			class I_G_Soldier_TL_F {
                displayName = "FIA Team Leader";
                description = "This is a FIA Team Leader.";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_Soldier_TL_F.sqf"] call BIS_fnc_execVM;
            };
			class I_G_Soldier_AR_F {
                displayName = "FIA Autorifleman";
                description = "This is a FIA Autorifleman.";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_Soldier_AR_F.sqf"] call BIS_fnc_execVM;
            };
			class I_G_medic_F {
                displayName = "FIA Combat Life Saver";
                description = "This is a FIA Combat Life Saver.";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_medic_F.sqf"] call BIS_fnc_execVM;
            };
			class I_G_engineer_F {
                displayName = "FIA Engineer";
                description = "This is a FIA Engineer.";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_engineer_F.sqf"] call BIS_fnc_execVM;
            };
			class I_G_Soldier_exp_F {
                displayName = "FIA Explosive Specialist";
                description = "This is a FIA Explosive Specialist.";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_Soldier_exp_F.sqf"] call BIS_fnc_execVM;
            };
			class I_G_Soldier_GL_F {
                displayName = "FIA Grenadier";
                description = "This is a FIA Grenadier.";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_Soldier_GL_F.sqf"] call BIS_fnc_execVM;
            };
			class I_G_Soldier_M_F {
                displayName = "FIA Marksman";
                description = "This is a FIA Marksman.";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_Soldier_M_F.sqf"] call BIS_fnc_execVM;
            };
			class I_G_Soldier_LAT_F {
                displayName = "FIA Rifleman (AT)";
                description = "This is a FIA Rifleman (AT).";
                price = 3000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_Soldier_LAT_F.sqf"] call BIS_fnc_execVM;
            };
			class I_G_Soldier_A_F {
                displayName = "FIA Ammo Bearer";
                description = "This is a FIA Ammo Bearer.";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_Soldier_A_F.sqf"] call BIS_fnc_execVM;
            };
			class I_G_officer_F {
                displayName = "FIA Officer";
                description = "This is a FIA Officer.";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_officer_F.sqf"] call BIS_fnc_execVM;
            };
			class I_G_Sharpshooter_F {
                displayName = "FIA Sharpshooter";
                description = "This is a FIA Sharpshooter.";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_Sharpshooter_F.sqf"] call BIS_fnc_execVM;
            };
			class I_G_Soldier_LAT2_F {
                displayName = "FIA Rifleman (Light AT)";
                description = "This is a FIA Rifleman (Light AT).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_G_Soldier_LAT2_F.sqf"] call BIS_fnc_execVM;
            };	
	};
		 //category:  
        class units_3 {
            displayname = "Gendarmerie Mercenaries";
            kindOf = "other";
            tracking = 0;
			
			class B_GEN_Commander_F {
                displayName = "Gendarmerie Commander";
                description = "This is a Gendarmerie commander.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_GEN_Commander_F.sqf"] call BIS_fnc_execVM;
            };
			class B_GEN_Soldier_universal_F {
                displayName = "Gendarmerie Soldier";
                description = "This is a Gendarmerie soldier.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_GEN_Soldier_universal_F.sqf"] call BIS_fnc_execVM;
            };
	};		
		 //category:  
        class units_4 {
            displayname = "NATO Mercenaries";
            kindOf = "other";
            tracking = 0;
			
			class B_Soldier_unarmed_F {
                displayName = "NATO Rifleman (Unarmed)";
                description = "This is a NATO Rifleman (Unarmed).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_Soldier_unarmed_F.sqf"] call BIS_fnc_execVM;
            };		
			class B_officer_F {
                displayName = "NATO Officer";
                description = "This is a NATO Officer.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_officer_F.sqf"] call BIS_fnc_execVM;
            };
			class B_Soldier_SL_F {
                displayName = "NATO Squad Leader";
                description = "This is a NATO Squad Leader.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_Soldier_SL_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_Patrol_Soldier_TL_F {
                displayName = "NATO Team Leader";
                description = "This is a NATO Team Leader.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_Patrol_Soldier_TL_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_Soldier_F {
                displayName = "NATO Rifleman";
                description = "This is a team of four NATO rifleman.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_Soldier_F.sqf"] call BIS_fnc_execVM;
            };
			class B_Soldier_lite_F {
                displayName = "NATO Rifleman (Light)";
                description = "This is a NATO Rifleman (Light).";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_Soldier_lite_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_soldier_AR_F {
                displayName = "NATO Autorifleman";
                description = "This is a team of four NATO Autorifleman.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_soldier_AR_F.sqf"] call BIS_fnc_execVM;
            };
			class B_soldier_AAR_F {
                displayName = "NATO Asst. Autorifleman";
                description = "This is a team of four NATO Asst. Autorifleman.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_soldier_AAR_F.sqf"] call BIS_fnc_execVM;
            };
			class B_soldier_LAT_F {
                displayName = "NATO Rifleman (AT)";
                description = "This is a NATO Rifleman (AT).";
                price = 7000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_soldier_LAT_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_Soldier_GL_F {
                displayName = "NATO Grenadier";
                description = "This is a NATO Grenadier.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_Soldier_GL_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_Patrol_Soldier_MG_F {
                displayName = "NATO Machine Gunner";
                description = "This is a NATO Machine Gunner.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_Patrol_Soldier_MG_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_HeavyGunner_F {
                displayName = "NATO Heavy Gunner";
                description = "This is a NATO Heavy Gunner.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_HeavyGunner_F.sqf"] call BIS_fnc_execVM;
            };
			class B_Patrol_Soldier_M_F {
                displayName = "NATO Marksman";
                description = "This is a NATO Marksman";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_Patrol_Soldier_M_F.sqf"] call BIS_fnc_execVM;
            };
			class B_Sharpshooter_F {
                displayName = "NATO Sharpshooter";
                description = "This is a NATO Sharpshooter";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_Sharpshooter_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_sniper_F {
                displayName = "NATO Sniper";
                description = "This is a NATO sniper.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_sniper_F.sqf"] call BIS_fnc_execVM;
            };
			class B_spotter_F {
                displayName = "NATO Spotter";
                description = "This is a NATO Spotter.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_spotter_F.sqf"] call BIS_fnc_execVM;
            };
			class B_soldier_PG_F {
                displayName = "NATO Para Trooper";
                description = "This is a NATO Para Trooper.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_soldier_PG_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_Soldier_A_F {
                displayName = "NATO Ammo Bearer";
                description = "This is a NATO ammo bearer.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_Soldier_A_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_soldier_AT_F {
                displayName = "NATO AT Missile Specialist";
                description = "This is a NATO AT missile specialist.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_soldier_AT_F.sqf"] call BIS_fnc_execVM;
            };
			class B_soldier_AA_F {
                displayName = "NATO AA Missile Specialist";
                description = "This is a NATO AA missile specialist.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_soldier_AA_F.sqf"] call BIS_fnc_execVM;
            };
			class B_soldier_AAT_F {
                displayName = "NATO Asst. Missile Specialist (AT)";
                description = "This is a NATO Asst. Missile Specialist (AT).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_soldier_AAT_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_soldier_AAA_F {
                displayName = "NATO Asst. Missile Specialist (AA)";
                description = "This is a NATO Asst. Missile Specialist (AA).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_soldier_AAA_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_soldier_mine_F {
                displayName = "NATO Mine Specialist";
                description = "This is a NATO Mine Specialist.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_soldier_mine_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_soldier_repair_F {
                displayName = "NATO Repair Specialist";
                description = "This is a NATO Repair Specialist.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_soldier_repair_F.sqf"] call BIS_fnc_execVM;
            };
			class B_engineer_F {
                displayName = "NATO Engineer";
                description = "This is a NATO engineer.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_engineer_F.sqf"] call BIS_fnc_execVM;
            };
			class B_Patrol_Engineer_F {
                displayName = "NATO Patrol Engineer";
                description = "This is a NATO patrol engineer.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_Patrol_Engineer_F.sqf"] call BIS_fnc_execVM;
            };		
			class B_medic_F {
                displayName = "NATO Combat Life Saver";
                description = "NATO This is a NATO combat life saver.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_medic_F.sqf"] call BIS_fnc_execVM;
            };
			class B_diver_TL_F {
                displayName = "NATO Diver Team Leader";
                description = "This is a NATO Diver Team Leader.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_diver_TL_F.sqf"] call BIS_fnc_execVM;
            };
			class B_diver_F {
                displayName = "NATO Assault Diver";
                description = "This is a NATO assault diver.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_diver_F.sqf"] call BIS_fnc_execVM;
            };
			class B_diver_exp_F {
                displayName = "NATO Diver Explosive Specialist";
                description = "This is a NATO Diver Explosive Specialist.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_diver_exp_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_support_Mort_F {
                displayName = "NATO Gunner (Mk6)";
                description = "This is a NATO Gunner (Mk6).";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_support_Mort_F.sqf"] call BIS_fnc_execVM;
            };
			class B_support_AMort_F {
                displayName = "NATO Asst. Gunner (Mk6)";
                description = "This is a NATO Asst. Gunner (Mk6).";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_support_AMort_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_support_MG_F {
                displayName = "NATO Gunner (HMG)";
                description = "This is a NATO Gunner (HMG).";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_support_MG_F.sqf"] call BIS_fnc_execVM;
            };
			class B_support_GMG_F {
                displayName = "NATO Gunner (GMG)";
                description = "This is a NATO Gunner (GMG).";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_support_GMG_F.sqf"] call BIS_fnc_execVM;
            };
			class B_support_AMG_F {
                displayName = "NATO Asst. Gunner (HMG/GMG)";
                description = "This is a NATO Asst. Gunner (HMG/GMG).";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_support_AMG_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_Patrol_Soldier_UAV_F {
                displayName = "NATO UAV Operator";
                description = "This is a NATO UAV Operator.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_Patrol_Soldier_UAV_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_Fighter_Pilot_F {
                displayName = "NATO Fighter Pilot";
                description = "This is a NATO Fighter Pilot.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_Fighter_Pilot_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_Pilot_F {
                displayName = "NATO Pilot";
                description = "This is a NATO Pilot.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_Pilot_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_helicrew_F {
                displayName = "NATO Helicopter Crew";
                description = "This is a NATO Helicopter Crew.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_helicrew_F.sqf"] call BIS_fnc_execVM;
            };
			class B_crew_F {
                displayName = "NATO Crewman";
                description = "This is a NATO Crewman.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_crew_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_recon_TL_F {
                displayName = "NATO Recon Team Leader";
                description = "This is a NATO Recon Team Leader.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_recon_TL_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_recon_M_F {
                displayName = "NATO Recon Marksman";
                description = "This is a NATO Recon Marksman.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_recon_M_F.sqf"] call BIS_fnc_execVM;
            };
			class B_Recon_Sharpshooter_F {
                displayName = "NATO Recon Sharpshooter";
                description = "This is a NATO Recon Sharpshooter.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_Recon_Sharpshooter_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_recon_medic_F {
                displayName = "NATO Recon Paramedic";
                description = "This is a NATO Recon Paramedic.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_recon_medic_F.sqf"] call BIS_fnc_execVM;
            };
			class B_recon_exp_F {
                displayName = "NATO Recon Demo Specialist";
                description = "This is a NATO Recon Demo Specialist.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_recon_exp_F.sqf"] call BIS_fnc_execVM;
            };
			class B_recon_JTAC_F {
                displayName = "NATO Recon JTAC";
                description = "This is a NATO Recon JTAC.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_recon_JTAC_F.sqf"] call BIS_fnc_execVM;
            };
			class B_T_Recon_M_F {
                displayName = "NATO Recon Marksman";
                description = "This is a NATO Recon Marksman.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_T_Recon_M_F.sqf"] call BIS_fnc_execVM;
            };
			class B_recon_F {
                displayName = "NATO Recon Scout";
                description = "This is a NATO Recon Scouts.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_recon_F.sqf"] call BIS_fnc_execVM;
            };			
			class B_recon_LAT_F {
                displayName = "NATO Recon Scout (AT)";
                description = "This is a NATO AT Recon Scout.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\B_recon_LAT_F.sqf"] call BIS_fnc_execVM;
            };
	};
        //category: 
		class units_5 {
            displayname = "Syndicate Mercenaries";
            kindOf = "other";

			class I_C_Soldier_Para_1_F {
                displayName = "Syndikat Soldier (Rifle)";
                description = "This is a FIA autorifleman.";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_C_Soldier_Para_1_F.sqf"] call BIS_fnc_execVM;
            };
			class I_C_Soldier_Para_2_F {
                displayName = "Syndikat Enforcer (Rifle)";
                description = "This is a Syndikat Enforcer (Rifle).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_C_Soldier_Para_2_F.sqf"] call BIS_fnc_execVM;
            };
			class I_C_Soldier_Para_3_F {
                displayName = "Syndikat Militiaman (Medikit)";
                description = "This is a Syndikat Militiaman (Medikit).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_C_Soldier_Para_3_F.sqf"] call BIS_fnc_execVM;
            };
			class I_C_Soldier_Para_4_F {
                displayName = "Syndikat Oppressor (Machine Gun)";
                description = "This is a Syndikat Oppressor (Machine Gun).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_C_Soldier_Para_4_F.sqf"] call BIS_fnc_execVM;
            };
			class I_C_Soldier_Para_5_F {
                displayName = "Syndikat Specialist (Launcher)";
                description = "This is a Syndikat Specialist (Launcher).";
                price = 3000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_C_Soldier_Para_5_F.sqf"] call BIS_fnc_execVM;
            };
			class I_C_Soldier_Para_6_F {
                displayName = "Syndikat Raider (UGL)";
                description = "This is a Syndikat Raider (UGL).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_C_Soldier_Para_6_F.sqf"] call BIS_fnc_execVM;
            };
			class I_C_Soldier_Para_7_F {
                displayName = "Syndikat Deserter (Rifle)";
                description = "This is a Syndikat Deserter (Rifle).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_C_Soldier_Para_7_F.sqf"] call BIS_fnc_execVM;
            };
			class I_C_Soldier_Para_8_F {
                displayName = "Syndikat Saboteur (Explosives)";
                description = "This is a Syndikat Saboteur (Explosives).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_C_Soldier_Para_8_F.sqf"] call BIS_fnc_execVM;
            };
			class I_C_Soldier_Bandit_1_F {
                displayName = "Syndikat Snatcher (Medikit)";
                description = "This is a Syndikat Snatcher (Medikit).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_C_Soldier_Bandit_1_F.sqf"] call BIS_fnc_execVM;
            };
			class I_C_Soldier_Bandit_2_F {
                displayName = "Syndikat Hireling (Launcher)";
                description = "This is a Syndikat Hireling (Launcher).";
                price = 3000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_C_Soldier_Bandit_2_F.sqf"] call BIS_fnc_execVM;
            };
			class I_C_Soldier_Bandit_4_F {
                displayName = "Syndikat Watcher (Rifle)";
                description = "This is a Syndikat Watcher (Rifle).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_C_Soldier_Bandit_4_F.sqf"] call BIS_fnc_execVM;
            };
			class I_C_Soldier_Bandit_7_F {
                displayName = "Syndikat Dealer (Rifle)";
                description = "This is a Syndikat Dealer (Rifle).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_C_Soldier_Bandit_7_F.sqf"] call BIS_fnc_execVM;
            };
			class I_C_Soldier_Bandit_8_F {
                displayName = "Syndikat Thug (Mines)";
                description = "This is a Syndikat Hireling (Launcher).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_C_Soldier_Bandit_8_F.sqf"] call BIS_fnc_execVM;
            };
			class I_C_Soldier_Bandit_3_F {
                displayName = "Syndikat Guard (Machine Gun)";
                description = "This is a Syndikat Guard (Machine Gun).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_C_Soldier_Bandit_3_F.sqf"] call BIS_fnc_execVM;
            };
	};						
		//category:  
        class units_6 {
            displayname = "AAF Mercenaries";
            kindOf = "other";
            tracking = 0;			
			
			class I_soldier_F {
                displayName = "AAF Rifleman";
                description = "This is a AAF Rifleman.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_soldier_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_lite_F {
                displayName = "AAF Rifleman (Light)";
                description = "This is a AAF Rifleman (Light).";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_lite_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_A_F {
                displayName = "AAF Ammo Bearer";
                description = "This is a AAF Ammo Bearer.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_A_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_GL_F {
                displayName = "AAF Grenadier";
                description = "This is a AAF Grenadier.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_GL_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_AR_F {
                displayName = "AAF Autorifleman";
                description = "This is a AAF Autorifleman.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_AR_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_SL_F {
                displayName = "AAF Squad Leader";
                description = "This is a AAF Squad Leader.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_SL_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_TL_F {
                displayName = "AAF Team Leader";
                description = "This is a AAF Team Leader.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_TL_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_M_F {
                displayName = "AAF Marksman";
                description = "This is a AAF Marksman.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_M_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_LAT_F {
                displayName = "AAF Rifleman (AT)";
                description = "This is a AAF Rifleman (AT).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_LAT_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_AT_F {
                displayName = "AAF Missile Specialist (AT)";
                description = "This is a AAF Missile Specialist (AT).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_AT_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_AA_F {
                displayName = "AAF Missile Specialist (AA)";
                description = "This is a AAF Missile Specialist (AA).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_AA_F.sqf"] call BIS_fnc_execVM;
            };
			class I_medic_F {
                displayName = "AAF Combat Life Saver";
                description = "This is a AAF Combat Life Saver.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_medic_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_repair_F {
                displayName = "AAF Repair Specialist";
                description = "This is a AAF Repair Specialist.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_repair_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_exp_F {
                displayName = "AAF Explosive Specialist";
                description = "This is a AAF Explosive Specialist.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_exp_F.sqf"] call BIS_fnc_execVM;
            };
			class I_engineer_F {
                displayName = "AAF Engineer";
                description = "This is a AAF Engineer.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_engineer_F.sqf"] call BIS_fnc_execVM;
            };
			class I_crew_F {
                displayName = "AAF Crewman";
                description = "This is a AAF Crewman.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_crew_F.sqf"] call BIS_fnc_execVM;
            };
			class I_helipilot_F {
                displayName = "AAF Helicopter Pilot";
                description = "This is a AAF Helicopter Pilot.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_helipilot_F.sqf"] call BIS_fnc_execVM;
            };
			class I_pilot_F {
                displayName = "AAF Pilot";
                description = "This is a AAF Pilot.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_pilot_F.sqf"] call BIS_fnc_execVM;
            };
			class I_helicrew_F {
                displayName = "AAF Helicopter Crew";
                description = "This is a AAF Helicopter Crew.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_helicrew_F.sqf"] call BIS_fnc_execVM;
            };
			class I_officer_F {
                displayName = "AAF Officer";
                description = "This is a AAF Officer.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_officer_F.sqf"] call BIS_fnc_execVM;
            };
			class I_soldier_UAV_F {
                displayName = "AAF UAV Operator";
                description = "This is a AAF UAV Operator.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_soldier_UAV_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_universal_F {
                displayName = "AAF Soldier";
                description = "This is a AAF Soldier.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_universal_F.sqf"] call BIS_fnc_execVM;
            };
			class I_diver_F {
                displayName = "AAF Assault Diver";
                description = "This is a AAF Assault Diver.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_diver_F.sqf"] call BIS_fnc_execVM;
            };
			class I_diver_exp_F {
                displayName = "AAF Diver Explosive Specialist";
                description = "This is a AAF Diver Explosive Specialist.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_diver_exp_F.sqf"] call BIS_fnc_execVM;
            };
			class I_diver_TL_F {
                displayName = "AAF Diver Team Leader";
                description = "This is a AAF Diver Team Leader.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_diver_TL_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Spotter_F {
                displayName = "AAF Spotter";
                description = "This is a AAF Spotter.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Spotter_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Sniper_F {
                displayName = "AAF Sniper";
                description = "This is a AAF Sniper.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Sniper_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_AAR_F {
                displayName = "AAF Asst. Autorifleman";
                description = "This is a AAF Asst. Autorifleman.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_AAR_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_AAT_F {
                displayName = "AAF Asst. Missile Specialist (AT)";
                description = "This is a AAF Asst. Missile Specialist (AT).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_AAT_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_AAA_F {
                displayName = "AAF Asst. Missile Specialist (AA)";
                description = "This is a AAF Asst. Missile Specialist (AA).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_AAA_F.sqf"] call BIS_fnc_execVM;
            };
			class I_support_MG_F {
                displayName = "AAF Gunner (HMG)";
                description = "This is a AAF Gunner (HMG).";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_support_MG_F.sqf"] call BIS_fnc_execVM;
            };
			class I_support_GMG_F {
                displayName = "AAF Gunner (GMG)";
                description = "This is a AAF Gunner (GMG).";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_support_GMG_F.sqf"] call BIS_fnc_execVM;
            };
			class I_support_Mort_F {
                displayName = "AAF Gunner (Mk6)";
                description = "This is a AAF Gunner (Mk6).";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_support_Mort_F.sqf"] call BIS_fnc_execVM;
            };
			class I_support_AMG_F {
                displayName = "AAF Asst. Gunner (HMG/GMG)";
                description = "This is a AAF Asst. Gunner (HMG/GMG).";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_support_AMG_F7.sqf"] call BIS_fnc_execVM;
            };
			class I_support_AMort_F {
                displayName = "AAF Asst. Gunner (Mk6)";
                description = "This is a AAF Asst. Gunner (Mk6).";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_support_AMort_F.sqf"] call BIS_fnc_execVM;
            };
			class I_soldier_UAV_06_F {
                displayName = "AAF UAV Operator (AL-6)";
                description = "This is a AAF UAV Operator (AL-6).";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_soldier_UAV_06_F.sqf"] call BIS_fnc_execVM;
            };
			class I_soldier_UAV_06_medical_F {
                displayName = "AAF UAV Operator (AL-6, Medical)";
                description = "This is a AAF UAV Operator (AL-6, Medical).";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_soldier_UAV_06_medical_F.sqf"] call BIS_fnc_execVM;
            };
			class I_soldier_mine_F {
                displayName = "AAF Mine Specialist";
                description = "This is a AAF Mine Specialist.";
                price = 6000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_soldier_mine_F.sqf"] call BIS_fnc_execVM;
            };
			class I_Soldier_LAT2_F {
                displayName = "AAF Rifleman (Light AT)";
                description = "This is a AAF Rifleman (Light AT).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_Soldier_LAT2_F.sqf"] call BIS_fnc_execVM;
            };
	  };		
		//category:  
        class units_7 {
            displayname = "LDF Mercenaries";
            kindOf = "other";
            tracking = 0;			
			
			class I_E_Soldier_unarmed_F {
                displayName = "LDF Rifleman (Unarmed)";
                description = "This is a LDF rifleman (unarmed).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_unarmed_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_F {
                displayName = "LDF Rifleman";
                description = "This is a LDF Rifleman.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_A_F {
                displayName = "LDF Ammo Bearer";
                description = "This is a LDF Ammo Bearer.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_A_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_AAR_F {
                displayName = "LDF Asst. Autorifleman";
                description = "This is a LDF Asst. Autorifleman.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_AAR_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_AR_F {
                displayName = "LDF Autorifleman";
                description = "This is a LDF Autorifleman.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_AR_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_lite_F {
                displayName = "LDF Rifleman (Light)";
                description = "This is a LDF Rifleman (Light).";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_lite_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_GL_F {
                displayName = "LDF Grenadier";
                description = "This is a LDF Grenadier.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_GL_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_soldier_M_F {
                displayName = "LDF Marksman";
                description = "This is a LDF Marksman.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_soldier_M_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Officer_F {
                displayName = "LDF Officer";
                description = "This is a LDF Officer.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Officer_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_SL_F {
                displayName = "LDF Squad Leader";
                description = "This is a LDF Squad Leader.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_SL_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_TL_F {
                displayName = "LDF Team Leader";
                description = "This is a LDF Team Leader.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_TL_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_RadioOperator_F {
                displayName = "LDF Radio Operator";
                description = "This is a LDF Radio Operator.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_RadioOperator_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_AA_F {
                displayName = "LDF Missile Specialist (AA)";
                description = "This is a LDF Missile Specialist (AA).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_AA_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_AT_F {
                displayName = "LDF Missile Specialist (AT)";
                description = "This is a LDF Missile Specialist (AT).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_AT_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_LAT_F {
                displayName = "LDF Rifleman (AT)";
                description = "This is a LDF Rifleman (AT).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_LAT_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_LAT2_F {
                displayName = "LDF Rifleman (Light AT)";
                description = "This is a LDF Rifleman (Light AT).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_LAT2_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_AAA_F {
                displayName = "LDF Asst. Missile Specialist (AA)";
                description = "This is a LDF Asst. Missile Specialist (AA).";
                price = 5000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_AAA_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_AAT_F {
                displayName = "LDF Asst. Missile Specialist (AT)";
                description = "This is a LDF Asst. Missile Specialist (AT).";
                price = 5000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_AAT_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Support_GMG_F {
                displayName = "LDF Gunner (GMG)";
                description = "This is a LDF Gunner (GMG).";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Support_GMG_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Support_MG_F {
                displayName = "LDF Gunner (HMG)";
                description = "This is a LDF Gunner (HMG).";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Support_MG_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Support_Mort_F {
                displayName = "LDF Gunner (Mk6)";
                description = "This is a LDF Gunner (Mk6).";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Support_Mort_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Support_AMG_F {
                displayName = "LDF Asst. Gunner (HMG/GMG)";
                description = "This is a LDF Asst. Gunner (HMG/GMG).";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Support_AMG_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Support_AMort_F {
                displayName = "LDF Asst. Gunner (Mk6)";
                description = "This is a LDF Asst. Gunner (Mk6).";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Support_AMort_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_Pathfinder_F {
                displayName = "LDF Pathfinder";
                description = "This is a LDF Pathfinder.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_Pathfinder_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Engineer_F {
                displayName = "LDF Engineer";
                description = "This is a LDF Engineer.";
                price = 5000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Engineer_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_Exp_F {
                displayName = "LDF Mine Specialist";
                description = "This is a LDF Mine Specialist.";
                price = 5000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_Exp_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_Repair_F {
                displayName = "LDF Repair Specialist";
                description = "This is a LDF Repair Specialist.";
                price = 5000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_Repair_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_CBRN_F {
                displayName = "LDF CBRN Specialist";
                description = "This is a LDF CBRN Specialist.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_CBRN_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Medic_F {
                displayName = "LDF Combat Life Saver";
                description = "This is a LDF Combat Life Saver.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Medic_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_MP_F {
                displayName = "LDF Military Police Officer";
                description = "This is a LDF Military Police Officer.";
                price = 4000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_MP_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_Soldier_UAV_F {
                displayName = "LDF UAV Operator";
                description = "This is a LDF UAV Operator.";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_Soldier_UAV_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_soldier_UAV_06_F {
                displayName = "LDF UAV Operator (AL-6)";
                description = "This is a LDF UAV Operator (AL-6).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_soldier_UAV_06_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_soldier_UAV_06_medical_F {
                displayName = "LDF UAV Operator (AL-6, Medical)";
                description = "This is a LDF UAV Operator (AL-6, Medical).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_soldier_UAV_06_medical_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_soldier_UGV_02_Science_F {
                displayName = "LDF UGV Operator (ED-1E)";
                description = "This is a LDF UGV Operator (ED-1E).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_soldier_UGV_02_Science_F.sqf"] call BIS_fnc_execVM;
            };
			class I_E_soldier_UGV_02_Demining_F {
                displayName = "LDF UGV Operator (ED-1D)";
                description = "This is a LDF UGV Operator (ED-1D).";
                price = 8000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_E_soldier_UGV_02_Demining_F.sqf"] call BIS_fnc_execVM;
            };
	};
		//category:  
        class units_8 {
            displayname = "Spetsnaz Mercenaries";
            kindOf = "other";
            tracking = 0;			
			
			class O_R_Soldier_TL_F {
                displayName = "Spetsnaz Team Leader";
                description = "This is a Spetsnaz Team Leader.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_Soldier_TL_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_Soldier_GL_F {
                displayName = "Spetsnaz Grenadier";
                description = "This is a Spetsnaz Grenadier.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_Soldier_GL_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_soldier_exp_F {
                displayName = "Spetsnaz Explosive Specialist";
                description = "This is a Spetsnaz Explosive Specialist.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_soldier_exp_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_Soldier_AR_F {
                displayName = "Spetsnaz Autorifleman";
                description = "This is a Spetsnaz Autorifleman.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_Soldier_AR_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_soldier_M_F {
                displayName = "Spetsnaz Marksman";
                description = "This is a Spetsnaz Marksman.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_soldier_M_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_medic_F {
                displayName = "Spetsnaz Combat Life Saver";
                description = "This is a Spetsnaz Combat Life Saver.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_medic_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_Soldier_LAT_F {
                displayName = "Spetsnaz Rifleman (AT)";
                description = "This is a Spetsnaz Rifleman (AT).";
                price = 12000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_Soldier_LAT_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_JTAC_F {
                displayName = "Spetsnaz JTAC";
                description = "This is a Spetsnaz JTAC.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_JTAC_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_recon_TL_F {
                displayName = "Spetsnaz Recon Team Leader";
                description = "This is a Spetsnaz Recon Team Leader.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_recon_TL_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_recon_exp_F {
                displayName = "Spetsnaz Recon Demo Specialist";
                description = "This is a Spetsnaz Recon Demo Specialist.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_recon_exp_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_recon_AR_F {
                displayName = "Spetsnaz Recon Autorifleman";
                description = "This is a Spetsnaz Recon Autorifleman.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_recon_AR_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_recon_M_F {
                displayName = "Spetsnaz Recon Marksman";
                description = "This is a Spetsnaz Recon Marksman.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_recon_M_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_recon_medic_F {
                displayName = "Spetsnaz Recon Paramedic";
                description = "This is a Spetsnaz Recon Paramedic.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_recon_medic_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_recon_GL_F {
                displayName = "Spetsnaz Recon Grenadier";
                description = "This is a Spetsnaz Recon Grenadier.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_recon_GL_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_recon_LAT_F {
                displayName = "Spetsnaz Recon Scout (AT)";
                description = "This is a Spetsnaz Recon Scout (AT).";
                price = 12000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_recon_LAT_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_recon_JTAC_F {
                displayName = "Spetsnaz Recon JTAC";
                description = "This is a Spetsnaz Recon JTAC.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_recon_JTAC_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_Patrol_Soldier_TL_F {
                displayName = "Spetsnaz Team Leader";
                description = "This is a Spetsnaz Team Leader.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_Patrol_Soldier_TL_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_Patrol_Soldier_AR_F {
                displayName = "Spetsnaz Autorifleman";
                description = "This is a Spetsnaz Autorifleman.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_Patrol_Soldier_AR_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_Patrol_Soldier_AR2_F {
                displayName = "Spetsnaz Grenadier";
                description = "This is a Spetsnaz Grenadier.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_Patrol_Soldier_AR2_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_Patrol_Soldier_A_F {
                displayName = "Spetsnaz Ammo Bearer";
                description = "This is a Spetsnaz Ammo Bearer.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_Patrol_Soldier_A_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_Patrol_Soldier_M_F {
                displayName = "Spetsnaz Sharpshooter";
                description = "This is a Spetsnaz Sharpshooter.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_Patrol_Soldier_M_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_Patrol_Soldier_M2_F {
                displayName = "Spetsnaz Marksman";
                description = "This is a Spetsnaz Marksman.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_Patrol_Soldier_M2_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_Patrol_Soldier_Medic {
                displayName = "Spetsnaz Combat Life Saver";
                description = "This is a Spetsnaz Combat Life Saver.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_Patrol_Soldier_Medic.sqf"] call BIS_fnc_execVM;
            };
			class O_R_Patrol_Soldier_Engineer_F {
                displayName = "Spetsnaz Engineer";
                description = "This is a Spetsnaz Engineer.";
                price = 12000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_Patrol_Soldier_Engineer_F.sqf"] call BIS_fnc_execVM;
            };
			class O_R_Patrol_Soldier_LAT_F {
                displayName = "Spetsnaz Rifleman (AT)";
                description = "This is a Spetsnaz Rifleman (AT).";
                price = 12000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_R_Patrol_Soldier_LAT_F.sqf"] call BIS_fnc_execVM;
            };			
		};
		//category:  
        class units_9 {
            displayname = "CSAT Mercenaries";
            kindOf = "other";
            tracking = 0;			
			
			class O_V_Soldier_TL_hex_F {
                displayName = "CSAT Viper Team Leader";
                description = "This is a CSAT Viper Team Leader.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_V_Soldier_TL_hex_F.sqf"] call BIS_fnc_execVM;
            };
			class O_V_Soldier_hex_F {
                displayName = "CSAT Viper Operative";
                description = "This is a CSAT Viper operative.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_V_Soldier_hex_F.sqf"] call BIS_fnc_execVM;
            };
			class O_V_Soldier_Exp_hex_F {
                displayName = "CSAT Viper Demo Specialist";
                description = "This is a CSAT Viper Demo Specialist.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_V_Soldier_Exp_hex_F.sqf"] call BIS_fnc_execVM;
            };
			class O_V_Soldier_Medic_hex_F {
                displayName = "CSAT Viper Paramedic";
                description = "This is a CSAT Viper Paramedic.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_V_Soldier_Medic_hex_F.sqf"] call BIS_fnc_execVM;
            };
			class O_V_Soldier_M_hex_F {
                displayName = "CSAT Viper Marksman";
                description = "This is a CSAT Viper Marksman.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_V_Soldier_M_hex_F.sqf"] call BIS_fnc_execVM;
            };
			class O_V_Soldier_LAT_hex_F {
                displayName = "CSAT Viper Rifleman (AT)";
                description = "This is a CSAT Viper Rifleman (AT).";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_V_Soldier_LAT_hex_F.sqf"] call BIS_fnc_execVM;
            };
			class O_V_Soldier_JTAC_hex_F {
                displayName = "CSAT Viper JTAC";
                description = "This is a CSAT Viper JTAC.";
                price = 10000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\O_V_Soldier_JTAC_hex_F.sqf"] call BIS_fnc_execVM;
            };
		};
		//category:  
        class units_10 {
            displayname = "Agent Provocateurs";
            kindOf = "other";
            tracking = 0;			
			
			class I_L_Looter_Pistol_F {
                displayName = "Looter (Pistol)";
                description = "This is a looter (Pistol).";
                price = 1500;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_L_Looter_Pistol_F.sqf"] call BIS_fnc_execVM;
            };
			class I_L_Looter_SG_F {
                displayName = "Looter (Rifle)";
                description = "This is a looter (Rifle).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_L_Looter_SG_F.sqf"] call BIS_fnc_execVM;
            };
			class I_L_Looter_SMG_F {
                displayName = "Looter (SMG)";
                description = "This is a looter (SMG).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_L_Looter_SMG_F.sqf"] call BIS_fnc_execVM;
            };
			class I_L_Criminal_SG_F {
                displayName = "Criminal (Shotgun)";
                description = "This is a criminal (Shotgun).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_L_Criminal_SG_F.sqf"] call BIS_fnc_execVM;
            };
			class I_L_Criminal_SMG_F {
                displayName = "Criminal (SMG)";
                description = "This is a criminal (SMG).";
                price = 2000;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_L_Criminal_SMG_F.sqf"] call BIS_fnc_execVM;
            };
			class I_L_Hunter_F {
                displayName = "Hunter (Rifle)";
                description = "This is a hunter (Rifle).";
                price = 2500;
                amount = 1;
                stock = 9999;
				code = [player,"scripts\mercenaries_1\I_L_Hunter_F.sqf"] call BIS_fnc_execVM;
            };
			
		};
	};