  //buyables set/store:
    class bugStore_2 {
        //category:  
    
	class Rother {
            kindOf = "other";
            displayName = "BETA Tester Store";
            tracking = 1;
            //items of this category:

			class Land_Money_F {
                displayName = "25,000 Credits";
                description = "This gives you 25,000 Cr.";
                price = 0;
                amount = 1;
                stock = 99999;
				code = [player,25000] call grad_lbm_fnc_addFunds;
            };
			class Land_File1_F {
                displayName = "50,000 Credits";
                description = "This gives you 50,000 Cr.";
                price = 0;
                amount = 1;
                stock = 99999;
				code = [player,50000] call grad_lbm_fnc_addFunds;
            };
			class Land_File2_F {
                displayName = "100,000 Credits";
                description = "This gives you 100,000 Cr.";
                price = 0;
                amount = 1;
                stock = 99999;
				code = [player,100000] call grad_lbm_fnc_addFunds;
            };
			class Land_FilePhotos_F {
                displayName = "500,000 Credits";
                description = "This gives you 500,000 Cr.";
                price = 0;
                amount = 1;
                stock = 99999;
				code = [player,500000] call grad_lbm_fnc_addFunds;
            };
			class Land_Map_F {
                displayName = "1,000,000 Credits";
                description = "This gives you 1,000,000 Cr.";
                price = 0;
                amount = 1;
                stock = 99999;
				code = [player,1000000] call grad_lbm_fnc_addFunds;
            };
			class Land_Pillow_camouflage_F {
                displayName = "6 hours of sleep";
                description = "This advances time 6 hours.";
                price = 0;
                amount = 1;
                stock = 99999;
				code = "if (isServer) then {skipTime 6}";
            };
			class gm_xx_civ_bicycle_01 {
                displayName = "Remove All Bikes";
                description = "This removes all bikes from the map.";
                price = 0;
                amount = 1;
                stock = 99999;
				code = [player,"scripts\deleteBikes.sqf"] call BIS_fnc_execVM;
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