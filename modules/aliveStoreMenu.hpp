    //buyables set/store:
    class aliveStore {

        //category:  
		class other {
            displayName = "ALiVE Combat Air Support";
            kindOf = "Other";

			class B_Heli_Attack_01_F {
                displayName = "ALiVE RAH-66 Comanchie Combat Support (30 Minutes)";
                description = "Purchasing this will give you 30 minutes of access to a RAH-66 Comanchie combat support helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 75000;
                stock = 100;
		code = _handle = [] execVM "scripts\CAS1.sqf";
            };
			class B_Plane_CAS_01_F {
                displayName = "ALiVE A-10D Thunderbolt II Combat Support (30 Minutes)";
                description = "This A-10D Thunderbolt II combat support jet can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 10000;
                stock = 100;
		code = [player,"scripts\CAS2.sqf"] call BIS_fnc_execVM;
            };
			class B_Plane_Fighter_01_F {
                displayName = "ALiVE F/A-181 Black Wasp II Combat Support (30 Minutes)";
                description = "This F/A-181 Black Wasp II combat support jet can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 150000;
                stock = 100;
		code = [player,"scripts\CAS3.sqf"] call BIS_fnc_execVM;
            };
			class B_Plane_Fighter_01_Stealth_F {
                displayName = "ALiVE F/A-181 Black Wasp II (Stealth) Combat Support (30 Minutes)";
                description = "This F/A-181 Black Wasp II (Stealth) combat support jet can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 200000;
                stock = 100;
		code = [player,"scripts\CAS4.sqf"] call BIS_fnc_execVM;
            };
			class B_MBT_01_arty_F {
                displayName = "**BROKEN**ALiVE Sholef Combat Support (30 Minutes)";
                description = "**BROKEN**DO NOT BUY**This Sholef combat support artillery can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 50000;
                stock = 100;
		code = [player,"ARTY1.sqf"] call BIS_fnc_execVM;
            };
			class B_Heli_Light_01_F {
                displayName = "**BROKEN**ALiVE MH-9 Hummingbird Transport (30 Minutes)";
                description = "**BROKEN**DO NOT BUY**Purchasing this will give you 30 minutes of access to a MH-9 Hummingbird transport helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 20000;
                stock = 100;
		code = _handle = [] execVM "scripts\CAS1.sqf";
            };
			class B_Heli_Transport_01_F {
                displayName = "**BROKEN**ALiVE UH-80 Ghost Hawk Transport (30 Minutes)";
                description = "**BROKEN**DO NOT BUY**Purchasing this will give you 30 minutes of access to a UH-80 Ghost Hawk transport helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 50000;
                stock = 100;
		code = [player,"TRANSPORT1.sqf"] call BIS_fnc_execVM;
            };
			class B_Heli_Transport_03_F {
                displayName = "**BROKEN**ALiVE CH-67 Huron Transport (30 Minutes)";
                description = "**BROKEN**DO NOT BUY**Purchasing this will give you 30 minutes of access to a CH-67 Huron transport helicoptor, that can be utilized from your Ace Self Interact Menu > ALiVE > ALiVE Combat Support.";
                price = 100000;
                stock = 100;
		code = [player,"TRANSPORT2.sqf"] call BIS_fnc_execVM;
            };
	};			
};
