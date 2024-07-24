    //buyables set/store:
    class nukeStore_1 {
        //category:  
    
		class Vitems {
            kindOf = "Items";
            displayName = "Vehicle Keys and Special Weapons Vehicles";
            tracking = 1;
            //items of this category:

			class ACE_key_master {
                displayName = "Vehicle Key: Master"; 
                description = "Vehicle Key: Master";
                price = 0;
                stock = 99999;
            };
			class O_T_Truck_03_device_ghex_F {
                displayName = "Special Weapon Typhoon (1kT)"; 
                description = "***1,000,000 Cr.***WARNING***THIS ITEM WILL NOT PERSIST THROUGH SERVER RESTARTS***The Device. You can activate the nuke with your radio. Backspace > Reply > Radio. (Slingload: No) (Slingloadable: Yes)";
                price = 1000000;
				stock = 1;
				kindOf = "other";
				code = "[player,'scripts\nukes\createNuke_1.sqf'] call BIS_fnc_execVM;[player,'scripts\nukes\nukeTrigger_1.sqf'] call BIS_fnc_execVM;hint 'You just purchased a nuke! You can activate the nuke with your radio. Backspace > Reply > Radio.';";
            };
			class O_Truck_03_device_F {
                displayName = "Special Weapon Typhoon (5kT)"; 
                description = "***5,000,000 Cr.***WARNING***THIS ITEM WILL NOT PERSIST THROUGH SERVER RESTARTS***The Device. You can activate the nuke with your radio. Backspace > Reply > Radio. (Slingload: No) (Slingloadable: Yes)";
                price = 5000000;
				stock = 1;
				kindOf = "other";
				code = "[player,'scripts\nukes\createNuke_2.sqf'] call BIS_fnc_execVM;[player,'scripts\nukes\nukeTrigger_2.sqf'] call BIS_fnc_execVM;hint 'You just purchased a nuke! You can activate the nuke with your radio. Backspace > Reply > Radio.';";
            };
			class Land_Device_assembled_F {
                displayName = "Special Weapon Typhoon (10kT)"; 
                description = "***10,000,000 Cr.***WARNING***THIS ITEM WILL NOT PERSIST THROUGH SERVER RESTARTS***The Device. You can activate the nuke with your radio. Backspace > Reply > Radio. (Slingloadable: Yes)";
                price = 10000000;
				stock = 1;
				kindOf = "other";
				code = "[player,'scripts\nukes\createNuke_3.sqf'] call BIS_fnc_execVM;[player,'scripts\nukes\nukeTrigger_3.sqf'] call BIS_fnc_execVM;hint 'You just purchased a nuke! You can activate the nuke with your radio. Backspace > Reply > Radio.';";
            };
			class Land_Device_disassembled_F {
                displayName = "Special Weapon Typhoon (25kT)"; 
                description = "***25,000,000 Cr.***WARNING***THIS ITEM WILL NOT PERSIST THROUGH SERVER RESTARTS***The Device. You can activate the nuke with your radio. Backspace > Reply > Radio. (Slingloadable: Yes)";
                price = 1000000;
				stock = 1;
				kindOf = "other";
				code = "[player,'scripts\nukes\createNuke_4.sqf'] call BIS_fnc_execVM;[player,'scripts\nukes\nukeTrigger_4.sqf'] call BIS_fnc_execVM;hint 'You just purchased a nuke! You can activate the nuke with your radio. Backspace > Reply > Radio.';";
            };
			class O_T_Truck_03_ammo_ghex_F {
                displayName = "Special Weapon Typhoon (50kT)"; 
                description = "***50,000,000 Cr.***WARNING***THIS ITEM WILL NOT PERSIST THROUGH SERVER RESTARTS***The Device. You can activate the nuke with your radio. Backspace > Reply > Radio. (Slingloadable: Yes)";
                price = 50000000;
				stock = 1;
				kindOf = "other";
				code = "[player,'scripts\nukes\createNuke_5.sqf'] call BIS_fnc_execVM;[player,'scripts\nukes\nukeTrigger_5.sqf'] call BIS_fnc_execVM;hint 'You just purchased a nuke! You can activate the nuke with your radio. Backspace > Reply > Radio.';";
            };
		};
	};