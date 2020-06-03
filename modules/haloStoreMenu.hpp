    //buyables set/store:
    class haloStore {

        //category:  
		class other {
            displayName = "HAHO/HALO Jump";
            kindOf = "Other";

			class B_T_VTOL_01_infantry_F {
                displayName = "HALO/HAHO Group Jump";
                description = "In military operations, HALO is also used for delivering equipment, supplies, or personnel, while HAHO is generally used exclusively for personnel. In typical HALO/HAHO insertions the troops jump from altitudes between 15,000 feet (4,600 m) and 35,000 feet (11,000 m).";
                price = 5000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\MGI_HALOcustom_1.sqf'}";
            };
			class B_T_VTOL_01_vehicle_F {
                displayName = "HALO/HAHO Group Jump";
                description = "In military operations, HALO is also used for delivering equipment, supplies, or personnel, while HAHO is generally used exclusively for personnel. In typical HALO/HAHO insertions the troops jump from altitudes between 15,000 feet (4,600 m) and 35,000 feet (11,000 m).";
                price = 15000;
                stock = 100;
		code = "if (player == (_this select 0)) then {execVM 'scripts\MGI_HALOcustom_2.sqf'}";
            };
	};
};
