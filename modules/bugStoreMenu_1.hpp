  //buyables set/store:
    class bugStore_1 {
        //category:  
    
	class Rother {
            kindOf = "other";
            displayName = "BETA Tester Store";
            tracking = 1;
            //items of this category:
			
			class Land_Pillow_camouflage_F {
                displayName = "6 hours of sleep";
                description = "This advances time 6 hours.";
                price = 0;
                amount = 1;
                stock = 99999;
				code = "if (isServer) then {skipTime 6}";
            };
			class B_Slingload_01_Ammo_F {
                displayName = "Reset Store";
                description = "This resets the store...hopefully.";
                price = 0;
                amount = 1;
                stock = 99999;
				code = [player,"scripts\resetStore_1.sqf"] call BIS_fnc_execVM;
            };
		};
    };