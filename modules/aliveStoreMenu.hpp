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
		code = [player,"scripts\CAS1.sqf"] call BIS_fnc_execVM;
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
			
	};			
};
