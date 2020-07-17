  //buyables set/store:
    class bugStore_2 {
        //category:  
    
	class Rother {
            kindOf = "other";
            displayName = "BETA Tester Store";
            tracking = 0;
            //items of this category:

			class Land_Money_F {
                displayName = "500,000 Credits";
                description = "This gives you 500,000 Cr.";
                price = 0;
                amount = 1;
                stock = 99999;
				code = [player,"scripts\500k.sqf"] call BIS_fnc_execVM;
            };
			class Land_Pillow_camouflage_F {
                displayName = "6 hours of sleep";
                description = "This advances time 6 hours.";
                price = 0;
                amount = 1;
                stock = 99999;
				code = "if (isServer) then {skipTime 6}";
            };
			class B_Quadbike_01_F {
                displayName = "Remove All Quad Bikes";
                description = "This removes all quad bikes from the map.";
                price = 0;
                amount = 1;
                stock = 99999;
				code = [player,"scripts\deleteQuads.sqf"] call BIS_fnc_execVM;
            };
			class B_Slingload_01_Ammo_F {
                displayName = "Reset Store";
                description = "This resets the store...hopefully.";
                price = 0;
                amount = 1;
                stock = 99999;
				code = [player,"scripts\resetStore_2.sqf"] call BIS_fnc_execVM;
            };
		};
    };