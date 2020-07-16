  //buyables set/store:
    class bugStore_1 {
        //category:  
    
	class Rother {
            kindOf = "other";
            displayName = "BETA Tester Store";
            tracking = 0;
            //items of this category:

			class Land_Money_F {
                displayName = "500,000 Credits";
                description = "500,000 Credits";
                price = 0;
                amount = 1;
                stock = 99999;
				code = [player,"scripts\500k.sqf"] call BIS_fnc_execVM;
            };
			class Land_Pillow_camouflage_F {
                displayName = "6 hours of sleep";
                description = "6 hours of sleep";
                price = 0;
                amount = 1;
                stock = 99999;
				code = "if (isServer) then {skipTime 6}";
            };
			class B_Slingload_01_Ammo_F {
                displayName = "Reset Store";
                description = "This resets the location of the black market store cargo container.";
                price = 0;
                amount = 1;
                stock = 99999;
				code = [player,"scripts\resetStore_1.sqf"] call BIS_fnc_execVM;
            };
		};
    };