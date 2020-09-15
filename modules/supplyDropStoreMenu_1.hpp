    //buyables set/store:
    class fortificationStore_2 {

        //category:
		class fortifications {
            displayName = "Fortifications";
            kindOf = "other";
			tracking = 1;
			
			class ACE_Sandbag_empty {
                displayName = "ACE Sandbag (empty)";
                description = "The ACE Sandbag (empty) can be utilize with the ACE self interaction menu.";
                price = 0;
                stock = 10000;
				kindOf = Items;
            };
			class ACE_EntrenchingTool {
                displayName = "ACE Entrenching Tool";
                description = "The ACE entrenching tool can be utilize to dig trenches with the ACE self interaction menu.";
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
				code = "if (player == (_this select 0)) then {[container_2,'ACE_ConcertinaWireCoil'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Razorwire_F {
                displayName = "Razorwire Barrier";
                description = "The razorwire barrier can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 1000;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Razorwire_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class land_gm_sandbags_01_window_02 {
                displayName = "Sandbags (Half Baricaded Window)";
                description = "Sandbags (Half Baricaded Window) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'land_gm_sandbags_01_window_02'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class land_gm_sandbags_01_window_01 {
                displayName = "Sandbags (Baricaded Window)";
                description = "Sandbags (Baricaded Window) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'land_gm_sandbags_01_window_01'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class land_gm_sandbags_01_door_02 {
                displayName = "Sandbags (Half Baricaded Door)";
                description = "Sandbags (Half Baricaded Door) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'land_gm_sandbags_01_door_02'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class land_gm_sandbags_01_door_01 {
                displayName = "Sandbags  (Baricaded Door)";
                description = "Sandbags (Baricaded Door) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'land_gm_sandbags_01_door_01'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_BagFence_Corner_F {
                displayName = "Sandbag Wall (Corner)";
                description = "Sandbag Wall (Corner) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BagFence_Corner_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_BagFence_End_F {
                displayName = "Sandbag Wall (End)";
                description = "Sandbag Wall (End) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BagFence_End_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class land_gm_sandbags_01_short_01 {
                displayName = "Sandbags  (End)";
                description = "Sandbags (End) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'land_gm_sandbags_01_short_01'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_BagFence_Round_F {
                displayName = "Sandbag Wall (Round)";
                description = "Sandbag Wall (Round)) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BagFence_Round_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class land_gm_sandbags_01_low_01 {
                displayName = "Sandbags (Low Half Circle)";
                description = "Sandbags (Low Half Circle) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'land_gm_sandbags_01_low_01'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class land_gm_sandbags_01_round_01 {
                displayName = "Sandbags (Half Circle)";
                description = "Sandbags (Half Circle) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 30;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'land_gm_sandbags_01_round_01'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };	
		    class Land_BagFence_Short_F {
                displayName = "Sandbag Wall (Short)";
                description = "Sandbag Wall (Short) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BagFence_Short_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_BagFence_Long_F {
                displayName = "Sandbag Wall (Long)";
                description = "Sandbag Wall (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BagFence_Long_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class land_gm_sandbags_01_wall_01 {
                displayName = "Sandbags (Wall)";
                description = "Sandbags (Wall) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'land_gm_sandbags_01_wall_01'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class land_gm_sandbags_02_wall {
                displayName = "Sandbags (High Wall)";
                description = "Sandbags (High Wall) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'land_gm_sandbags_02_wall'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class land_gm_sandbags_02_bunker_high {
                displayName = "Sandbags (Bunker)";
                description = "Sandbags (Bunker) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'land_gm_sandbags_02_bunker_high'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HBarrier_1_F {
                displayName = "H-barrier (Block)";
                description = "H-barrier (Block) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrier_1_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HBarrier_3_F {
                displayName = "H-barrier (3 Blocks)";
                description = "H-barrier (3 Blocks) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 300;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrier_3_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HBarrier_5_F {
                displayName = "H-barrier (5 Blocks)";
                description = "H-barrier (5 Blocks) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrier_5_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HBarrierBig_F {
                displayName = "H-barrier (Big, 4 Blocks)";
                description = "H-barrier (Big, 4 Blocks) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrierBig_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HBarrierWall4_F {
                displayName = "H-barrier Wall (Short)";
                description = "H-barrier Wall (Short) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 600;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrierWall4_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HBarrierWall6_F {
                displayName = "H-barrier Wall (Long)";
                description = "H-barrier Wall (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrierWall6_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HBarrierWall_corridor_F {
                displayName = "H-barrier Corridor";
                description = "H-barrier Corridor can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrierWall_corridor_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HBarrierWall_corner_F {
                displayName = "H-barrier Wall (Corner)";
                description = "H-barrier Wall (Corner) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 800;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrierWall_corner_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_CncBarrier_F {
                displayName = "Concrete Barrier";
                description = "Concrete Barrier can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_CncBarrier_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_CncBarrierMedium_F {
                displayName = "Concrete Barrier (Medium)";
                description = "Concrete Barrier (Medium) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 250;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_CncBarrierMedium_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_CncBarrierMedium4_F {
                displayName = "Concrete Barrier (Medium, Long)";
                description = "Concrete Barrier (Medium, Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 300;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_CncBarrierMedium4_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Concrete_SmallWall_4m_F {
                displayName = "Concrete Wall (Small, 4 m)";
                description = "Concrete Wall (Small, 4 m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Concrete_SmallWall_4m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Concrete_SmallWall_8m_F {
                displayName = "Concrete Wall (Small, 8 m)";
                description = "Concrete Wall (Small, 8 m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Concrete_SmallWall_8m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Mil_WallBig_4m_F {
                displayName = "Military Base Wall";
                description = "Military Base Wall can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 300;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Mil_WallBig_4m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Mil_WallBig_Corner_F {
                displayName = "Military Base Wall (Corner)";
                description = "Military Base Wall (Corner) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Mil_WallBig_Corner_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Mil_WallBig_Gate_F {
                displayName = "Military Base Wall (Gate)";
                description = "Military Base Wall (Gate) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 300;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Mil_WallBig_Gate_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_CncWall1_F {
                displayName = "Concrete Wall";
                description = "Concrete Wall can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 100;
				code = "if (player == (_this select 0)) then {code = [container_2,'Land_CncWall1_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_CncWall4_F {
                displayName = "Concrete Wall (Long)";
                description = "concrete Wall (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1500;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_CncWall4_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_BarGate_F {
                displayName = "Bar Gate";
                description = "Bar Gate";
                price = 100;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BarGate_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_RoadBarrier_01_F {
                displayName = "Bar Gate (v2)";
                description = "Bar Gate (v2) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_RoadBarrier_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class RoadBarrier_small_F {
                displayName = "Road Barrier (Small)";
                description = "Road Barrier (Small) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'RoadBarrier_small_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_PlasticBarrier_01_line_x6_F {
                displayName = "Plastic Barrier (Small, 6)";
                description = "Plastic Barrier (Small, 6) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_PlasticBarrier_01_line_x6_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Crash_barrier_F {
                displayName = "Safety Barrier";
                description = "Safety Barrier can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Crash_barrier_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_DragonsTeeth_01_4x2_new_F {
                displayName = "Dragon's Teeth (Row, new)";
                description = "Dragon's Teeth (Row, new) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_DragonsTeeth_01_4x2_new_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_CzechHedgehog_01_new_F {
                displayName = "Czech Hedgehog (New)";
                description = "Czech Hedgehog (New) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_CzechHedgehog_01_new_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_RampConcrete_F {
                displayName = "Concrete Ramp";
                description = "Concrete Ramp can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_RampConcrete_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_New_WiredFence_5m_F {
                displayName = "Barbed Wire Fence";
                description = "Barbed Wire Fence can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_New_WiredFence_5m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_New_WiredFence_10m_F {
                displayName = "Barbed Wire Fence (Long)";
                description = "Barbed Wire Fence (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 400;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_New_WiredFence_10m_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_New_WiredFence_pole_F {
                displayName = "Barbed Wire Fence (Pole)";
                description = "Barbed Wire Fence (Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_New_WiredFence_pole_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_NetFence_02_m_pole_F {
                displayName = "Concrete Net Fence (Pillar)";
                description = "Concrete Net Fence (Pillar) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_NetFence_02_m_pole_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_BackAlley_01_l_gate_F {
                displayName = "Back Alley Wire Fence (Gate)";
                description = "Back Alley Wire Fence (Gate) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BackAlley_01_l_gate_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_NetFence_02_m_gate_v1_F {
                displayName = "Concrete Net Fence (Gate, Narrow)";
                description = "Concrete Net Fence (Gate, Narrow) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_NetFence_02_m_gate_v1_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_NetFence_02_m_gate_v2_F {
                displayName = "Concrete Net Fence (Gate, Wide)";
                description = "Concrete Net Fence (Gate, Wide) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_NetFence_02_m_gate_v2_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class land_gm_woodbunker_01 {
                displayName = "Shed";
                description = "The shed can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                 price = 100;
                 stock = 100;
				 code = "if (player == (_this select 0)) then {[container_2,'land_gm_woodbunker_01'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class land_gm_woodbunker_01_bags {
                displayName = "Sandbags (Shed)";
                description = "Sandbags (Shed) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                 price = 500;
                 stock = 100;
				 code = "if (player == (_this select 0)) then {[container_2,'land_gm_woodbunker_01_bags'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_BagBunker_Small_F {
                displayName = "Bunker (Small)";
                description = "Bunker (Small) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                 price = 500;
                 stock = 100;
				 code = "if (player == (_this select 0)) then {[container_2,'Land_BagBunker_Small_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_BagBunker_Large_F {
                displayName = "Bunker (Large)";
                description = "Bunker (Large) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BagBunker_Large_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_BagBunker_Tower_F {
                displayName = "Bunker (Tower)";
                description = "Bunker (Tower) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 2000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BagBunker_Tower_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
			};
			class Land_HBarrierTower_F {
                displayName = "H-barrier Watchtower";
                description = "H-barrier Watchtower can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 2000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrierTower_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			
			class Land_PillboxBunker_01_hex_F {
                displayName = "Pillbox (Hexagonal)";
                description = "Pillbox (Hexagonal) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_PillboxBunker_01_hex_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_PillboxBunker_01_rectangle_F {
                displayName = "Pillbox (Rectangular)";
                description = "Pillbox (Rectangular) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_PillboxBunker_01_rectangle_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_PillboxBunker_01_big_F {
                displayName = "Pillbox (Big)";
                description = "Pillbox (Big) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_PillboxBunker_01_big_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_DeerStand_01_F {
                displayName = "Deer Stand (v1)";
                description = "***WARNING***THIS FORTIFICATION DOES NOT PERSIST***Deer Stand (v1) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 2000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_DeerStand_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_DeerStand_02_F {
                displayName = "Deer Stand (v2)";
                description = "***WARNING***THIS FORTIFICATION DOES NOT PERSIST***Deer Stand (v2) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 3000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_DeerStand_02_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_GuardTower_02_F {
                displayName = "Guard Tower (small)";
                description = "***WARNING***THIS FORTIFICATION DOES NOT PERSIST***The guard tower (small) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 4000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_GuardTower_02_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_TTowerBig_1_F {
                displayName = "Transmitter Tower";
                description = "***WARNING***THIS FORTIFICATION DOES NOT PERSIST***The transmitter tower can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_TTowerBig_1_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_TTowerBig_2_F {
                displayName = "Transmitter Tower (Tall)";
                description = "***WARNING***THIS FORTIFICATION DOES NOT PERSIST***The transmitter tower (tall) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_TTowerBig_2_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
        };
		class Dfortifications {
            displayName = "Lights, Ladders, Other";
            kindOf = "other";
			tracking = 1;
			
			class ACE_TacticalLadder {
                displayName = "ACE Telescopic Ladder";
                description = "The ACE Telescopic ladder can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 400;
				code = "if (player == (_this select 0)) then {[container_2,'ACE_TacticalLadder'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_PierLadder_F {
                displayName = "Ladder (Pier)";
                description = "***WARNING***THIS FORTIFICATION DOES NOT PERSIST***Ladder (Pier) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_PierLadder_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_TentLamp_01_standing_F {
                displayName = "Tent Lamp (White) (Standing)";
                description = "The tent lamp can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_TentLamp_01_standing_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_TentLamp_01_standing_red_F {
                displayName = "Tent Lamp (Red) (Standing)";
                description = "The tent lamp can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_TentLamp_01_standing_red_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_TentLamp_01_suspended_F {
                displayName = "Tent Lamp (White) (Suspended)";
                description = "The tent lamp can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_TentLamp_01_suspended_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };	
			class Land_TentLamp_01_suspended_red_F {
                displayName = "Tent Lamp (Red) (Suspended)";
                description = "The tent lamp can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_TentLamp_01_suspended_red_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };		
			class Land_PortableLight_single_F {
                displayName = "Portable Light (Single)";
                description = "***WARNING***THIS FORTIFICATION DOES NOT PERSIST***The portable light can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {code = [container_2,'Land_PortableLight_single_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_PortableLight_double_F {
                displayName = "Portable Lights (Double)";
                description = "***WARNING***THIS FORTIFICATION DOES NOT PERSIST***The portable lights can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 75;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_PortableLight_double_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_LampStreet_small_F {
                displayName = "Street Lamp (Small)";
                description = "***WARNING***THIS FORTIFICATION DOES NOT PERSIST***The street lamp (small) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_LampStreet_small_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_LampAirport_F {
                displayName = "Airport Lamp";
                description = "***WARNING***THIS FORTIFICATION DOES NOT PERSIST***The airport lamp can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_LampAirport_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_gc_bgs_searchlight_01 {
                displayName = "Searchlight";
                description = "The searchlight can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 2000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_gc_bgs_searchlight_01'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_gc_tent_5x5m {
                displayName = "Tent (5x5m)";
                description = "Tent (5x5m) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_gc_tent_5x5m'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
		    class CamoNet_BLUFOR_F {
                displayName = "Camouflage Net (Green)";
                description = "Camouflage Net (Green) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'CamoNet_BLUFOR_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class CamoNet_BLUFOR_open_F {
                displayName = "Camouflage Net (Open, Green)";
                description = "Camouflage Net (Open, Green) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'CamoNet_BLUFOR_open_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
				
            };
			class CamoNet_BLUFOR_big_F {
                displayName = "Camouflage Vehicle Cover (Green)";
                description = "Camouflage Vehicle Cover (Green) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'CamoNet_BLUFOR_big_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
		
			class Land_IRMaskingCover_02_F {
                displayName = "Camouflage Net (Small)";
                description = "Camouflage Net (Small) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_IRMaskingCover_02_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_IRMaskingCover_01_F {
                displayName = "IR Msking Tent (Large)";
                description = "IR Msking Tent (Large) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_IRMaskingCover_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_HelipadCircle_F {
                displayName = "Helipad (Circle)";
                description = "Helipad (Circle) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HelipadCircle_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Windsock_01_F {
                displayName = "Windsock";
                description = "Windsock can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Windsock_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Flag_US_F {
                displayName = "Flag (USA)";
                description = "Flag (USA) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Flag_US_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Flag_POWMIA_F {
                displayName = "Flag (POW MIA)";
                description = "Flag (POW MIA) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Flag_POWMIA_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Monument_02_F {
                displayName = "War Monument";
                description = "***WARNING***THIS FORTIFICATION DOES NOT PERSIST***War Monument can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Monument_02_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Tombstone_17_F {
                displayName = "Tombstone (wooden, v6)";
                description = "***WARNING***THIS FORTIFICATION DOES NOT PERSIST***Tombstone (wooden, v6) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Tombstone_17_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Grave_obelisk_F {
                displayName = "Grave (Obelisk)";
                description = "***WARNING***THIS FORTIFICATION DOES NOT PERSIST***Grave (Obelisk) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Grave_obelisk_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_SignM_WarningMilitaryArea_english_F {
                displayName = "Sign (Military Area, English)";
                description = "***WARNING***THIS FORTIFICATION DOES NOT PERSIST***Sign (Military Area, English) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_SignM_WarningMilitaryArea_english_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_SignM_WarningMilitaryVehicles_english_F {
                displayName = "Sign (Military Vehicles, English)";
                description = "***WARNING***THIS FORTIFICATION DOES NOT PERSIST***Sign (Military Vehicles, English) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 30;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_SignM_WarningMilitaryVehicles_english_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Target_Oval_F {
                displayName = "Target-Oval (Ground)";
                description = "The target can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Target_Oval_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Target_Dueling_01_F {
                displayName = "Dueling Target (Ground)";
                description = "The target can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Target_Dueling_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Target_PopUp3_Moving_90deg_Acc2_F {
                displayName = "Moving Target 3 (Front Accuracy)";
                description = "The target can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Target_PopUp3_Moving_90deg_Acc2_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };	
        };
	    class Cfortifications {
            displayName = "Cargo and Logistical Supplies";
            kindOf = "other";
			tracking = 1;
			
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
				code = "if (player == (_this select 0)) then {[container_2,'ACE_Wheel'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class ACE_Track {
                displayName = "ACE Spare Track";
                description = "ACE Spare Track can be utilized to repair damaged vehichle tracks. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (consumed on use)";
                price = 100;
                stock = 10000;
				code = "if (player == (_this select 0)) then {[container_2,'ACE_Track'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };	
			class Land_CanisterFuel_F {
                displayName = "Fuel Canister (15 Liters)";
                description = "The fuel canister (15 liters) can be utilized to refuel vehicles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_CanisterFuel_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };	
			class FlexibleTank_01_sand_F {
                displayName = "Flexible Fuel Tank (300 Liters)";
                description = "Flexible Fuel Tank (300 liters) can be utilized to refuel vehicles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'FlexibleTank_01_sand_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class StorageBladder_01_fuel_sand_F {
                displayName = "Fuel Bladder (10,000 Liters)";
                description = "The fuel bladder (10,000 Liters) can be utilized to refuel vehicles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'StorageBladder_01_fuel_sand_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Slingload_01_Fuel_F {
                displayName = "Huron Fuel Container (10,000 Liters)";
                description = "The huron fuel container can be utilized to refuel vehicles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'B_Slingload_01_Fuel_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Pod_Heli_Transport_04_fuel_F {
                displayName = "Taru Fuel Pod (10,000 Liters)";
                description = "Taru Fuel Pod can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Pod_Heli_Transport_04_fuel_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_BarrelWater_F {
                displayName = "Plastic Barrel (160 Liters)";
                description = "The plastic barrel (160 liters) can be utilized to refill canteens and water bottles, you can also drink straight from the spicket. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 80;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BarrelWater_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };			
			class Land_StallWater_F {
                displayName = "Water Stall (250 Liters)";
                description = "The water stall (250 liters) can be utilized to refill yourself, canteens and water bottles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 125;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_StallWater_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_WaterBarrel_F {
                displayName = "Water Barrel ( Liters)";
                description = "The water barrel ( liters) can be utilized to refill yourself, canteens and water bottles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 125;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_WaterBarrel_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_WaterTank_F {
                displayName = "Water Stall ( Liters)";
                description = "The water stall ( liters) can be utilized to refill yourself, canteens and water bottles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 125;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_WaterTank_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class StorageBladder_02_water_forest_F {
                displayName = "Water Bladder (10,000 Liters)";
                description = "Water Bladder (10,000 liters) can be utilized to refill yourself, canteens and water bottles in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'StorageBladder_02_water_forest_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };		
			class WaterPump_01_forest_F {
                displayName = "Water Pump (Unlimited)";
                description = "Water Pump (unlimited) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications. (depletes on use)";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'WaterPump_01_forest_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_MedicalTent_01_MTP_closed_F {
                displayName = "Medical Tent (Medical Facility)";
                description = "The huron medical container (medical facility) will enable the use of personal aid kits (PAK's) in the field and is a transportable spawn point. It can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_MedicalTent_01_MTP_closed_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Slingload_01_Medevac_F {
                displayName = "Huron Medical Container (Medical Facility)";
                description = "The huron medical container (medical facility) will enable the use of personal aid kits (PAK's) in the field and is a transportable spawn point. It can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'B_Slingload_01_Medevac_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Pod_Heli_Transport_04_medevac_F {
                displayName = "Taru Medical Pod (Medical Facility)";
                description = "The taru medical pod (medical facility) will enable the use of personal aid kits (PAK's) in the field and is a transportable spawn point. It can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Pod_Heli_Transport_04_medevac_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_AmmoVeh_F {
                displayName = "Vehicle Ammo [NATO] (Unlimited)";
                description = "Vehicle ammo [NATO] can be utilized to rearm vehicles and CSW's (crew served weapons) in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_AmmoVeh_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Slingload_01_Ammo_F {
                displayName = "Huron Ammo Container (Unlimited)";
                description = "The huron ammo container can be utilized to rearm vehicles and CSW's (crew served weapons) in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'B_Slingload_01_Ammo_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Pod_Heli_Transport_04_ammo_F {
                displayName = "Taru Ammo Pod (Unlimited)";
                description = "Taru Ammo Pod can be utilized to rearm vehicles and CSW's (crew served weapons) in the field. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Pod_Heli_Transport_04_ammo_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_RepairDepot_01_green_F {
                displayName = "Repair Depot (Green)";
                description = "The repair depot (Green) can be utilized to fully repair any vehicle in the field. It deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_RepairDepot_01_green_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Slingload_01_Repair_F {
                displayName = "Huron Repair Container";
                description = "Huron Repair Container can be utilized to fully repair any vehicle in the field. It deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'B_Slingload_01_Repair_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Pod_Heli_Transport_04_repair_F {
                displayName = "Taru Repair Pod";
                description = "Taru Repair Pod  can be utilized to fully repair any vehicle in the field. It deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Pod_Heli_Transport_04_repair_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_PaperBox_01_small_closed_brown_IDAP_F {
                displayName = "IDAP Cardboard Box (Empty)"; 
                description = "The cardboard box (empty) can be utilized to store scavanged equipment. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_PaperBox_01_small_closed_brown_IDAP_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_Wps_F {
                displayName = "Weapons Cache (Empty)";
                description = "The weapons cache (empty) can be utilized to store scavanged equipment. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_Wps_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_wood_01_empty {
                displayName = "Ammobox Wood (Type 1) (Empty)";
                description = "The ammobox Wood (type 1) (empty) can be utilized to store scavanged equipment. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_wood_01_empty'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_wood_02_empty {
                displayName = "Ammobox Wood (Type 2) (Empty)";
                description = "The ammobox Wood (type 2) (empty) can be utilized to store scavanged equipment. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_wood_02_empty'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_wood_03_empty {
                displayName = "Ammobox Wood (Type 3) (Empty)";
                description = "The ammobox Wood (type 3) (empty) can be utilized to store scavanged equipment. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_wood_03_empty'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_wood_04_empty {
                displayName = "Ammobox Wood (Type 4) (Empty)";
                description = "The ammobox Wood (type 4) (empty) can be utilized to store scavanged equipment. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_wood_04_empty'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_wood_05_empty {
                displayName = "Ammobox Wood (Type 5) (Empty)";
                description = "The ammobox Wood (type 4) (empty) can be utilized to store scavanged equipment. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_wood_05_empty'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_WoodenCrate_01_F {
                displayName = "Wooden Crate (Empty)";
                description = "The wooden crate (empty) can be utilized to store scavanged equipment. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_WoodenCrate_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class CargoNet_01_box_F {
                displayName = "Cargo Net Box Pallet (Empty )";
                description = "***ATTENTION***THIS IS THE ONLY EMPTY CONTAINER THAT CAN BE SLINGLOADED WITH ALiVE COMBAT SUPPORT***The cargo net box pallet (empty) can be utilized to store scavanged equipment. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 250;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'CargoNet_01_box_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Pod_Heli_Transport_04_covered_F {
                displayName = "Taru Transport Pod";
                description = "Taru Transport Pod can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Pod_Heli_Transport_04_covered_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Pod_Heli_Transport_04_bench_F {
                displayName = "Taru Bench Pod";
                description = "Taru Bench Pod can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Pod_Heli_Transport_04_bench_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
	};
		class Lfortifications {
            displayName = "Supply Crates";
            kindOf = "other";
			tracking = 1;
			
			class ACE_Box_Chemlights {
                displayName = "ACE Chemlites Crate";
                description = "The ACE chemlights crate can be deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 0;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'ACE_Box_Chemlights'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class ACE_medicalSupplyCrate {
                displayName = "ACE Medical Supply Crate";
                description = "The ACE medical supply crate can be deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'ACE_medicalSupplyCrate'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_Syndicate_Wps_F {
                displayName = "Basic Weapons [Syndikat]";
                description = "Basic weapons [Syndikat] contains an assortmant of weapons and ammo and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_Syndicate_Wps_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			
			class Box_NATO_Wps_F {
                displayName = "Basic Weapons [NATO]";
                description = "Basic weapons [NATO] contains an assortmant of weapons and ammo and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_Wps_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_WpsSpecial_F {
                displayName = "Special Weapons [NATO]";
                description = "Special weapons [NATO] contains an assortmant of weapons, attachemnts, and ammo and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 30000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_WpsSpecial_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_Syndicate_Ammo_F {
                displayName = "Basic Ammo [Syndikat]";
                description = "Basic ammo [Syndikat] contains an assortmant ammo and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_Syndicate_Ammo_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class ACE_Box_Ammo {
                displayName = "ACE Ammo Supply Crate";
                description = "The ACE ammo supply crate contains an assortmant ammo and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 16000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'ACE_Box_Ammo'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_Ammo_F {
                displayName = "Basic Ammo [NATO]";
                description = "Basic ammo [NATO] contains an assortmant ammo and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 16000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_Ammo_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_Grenades_F {
                displayName = "Grenades [NATO]";
                description = "Grenades [NATO] contains an assortmant grenades and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 6500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_Grenades_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_Syndicate_WpsLaunch_F {
                displayName = "Launchers [Syndikat]";
                description = "Launchers [Syndikat] contains an assortmant of launchers with rounds and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_Syndicate_WpsLaunch_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_WpsLaunch_F {
                displayName = "Launchers [NATO]";
                description = "Launchers [NATO] contains an assortmant of launchers with rounds and can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 60000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_WpsLaunch_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_Support_F {
                displayName = "Support [NATO]";
                description = "Support [NATO] contains an assortmant of ammo, attachments, and equipment. You can deployed it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_Support_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_supplyCrate_F {
                displayName = "Supply Box [NATO]";
                description = "Supply box [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'B_supplyCrate_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class ACE_Box_Misc {
                displayName = "ACE Miscellaneous Items Box";
                description = "The ACE miscellaneous items box can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'ACE_Box_Misc'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_CargoNet_01_ammo_F {
                displayName = "Cargo Net [NATO]";
                description = "This Cargo Net [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 149000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'B_CargoNet_01_ammo_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_Equip_F {
                displayName = "Equipment Box [NATO]";
                description = "This Equipment Box [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 17000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_Equip_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_NATO_Uniforms_F {
                displayName = "Uniforms Box [NATO]";
                description = "This Uniforms Box [NATO] contains an assortment of uniforms, stealth uniforms and ghillie suites. You can deploy it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_Uniforms_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Box_IED_Exp_F {
                displayName = "Explosives (IED)";
                description = "This crate of Explosives (IED) contains an assortmant of IED's. You can deploy it with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_IED_Exp_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_6Rnd_mine_ap_dm31_put {
                displayName = "Mine AP DM31 (6 Rounds)";
                description = "This crate of Mine AP DM31 (6 rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_6Rnd_mine_ap_dm31_put'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_4Rnd_mine_at_DM21_put {
                displayName = "Mine AT DM21 (4 Rounds)";
                description = "This crate of Mine AT DM21 (4 rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 2000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_4Rnd_mine_at_DM21_put'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_4Rnd_mine_at_tm46_put {
                displayName = "Mine AT TM46 (4 Rounds)";
                description = "This crate of Mine AT TM46 (4 rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 2000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_4Rnd_mine_at_tm46_put'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_2160Rnd_545x39mm_b_7N6_ak74 {
                displayName = "5.45x39mm 7N6 (2160 Rounds)";
                description = "This crate of 5.45x39mm 7N6 (2160 rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_2160Rnd_545x39mm_b_7N6_ak74'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_880Rnd_762x39mm_b_M43_ak47 {
                displayName = "7.62x39mm M43 (800 Rounds)";
                description = "This crate of 7.62x39mm M43 (800 rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_880Rnd_762x39mm_b_M43_ak47'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_880Rnd_762x39mm_b_T_m43_ak47 {
                displayName = "7.62x39mm M43T (800 Rounds)";
                description = "This crate of 7.62x39mm M43T (800 rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_880Rnd_762x39mm_b_T_m43_ak47'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_1000Rnd_762x51mm_b_DM111_g3 {
                displayName = "7.62x51mm DM111 (1000 Rounds)";
                description = "This crate of 7.62x51mm DM111 (1000 rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_880Rnd_762x39mm_b_T_m43_ak47'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_1000Rnd_762x51mm_ap_DM151_g3 {
                displayName = "7.62x51mm DM151 (1000 Rounds)";
                description = "This crate of 7.62x51mm DM151 (1000 rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_880Rnd_762x39mm_b_T_m43_ak47'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_1000Rnd_762x51mm_b_t_DM21A1_g3 {
                displayName = "7.62x51mm DM21A1 (1000 Rounds)";
                description = "This crate of 7.62x51mm DM21A1 (1000 rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_1000Rnd_762x51mm_b_t_DM21A1_g3'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_480Rnd_762x51mm_b_t_DM21A1_mg3 {
                displayName = "7.62x51mm DM21A1 (480 Rounds)";
                description = "This crate of 7.62x51mm DM21A1 (480 rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_480Rnd_762x51mm_b_t_DM21A1_mg3'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_1000Rnd_762x51mm_b_DM41_g3 {
                displayName = "7.62x51mm DM41 (1000 Rounds)";
                description = "This crate of 7.62x51mm DM41 (1000 rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_1000Rnd_762x51mm_b_DM41_g3'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_880Rnd_762x54mmR_api_7bz3_pk {
                displayName = "7.62x54mm 7BZ3 (800 Rounds)";
                description = "This crate of 7.62x54mm 7BZ3 (800 rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_880Rnd_762x54mmR_api_7bz3_pk'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_280Rnd_762x53mm_b_7N1_svd {
                displayName = "7.62x54mm 7N1 (280 Rounds)";
                description = "This crate of 7.62x54mm 7N1 (280 rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_280Rnd_762x53mm_b_7N1_svd'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_800Rnd_762x54mmR_b_t_7t2_pk {
                displayName = "7.62x54mm 7T2 (1000 Rounds)";
                description = "This crate of 7.62x54mm 7T2 (1000 rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_800Rnd_762x54mmR_b_t_7t2_pk'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_2500Rnd_9x19mm_b_DM11_mp2 {
                displayName = "9X19mm DM11 (2500 Rounds)";
                description = "This crate of 9X19mm DM11 (2500 Rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_2500Rnd_9x19mm_b_DM11_mp2'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_3Rnd_40mm_heat_pg7v_rpg7 {
                displayName = "40mm PG-7V (4 Rounds)";
                description = "This crate of 40mm PG-7V (4 Rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 400;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_3Rnd_40mm_heat_pg7v_rpg7'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_4Rnd_44x537mm_heat_DM32_pzf44_2 {
                displayName = "44x537mm DM32 (4 Rounds)";
                description = "This crate of 40MM PG-7V (4 Rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 400;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_4Rnd_44x537mm_heat_DM32_pzf44_2'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_4Rnd_67mm_heat_dm22a1_g3 {
                displayName = "67mm HEAT DM22A1 (4 Rounds)";
                description = "This crate of 67mm HEAT DM22A1 (4 Rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 400;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_4Rnd_67mm_heat_dm22a1_g3'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_2Rnd_84x245mm_heat_t_DM12a1_carlgustaf {
                displayName = "84x245mm HEAT-T DM12a1 (2 Rounds)";
                description = "This crate of 84x245mm HEAT-T DM12a1 (2 Rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 400;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_2Rnd_84x245mm_heat_t_DM12a1_carlgustaf'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_2Rnd_84x245mm_heat_t_DM22_carlgustaf {
                displayName = "84x245mm HEAT-T DM22 (2 Rounds)";
                description = "This crate of 84x245mm HEAT-T DM22 (2 Rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 400;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_2Rnd_84x245mm_heat_t_DM22_carlgustaf'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_AmmoBox_2Rnd_84x245mm_heat_t_DM32_carlgustaf {
                displayName = "84x245mm HEAT-T DM32 (2 Rounds)";
                description = "This crate of 84x245mm HEAT-T DM32 (2 Rounds) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 400;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'gm_AmmoBox_2Rnd_84x245mm_heat_t_DM32_carlgustaf'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Slingload_01_Cargo_F {
                displayName = "Huron Cargo Container";
                description = "Huron Cargo Container can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'B_Slingload_01_Cargo_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class Land_Pod_Heli_Transport_04_box_F {
                displayName = "Taru Cargo Pod";
                description = "Taru Cargo Pod can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Pod_Heli_Transport_04_box_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
	};
	    class Sweapons {
            displayName = "Crew Served Weapons and Unmanned Weapon Systems";
            kindOf = "other";
			tracking = 1;

			 class B_Static_Designator_01_F {
                displayName = "Remote Designator (NATO)";
                description = "Remote Designator (NATO) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 2000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'B_Static_Designator_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class ACE_B_SpottingScope {
                displayName = "ACE Spotting Scope";
                description = "The ACE spotting scope is a small portable high-power telescope with added optics to present an erect image, optimized for the observation of terrestrial objects. They are used for hunting and target shooting to verify a marksman's shot placements, for tactical ranging and surveillance, and for any other application that requires more magnification than a pair of binoculars.";
                price = 1000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'ACE_B_SpottingScope'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class I_HMG_02_F {
                displayName = "M2 HMG .50";
                description = "M2 HMG .50 can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'I_HMG_02_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
			};
			class I_HMG_02_high_F {
                displayName = "M2 HMG .50 (Raised)";
                description = "M2 HMG .50 (raised) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'I_HMG_02_high_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
			};
		     class B_HMG_01_F {
                displayName = "Mk30 HMG .50";
                description = "Mk30 HMG .50 can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'B_HMG_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
			};
			class B_HMG_01_high_F {
                displayName = "Mk30 HMG .50 (Raised)";
                description = "Mk30 HMG .50 (raised) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'B_HMG_01_high_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
			};
			class B_GMG_01_F {
                displayName = "Mk32 GMG 20 mm";
                description = "Mk32 GMG 20 mm can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'B_GMG_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_GMG_01_high_F {
                displayName = "Mk32 GMG 20 mm (Raised)";
                description = "Mk32 GMG 20 mm (raised) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'B_GMG_01_high_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
			};
			class B_Mortar_01_F {
                displayName = "Mk6 Mortar";
                description = "Mk6 Mortar can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'B_Mortar_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_pl_army_fagot_launcher_tripod {
                displayName = "Fagot (AT)";
                description = "***WARNING***THIS ITEM CAN ONLY BE REARMED WITH LOGISTICAL AMMO CONTAINERS AND AMMO TRUCKS***Fagot (AT) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 3000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'gm_ge_army_milan_launcher_tripod'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
			};
			class gm_ge_army_milan_launcher_tripod {
                displayName = "LATGM (AT)";
                description = "***WARNING***THIS ITEM CAN ONLY BE REARMED WITH LOGISTICAL AMMO CONTAINERS AND AMMO TRUCKS***LATGM (AT) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 3000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'gm_ge_army_milan_launcher_tripod'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
			};
			class ace_dragon_staticAssembled {
                displayName = "M47 Super-Dragon";
                description = "***WARNING***THIS ITEM CAN ONLY BE REARMED WITH LOGISTICAL AMMO CONTAINERS AND AMMO TRUCKS***The M47 Super-Dragon uses a wire-guidance system in concert with a high explosive anti-tank warhead and was capable of defeating armored vehicles, fortified bunkers, main battle tanks, and other hardened targets. While it was primarily created to defeat the Soviet Union's T-55, T-62, and T-72 tanks, it saw use well into the 1990s, seeing action in the Persian Gulf War. The U.S. military officially retired the weapon in 2001. It can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'ace_dragon_staticAssembled'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_static_AT_F {
                displayName = "Static Titan Launcher (AT)";
                description = "Static Titan Launcher (AT) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'B_static_AT_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class gm_ge_army_mg3_aatripod {
                displayName = "MG3 (AA)";
                description = "***WARNING***THIS ITEM CAN ONLY BE REARMED WITH LOGISTICAL AMMO CONTAINERS AND AMMO TRUCKS***MG3 (AA) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'gm_ge_army_mg3_aatripod'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
			};
			class B_static_AA_F {
                displayName = "Static Titan Launcher (AA) (NATO)";
                description = "Static Titan Launcher (AA) (NATO) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'B_static_AA_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_AAA_System_01_F {
                displayName = "Praetorian 1C";
                description = "The Praetorian 1C is a static 20 mm anti-aircraft weapon system. The Praetorian 1C is a point-defence, close-in weapons system that is designed to engage Unmanned Aerial Vehicles and fixed-wing aircraft at short ranges.";
                price = 500000;
                stock = 20;
				code = "if (isServer) then {createVehicleCrew (_this select 2);(group this) setVariable ['Vcm_Disable',true]};if (player == (_this select 0)) then {[container_2,'B_AAA_System_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Radar_System_01_F {
                displayName = "AN/MPQ-105 Radar";
                description = "The AN/MPQ-105 is the search and detection, target track and illumination radar and missile commander for the surface-to-air defense missile system.";
                price = 500000;
                stock = 20;
				code = "if (isServer) then {createVehicleCrew (_this select 2);(group this) setVariable ['Vcm_Disable',true]};if (player == (_this select 0)) then {[container_2,'B_Radar_System_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_SAM_System_03_F {
                displayName = "MIM-145 Defender";
                description = "***1,000,000 Cr.***The Defender is a long-range, all-altitude, and all-weather air defence system used to counter enemy aircraft.";
                price = 1000000;
                stock = 20;
				code = "if (isServer) then {createVehicleCrew (_this select 2);(group this) setVariable ['Vcm_Disable',true]};if (player == (_this select 0)) then {[container_2,'B_SAM_System_03_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_SAM_System_01_F {
                displayName = "Mk49 Spartan";
                description = "***1,000,000 Cr.***The Mk49 Spartan is a static 127 mm anti-aircraft weapon system. It is a fire-and-forget anti-aircraft missile launcher that is designed to destroy helicopters and low-flying fixed-wing jets.";
                price = 1000000;
                stock = 20;
				code = "if (isServer) then {createVehicleCrew (_this select 2);(group this) setVariable ['Vcm_Disable',true]};if (player == (_this select 0)) then {[container_2,'B_SAM_System_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Ship_Gun_01_F {
                displayName = "	Mk45 Hammer";
                description = "***5,000,000 Cr.***The MK45 Hammer is a 120 mm non-ballistic missile-based fire support weapon. The cannon's camera has access to three magnification zoom levels, as well as normal day, night, and black/white-hot thermal vision modes.";
                price = 5000000;
                stock = 20;
				code = "if (isServer) then {createVehicleCrew (_this select 2);(group this) setVariable ['Vcm_Disable',true]};if (player == (_this select 0)) then {[container_2,'B_Ship_Gun_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
			class B_Ship_MRLS_01_F {
                displayName = "	Mk41 VLS";
                description = "***10,000,000 Cr.***The MK41 Vertical Launch System primary loadout consists of thirty six Venator surface-to-surface cruise missiles. Of these, eighteen are outfitted with a high-explosive (HE) payload while the other eighteen contain cluster bomblet payloads instead.";
                price = 10000000;
                stock = 20;
				code = "if (isServer) then {createVehicleCrew (_this select 2);(group this) setVariable ['Vcm_Disable',true]};if (player == (_this select 0)) then {[container_2,'B_Ship_MRLS_01_F'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
            };
        };	
		class Mammo {
            displayName = "Crew Served Weapon Ammunition";
            kindOf = "Items";
			tracking = 1;

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
				code = "if (player == (_this select 0)) then {[container_2,'ACE_Box_82mm_Mo_Combo'] call grad_fortifications_fnc_addFort};systemChat 'Your purchase is in the traders fortifications cargo.';hint 'The traders fortifications cargo is loacted outside, it is the military-green huron cargo container. Use ACE interaction > Fortifications.';";
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