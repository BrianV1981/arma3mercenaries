    //buyables set/store:
    class aliveStore_2 {

        //category:  
		class Nother {
            displayName = "Combat Support (NATO)";
            kindOf = "Other";
			tracking = 1;
			
			class B_MRAP_01_F {
                displayName = "ALiVE M-ATV Transport (120 Minutes)";
                description = "This M-ATV Transport can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT15.sqf'}";
            };
			class B_Truck_01_transport_F {
                displayName = "ALiVE HEMTT Transport (120 Minutes)";
                description = "This HEMTT Transport can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT6.sqf'}";
            };
			class B_Truck_01_medical_F {
                displayName = "ALiVE HEMTT Medical (120 Minutes)";
                description = "This HEMTT Medical can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT14.sqf'}";
            };
			class B_Truck_01_fuel_F {
                displayName = "ALiVE HEMTT Fuel (120 Minutes)";
                description = "This HEMTT Fuel can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 30000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT11.sqf'}";
            };
			class B_Truck_01_Repair_F {
                displayName = "ALiVE HEMTT Repair (120 Minutes)";
                description = "This HEMTT Repair can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 35000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT12.sqf'}";
            };
			class B_Truck_01_ammo_F {
                displayName = "ALiVE HEMTT Ammo (120 Minutes)";
                description = "This HEMTT Ammo can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 50000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT13.sqf'}";
            };
			class B_MRAP_01_hmg_F {
                displayName = "ALiVE M-ATV (HMG) (120 Minutes)";
                description = "This M-ATV (HMG) can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 50000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT16.sqf'}";
            };
			class B_MRAP_01_gmg_F {
                displayName = "ALiVE M-ATV (GMG) (120 Minutes)";
                description = "This M-ATV (GMG) can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 50000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT17.sqf'}";
            };
			class B_APC_Tracked_01_rcws_F {
                displayName = "ALiVE Namer Transport (120 Minutes)";
                description = "This Namer Transport can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 75000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT8.sqf'}";
            };
			class B_APC_Wheeled_01_cannon_F {
                displayName = "ALiVE Badger IFV Transport (120 Minutes)";
                description = "This Badger IFV transport can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 75000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT9.sqf'}";
            };
			class B_APC_Tracked_01_AA_F {
                displayName = "ALiVE Bardelas (AA) (120 Minutes)";
                description = "This Bardelas (AA) can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 75000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT18.sqf'}";
            };
			class B_MBT_01_TUSK_F {
                displayName = "ALiVE Merkava MK IV LIC Transport (120 Minutes)";
                description = "This Merkava MK IV LIC transport can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 150000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT10.sqf'}";
            };
			class B_Heli_Light_01_F {
                displayName = "ALiVE MH-9 Hummingbird Transport (120 Minutes)";
                description = "Purchasing this will give you 120 minutes of access to a MH-9 Hummingbird transport helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT3.sqf'}";
            };
			class B_Heli_Transport_01_F {
                displayName = "ALiVE UH-80 Ghost Hawk Transport (120 Minutes)";
                description = "Purchasing this will give you 120 minutes of access to a UH-80 Ghost Hawk transport helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 40000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT1.sqf'}";
            };
			class B_Heli_Transport_03_F {
                displayName = "ALiVE CH-67 Huron Transport (120 Minutes)";
                description = "Purchasing this will give you 120 minutes of access to a CH-67 Huron transport helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 70000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT2.sqf'}";
            };
			class B_Heli_Attack_01_F {
                displayName = "ALiVE RAH-66 Comanchie Combat Support (60 Minutes)";
                description = "Purchasing this will give you 60 minutes of access to a RAH-66 Comanchie combat support helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\CAS1.sqf'}";
            };
			class B_Plane_CAS_01_F {
                displayName = "ALiVE A-10D Thunderbolt II Combat Support (60 Minutes)";
                description = "This A-10D Thunderbolt II combat support jet can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 50000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\CAS2.sqf'}";
            };
			class B_Plane_Fighter_01_F {
                displayName = "ALiVE F/A-181 Black Wasp II Combat Support (60 Minutes)";
                description = "This F/A-181 Black Wasp II combat support jet can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 100000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\CAS3.sqf'}";
            };
			class B_Plane_Fighter_01_Stealth_F {
                displayName = "ALiVE F/A-181 Black Wasp II (Stealth) Combat Support (60 Minutes)";
                description = "This F/A-181 Black Wasp II (Stealth) combat support jet can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 150000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\CAS4.sqf'}";
            };
			class B_MBT_01_mlrs_F {
                displayName = "ALiVE Seara Combat Support (60 Minutes)";
                description = "This Seara combat support artillery can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 50000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\ARTY2.sqf'}";
            };
			class B_MBT_01_arty_F {
                displayName = "ALiVE Sholef Combat Support (60 Minutes)";
                description = "This Sholef combat support artillery can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 100000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\ARTY1.sqf'}";
            };
	};
		//category:
		class Iother {
            displayName = "Combat Support (INDEPENDENT)";
            kindOf = "Other";
			tracking = 1;
			
			class I_MRAP_03_F {
                displayName = "ALiVE Fennek Transport (120 Minutes)";
                description = "This Fennek Transport can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT24.sqf'}";
            };
			class I_Truck_02_transport_F {
                displayName = "ALiVE KamAZ Transport (120 Minutes)";
                description = "This KamAZ Transport can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT7.sqf'}";
            };
			class I_Truck_02_medical_F {
                displayName = "ALiVE KamAZ Medical (120 Minutes)";
                description = "This KamAZ Medical can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT23.sqf'}";
            };
			class I_Truck_02_fuel_F {
                displayName = "ALiVE KamAZ Fuel (120 Minutes)";
                description = "This KamAZ Fuel can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 30000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT22.sqf'}";
            };
			class I_Truck_02_box_F {
                displayName = "ALiVE KamAZ Repair (120 Minutes)";
                description = "This KamAZ Repair can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 35000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT21.sqf'}";
            };
			class I_Truck_02_ammo_F {
                displayName = "ALiVE KamAZ Ammo (120 Minutes)";
                description = "This KamAZ Ammo can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 50000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT20.sqf'}";
            };
			class I_MRAP_03_hmg_F {
                displayName = "ALiVE Fennek (HMG) (120 Minutes)";
                description = "This Fennek (HMG) can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 50000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT25.sqf'}";
            };
			class I_MRAP_03_gmg_F {
                displayName = "ALiVE Fennek (GMG) (120 Minutes)";
                description = "This Fennek (GMG) can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 50000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT26.sqf'}";
            };
			class I_APC_Wheeled_03_cannon_F {
                displayName = "ALiVE Pandur II Transport (120 Minutes)";
                description = "This Pandur II Transport can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 75000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT27.sqf'}";
            };
			class I_APC_tracked_03_cannon_F {
                displayName = "ALiVE FV510 Warrior Transport (120 Minutes)";
                description = "This FV510 Warrior Transport can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 75000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT28.sqf'}";
            };
			class B_MBT_01_TUSK_F {
                displayName = "ALiVE Leopard 2SG (120 Minutes)";
                description = "This Leopard 2SG can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 150000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT19.sqf'}";
            };
			class I_Heli_light_03_unarmed_F {
                displayName = "ALiVE AW159 Wildcat (Unarmed) Transport (120 Minutes)";
                description = "Purchasing this will give you 120 minutes of access to a AW159 Wildcat (Unarmed) transport helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT4.sqf'}";
            };
			class I_Heli_Transport_02_F {
                displayName = "ALiVE W101 Merlin Transport (120 Minutes)";
                description = "Purchasing this will give you 120 minutes of access to a W101 Merlin transport helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 70000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\TRANSPORT5.sqf'}";
            };
			class I_Heli_light_03_dynamicLoadout_F {
                displayName = "AW159 Wildcat (CAS) (60 Minutes)";
                description = "Purchasing this will give you 60 minutes of access to a AW159 Wildcat (CAS) combat support helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\CAS5.sqf'}";
            };
			class I_Plane_Fighter_03_dynamicLoadout_F {
                displayName = "ALiVE L-159 ALCA Combat Support (60 Minutes)";
                description = "This L-159 ALCA combat support jet can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 100000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\CAS6.sqf'}";
            };
			class I_Plane_Fighter_04_F {
                displayName = "ALiVE JAS 39 Gripen Combat Support (60 Minutes)";
                description = "This JAS 39 Gripen combat support jet can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 150000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\CAS7.sqf'}";
            };
			class I_Truck_02_MRL_F {
                displayName = "ALiVE KamAZ MRL (60 Minutes)";
                description = "This KamAZ MRL combat support artillery can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 100000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\combat_support\ARTY3.sqf'}";
            };
	};	
};