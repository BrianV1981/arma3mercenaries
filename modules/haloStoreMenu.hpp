    //buyables set/store:
    class haloStore {

        //category:  
		class other {
            displayName = "HAHO/HALO Jump";
            kindOf = "Other";

			class B_T_VTOL_01_infantry_F {
                displayName = "HALO/HAHO Solo Jump";
                description = "**WARNING**When exiting the store, your map will autmatically be opened. If you left click on the map you will be HALO dropped at that location! You can save your HALO drop until the next time that you left click on the map!***In military operations, HALO is also used for delivering equipment, supplies, or personnel, while HAHO is generally used exclusively for personnel.";
                price = 5000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\MGI_HALOcustom_1.sqf'}";
            };
			class B_T_VTOL_01_vehicle_F {
                displayName = "HALO/HAHO Group Jump";
                description = "**WARNING**When exiting the store, your map will autmatically be opened. If you left click on the map grouped AI units and yourself will be HALO dropped at that location! You can save your group HALO drop until the next time that you left click on the map!***In military operations, HALO is also used for delivering equipment, supplies, or personnel, while HAHO is generally used exclusively for personnel.";
                price = 15000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\MGI_HALOcustom_2.sqf'}";
            };
	};
};