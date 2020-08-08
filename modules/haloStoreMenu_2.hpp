    //buyables set/store:
    class haloStore_2 {

        //category:  
		class other {
            displayName = "Emergency HAHO/HALO Jump";
            kindOf = "Other";
			tracking = 1;

			class B_T_VTOL_01_infantry_F {
                displayName = "5 Minute HALO/HAHO Solo Jump (Emergency)";
                description = "***WARNING***IT IS RECOMMENDED TO CARRY YOUR BACKPACK WITH ALiVE PLAYER LOGISTICS***When exiting the store, your map will automatically be opened after 5 minutes. If you left click on the map you will be HALO dropped at that location! You can save your HALO drop until the next time that you left click on the map! In military operations, HALO is also used for delivering equipment, supplies, or personnel, while HAHO is generally used exclusively for personnel.";
                price = 10000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\MGI_HALOcustom_3.sqf'}";
            };
			class B_T_VTOL_01_vehicle_F {
                displayName = "5 Minute Emergency HALO/HAHO AI Group Jump (Emergency)";
                description = "***WARNING***IT IS RECOMMENDED TO CARRY YOUR BACKPACK WITH ALiVE PLAYER LOGISTICS***When exiting the store, your map will automatically be opened after 5 minutes. If you left click on the map all grouped AI units and yourself will be HALO dropped at that location! You can save your group HALO drop until the next time that you left click on the map! In military operations, HALO is also used for delivering equipment, supplies, or personnel, while HAHO is generally used exclusively for personnel.";
                price = 30000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\MGI_HALOcustom_4.sqf'}";
            };
	};
};