    //buyables set/store:
    class haloStore_1 {

        //category:  
		class other {
            displayName = "HAHO/HALO Jump";
            kindOf = "Other";
			tracking = 1;

			class B_T_VTOL_01_infantry_F {
                displayName = "HALO/HAHO Solo Jump";
                description = "***WARNING***IT IS RECOMMENDED TO CARRY YOUR BACKPACK WITH ALiVE PLAYER LOGISTICS***When exiting the store, your map will automatically be opened. If you left click on the map you will be HALO dropped at that location! You can save your HALO drop until the next time that you left click on the map! In military operations, HALO is also used for delivering equipment, supplies, or personnel, while HAHO is generally used exclusively for personnel.";
                price = 5000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\MGI_HALOcustom_1.sqf'}";
            };
			class B_T_VTOL_01_vehicle_F {
                displayName = "HALO/HAHO AI Group Jump";
                description = "***WARNING***IT IS RECOMMENDED TO CARRY YOUR BACKPACK WITH ALiVE PLAYER LOGISTICS***When exiting the store, your map will automatically be opened. If you left click on the map all grouped AI units and yourself will be HALO dropped at that location! You can save your group HALO drop until the next time that you left click on the map! In military operations, HALO is also used for delivering equipment, supplies, or personnel, while HAHO is generally used exclusively for personnel.";
                price = 15000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\MGI_HALOcustom_2.sqf'}";
            };
	};
};