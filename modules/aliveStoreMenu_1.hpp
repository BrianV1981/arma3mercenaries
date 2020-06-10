    //buyables set/store:
    class aliveStore_1 {

        //category:  
		class Nother {
            displayName = "Combat Support (NATO)";
            kindOf = "Other";
			
			class B_Truck_01_transport_F {
                displayName = "ALiVE HEMTT Transport (60 Minutes)";
                description = "This HEMTT Transport can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\TRANSPORT6.sqf'}";
            };
			class B_APC_Tracked_01_rcws_F {
                displayName = "ALiVE Namer Transport (60 Minutes)";
                description = "This Namer Transport can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 75000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\TRANSPORT8.sqf'}";
            };
			class B_Heli_Light_01_F {
                displayName = "ALiVE MH-9 Hummingbird Transport (60 Minutes)";
                description = "Purchasing this will give you 60 minutes of access to a MH-9 Hummingbird transport helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\TRANSPORT3.sqf'}";
            };
			class B_Heli_Transport_01_F {
                displayName = "ALiVE UH-80 Ghost Hawk Transport (60 Minutes)";
                description = "Purchasing this will give you 60 minutes of access to a UH-80 Ghost Hawk transport helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 40000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\TRANSPORT1.sqf'}";
            };
			class B_Heli_Transport_03_F {
                displayName = "ALiVE CH-67 Huron Transport (60 Minutes)";
                description = "Purchasing this will give you 60 minutes of access to a CH-67 Huron transport helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 70000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\TRANSPORT2.sqf'}";
            };
			class B_Heli_Attack_01_F {
                displayName = "ALiVE RAH-66 Comanchie Combat Support (30 Minutes)";
                description = "Purchasing this will give you 30 minutes of access to a RAH-66 Comanchie combat support helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\CAS1.sqf'}";
            };
			class B_Plane_CAS_01_F {
                displayName = "ALiVE A-10D Thunderbolt II Combat Support (30 Minutes)";
                description = "This A-10D Thunderbolt II combat support jet can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 50000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\CAS2.sqf'}";
            };
			class B_Plane_Fighter_01_F {
                displayName = "ALiVE F/A-181 Black Wasp II Combat Support (30 Minutes)";
                description = "This F/A-181 Black Wasp II combat support jet can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 100000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\CAS3.sqf'}";
            };
			class B_Plane_Fighter_01_Stealth_F {
                displayName = "ALiVE F/A-181 Black Wasp II (Stealth) Combat Support (30 Minutes)";
                description = "This F/A-181 Black Wasp II (Stealth) combat support jet can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 150000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\CAS4.sqf'}";
            };
			class B_MBT_01_mlrs_F {
                displayName = "ALiVE Seara Combat Support (30 Minutes)";
                description = "This Seara combat support artillery can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 50000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\ARTY2.sqf'}";
            };
			class B_MBT_01_arty_F {
                displayName = "ALiVE Sholef Combat Support (30 Minutes)";
                description = "This Sholef combat support artillery can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 100000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\ARTY1.sqf'}";
            };
	};
		//category:
		class Iother {
            displayName = "Combat Support (INDEPENDENT)";
            kindOf = "Other";
			
			class I_Truck_02_transport_F {
                displayName = "ALiVE Zamak Transport (60 Minutes)";
                description = "This Zamak Transport can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\TRANSPORT7.sqf'}";
            };
			class I_Heli_light_03_unarmed_F {
                displayName = "ALiVE AW159 Wildcat (Unarmed) Transport (60 Minutes)";
                description = "Purchasing this will give you 60 minutes of access to a AW159 Wildcat (Unarmed) transport helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\TRANSPORT4.sqf'}";
            };
			class I_Heli_Transport_02_F {
                displayName = "ALiVE W101 Merlin Transport (60 Minutes)";
                description = "Purchasing this will give you 60 minutes of access to a W101 Merlin transport helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 70000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\TRANSPORT5.sqf'}";
            };
			class I_Heli_light_03_dynamicLoadout_F {
                displayName = "AW159 Wildcat (CAS) (30 Minutes)";
                description = "Purchasing this will give you 30 minutes of access to a AW159 Wildcat (CAS) combat support helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 25000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\CAS5.sqf'}";
            };
			class I_Plane_Fighter_03_dynamicLoadout_F {
                displayName = "ALiVE L-159 ALCA Combat Support (30 Minutes)";
                description = "This L-159 ALCA combat support jet can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 100000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\CAS6.sqf'}";
            };
			class I_Plane_Fighter_04_F {
                displayName = "ALiVE JAS 39 Gripen Combat Support (30 Minutes)";
                description = "This JAS 39 Gripen combat support jet can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 150000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\CAS7.sqf'}";
            };
			class I_Truck_02_MRL_F {
                displayName = "ALiVE Zamak MRL (30 Minutes)";
                description = "This Zamak MRL combat support artillery can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 100000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\ARTY3.sqf'}";
            };
	};	
};