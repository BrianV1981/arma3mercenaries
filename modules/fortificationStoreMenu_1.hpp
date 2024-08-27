//buyables set/store:
class fortificationStore_1 {
		
		//category:
		class fortifications_sandbags {
    displayName = "Fortifications: Sandbags, H-Barriers and Razor Wire";
    kindOf = "other";
    tracking = 0;
	
	    // ACE Items
    class ACE_EntrenchingTool {
        displayName = "ACE Entrenching Tool";
        description = "The ACE entrenching tool can be utilized to dig trenches with the ACE self interaction menu.";
        price = 0;
        stock = 10000;
        kindOf = Items;
    };
    class ACE_wirecutter {
        displayName = "ACE Wire Cutter";
        description = "The ACE wire cutter can be used to cut concertina wire and fences. Utilize with the ACE interaction menu.";
        price = 20;
        stock = 10000;
        kindOf = Items;
    };
    class ACE_ConcertinaWireCoil {
        displayName = "ACE Concertina Wire Coil";
        description = "The ACE Concertina Wire Coil can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 10;
        stock = 1000;
        code = "if (player == (_this select 0)) then {[container_1,'ACE_ConcertinaWireCoil'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	class Land_Razorwire_F {
                displayName = "Razorwire Barrier";
                description = "The razorwire barrier can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 1000;
				code = "if (player == (_this select 0)) then {[container_1,'Land_Razorwire_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };

    class ACE_Sandbag_empty {
        displayName = "ACE Sandbag (empty)";
        description = "The ACE Sandbag (empty) can be utilized with the ACE self interaction menu.";
        price = 0;
        stock = 10000;
        kindOf = Items;
    };
    class Land_BagFence_Corner_F {
        displayName = "Sandbag Wall (Corner)";
        description = "Sandbag Wall (Corner) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 10;
        stock = 200;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BagFence_Corner_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_BagFence_End_F {
        displayName = "Sandbag Wall (End)";
        description = "Sandbag Wall (End) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 10;
        stock = 200;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BagFence_End_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_BagFence_Round_F {
        displayName = "Sandbag Wall (Round)";
        description = "Sandbag Wall (Round) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 20;
        stock = 200;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BagFence_Round_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_BagFence_Short_F {
        displayName = "Sandbag Wall (Short)";
        description = "Sandbag Wall (Short) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 15;
        stock = 200;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BagFence_Short_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_BagFence_Long_F {
        displayName = "Sandbag Wall (Long)";
        description = "Sandbag Wall (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 20;
        stock = 200;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BagFence_Long_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_SandbagBarricade_01_half_F {
        displayName = "Sandbag Barricade (Short)";
        description = "Sandbag Barricade (Short) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 40;
        stock = 200;
        code = "if (player == (_this select 0)) then {[container_1,'Land_SandbagBarricade_01_half_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_SandbagBarricade_01_F {
        displayName = "Sandbag Barricade (Tall)";
        description = "Sandbag Barricade (Tall) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 45;
        stock = 200;
        code = "if (player == (_this select 0)) then {[container_1,'Land_SandbagBarricade_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_SandbagBarricade_01_hole_F {
        displayName = "Sandbag Barricade (Tall, Hole)";
        description = "Sandbag Barricade (Tall, Hole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 50;
        stock = 200;
        code = "if (player == (_this select 0)) then {[container_1,'Land_SandbagBarricade_01_hole_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	    // H-Barriers
		class Land_HBarrier_1_F {
                displayName = "H-barrier (Block)";
                description = "H-barrier (Block) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_HBarrier_1_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HBarrier_3_F {
                displayName = "H-barrier (3 Blocks)";
                description = "H-barrier (3 Blocks) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 300;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_HBarrier_3_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HBarrier_5_F {
                displayName = "H-barrier (5 Blocks)";
                description = "H-barrier (5 Blocks) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_HBarrier_5_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HBarrierBig_F {
                displayName = "H-barrier (Big, 4 Blocks)";
                description = "H-barrier (Big, 4 Blocks) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_HBarrierBig_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HBarrierWall4_F {
                displayName = "H-barrier Wall (Short)";
                description = "H-barrier Wall (Short) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 600;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_HBarrierWall4_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HBarrierWall6_F {
                displayName = "H-barrier Wall (Long)";
                description = "H-barrier Wall (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_HBarrierWall6_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HBarrierWall_corner_F {
                displayName = "H-barrier Wall (Corner)";
                description = "H-barrier Wall (Corner) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 800;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_HBarrierWall_corner_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HBarrierWall_corridor_F {
                displayName = "H-barrier Corridor";
                description = "H-barrier Corridor can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_HBarrierWall_corridor_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
	
			
};		
		
		//category:
		class fortifications_roadBarriers {
    displayName = "Fortifications: Road Barriers, Gates, and Obstacles";
    kindOf = "other";
    tracking = 0;


    class Land_CzechHedgehog_01_new_F {
        displayName = "Czech Hedgehog (New)";
        description = "Czech Hedgehog (New) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_CzechHedgehog_01_new_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
	};
    // Dragon's Teeth
    class Land_DragonsTeeth_01_1x1_old_F {
        displayName = "Dragon's Tooth (Single, old)";
        description = "Dragon's Tooth (Single, old) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_DragonsTeeth_01_1x1_old_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_DragonsTeeth_01_4x2_new_F {
        displayName = "Dragon's Teeth (Row, new)";
        description = "Dragon's Teeth (Row, new) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 250;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_DragonsTeeth_01_4x2_new_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_DragonsTeeth_01_4x2_old_F {
        displayName = "Dragon's Teeth (Row, old)";
        description = "Dragon's Teeth (Row, old) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_DragonsTeeth_01_4x2_old_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	
	// concrete barriers
	
	    class Land_Crash_barrier_F {
        displayName = "Safety Barrier";
        description = "Safety Barrier can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 50;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Crash_barrier_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class BlockConcrete_F {
        displayName = "Concrete Block";
        description = "Concrete Block can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'BlockConcrete_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	 class Land_CncBarrier_F {
                displayName = "Concrete Barrier";
                description = "Concrete Barrier can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'Land_CncBarrier_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_CncBarrier_stripes_F {
                displayName = "Concrete Barrier";
                description = "Concrete Barrier can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'Land_CncBarrier_stripes_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_CncBarrierMedium_F {
                displayName = "Concrete Barrier (Medium)";
                description = "Concrete Barrier (Medium) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 250;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'Land_CncBarrierMedium_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_CncBarrierMedium4_F {
                displayName = "Concrete Barrier (Medium, Long)";
                description = "Concrete Barrier (Medium, Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 300;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'Land_CncBarrierMedium4_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };

    class Land_CncShelter_F {
        displayName = "Concrete Shelter";
        description = "Concrete Shelter can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_CncShelter_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	
	// road block gates

	class Land_BarGate_F {
        displayName = "Bar Gate";
        description = "Bar Gate";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BarGate_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	
    class Land_RoadBarrier_01_F {
        displayName = "Bar Gate (v2)";
        description = "Bar Gate (v2) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_RoadBarrier_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	
    // Other Obstacles and Barriers
    class Land_RampConcrete_F {
        displayName = "Concrete Ramp";
        description = "Concrete Ramp can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_RampConcrete_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_RampConcreteHigh_F {
        displayName = "Concrete Ramp (High)";
        description = "Concrete Ramp (High) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_RampConcreteHigh_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class RoadCone_L_F {
        displayName = "Road Cone (Light)";
        description = "Road Cone (Light)";
        price = 75;
        stock = 100;
		 picture = "pictures\arma3mercenaries_v1.paa";  //this is a placeholder picture for bugged items
        code = "if (player == (_this select 0)) then {[container_1,'RoadCone_L_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	
	class Land_PlasticBarrier_01_F {
    displayName = "Plastic Barrier";
    description = "Plastic Barrier can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 30;
    stock = 200;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticBarrier_01_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class PlasticBarrier_01_red_F {
    displayName = "Plastic Barrier (Small, Red, 1)";
    description = "Plastic Barrier (Small, Red, 1) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 25;
    stock = 200;
    code = "if (player == (_this select 0)) then {[container_1,'PlasticBarrier_01_red_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class PlasticBarrier_01_white_F {
    displayName = "Plastic Barrier (Small, White, 1)";
    description = "Plastic Barrier (Small, White, 1) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 25;
    stock = 200;
    code = "if (player == (_this select 0)) then {[container_1,'PlasticBarrier_01_white_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticBarrier_01_line_x2_F {
    displayName = "Plastic Barrier (Small, 2)";
    description = "Plastic Barrier (Small, 2) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 40;
    stock = 200;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticBarrier_01_line_x2_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticBarrier_01_line_x4_F {
    displayName = "Plastic Barrier (Small, 4)";
    description = "Plastic Barrier (Small, 4) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 70;
    stock = 200;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticBarrier_01_line_x4_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticBarrier_01_line_x6_F {
    displayName = "Plastic Barrier (Small, 6)";
    description = "Plastic Barrier (Small, 6) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 200;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticBarrier_01_line_x6_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticBarrier_02_F {
    displayName = "Plastic Barrier";
    description = "Plastic Barrier can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 200;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticBarrier_02_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class PlasticBarrier_02_grey_F {
    displayName = "Plastic Barrier (Medium, Grey)";
    description = "Plastic Barrier (Medium, Grey) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 60;
    stock = 200;
    code = "if (player == (_this select 0)) then {[container_1,'PlasticBarrier_02_grey_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class PlasticBarrier_02_yellow_F {
    displayName = "Plastic Barrier (Medium, Yellow)";
    description = "Plastic Barrier (Medium, Yellow) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 60;
    stock = 200;
    code = "if (player == (_this select 0)) then {[container_1,'PlasticBarrier_02_yellow_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticBarrier_03_F {
    displayName = "Plastic Barrier";
    description = "Plastic Barrier can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 70;
    stock = 200;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticBarrier_03_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class PlasticBarrier_03_blue_F {
    displayName = "Plastic Barrier (Large, Blue)";
    description = "Plastic Barrier (Large, Blue) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 80;
    stock = 200;
    code = "if (player == (_this select 0)) then {[container_1,'PlasticBarrier_03_blue_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class PlasticBarrier_03_orange_F {
    displayName = "Plastic Barrier (Large, Orange)";
    description = "Plastic Barrier (Large, Orange) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 80;
    stock = 200;
    code = "if (player == (_this select 0)) then {[container_1,'PlasticBarrier_03_orange_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};
    class Land_BasaltKerb_01_2m_F {
        displayName = "Basalt Curb (2 m)";
        description = "Basalt Curb (2 m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 50;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BasaltKerb_01_2m_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BasaltKerb_01_4m_F {
        displayName = "Basalt Curb (4 m)";
        description = "Basalt Curb (4 m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BasaltKerb_01_4m_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BasaltKerb_01_platform_F {
        displayName = "Basalt Curbstone Platform";
        description = "Basalt Curbstone Platform can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 150;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BasaltKerb_01_platform_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	
};

		//category:
		class fortifications_bunkers {
        displayName = "Fortifications: Bunkers, Pillboxes, and Watch Towers";
        kindOf = "other";
        tracking = 0;

        // Bunkers
        class Land_BagBunker_Small_F {
            displayName = "Bunker (Small)";
            description = "Bunker (Small) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 500;
            stock = 100;
            code = "if (player == (_this select 0)) then {[container_1,'Land_BagBunker_Small_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
        class Land_BagBunker_Large_F {
            displayName = "Bunker (Large)";
            description = "Bunker (Large) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 1500;
            stock = 200;
            code = "if (player == (_this select 0)) then {[container_1,'Land_BagBunker_Large_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
        class Land_BagBunker_Tower_F {
            displayName = "Bunker (Tower)";
            description = "Bunker (Tower) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 2000;
            stock = 200;
            code = "if (player == (_this select 0)) then {[container_1,'Land_BagBunker_Tower_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
		
		class Land_HBarrierTower_F {
            displayName = "H-barrier Watchtower";
            description = "H-barrier Watchtower can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 2000;
            stock = 200;
            code = "if (player == (_this select 0)) then {[container_1,'Land_HBarrierTower_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };

        // Pillbox Bunkers
        class Land_PillboxBunker_01_hex_F {
            displayName = "Pillbox (Hexagonal)";
            description = "Pillbox (Hexagonal) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 50000;
            stock = 200;
            code = "if (player == (_this select 0)) then {[container_1,'Land_PillboxBunker_01_hex_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
        class Land_PillboxBunker_01_rectangle_F {
            displayName = "Pillbox (Rectangular)";
            description = "Pillbox (Rectangular) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 50000;
            stock = 200;
            code = "if (player == (_this select 0)) then {[container_1,'Land_PillboxBunker_01_rectangle_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
        class Land_PillboxBunker_01_big_F {
            displayName = "Pillbox (Big)";
            description = "Pillbox (Big) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 100000;
            stock = 200;
            code = "if (player == (_this select 0)) then {[container_1,'Land_PillboxBunker_01_big_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };

        // Watchtowers/Guard Towers
		class Land_DeerStand_01_F {
                displayName = "Deer Stand (v1)";
                description = "Deer Stand (v1) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 2000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_DeerStand_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			
		class Land_DeerStand_02_F {
                displayName = "Deer Stand (v2)";
                description = "Deer Stand (v2) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 3000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_DeerStand_02_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_GuardTower_02_F {
                displayName = "Guard Tower (small)";
                description = "The guard tower (small) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_GuardTower_02_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Castle_01_tower_F {
				displayName = "Castle Tower";
				description = "Castle Tower can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
				price = 500000;
				stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'Land_Castle_01_tower_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside; it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};
};

		//category:
		class fortifications_walls {
    displayName = "Fortifications: Walls";
    kindOf = "other";
    tracking = 0;
	
	    class Land_ConcreteWall_03_m_pole_F {
        displayName = "Concrete Wall (v3, Pole)";
        description = "Concrete Wall (v3, Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_ConcreteWall_03_m_pole_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_ConcreteWall_03_m_2m_F {
        displayName = "Concrete Wall (v3, 2m)";
        description = "Concrete Wall (v3, 2m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_ConcreteWall_03_m_2m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_ConcreteWall_03_m_6m_F {
        displayName = "Concrete Wall (v3, 6m)";
        description = "Concrete Wall (v3, 6m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 150;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_ConcreteWall_03_m_6m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_CamoConcreteWall_01_l_4m_v1_F {
        displayName = "Camo Concrete Wall (4m, v1)";
        description = "Camo Concrete Wall (4m, v1) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_CamoConcreteWall_01_l_4m_v1_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_CamoConcreteWall_01_l_4m_v2_F {
        displayName = "Camo Concrete Wall (4m, v2)";
        description = "Camo Concrete Wall (4m, v2) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_CamoConcreteWall_01_l_4m_v2_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_CamoConcreteWall_01_pole_v1_F {
        displayName = "Camo Concrete Wall (Pole)";
        description = "Camo Concrete Wall (Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_CamoConcreteWall_01_pole_v1_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Concrete_SmallWall_4m_F {
        displayName = "Concrete Wall (Small, 4 m)";
        description = "Concrete Wall (Small, 4 m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Concrete_SmallWall_4m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Concrete_SmallWall_8m_F {
        displayName = "Concrete Wall (Small, 8 m)";
        description = "Concrete Wall (Small, 8 m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Concrete_SmallWall_8m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	    class Land_Wall_IndCnc_2deco_F {
        displayName = "Concrete Square Wall";
        description = "Concrete Square Wall can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 150;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Wall_IndCnc_2deco_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Wall_IndCnc_4_F {
        displayName = "Concrete Layered Wall";
        description = "Concrete Layered Wall can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 175;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Wall_IndCnc_4_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Wall_IndCnc_Pole_F {
        displayName = "Concrete Layered Wall (Pillar)";
        description = "Concrete Layered Wall (Pillar) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Wall_IndCnc_Pole_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

	class Land_BrickWall_01_l_5m_F {
        displayName = "Brick Wall (v1, 5m)";
        description = "Brick Wall (v1, 5m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BrickWall_01_l_5m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BrickWall_01_l_pole_F {
        displayName = "Brick Wall (v1, Pole)";
        description = "Brick Wall (v1, Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BrickWall_01_l_pole_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BrickWall_02_l_5m_F {
        displayName = "Brick Wall (v2, 5m)";
        description = "Brick Wall (v2, 5m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BrickWall_02_l_5m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BrickWall_02_l_corner_v1_F {
        displayName = "Brick Wall (v2, Corner, Convex)";
        description = "Brick Wall (v2, Corner, Convex) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BrickWall_02_l_corner_v1_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BrickWall_02_l_corner_v2_F {
        displayName = "Brick Wall (v2, Corner, Concave)";
        description = "Brick Wall (v2, Corner, Concave) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BrickWall_02_l_corner_v2_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BrickWall_03_l_5m_v1_F {
        displayName = "Brick Wall (v3, 5m, Left)";
        description = "Brick Wall (v3, 5m, Left) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BrickWall_03_l_5m_v1_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BrickWall_03_l_5m_v2_F {
        displayName = "Brick Wall (v3, 5m, Right)";
        description = "Brick Wall (v3, 5m, Right) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BrickWall_03_l_5m_v2_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BrickWall_03_l_gate_F {
        displayName = "Brick Wall (v3, Gate)";
        description = "Brick Wall (v3, Gate) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 150;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BrickWall_03_l_gate_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BrickWall_03_l_pole_F {
        displayName = "Brick Wall (v3, Pole)";
        description = "Brick Wall (v3, Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BrickWall_03_l_pole_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BrickWall_04_l_5m_F {
        displayName = "Brick Wall (v4, 5m)";
        description = "Brick Wall (v4, 5m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BrickWall_04_l_5m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BrickWall_04_l_5m_old_F {
        displayName = "Brick Wall (v4, 5m, Old)";
        description = "Brick Wall (v4, 5m, Old) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BrickWall_04_l_5m_old_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BrickWall_04_l_pole_F {
        displayName = "Brick Wall (v4, Pole)";
        description = "Brick Wall (v4, Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BrickWall_04_l_pole_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BrickWall_04_l_pole_old_F {
        displayName = "Brick Wall (v4, Pole, Old)";
        description = "Brick Wall (v4, Pole, Old) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BrickWall_04_l_pole_old_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_SilageWall_01_l_5m_F {
        displayName = "Silage Wall (5m)";
        description = "Silage Wall (5m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 150;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_SilageWall_01_l_5m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_SilageWall_01_l_pole_F {
        displayName = "Silage Wall (Pole)";
        description = "Silage Wall (Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_SilageWall_01_l_pole_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };



    class Land_Mil_WallBig_4m_F {
        displayName = "Military Base Wall";
        description = "Military Base Wall can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 300;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Mil_WallBig_4m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Mil_WallBig_Corner_F {
        displayName = "Military Base Wall (Corner)";
        description = "Military Base Wall (Corner) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Mil_WallBig_Corner_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Mil_WallBig_Gate_F {
        displayName = "Military Base Wall (Gate)";
        description = "Military Base Wall (Gate) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 300;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Mil_WallBig_Gate_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_CncWall1_F {
        displayName = "Concrete Wall";
        description = "Concrete Wall can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 500;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_CncWall1_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_CncWall4_F {
        displayName = "Concrete Wall (Long)";
        description = "Concrete Wall (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 1500;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_CncWall4_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	
	    class Land_PetroglyphWall_01_F {
        displayName = "Petroglyph Wall 1";
        description = "Petroglyph Wall 1 can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_PetroglyphWall_01_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_PetroglyphWall_02_F {
        displayName = "Petroglyph Wall 2";
        description = "Petroglyph Wall 2 can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_PetroglyphWall_02_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	   class Land_BasaltWall_01_4m_F {
        displayName = "Basalt Wall (4 m)";
        description = "Basalt Wall (4 m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BasaltWall_01_4m_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BasaltWall_01_8m_F {
        displayName = "Basalt Wall (8 m)";
        description = "Basalt Wall (8 m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 300;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BasaltWall_01_8m_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_BasaltWall_01_gate_F {
        displayName = "Basalt Wall Gate";
        description = "Basalt Wall Gate can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 150;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_BasaltWall_01_gate_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	
    class Land_Wall_Tin_4 {
        displayName = "Tin Fence (v1)";
        description = "Tin Fence (v1) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 50;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Wall_Tin_4'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Wall_Tin_4_2 {
        displayName = "Tin Fence (v2)";
        description = "Tin Fence (v2) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 50;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Wall_Tin_4_2'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Wall_Tin_Pole {
        displayName = "Tin Fence (Pole)";
        description = "Tin Fence (Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 25;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Wall_Tin_Pole'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Stone_4m_F {
        displayName = "Stone Wall";
        description = "Stone Wall can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Stone_4m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Stone_8m_F {
        displayName = "Stone Wall (Long)";
        description = "Stone Wall (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 150;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Stone_8m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Stone_Gate_F {
        displayName = "Stone Wall (Gate)";
        description = "Stone Wall (Gate) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Stone_Gate_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Stone_pillar_F {
        displayName = "Stone Wall (Pillar)";
        description = "Stone Wall (Pillar) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Stone_pillar_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	
		class Land_WallCity_01_8m_blue_F {
    displayName = "City Wall (Long, Blue)";
    description = "City Wall (Long, Blue) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_8m_blue_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_8m_grey_F {
    displayName = "City Wall (Long, Grey)";
    description = "City Wall (Long, Grey) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_8m_grey_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_8m_pink_F {
    displayName = "City Wall (Long, Pink)";
    description = "City Wall (Long, Pink) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_8m_pink_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_8m_whiteblue_F {
    displayName = "City Wall (Long, White & Blue)";
    description = "City Wall (Long, White & Blue) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_8m_whiteblue_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_8m_yellow_F {
    displayName = "City Wall (Long, Yellow & White)";
    description = "City Wall (Long, Yellow & White) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_8m_yellow_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_8m_plain_blue_F {
    displayName = "Wall (Long, Blue)";
    description = "Wall (Long, Blue) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_8m_plain_blue_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_8m_plain_grey_F {
    displayName = "Wall (Long, Grey)";
    description = "Wall (Long, Grey) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_8m_plain_grey_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_8m_plain_pink_F {
    displayName = "Wall (Long, Pink)";
    description = "Wall (Long, Pink) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_8m_plain_pink_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_8m_plain_whiteblue_F {
    displayName = "Wall (Long, White & Blue)";
    description = "Wall (Long, White & Blue) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_8m_plain_whiteblue_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_8m_plain_yellow_F {
    displayName = "Wall (Long, Yellow & White)";
    description = "Wall (Long, Yellow & White) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_8m_plain_yellow_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_gate_blue_F {
    displayName = "City Wall (Gate, Blue)";
    description = "City Wall (Gate, Blue) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 150;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_gate_blue_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_gate_grey_F {
    displayName = "City Wall (Gate, Grey)";
    description = "City Wall (Gate, Grey) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 150;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_gate_grey_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_gate_pink_F {
    displayName = "City Wall (Gate, Pink)";
    description = "City Wall (Gate, Pink) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 150;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_gate_pink_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_gate_whiteblue_F {
    displayName = "City Wall (Gate, White & Blue)";
    description = "City Wall (Gate, White & Blue) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 150;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_gate_whiteblue_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_gate_yellow_F {
    displayName = "City Wall (Gate, Yellow & White)";
    description = "City Wall (Gate, Yellow & White) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 150;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_gate_yellow_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_pillar_blue_F {
    displayName = "City Wall (Pillar, Blue)";
    description = "City Wall (Pillar, Blue) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 75;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_pillar_blue_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_pillar_grey_F {
    displayName = "City Wall (Pillar, Grey)";
    description = "City Wall (Pillar, Grey) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 75;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_pillar_grey_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_pillar_pink_F {
    displayName = "City Wall (Pillar, Pink)";
    description = "City Wall (Pillar, Pink) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 75;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_pillar_pink_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_pillar_whiteblue_F {
    displayName = "City Wall (Pillar, White & Blue)";
    description = "City Wall (Pillar, White & Blue) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 75;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_pillar_whiteblue_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_pillar_yellow_F {
    displayName = "City Wall (Pillar, Yellow & White)";
    description = "City Wall (Pillar, Yellow & White) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 75;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_pillar_yellow_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_4m_blue_F {
    displayName = "City Wall (Blue)";
    description = "City Wall (Blue) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_4m_blue_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_4m_grey_F {
    displayName = "City Wall (Grey)";
    description = "City Wall (Grey) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_4m_grey_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_4m_pink_F {
    displayName = "City Wall (Pink)";
    description = "City Wall (Pink) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_4m_pink_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_4m_whiteblue_F {
    displayName = "City Wall (White & Blue)";
    description = "City Wall (White & Blue) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_4m_whiteblue_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_4m_yellow_F {
    displayName = "City Wall (Yellow & White)";
    description = "City Wall (Yellow & White) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_4m_yellow_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_4m_plain_blue_F {
    displayName = "Wall (Blue)";
    description = "Wall (Blue) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_4m_plain_blue_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_4m_plain_grey_F {
    displayName = "Wall (Grey)";
    description = "Wall (Grey) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_4m_plain_grey_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_WallCity_01_4m_plain_pink_F {
    displayName = "Wall (Pink)";
    description = "Wall (Pink) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_4m_plain_pink_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

			class Land_WallCity_01_4m_plain_whiteblue_F {
			displayName = "Wall (White & Blue)";
			description = "Wall (White & Blue) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
			price = 100;
			stock = 100;
			code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_4m_plain_whiteblue_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
	};

		class Land_WallCity_01_4m_plain_yellow_F {
			displayName = "Wall (Yellow & White)";
			description = "Wall (Yellow & White) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
			price = 100;
			stock = 100;
			code = "if (player == (_this select 0)) then {[container_1,'Land_WallCity_01_4m_plain_yellow_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
	};
};

		//category:
		class fortifications_fences {
    displayName = "Fortifications: Fences";
    kindOf = "other";
    tracking = 0;


    class Land_Slums01_8m {
        displayName = "Slum Fence";
        description = "Slum Fence can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 50;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Slums01_8m'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Slums01_pole {
        displayName = "Slum Fence (Pole)";
        description = "Slum Fence (Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 50;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Slums01_pole'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	    class Land_Wired_Fence_4m_F {
        displayName = "Wire Fence";
        description = "Wire Fence can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 30;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Wired_Fence_4m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Wired_Fence_8m_F {
        displayName = "Wire Fence (Long)";
        description = "Wire Fence (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 60;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Wired_Fence_8m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Slums02_4m {
        displayName = "Plank Fence (Long)";
        description = "Plank Fence (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 50;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Slums02_4m'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Slums02_pole {
        displayName = "Plank Fence (Pole)";
        description = "Plank Fence (Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 50;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Slums02_pole'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_SportGround_fence_F {
        displayName = "Sport Fence";
        description = "Sport Fence can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_SportGround_fence_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	

    class Land_New_WiredFence_5m_F {
        displayName = "Barbed Wire Fence";
        description = "Barbed Wire Fence can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_New_WiredFence_5m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_New_WiredFence_10m_F {
        displayName = "Barbed Wire Fence (Long)";
        description = "Barbed Wire Fence (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_New_WiredFence_10m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_New_WiredFence_pole_F {
        displayName = "Barbed Wire Fence (Pole)";
        description = "Barbed Wire Fence (Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 50;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_New_WiredFence_pole_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Pipe_fence_4m_F {
        displayName = "Pipe Fence (Long)";
        description = "Pipe Fence (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Pipe_fence_4m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_PipeWall_concretel_8m_F {
        displayName = "Concrete Pipe Wall";
        description = "Concrete Pipe Wall can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_PipeWall_concretel_8m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Mil_WiredFence_F {
        displayName = "Razor Fence";
        description = "Razor Fence can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Mil_WiredFence_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_Mil_WiredFence_Gate_F {
        displayName = "Razor Fence (Gate)";
        description = "Razor Fence (Gate) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 150;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Mil_WiredFence_Gate_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };



    class Land_IndFnc_3_F {
        displayName = "Industrial Fence";
        description = "Industrial Fence can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_IndFnc_3_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_IndFnc_9_F {
        displayName = "Industrial Fence (Long)";
        description = "Industrial Fence (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_IndFnc_9_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_IndFnc_Corner_F {
        displayName = "Industrial Fence (Corner)";
        description = "Industrial Fence (Corner) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_IndFnc_Corner_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_IndFnc_Pole_F {
        displayName = "Industrial Fence (Pole)";
        description = "Industrial Fence (Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 50;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_IndFnc_Pole_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	
	

    class Land_GameProofFence_01_l_5m_F {
        displayName = "Game Fence (5m)";
        description = "Game Fence (5m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_GameProofFence_01_l_5m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_GameProofFence_01_l_gate_F {
        displayName = "Game Fence (Gate)";
        description = "Game Fence (Gate) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 150;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_GameProofFence_01_l_gate_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_GameProofFence_01_l_pole_F {
        displayName = "Game Fence (Pole)";
        description = "Game Fence (Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_GameProofFence_01_l_pole_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_NetFence_03_m_3m_F {
        displayName = "Industrial Fence";
        description = "Industrial Fence can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_NetFence_03_m_3m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_NetFence_03_m_9m_F {
        displayName = "Industrial Fence (Long)";
        description = "Industrial Fence (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_NetFence_03_m_9m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_NetFence_03_m_3m_corner_F {
        displayName = "Industrial Fence (Corner)";
        description = "Industrial Fence (Corner) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 75;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_NetFence_03_m_3m_corner_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_NetFence_03_m_pole_F {
        displayName = "Industrial Fence (Pole)";
        description = "Industrial Fence (Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 50;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_NetFence_03_m_pole_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_PipeFence_03_m_gate_l_F {
        displayName = "Pipe Fence (v3, Gate, Left)";
        description = "Pipe Fence (v3, Gate, Left) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_PipeFence_03_m_gate_l_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_PipeFence_03_m_gate_r_F {
        displayName = "Pipe Fence (v3, Gate, Right)";
        description = "Pipe Fence (v3, Gate, Right) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_PipeFence_03_m_gate_r_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_PipeFence_04_m_gate_l_F {
        displayName = "Pipe Fence (v4, Gate, Left)";
        description = "Pipe Fence (v4, Gate, Left) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_PipeFence_04_m_gate_l_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_PipeFence_04_m_gate_r_F {
        displayName = "Pipe Fence (v4, Gate, Right)";
        description = "Pipe Fence (v4, Gate, Right) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_PipeFence_04_m_gate_r_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_PipeFence_05_m_gate_l_F {
        displayName = "Pipe Fence (v5, Gate, Left)";
        description = "Pipe Fence (v5, Gate, Left) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_PipeFence_05_m_gate_l_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_PipeFence_05_m_gate_r_F {
        displayName = "Pipe Fence (v5, Gate, Right)";
        description = "Pipe Fence (v5, Gate, Right) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_PipeFence_05_m_gate_r_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_PipeFence_06_m_gate_l_F {
        displayName = "Pipe Fence (v6, Gate, Left)";
        description = "Pipe Fence (v6, Gate, Left) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_PipeFence_06_m_gate_l_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    class Land_PipeFence_06_m_gate_r_F {
        displayName = "Pipe Fence (v6, Gate, Right)";
        description = "Pipe Fence (v6, Gate, Right) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_PipeFence_06_m_gate_r_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	

	
};

		//category:
		class fortifications_tents {
    displayName = "Fortifications: Tents, Covers, and Camouflage";
    kindOf = "other";
    tracking = 0;

    // Tents
    class Land_CanvasCover_01_F {
        displayName = "Canvas Cover (Large)";
        description = "Canvas Cover (Large) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_CanvasCover_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_CanvasCover_02_F {
        displayName = "Canvas Cover (Small)";
        description = "Canvas Cover (Small) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 80;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_CanvasCover_02_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_MedicalTent_01_tropic_closed_F {
        displayName = "Medical Tent [NATO]";
        description = "Medical Tent [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 50;
        code = "if (player == (_this select 0)) then {[container_1,'Land_MedicalTent_01_tropic_closed_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_MedicalTent_01_MTP_closed_F {
        displayName = "Medical Tent [NATO, Altis]";
        description = "Medical Tent [NATO, Altis] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 50;
        code = "if (player == (_this select 0)) then {[container_1,'Land_MedicalTent_01_MTP_closed_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_MedicalTent_01_greenhex_closed_F {
        displayName = "Medical Tent [CSAT]";
        description = "Medical Tent [CSAT] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 50;
        code = "if (player == (_this select 0)) then {[container_1,'Land_MedicalTent_01_greenhex_closed_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_MedicalTent_01_brownhex_closed_F {
        displayName = "Medical Tent [CSAT, Altis]";
        description = "Medical Tent [CSAT, Altis] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 50;
        code = "if (player == (_this select 0)) then {[container_1,'Land_MedicalTent_01_brownhex_closed_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_MedicalTent_01_digital_closed_F {
        displayName = "Medical Tent [AAF]";
        description = "Medical Tent [AAF] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 50;
        code = "if (player == (_this select 0)) then {[container_1,'Land_MedicalTent_01_digital_closed_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_MedicalTent_01_white_IDAP_med_closed_F {
        displayName = "Medical Tent [IDAP]";
        description = "Medical Tent [IDAP] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 50;
        code = "if (player == (_this select 0)) then {[container_1,'Land_MedicalTent_01_white_IDAP_med_closed_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_MedicalTent_01_white_generic_closed_F {
        displayName = "Tent (Shelter, Closed)";
        description = "Tent (Shelter, Closed) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 50;
        code = "if (player == (_this select 0)) then {[container_1,'Land_MedicalTent_01_white_generic_closed_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_MedicalTent_01_white_generic_open_F {
        displayName = "Tent (Shelter, Open)";
        description = "Tent (Shelter, Open) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 50;
        code = "if (player == (_this select 0)) then {[container_1,'Land_MedicalTent_01_white_generic_open_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_MedicalTent_01_floor_light_F {
        displayName = "Tent (Shelter, Floor, Light)";
        description = "Tent (Shelter, Floor, Light) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 50;
        stock = 50;
        code = "if (player == (_this select 0)) then {[container_1,'Land_MedicalTent_01_floor_light_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class Land_MedicalTent_01_floor_dark_F {
        displayName = "Tent (Shelter, Floor, Dark)";
        description = "Tent (Shelter, Floor, Dark) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 50;
        stock = 50;
        code = "if (player == (_this select 0)) then {[container_1,'Land_MedicalTent_01_floor_dark_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    // Camouflage Nets
    class CamoNet_BLUFOR_F {
        displayName = "Camouflage Net (Green)";
        description = "Camouflage Net (Green) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'CamoNet_BLUFOR_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class CamoNet_OPFOR_F {
        displayName = "Camouflage Net (Hex)";
        description = "Camouflage Net (Hex) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'CamoNet_OPFOR_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class CamoNet_INDP_F {
        displayName = "Camouflage Net (Digital)";
        description = "Camouflage Net (Digital) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'CamoNet_INDP_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class CamoNet_BLUFOR_open_F {
        displayName = "Camouflage Net (Open, Green)";
        description = "Camouflage Net (Open, Green) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'CamoNet_BLUFOR_open_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class CamoNet_OPFOR_open_F {
        displayName = "Camouflage Net (Open, Hex)";
        description = "Camouflage Net (Open, Hex) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'CamoNet_OPFOR_open_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class CamoNet_INDP_open_F {
        displayName = "Camouflage Net (Open, Digital)";
        description = "Camouflage Net (Open, Digital) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'CamoNet_INDP_open_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class CamoNet_BLUFOR_big_F {
        displayName = "Camouflage Vehicle Cover (Green)";
        description = "Camouflage Vehicle Cover (Green) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 50;
        code = "if (player == (_this select 0)) then {[container_1,'CamoNet_BLUFOR_big_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class CamoNet_OPFOR_big_F {
        displayName = "Camouflage Vehicle Cover (Hex)";
        description = "Camouflage Vehicle Cover (Hex) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 50;
        code = "if (player == (_this select 0)) then {[container_1,'CamoNet_OPFOR_big_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
    class CamoNet_INDP_big_F {
        displayName = "Camouflage Vehicle Cover (Digital)";
        description = "Camouflage Vehicle Cover (Digital) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 200;
        stock = 50;
        code = "if (player == (_this select 0)) then {[container_1,'CamoNet_INDP_big_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
};

		//category:
		class fortifications_structures {
        displayName = "Fortifications: Structures";
        kindOf = "other";
        tracking = 0;
			
			

        // Military Cargo Houses
		class Land_cargo_house_slum_F {
    displayName = "Slum House Container";
    description = "Slum House Container can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 5000;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_cargo_house_slum_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside; it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};
        class Land_Cargo_House_V1_F {
            displayName = "Military Cargo House (Green)";
            description = "Military Cargo House (Green) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 50000;
            stock = 100;
            code = "if (player == (_this select 0)) then {[container_1,'Land_Cargo_House_V1_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
        class Land_Cargo_House_V2_F {
            displayName = "Military Cargo House (Rusty)";
            description = "Military Cargo House (Rusty) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 50000;
            stock = 100;
            code = "if (player == (_this select 0)) then {[container_1,'Land_Cargo_House_V2_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
        class Land_Cargo_House_V3_F {
            displayName = "Military Cargo House (Brown)";
            description = "Military Cargo House (Brown) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 50000;
            stock = 100;
            code = "if (player == (_this select 0)) then {[container_1,'Land_Cargo_House_V3_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
		
		class Land_Medevac_house_V1_F {
    displayName = "Military Cargo House (Medical)";
    description = "Military Cargo House (Medical) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50000;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_Medevac_house_V1_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside; it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

        // Cargo Patrol Posts
        class Land_Cargo_Patrol_V1_F {
            displayName = "Military Cargo Post (Green)";
            description = "Military Cargo Post (Green) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 100000;
            stock = 100;
            code = "if (player == (_this select 0)) then {[container_1,'Land_Cargo_Patrol_V1_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
        class Land_Cargo_Patrol_V2_F {
            displayName = "Military Cargo Post (Rusty)";
            description = "Military Cargo Post (Rusty) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 100000;
            stock = 100;
            code = "if (player == (_this select 0)) then {[container_1,'Land_Cargo_Patrol_V2_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
        class Land_Cargo_Patrol_V3_F {
            displayName = "Military Cargo Post (Brown)";
            description = "Military Cargo Post (Brown) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 100000;
            stock = 100;
            code = "if (player == (_this select 0)) then {[container_1,'Land_Cargo_Patrol_V3_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };

        // Military Cargo HQs
        class Land_Cargo_HQ_V1_F {
            displayName = "Military Cargo HQ (Green)";
            description = "Military Cargo HQ (Green) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 250000;
            stock = 50;
            code = "if (player == (_this select 0)) then {[container_1,'Land_Cargo_HQ_V1_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
        class Land_Cargo_HQ_V2_F {
            displayName = "Military Cargo HQ (Rusty)";
            description = "Military Cargo HQ (Rusty) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 250000;
            stock = 50;
            code = "if (player == (_this select 0)) then {[container_1,'Land_Cargo_HQ_V2_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
        class Land_Cargo_HQ_V3_F {
            displayName = "Military Cargo HQ (Brown)";
            description = "Military Cargo HQ (Brown) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 250000;
            stock = 50;
            code = "if (player == (_this select 0)) then {[container_1,'Land_Cargo_HQ_V3_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
		

class Land_Medevac_HQ_V1_F {
    displayName = "Military Cargo HQ (Medical)";
    description = "Military Cargo HQ (Medical) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 250000;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_Medevac_HQ_V1_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside; it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};



        // Military Cargo Towers
        class Land_Cargo_Tower_V1_F {
            displayName = "Military Cargo Tower (Green)";
            description = "Military Cargo Tower (Green) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 500000;
            stock = 50;
            code = "if (player == (_this select 0)) then {[container_1,'Land_Cargo_Tower_V1_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
        class Land_Cargo_Tower_V2_F {
            displayName = "Military Cargo Tower (Rusty)";
            description = "Military Cargo Tower (Rusty) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 500000;
            stock = 50;
            code = "if (player == (_this select 0)) then {[container_1,'Land_Cargo_Tower_V2_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
        class Land_Cargo_Tower_V3_F {
            displayName = "Military Cargo Tower (Brown)";
            description = "Military Cargo Tower (Brown) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 500000;
            stock = 50;
            code = "if (player == (_this select 0)) then {[container_1,'Land_Cargo_Tower_V3_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };

        // Sheds and Factories
        class Land_SM_01_shelter_narrow_F {
            displayName = "Industrial Shed (Small, Surface Mine)";
            description = "Industrial Shed (Small, Surface Mine) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 5000;
            stock = 100;
            code = "if (player == (_this select 0)) then {[container_1,'Land_SM_01_shelter_narrow_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
        class Land_SM_01_shelter_wide_F {
            displayName = "Industrial Shed (Big, Surface Mine)";
            description = "Industrial Shed (Big, Surface Mine) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
            price = 5000;
            stock = 100;
            code = "if (player == (_this select 0)) then {[container_1,'Land_SM_01_shelter_wide_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
        };
		class Land_SCF_01_shed_F {
			displayName = "Sugarcane Factory (Shed)";
			description = "Sugarcane Factory (Shed) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
			price = 10000;
			stock = 100;
			code = "if (player == (_this select 0)) then {[container_1,'Land_SCF_01_shed_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
			};
			
			class Land_i_Barracks_V1_F {
    displayName = "Barracks (Camo)";
    description = "Barracks (Camo) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 500000;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_i_Barracks_V1_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside; it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};



    };

		//category:
		class fortifications_airport {
    displayName = "Fortifications: Airport and Hangar Items";
    kindOf = "other";
    tracking = 0;
	
	class Windsock_01_F {
                displayName = "Windsock";
                description = "Windsock can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Windsock_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };

    // Hangars
    class Land_Hangar_F {
        displayName = "Military Hangar";
        description = "Military Hangar can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100000;
        stock = 50;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Hangar_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };
	class Land_Airport_01_hangar_F {
        displayName = "Military Hangar";
        description = "Military Hangar can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100000;
        stock = 50;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Airport_01_hangar_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
    };

    // Helipads
    class Land_HelipadCivil_F {
        displayName = "Helipad (Civilian)";
        description = "Helipad (Civilian) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 5000;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_HelipadCivil_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction.';";
    };
    class Land_HelipadSquare_F {
        displayName = "Helipad (Square)";
        description = "Helipad (Square) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 5000;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_HelipadSquare_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction.';";
    };
    class Land_HelipadRescue_F {
        displayName = "Helipad (Rescue)";
        description = "Helipad (Rescue) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 5000;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_HelipadRescue_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction.';";
    };

    // Landing Strip Lights
    class Land_LampAirport_F {
        displayName = "Landing Strip Light";
        description = "Landing Strip Light can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100;
        stock = 100;
        code = "if (player == (_this select 0)) then {[container_1,'Land_LampAirport_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction.';";
    };
	
	class Land_PortableHelipadLight_01_F {
    displayName = "Portable Helipad Light";
    description = "The portable helipad light can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 200;
	picture = "pictures\arma3mercenaries_v1.paa";  //this is a placeholder picture for bugged items
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableHelipadLight_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class PortableHelipadLight_01_blue_F {
    displayName = "Portable Helipad Light (Blue)";
    description = "The portable helipad light (blue) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 200;
	picture = "pictures\arma3mercenaries_v1.paa";  //this is a placeholder picture for bugged items
    code = "if (player == (_this select 0)) then {[container_1,'PortableHelipadLight_01_blue_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class PortableHelipadLight_01_red_F {
    displayName = "Portable Helipad Light (Red)";
    description = "The portable helipad light (red) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 200;
	picture = "pictures\arma3mercenaries_v1.paa";  //this is a placeholder picture for bugged items
    code = "if (player == (_this select 0)) then {[container_1,'PortableHelipadLight_01_red_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class PortableHelipadLight_01_white_F {
    displayName = "Portable Helipad Light (White)";
    description = "The portable helipad light (white) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 200;
	picture = "pictures\arma3mercenaries_v1.paa";  //this is a placeholder picture for bugged items
    code = "if (player == (_this select 0)) then {[container_1,'PortableHelipadLight_01_white_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class PortableHelipadLight_01_green_F {
    displayName = "Portable Helipad Light (Green)";
    description = "The portable helipad light (green) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 200;
	picture = "pictures\arma3mercenaries_v1.paa";  //this is a placeholder picture for bugged items
    code = "if (player == (_this select 0)) then {[container_1,'PortableHelipadLight_01_green_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class PortableHelipadLight_01_yellow_F {
    displayName = "Portable Helipad Light (Yellow)";
    description = "The portable helipad light (yellow) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 200;
	picture = "pictures\arma3mercenaries_v1.paa";  //this is a placeholder picture for bugged items
    code = "if (player == (_this select 0)) then {[container_1,'PortableHelipadLight_01_yellow_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

    // Transmitter Towers
    class Land_TTowerBig_1_F {
        displayName = "Transmitter Tower";
        description = "The transmitter tower can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100000;
        stock = 200;
        code = "if (player == (_this select 0)) then {[container_1,'Land_TTowerBig_1_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction.';";
    };
    class Land_TTowerBig_2_F {
        displayName = "Transmitter Tower (Tall)";
        description = "The transmitter tower (tall) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100000;
        stock = 200;
        code = "if (player == (_this select 0)) then {[container_1,'Land_TTowerBig_2_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction.';";
    };

    // Airport Control Towers
    class Land_Airport_Tower_F {
        displayName = "Airport Control Tower";
        description = "Airport Control Tower can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 500000;
        stock = 200;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Airport_Tower_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction.';";
    };

    class Land_Airport_01_controlTower_F {
        displayName = "Airport Control Tower (Metal)";
        description = "Airport Control Tower (Metal) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 500000;
        stock = 200;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Airport_01_controlTower_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction.';";
    };

    // Radars
    class Land_Radar_F {
        displayName = "Radar";
        description = "Radar can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 500000;
        stock = 200;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Radar_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction.';";
    };
    class Land_Radar_Small_F {
        displayName = "Radar (Small)";
        description = "Radar (Small) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
        price = 100000;
        stock = 200;
        code = "if (player == (_this select 0)) then {[container_1,'Land_Radar_Small_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction.';";
    };
};

		class fortifications_lights {
            displayName = "Fortifications: Lights, Ladders, and Other";
            kindOf = "other";
			tracking = 0;
			
			class ACE_TacticalLadder {
                displayName = "ACE Telescopic Ladder";
                description = "The ACE Telescopic ladder can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 400;
				code = "if (player == (_this select 0)) then {[container_1,'ACE_TacticalLadder'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_PierLadder_F {
                displayName = "Ladder (Pier)";
                description = "Ladder (Pier) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_PierLadder_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class FirePlace_burning_F {
                displayName = "Fireplace (burning)";
                description = "Fireplace (burning) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'FirePlace_burning_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_TentLamp_01_standing_F {
                displayName = "Tent Lamp (White) (Standing)";
                description = "The tent lamp can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_TentLamp_01_standing_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_TentLamp_01_standing_red_F {
                displayName = "Tent Lamp (Red) (Standing)";
                description = "The tent lamp can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_TentLamp_01_standing_red_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_TentLamp_01_suspended_F {
                displayName = "Tent Lamp (White) (Suspended)";
                description = "The tent lamp can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_TentLamp_01_suspended_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };	
			class Land_TentLamp_01_suspended_red_F {
                displayName = "Tent Lamp (Red) (Suspended)";
                description = "The tent lamp can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				picture = "pictures\arma3mercenaries_v1.paa";  //this is a placeholder picture for bugged items
				code = "if (player == (_this select 0)) then {[container_1,'Land_TentLamp_01_suspended_red_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };	
			class Land_Camping_Light_F {
                displayName = "Tent Lamp (Red) (Suspended)";
                description = "The tent lamp can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 35;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_Camping_Light_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };		
			class Land_PortableLight_single_F {
				displayName = "Portable Light (Single)";
				description = "The portable light can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
				price = 50;
				stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_single_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};
			class Land_PortableLight_double_F {
                displayName = "Portable Lights (Double)";
                description = "The portable lights can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 75;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_double_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_LampStreet_small_F {
                displayName = "Street Lamp (Small)";
                description = "The street lamp (small) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_LampStreet_small_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_FloodLight_F {
				displayName = "Floodlight";
				description = "The floodlight can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
				price = 100;
				stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'Land_FloodLight_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
			};
			
			class Land_PortableLight_02_single_yellow_F {
				displayName = "Rugged Portable Lamp (Single, Yellow)";
				description = "The rugged portable lamp (single, yellow) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
				price = 75;
				stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_02_single_yellow_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableLight_02_single_black_F {
    displayName = "Rugged Portable Lamp (Single, Black)";
    description = "The rugged portable lamp (single, black) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 75;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_02_single_black_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableLight_02_single_sand_F {
    displayName = "Rugged Portable Lamp (Single, Sand)";
    description = "The rugged portable lamp (single, sand) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 75;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_02_single_sand_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableLight_02_double_olive_F {
    displayName = "Rugged Portable Lamp (Double, Olive)";
    description = "The rugged portable lamp (double, olive) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_02_double_olive_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableLight_02_double_yellow_F {
    displayName = "Rugged Portable Lamp (Double, Yellow)";
    description = "The rugged portable lamp (double, yellow) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_02_double_yellow_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableLight_02_double_black_F {
    displayName = "Rugged Portable Lamp (Double, Black)";
    description = "The rugged portable lamp (double, black) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_02_double_black_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableLight_02_double_sand_F {
    displayName = "Rugged Portable Lamp (Double, Sand)";
    description = "The rugged portable lamp (double, sand) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 100;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_02_double_sand_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableLight_02_quad_olive_F {
    displayName = "Rugged Portable Lamp (Quad, Olive)";
    description = "The rugged portable lamp (quad, olive) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 125;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_02_quad_olive_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableLight_02_quad_yellow_F {
    displayName = "Rugged Portable Lamp (Quad, Yellow)";
    description = "The rugged portable lamp (quad, yellow) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 125;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_02_quad_yellow_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableLight_02_quad_black_F {
    displayName = "Rugged Portable Lamp (Quad, Black)";
    description = "The rugged portable lamp (quad, black) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 125;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_02_quad_black_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableLight_02_quad_sand_F {
    displayName = "Rugged Portable Lamp (Quad, Sand)";
    description = "The rugged portable lamp (quad, sand) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 125;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_02_quad_sand_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableLight_02_single_folded_olive_F {
    displayName = "Rugged Portable Lamp (Single, Folded, Olive)";
    description = "The rugged portable lamp (single, folded, olive) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 75;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_02_single_folded_olive_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableLight_02_single_folded_yellow_F {
    displayName = "Rugged Portable Lamp (Single, Folded, Yellow)";
    description = "The rugged portable lamp (single, folded, yellow) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 75;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_02_single_folded_yellow_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableLight_02_single_folded_black_F {
    displayName = "Rugged Portable Lamp (Single, Folded, Black)";
    description = "The rugged portable lamp (single, folded, black) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 75;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_02_single_folded_black_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableLight_02_single_folded_sand_F {
    displayName = "Rugged Portable Lamp (Single, Folded, Sand)";
    description = "The rugged portable lamp (single, folded, sand) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 75;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableLight_02_single_folded_sand_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
	};

};			
			
		class fortifications_flags {
            displayName = "Fortifications: Flags";
            kindOf = "other";
			tracking = 0;
			
			class Flag_US_F {
				displayName = "Flag (USA)";
				description = "Flag (USA) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
				price = 50;
				stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'Flag_US_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
			};

class Flag_POWMIA_F {
    displayName = "Flag (POW/MIA)";
    description = "Flag (POW/MIA) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_POWMIA_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_NATO_F {
    displayName = "Flag (NATO)";
    description = "Flag (NATO) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_NATO_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_Vrana_F {
    displayName = "Flag (Vrana)";
    description = "Flag (Vrana) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_Vrana_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_ARMEX_F {
    displayName = "Flag (ARMEX)";
    description = "Flag (ARMEX) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_ARMEX_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_Quontrol_F {
    displayName = "Flag (Quontrol)";
    description = "Flag (Quontrol) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_Quontrol_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_ION_F {
    displayName = "Flag (ION)";
    description = "Flag (ION) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_ION_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_Larkin_F {
    displayName = "Flag (Larkin)";
    description = "Flag (Larkin) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_Larkin_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_FD_Green_F {
    displayName = "Flag (FD - Green)";
    description = "Flag (FD - Green) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_FD_Green_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_FD_Red_F {
    displayName = "Flag (FD - Red)";
    description = "Flag (FD - Red) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_FD_Red_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_FD_Blue_F {
    displayName = "Flag (FD - Blue)";
    description = "Flag (FD - Blue) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_FD_Blue_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_FD_Orange_F {
    displayName = "Flag (FD - Orange)";
    description = "Flag (FD - Orange) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_FD_Orange_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_UK_F {
    displayName = "Flag (UK)";
    description = "Flag (UK) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_UK_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_AAF_F {
    displayName = "Flag (AAF)";
    description = "Flag (AAF) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_AAF_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_Altis_F {
    displayName = "Flag (Altis)";
    description = "Flag (Altis) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_Altis_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_FIA_F {
    displayName = "Flag (FIA)";
    description = "Flag (FIA) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_FIA_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_CSAT_F {
    displayName = "Flag (CSAT)";
    description = "Flag (CSAT) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_CSAT_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_AltisColonial_F {
    displayName = "Flag (Altis Colonial)";
    description = "Flag (Altis Colonial) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_AltisColonial_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_Blue_F {
    displayName = "Flag (Blue)";
    description = "Flag (Blue) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_Blue_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_Red_F {
    displayName = "Flag (Red)";
    description = "Flag (Red) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_Red_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_Green_F {
    displayName = "Flag (Green)";
    description = "Flag (Green) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_Green_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_White_F {
    displayName = "Flag (White)";
    description = "Flag (White) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_White_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_RedCrystal_F {
    displayName = "Flag (Red Crystal)";
    description = "Flag (Red Crystal) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_RedCrystal_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_UNO_F {
    displayName = "Flag (UNO)";
    description = "Flag (UNO) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_UNO_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Flag_BI_F {
    displayName = "Flag (BI)";
    description = "Flag (BI) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
    price = 50;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Flag_BI_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};
			
			
};

	    class fortifications_logiSupplies {
            displayName = "Logistics: Logistical Supplies";
            kindOf = "other";
			tracking = 0;
			
			class ToolKit {
                displayName = "ToolKit";
				kindOf = "items";
                description = "***RECOMMENDED TO HAVE AT ALL TIMES***Use this to repair vehicles";
                price = 1000;
                stock = 10000;
            };
			class ACE_Wheel {
                displayName = "ACE Spare Wheel";
                description = "ACE Spare Wheel can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications. (consumed on use)";
                price = 50;
                stock = 10000;
				code = "if (player == (_this select 0)) then {[container_1,'ACE_Wheel'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class ACE_Track {
                displayName = "ACE Spare Track";
                description = "ACE Spare Track can be utilized to repair damaged vehichle tracks. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (consumed on use)";
                price = 100;
                stock = 10000;
				code = "if (player == (_this select 0)) then {[container_1,'ACE_Track'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };	
			class Land_CanisterFuel_F {
                displayName = "Fuel Canister (15 Liters)";
                description = "The fuel canister (15 liters) can be utilized to refuel vehicles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_CanisterFuel_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };	
			class FlexibleTank_01_sand_F {
                displayName = "Flexible Fuel Tank (300 Liters)";
                description = "Flexible Fuel Tank (300 liters) can be utilized to refuel vehicles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'FlexibleTank_01_sand_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class StorageBladder_01_fuel_sand_F {
                displayName = "Fuel Bladder (10,000 Liters)";
                description = "The fuel bladder (10,000 Liters) can be utilized to refuel vehicles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'StorageBladder_01_fuel_sand_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Slingload_01_Fuel_F {
                displayName = "Huron Fuel Container (10,000 Liters)";
                description = "The Huron fuel container can be utilized to refuel vehicles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'B_Slingload_01_Fuel_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Pod_Heli_Transport_04_fuel_F {
                displayName = "Taru Fuel Pod (10,000 Liters)";
                description = "Taru Fuel Pod can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_Pod_Heli_Transport_04_fuel_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_BarrelWater_F {
                displayName = "Plastic Barrel (160 Liters)";
                description = "The plastic barrel (160 liters) can be utilized to refill canteens and water bottles, you can also drink straight from the spicket. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 80;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_BarrelWater_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };			
			class Land_StallWater_F {
                displayName = "Water Stall (250 Liters)";
                description = "The water stall (250 liters) can be utilized to refill yourself, canteens and water bottles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 125;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_StallWater_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_WaterBarrel_F {
                displayName = "Water Barrel (200 Liters)";
                description = "The water barrel ( liters) can be utilized to refill yourself, canteens and water bottles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 100;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_WaterBarrel_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_WaterTank_F {
                displayName = "Water Stall (600 Liters)";
                description = "The water stall ( liters) can be utilized to refill yourself, canteens and water bottles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 175;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_WaterTank_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class StorageBladder_02_water_forest_F {
                displayName = "Water Bladder (10,000 Liters)";
                description = "Water Bladder (10,000 liters) can be utilized to refill yourself, canteens and water bottles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'StorageBladder_02_water_forest_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };		
			class WaterPump_01_forest_F {
                displayName = "Water Pump (Unlimited)";
                description = "Water Pump (unlimited) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'WaterPump_01_forest_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Slingload_01_Medevac_F {
                displayName = "Huron Medical Container (Medical Facility)";
                description = "The Huron medical container (medical facility) will enable the use of personal aid kits (PAK's) in the field and is a transportable spawn point. It can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'B_Slingload_01_Medevac_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Pod_Heli_Transport_04_medevac_F {
                displayName = "Taru Medical Pod (Medical Facility)";
                description = "The taru medical pod (medical facility) will enable the use of personal aid kits (PAK's) in the field and is a transportable spawn point. It can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_Pod_Heli_Transport_04_medevac_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_AmmoVeh_F {
                displayName = "Vehicle Ammo [NATO] (Unlimited)";
                description = "Vehicle ammo [NATO] can be utilized to rearm vehicles and CSW's (crew served weapons) in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Box_NATO_AmmoVeh_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Slingload_01_Ammo_F {
                displayName = "Huron Ammo Container (Unlimited)";
                description = "The Huron ammo container can be utilized to rearm vehicles and CSW's (crew served weapons) in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'B_Slingload_01_Ammo_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Pod_Heli_Transport_04_ammo_F {
                displayName = "Taru Ammo Pod (Unlimited)";
                description = "Taru Ammo Pod can be utilized to rearm vehicles and CSW's (crew served weapons) in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_Pod_Heli_Transport_04_ammo_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_RepairDepot_01_green_F {
                displayName = "Repair Depot (Green)";
                description = "The repair depot (Green) can be utilized to fully repair any vehicle in the field. It deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_RepairDepot_01_green_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Slingload_01_Repair_F {
                displayName = "Huron Repair Container";
                description = "The Huron Repair Container can be utilized to fully repair any vehicle in the field. It deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'B_Slingload_01_Repair_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Pod_Heli_Transport_04_repair_F {
                displayName = "Taru Repair Pod";
                description = "The Taru Repair Pod  can be utilized to fully repair any vehicle in the field. It deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_Pod_Heli_Transport_04_repair_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_PaperBox_01_small_closed_brown_F {
    displayName = "Cardboard Box (Brown)";
    description = "Cardboard Box (Brown) can be used for storage.";
    price = 10;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PaperBox_01_small_closed_brown_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PaperBox_01_small_closed_brown_IDAP_F {
    displayName = "Cardboard Box (Brown) [IDAP]";
    description = "Cardboard Box (Brown) [IDAP] can be used for storage.";
    price = 10;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PaperBox_01_small_closed_brown_IDAP_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PaperBox_01_small_closed_brown_food_F {
    displayName = "Cardboard Box (Food) [IDAP]";
    description = "Cardboard Box (Food) [IDAP] can be used for storage.";
    price = 10;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PaperBox_01_small_closed_brown_food_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PaperBox_01_small_closed_white_IDAP_F {
    displayName = "Cardboard Box (White) [IDAP]";
    description = "Cardboard Box (White) [IDAP] can be used for storage.";
    price = 10;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PaperBox_01_small_closed_white_IDAP_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PaperBox_01_small_closed_white_med_F {
    displayName = "Cardboard Box (Medical) [IDAP]";
    description = "Cardboard Box (Medical) [IDAP] can be used for storage.";
    price = 10;
    stock = 100;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PaperBox_01_small_closed_white_med_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

			class Box_Wps_F {
                displayName = "Weapons Cache (Empty)";
                description = "The weapons cache (empty) can be utilized to store scavanged equipment. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Box_Wps_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class CargoNet_01_box_F {
                displayName = "Cargo Net Box Pallet (Empty )";
                description = "***ATTENTION***THIS IS THE ONLY EMPTY CONTAINER THAT CAN BE SLINGLOADED WITH ALiVE COMBAT SUPPORT***The cargo net box pallet (empty) can be utilized to store scavanged equipment. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 250;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'CargoNet_01_box_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			
			class Land_PlasticCase_01_large_black_F {
    displayName = "Plastic Case (Large, Black)";
    description = "Plastic Case (Large, Black) can be used for storage.";
    price = 100;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_large_black_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_large_black_CBRN_F {
    displayName = "Plastic Case (Large, Black, CBRN)";
    description = "Plastic Case (Large, Black, CBRN) can be used for storage.";
    price = 100;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_large_black_CBRN_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_medium_black_F {
    displayName = "Plastic Case (Medium, Black)";
    description = "Plastic Case (Medium, Black) can be used for storage.";
    price = 75;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_medium_black_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_medium_black_CBRN_F {
    displayName = "Plastic Case (Medium, Black, CBRN)";
    description = "Plastic Case (Medium, Black, CBRN) can be used for storage.";
    price = 75;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_medium_black_CBRN_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_small_black_F {
    displayName = "Plastic Case (Small, Black)";
    description = "Plastic Case (Small, Black) can be used for storage.";
    price = 50;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_small_black_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_small_black_CBRN_F {
    displayName = "Plastic Case (Small, Black, CBRN)";
    description = "Plastic Case (Small, Black, CBRN) can be used for storage.";
    price = 50;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_small_black_CBRN_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_large_olive_F {
    displayName = "Plastic Case (Large, Olive)";
    description = "Plastic Case (Large, Olive) can be used for storage.";
    price = 100;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_large_olive_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_large_olive_CBRN_F {
    displayName = "Plastic Case (Large, Olive, CBRN)";
    description = "Plastic Case (Large, Olive, CBRN) can be used for storage.";
    price = 100;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_large_olive_CBRN_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_medium_olive_F {
    displayName = "Plastic Case (Medium, Olive)";
    description = "Plastic Case (Medium, Olive) can be used for storage.";
    price = 75;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_medium_olive_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_medium_olive_CBRN_F {
    displayName = "Plastic Case (Medium, Olive, CBRN)";
    description = "Plastic Case (Medium, Olive, CBRN) can be used for storage.";
    price = 75;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_medium_olive_CBRN_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_small_olive_F {
    displayName = "Plastic Case (Small, Olive)";
    description = "Plastic Case (Small, Olive) can be used for storage.";
    price = 50;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_small_olive_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_small_olive_CBRN_F {
    displayName = "Plastic Case (Small, Olive, CBRN)";
    description = "Plastic Case (Small, Olive, CBRN) can be used for storage.";
    price = 50;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_small_olive_CBRN_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_large_CBRN_F {
    displayName = "Plastic Case (Large, CBRN)";
    description = "Plastic Case (Large, CBRN) can be used for storage.";
    price = 100;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_large_CBRN_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_medium_CBRN_F {
    displayName = "Plastic Case (Medium, CBRN)";
    description = "Plastic Case (Medium, CBRN) can be used for storage.";
    price = 75;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_medium_CBRN_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_small_CBRN_F {
    displayName = "Plastic Case (Small, CBRN)";
    description = "Plastic Case (Small, CBRN) can be used for storage.";
    price = 50;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_small_CBRN_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_large_gray_F {
    displayName = "Plastic Case (Large, Gray)";
    description = "Plastic Case (Large, Gray) can be used for storage.";
    price = 100;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_large_gray_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_large_idap_F {
    displayName = "Plastic Case (Large, White) [IDAP]";
    description = "Plastic Case (Large, White) [IDAP] can be used for storage.";
    price = 100;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_large_idap_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_medium_gray_F {
    displayName = "Plastic Case (Medium, Gray)";
    description = "Plastic Case (Medium, Gray) can be used for storage.";
    price = 75;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_medium_gray_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_medium_idap_F {
    displayName = "Plastic Case (Medium, White) [IDAP]";
    description = "Plastic Case (Medium, White) [IDAP] can be used for storage.";
    price = 75;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_medium_idap_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_small_gray_F {
    displayName = "Plastic Case (Small, Gray)";
    description = "Plastic Case (Small, Gray) can be used for storage.";
    price = 50;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_small_gray_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PlasticCase_01_small_idap_F {
    displayName = "Plastic Case (Small, White) [IDAP]";
    description = "Plastic Case (Small, White) [IDAP] can be used for storage.";
    price = 50;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PlasticCase_01_small_idap_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableCabinet_01_bookcase_olive_F {
    displayName = "Rugged Portable Cabinet (Olive, Books)";
    description = "Rugged Portable Cabinet (Olive, Books) can be used for storage.";
    price = 150;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableCabinet_01_bookcase_olive_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableCabinet_01_bookcase_black_F {
    displayName = "Rugged Portable Cabinet (Black, Books)";
    description = "Rugged Portable Cabinet (Black, Books) can be used for storage.";
    price = 150;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableCabinet_01_bookcase_black_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableCabinet_01_bookcase_sand_F {
    displayName = "Rugged Portable Cabinet (Sand, Books)";
    description = "Rugged Portable Cabinet (Sand, Books) can be used for storage.";
    price = 150;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableCabinet_01_bookcase_sand_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableCabinet_01_closed_olive_F {
    displayName = "Rugged Portable Cabinet (Olive, Closed)";
    description = "Rugged Portable Cabinet (Olive, Closed) can be used for storage.";
    price = 125;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableCabinet_01_closed_olive_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableCabinet_01_closed_black_F {
    displayName = "Rugged Portable Cabinet (Black, Closed)";
    description = "Rugged Portable Cabinet (Black, Closed) can be used for storage.";
    price = 125;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableCabinet_01_closed_black_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableCabinet_01_closed_sand_F {
    displayName = "Rugged Portable Cabinet (Sand, Closed)";
    description = "Rugged Portable Cabinet (Sand, Closed) can be used for storage.";
    price = 125;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableCabinet_01_closed_sand_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableCabinet_01_7drawers_olive_F {
    displayName = "Rugged Portable Cabinet (Olive, 7 Drawers)";
    description = "Rugged Portable Cabinet (Olive, 7 Drawers) can be used for storage.";
    price = 175;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableCabinet_01_7drawers_olive_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableCabinet_01_7drawers_black_F {
    displayName = "Rugged Portable Cabinet (Black, 7 Drawers)";
    description = "Rugged Portable Cabinet (Black, 7 Drawers) can be used for storage.";
    price = 175;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableCabinet_01_7drawers_black_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableCabinet_01_7drawers_sand_F {
    displayName = "Rugged Portable Cabinet (Sand, 7 Drawers)";
    description = "Rugged Portable Cabinet (Sand, 7 Drawers) can be used for storage.";
    price = 175;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableCabinet_01_7drawers_sand_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableCabinet_01_4drawers_olive_F {
    displayName = "Rugged Portable Cabinet (Olive, 4 Drawers)";
    description = "Rugged Portable Cabinet (Olive, 4 Drawers) can be used for storage.";
    price = 150;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableCabinet_01_4drawers_olive_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableCabinet_01_4drawers_black_F {
    displayName = "Rugged Portable Cabinet (Black, 4 Drawers)";
    description = "Rugged Portable Cabinet (Black, 4 Drawers) can be used for storage.";
    price = 150;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableCabinet_01_4drawers_black_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableCabinet_01_4drawers_sand_F {
    displayName = "Rugged Portable Cabinet (Sand, 4 Drawers)";
    description = "Rugged Portable Cabinet (Sand, 4 Drawers) can be used for storage.";
    price = 150;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableCabinet_01_4drawers_sand_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

class Land_PortableCabinet_01_medical_F {
    displayName = "Rugged Portable Cabinet (Medical, 7 Drawers)";
    description = "Rugged Portable Cabinet (Medical, 7 Drawers) can be used for storage.";
    price = 175;
    stock = 50;
    code = "if (player == (_this select 0)) then {[container_1,'Land_PortableCabinet_01_medical_F'] call grad_fortifications_fnc_addFort}; systemChat 'Your purchase is in the traders fortifications cargo.'; hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
};

			class Land_Pod_Heli_Transport_04_covered_F {
                displayName = "Taru Transport Pod";
                description = "Taru Transport Pod can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_Pod_Heli_Transport_04_covered_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Pod_Heli_Transport_04_bench_F {
                displayName = "Taru Bench Pod";
                description = "Taru Bench Pod can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_Pod_Heli_Transport_04_bench_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
	};
	
		class fortifications_supplyCrates {
            displayName = "Logistics: Fortifications: Supply Crates";
            kindOf = "other";
			tracking = 0;
			
			class ACE_Box_Chemlights {
                displayName = "ACE Chemlites Crate";
                description = "The ACE chemlights crate can be deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 0;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'ACE_Box_Chemlights'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class ACE_medicalSupplyCrate {
                displayName = "ACE Medical Supply Crate";
                description = "The ACE medical supply crate can be deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'ACE_medicalSupplyCrate'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_Syndicate_Wps_F {
                displayName = "Basic Weapons [Syndikat]";
                description = "Basic weapons [Syndikat] contains an assortmant of weapons and ammo and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Box_Syndicate_Wps_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			
			class Box_NATO_Wps_F {
                displayName = "Basic Weapons [NATO]";
                description = "Basic weapons [NATO] contains an assortmant of weapons and ammo and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Box_NATO_Wps_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_WpsSpecial_F {
                displayName = "Special Weapons [NATO]";
                description = "Special weapons [NATO] contains an assortmant of weapons, attachemnts, and ammo and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 30000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Box_NATO_WpsSpecial_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_Syndicate_Ammo_F {
                displayName = "Basic Ammo [Syndikat]";
                description = "Basic ammo [Syndikat] contains an assortmant ammo and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Box_Syndicate_Ammo_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class ACE_Box_Ammo {
                displayName = "ACE Ammo Supply Crate";
                description = "The ACE ammo supply crate contains an assortmant ammo and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 16000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'ACE_Box_Ammo'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_Ammo_F {
                displayName = "Basic Ammo [NATO]";
                description = "Basic ammo [NATO] contains an assortmant ammo and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 16000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Box_NATO_Ammo_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_Grenades_F {
                displayName = "Grenades [NATO]";
                description = "Grenades [NATO] contains an assortmant grenades and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 6500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Box_NATO_Grenades_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_Syndicate_WpsLaunch_F {
                displayName = "Launchers [Syndikat]";
                description = "Launchers [Syndikat] contains an assortmant of launchers with rounds and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Box_Syndicate_WpsLaunch_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_WpsLaunch_F {
                displayName = "Launchers [NATO]";
                description = "Launchers [NATO] contains an assortmant of launchers with rounds and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 60000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Box_NATO_WpsLaunch_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_Support_F {
                displayName = "Support [NATO]";
                description = "Support [NATO] contains an assortmant of ammo, attachments, and equipment. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Box_NATO_Support_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_supplyCrate_F {
                displayName = "Supply Box [NATO]";
                description = "Supply box [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'B_supplyCrate_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class ACE_Box_Misc {
                displayName = "ACE Miscellaneous Items Box";
                description = "The ACE miscellaneous items box can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'ACE_Box_Misc'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_CargoNet_01_ammo_F {
                displayName = "Cargo Net [NATO]";
                description = "This Cargo Net [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 149000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'B_CargoNet_01_ammo_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_Equip_F {
                displayName = "Equipment Box [NATO]";
                description = "This Equipment Box [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 17000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Box_NATO_Equip_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_Uniforms_F {
                displayName = "Uniforms Box [NATO]";
                description = "This Uniforms Box [NATO] contains an assortment of uniforms, stealth uniforms and ghillie suites. You can deploy it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Box_NATO_Uniforms_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_IED_Exp_F {
                displayName = "Explosives (IED)";
                description = "This crate of Explosives (IED) contains an assortmant of IED's. You can deploy it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Box_IED_Exp_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Slingload_01_Cargo_F {
                displayName = "Huron Cargo Container";
                description = "Huron Cargo Container can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'B_Slingload_01_Cargo_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Pod_Heli_Transport_04_box_F {
                displayName = "Taru Cargo Pod";
                description = "Taru Cargo Pod can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_1,'Land_Pod_Heli_Transport_04_box_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
	};
	
	    class fortifications_CSWs {
            displayName = "Logistics: Crew Served Weapons and Unmanned Weapon Systems";
            kindOf = "other";
			tracking = 0;

			 class B_Static_Designator_01_F {
                displayName = "Remote Designator (NATO)";
                description = "Remote Designator (NATO) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 2000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'B_Static_Designator_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class ACE_B_SpottingScope {
                displayName = "ACE Spotting Scope";
                description = "The ACE spotting scope is a small portable high-power telescope with added optics to present an erect image, optimized for the observation of terrestrial objects. They are used for hunting and target shooting to verify a marksman's shot placements, for tactical ranging and surveillance, and for any other application that requires more magnification than a pair of binoculars.";
                price = 1000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'ACE_B_SpottingScope'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class I_HMG_02_F {
                displayName = "M2 HMG .50";
                description = "M2 HMG .50 can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'I_HMG_02_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
			};
			class I_HMG_02_high_F {
                displayName = "M2 HMG .50 (Raised)";
                description = "M2 HMG .50 (raised) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'I_HMG_02_high_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
			};
		     class B_HMG_01_F {
                displayName = "Mk30 HMG .50";
                description = "Mk30 HMG .50 can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'B_HMG_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
			};
			class B_HMG_01_high_F {
                displayName = "Mk30 HMG .50 (Raised)";
                description = "Mk30 HMG .50 (raised) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'B_HMG_01_high_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
			};
			class B_GMG_01_F {
                displayName = "Mk32 GMG 20 mm";
                description = "Mk32 GMG 20 mm can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'B_GMG_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_GMG_01_high_F {
                displayName = "Mk32 GMG 20 mm (Raised)";
                description = "Mk32 GMG 20 mm (raised) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'B_GMG_01_high_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
			};
			class B_Mortar_01_F {
                displayName = "Mk6 Mortar";
                description = "Mk6 Mortar can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'B_Mortar_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class ace_dragon_staticAssembled {
                displayName = "M47 Super-Dragon";
                description = "***WARNING***THIS ITEM CAN ONLY BE REARMED WITH LOGISTICAL AMMO CONTAINERS AND AMMO TRUCKS***The M47 Super-Dragon uses a wire-guidance system in concert with a high explosive anti-tank warhead and was capable of defeating armored vehicles, fortified bunkers, main battle tanks, and other hardened targets. While it was primarily created to defeat the Soviet Union's T-55, T-62, and T-72 tanks, it saw use well into the 1990s, seeing action in the Persian Gulf War. The U.S. military officially retired the weapon in 2001. It can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'ace_dragon_staticAssembled'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_static_AT_F {
                displayName = "Static Titan Launcher (AT)";
                description = "Static Titan Launcher (AT) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'B_static_AT_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_static_AA_F {
                displayName = "Static Titan Launcher (AA) (NATO)";
                description = "Static Titan Launcher (AA) (NATO) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_1,'B_static_AA_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_AAA_System_01_F {
                displayName = "Praetorian 1C";
                description = "The Praetorian 1C is a static 20 mm anti-aircraft weapon system. The Praetorian 1C is a point-defence, close-in weapons system that is designed to engage Unmanned Aerial Vehicles and fixed-wing aircraft at short ranges.";
                price = 500000;
                stock = 20;
				code = "if (isServer) then {createVehicleCrew (_this select 2);(group this) setVariable ['Vcm_Disable',true]};if (player == (_this select 0)) then {[container_1,'B_AAA_System_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Radar_System_01_F {
                displayName = "AN/MPQ-105 Radar";
                description = "The AN/MPQ-105 is the search and detection, target track and illumination radar and missile commander for the surface-to-air defense missile system.";
                price = 500000;
                stock = 20;
				code = "if (isServer) then {createVehicleCrew (_this select 2);(group this) setVariable ['Vcm_Disable',true]};if (player == (_this select 0)) then {[container_1,'B_Radar_System_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_SAM_System_03_F {
                displayName = "MIM-145 Defender";
                description = "***1,000,000 Cr.***The Defender is a long-range, all-altitude, and all-weather air defence system used to counter enemy aircraft.";
                price = 1000000;
                stock = 20;
				code = "if (isServer) then {createVehicleCrew (_this select 2);(group this) setVariable ['Vcm_Disable',true]};if (player == (_this select 0)) then {[container_1,'B_SAM_System_03_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_SAM_System_01_F {
                displayName = "Mk49 Spartan";
                description = "***1,000,000 Cr.***The Mk49 Spartan is a static 127 mm anti-aircraft weapon system. It is a fire-and-forget anti-aircraft missile launcher that is designed to destroy helicopters and low-flying fixed-wing jets.";
                price = 1000000;
                stock = 20;
				code = "if (isServer) then {createVehicleCrew (_this select 2);(group this) setVariable ['Vcm_Disable',true]};if (player == (_this select 0)) then {[container_1,'B_SAM_System_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Ship_Gun_01_F {
                displayName = "	Mk45 Hammer";
                description = "***5,000,000 Cr.***The MK45 Hammer is a 120 mm non-ballistic missile-based fire support weapon. The cannon's camera has access to three magnification zoom levels, as well as normal day, night, and black/white-hot thermal vision modes.";
                price = 5000000;
                stock = 20;
				code = "if (isServer) then {createVehicleCrew (_this select 2);(group this) setVariable ['Vcm_Disable',true]};if (player == (_this select 0)) then {[container_1,'B_Ship_Gun_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Ship_MRLS_01_F {
                displayName = "	Mk41 VLS";
                description = "***10,000,000 Cr.***The MK41 Vertical Launch System primary loadout consists of thirty six Venator surface-to-surface cruise missiles. Of these, eighteen are outfitted with a high-explosive (HE) payload while the other eighteen contain cluster bomblet payloads instead.";
                price = 10000000;
                stock = 20;
				code = "if (isServer) then {createVehicleCrew (_this select 2);(group this) setVariable ['Vcm_Disable',true]};if (player == (_this select 0)) then {[container_1,'B_Ship_MRLS_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
        };	
		
		class fortifications_CSWAmmo {
            displayName = "Logistics: Crew Served Weapon Ammunition";
            kindOf = "Items";
			tracking = 0;

			class ace_csw_100Rnd_127x99_mag_Red {
                displayName = "ACE 12.7 mm HMG Tracer (Red) Belt";
                description = "***ATTENTION***YOU CAN GET UNLIMITED AMMO FOR VEHICLES AND CSW'S BY PURCHASING A VEHICLE AMMO BOX, HURON AMMO CONTAINER, OR A TARU AMMO POD FROM THE CARGO AND LOGISTICAL SUPPLIES MENU***ACE 12.7 mm HMG Tracer (Red) belt used in the Mk30 HMG .50";
                price = 100;
                stock = 10000;                
            };
			class ace_csw_20Rnd_20mm_g_belt {
                displayName = "ACE 20 mm Grenade Belt";
                description = "***ATTENTION***YOU CAN GET UNLIMITED AMMO FOR VEHICLES AND CSW'S BY PURCHASING A VEHICLE AMMO BOX, HURON AMMO CONTAINER, OR A TARU AMMO POD FROM THE CARGO AND LOGISTICAL SUPPLIES MENU***ACE 20 mm grenade belt used in the Mk32 GMG";
                price = 100;
                stock = 10000;                
            };
			class ace_csw_50Rnd_127x108_mag {
                displayName = "ACE 12.7x108 mm Cartridge";
                description = "***ATTENTION***YOU CAN GET UNLIMITED AMMO FOR VEHICLES AND CSW'S BY PURCHASING A VEHICLE AMMO BOX, HURON AMMO CONTAINER, OR A TARU AMMO POD FROM THE CARGO AND LOGISTICAL SUPPLIES MENU***ACE 12.7x108 mm cartridge.";
                price = 100;
                stock = 10000;                
            };
			class ACE_1Rnd_82mm_Mo_HE {
                displayName = "ACE 82mm HE Round";
                description = "***ATTENTION***YOU CAN GET UNLIMITED AMMO FOR VEHICLES AND CSW'S BY PURCHASING A VEHICLE AMMO BOX, HURON AMMO CONTAINER, OR A TARU AMMO POD FROM THE CARGO AND LOGISTICAL SUPPLIES MENU***ACE 82mm HE Round used in the Mk6 Mortar.";
                price = 100;
                stock = 10000;                
            };
			class ACE_1Rnd_82mm_Mo_HE_LaserGuided {
                displayName = "ACE 82mm Laser Guided HE Round";
                description = "***ATTENTION***YOU CAN GET UNLIMITED AMMO FOR VEHICLES AND CSW'S BY PURCHASING A VEHICLE AMMO BOX, HURON AMMO CONTAINER, OR A TARU AMMO POD FROM THE CARGO AND LOGISTICAL SUPPLIES MENU***ACE 82mm Laser Guided HE Round used in the Mk6 Mortar.";
                price = 100;
                stock = 10000;                
            };
			class ACE_1Rnd_82mm_Mo_Smoke {
                displayName = "ACE 82mm Smoke Round";
                description = "***ATTENTION***YOU CAN GET UNLIMITED AMMO FOR VEHICLES AND CSW'S BY PURCHASING A VEHICLE AMMO BOX, HURON AMMO CONTAINER, OR A TARU AMMO POD FROM THE CARGO AND LOGISTICAL SUPPLIES MENU***ACE 82mm Smoke Round used in the Mk6 Mortar.";
                price = 100;
                stock = 10000;                
            };
			class ACE_1Rnd_82mm_Mo_HE_Guided {
                displayName = "ACE 	82mm Guided HE Round";
                description = "***ATTENTION***YOU CAN GET UNLIMITED AMMO FOR VEHICLES AND CSW'S BY PURCHASING A VEHICLE AMMO BOX, HURON AMMO CONTAINER, OR A TARU AMMO POD FROM THE CARGO AND LOGISTICAL SUPPLIES MENU***ACE 	82mm Guided HE Round used in the Mk6 Mortar.";
                price = 100;
                stock = 10000;                
            };
			class ACE_1Rnd_82mm_Mo_Illum {
                displayName = "ACE 82mm Illumination Round";
                description = "***ATTENTION***YOU CAN GET UNLIMITED AMMO FOR VEHICLES AND CSW'S BY PURCHASING A VEHICLE AMMO BOX, HURON AMMO CONTAINER, OR A TARU AMMO POD FROM THE CARGO AND LOGISTICAL SUPPLIES MENU***ACE 82mm Illumination Round used in the Mk6 Mortar.";
                price = 100;
                stock = 10000;                
            };
			class ACE_Box_82mm_Mo_Combo {
                displayName = "ACE 82mm Default Loadout Box";
                description = "The ACE 82mm Default loadout box has 8 smoke, 8 illumination, and 32 high explosive rounds. It can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 3000;
                stock = 10000;
				kindOf = "other";
				code = "if (player == (_this select 0)) then {[container_1,'ACE_Box_82mm_Mo_Combo'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is located outside, it is the military-green Huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Titan_AA {
                displayName = "Titan AA Missile";
                description = "***ATTENTION***YOU CAN GET UNLIMITED AMMO FOR VEHICLES AND CSW'S BY PURCHASING A VEHICLE AMMO BOX, HURON AMMO CONTAINER, OR A TARU AMMO POD FROM THE CARGO AND LOGISTICAL SUPPLIES MENU***127 mm Anti-air missle for the Titan MPRL";
                price = 2000;
                stock = 10000;                
            };
			class Titan_AT {
                displayName = "Titan AT Missile";
                description = "***ATTENTION***YOU CAN GET UNLIMITED AMMO FOR VEHICLES AND CSW'S BY PURCHASING A VEHICLE AMMO BOX, HURON AMMO CONTAINER, OR A TARU AMMO POD FROM THE CARGO AND LOGISTICAL SUPPLIES MENU***127 mm Anti-Tank round used in the Titan MPRL Compact";
                price = 2000;
                stock = 10000;                
            };
        };
};

