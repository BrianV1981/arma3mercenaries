    //buyables set/store:
    class fortificationStore_2 {

        //category:
		class fortifications {
            displayName = "Fortifications";
            kindOf = "other";

			class ACE_Sandbag_empty {
                displayName = "ACE Sandbag (empty)";
                description = "The ACE Sandbag (empty) can be utilize with the ACE self interaction menu.";
                price = 10;
                stock = 10000;
				kindOf = Items;
            };
			class ACE_EntrenchingTool {
                displayName = "ACE Entrenching Tool";
                description = "The ACE entrenching tool can be utilize to dig trenches with the ACE self interaction menu.";
                price = 30;
                stock = 10000;
			    kindOf = Items;
            };
			class ACE_ConcertinaWireCoil {
                displayName = "ACE Concertina Wire Coil";
                description = "The ACE Concertina Wire Coil can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10;
                stock = 10000;
				code = "if (player == (_this select 0)) then {[container_2,'ACE_ConcertinaWireCoil'] call grad_fortifications_fnc_addFort}";
            };
			class ACE_wirecutter {
                displayName = "ACE Wire Cutter";
                description = "The ACE wire cutter can be utilize to cut ACE concertina wire with the ACE interaction menu.";
                price = 20;
                stock = 10000;
				kindOf = Items;
            };
			class Land_BagFence_Corner_F {
                displayName = "Sandbag Wall (Corner)";
                description = "Sandbag Wall (Corner) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BagFence_Corner_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_BagFence_End_F {
                displayName = "Sandbag Wall (End)";
                description = "Sandbag Wall (End) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BagFence_End_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_BagFence_Long_F {
                displayName = "Sandbag Wall (Long)";
                description = "Sandbag Wall (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BagFence_Long_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_BagFence_Round_F {
                displayName = "Sandbag Wall (Round)";
                description = "Sandbag Wall (Round)) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BagFence_Round_F'] call grad_fortifications_fnc_addFort}";
            };			
		    class Land_BagFence_Short_F {
                displayName = "Sandbag Wall (Short)";
                description = "Sandbag Wall (Short) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BagFence_Short_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_HBarrier_1_F {
                displayName = "H-barrier (Block)";
                description = "H-barrier (Block) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrier_1_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_HBarrier_3_F {
                displayName = "H-barrier (3 Blocks)";
                description = "H-barrier (3 Blocks) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 300;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrier_3_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_HBarrier_5_F {
                displayName = "H-barrier (5 Blocks)";
                description = "H-barrier (5 Blocks) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrier_5_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_HBarrierBig_F {
                displayName = "H-barrier (Big, 4 Blocks)";
                description = "H-barrier (Big, 4 Blocks) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrierBig_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_HBarrierWall4_F {
                displayName = "H-barrier Wall (Short)";
                description = "H-barrier Wall (Short) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 600;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrierWall4_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_HBarrierWall6_F {
                displayName = "H-barrier Wall (Long)";
                description = "H-barrier Wall (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrierWall6_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_HBarrierWall_corridor_F {
                displayName = "H-barrier Corridor";
                description = "H-barrier Corridor can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrierWall_corridor_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_HBarrierWall_corner_F {
                displayName = "H-barrier Wall (Corner)";
                description = "H-barrier Wall (Corner) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 800;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrierWall_corner_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_CncBarrier_F {
                displayName = "Concrete Barrier";
                description = "Concrete Barrier can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_CncBarrier_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_CncBarrierMedium_F {
                displayName = "Concrete Barrier (Medium)";
                description = "Concrete Barrier (Medium) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 250;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_CncBarrierMedium_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_CncBarrierMedium4_F {
                displayName = "Concrete Barrier (Medium, Long)";
                description = "Concrete Barrier (Medium, Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 300;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_CncBarrierMedium4_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_CncWall1_F {
                displayName = "Concrete Wall";
                description = "Concrete Wall can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 100;
				code = "if (player == (_this select 0)) then {code = [container_2,'Land_CncWall1_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_CncWall4_F {
                displayName = "Concrete Wall (Long)";
                description = "concrete Wall (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_CncWall4_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Concrete_SmallWall_4m_F {
                displayName = "Concrete Wall (Small, 4 m)";
                description = "Concrete Wall (Small, 4 m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 300;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Concrete_SmallWall_4m_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Concrete_SmallWall_8m_F {
                displayName = "Concrete Wall (Small, 8 m)";
                description = "Concrete Wall (Small, 8 m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 400;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Concrete_SmallWall_8m_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Mil_WallBig_4m_F {
                displayName = "Military Base Wall";
                description = "Military Base Wall can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Mil_WallBig_4m_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Mil_WallBig_Corner_F {
                displayName = "Military Base Wall (Corner)";
                description = "Military Base Wall (Corner) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Mil_WallBig_Corner_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Mil_WallBig_Gate_F {
                displayName = "Military Base Wall (Gate)";
                description = "Military Base Wall (Gate) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Mil_WallBig_Gate_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_BarGate_F {
                displayName = "Bar Gate";
                description = "Bar Gate";
                price = 100;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BarGate_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_RoadBarrier_01_F {
                displayName = "Bar Gate (v2)";
                description = "Bar Gate (v2) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_RoadBarrier_01_F'] call grad_fortifications_fnc_addFort}";
            };
			class RoadBarrier_small_F {
                displayName = "Road Barrier (Small)";
                description = "Road Barrier (Small) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'RoadBarrier_small_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_PlasticBarrier_01_line_x6_F {
                displayName = "Plastic Barrier (Small, 6)";
                description = "Plastic Barrier (Small, 6) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_PlasticBarrier_01_line_x6_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Crash_barrier_F {
                displayName = "Safety Barrier";
                description = "Safety Barrier can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Crash_barrier_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_DragonsTeeth_01_4x2_new_F {
                displayName = "Dragon's Teeth (Row, new)";
                description = "Dragon's Teeth (Row, new) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_DragonsTeeth_01_4x2_new_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_CzechHedgehog_01_new_F {
                displayName = "Czech Hedgehog (New)";
                description = "Czech Hedgehog (New) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_CzechHedgehog_01_new_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_RampConcrete_F {
                displayName = "Concrete Ramp";
                description = "Concrete Ramp can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'Land_RampConcrete_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_New_WiredFence_5m_F {
                displayName = "Barbed Wire Fence";
                description = "Barbed Wire Fence can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_New_WiredFence_5m_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_New_WiredFence_10m_F {
                displayName = "Barbed Wire Fence (Long)";
                description = "Barbed Wire Fence (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 400;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_New_WiredFence_10m_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_New_WiredFence_pole_F {
                displayName = "Barbed Wire Fence (Pole)";
                description = "Barbed Wire Fence (Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_New_WiredFence_pole_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_BagBunker_Small_F {
                displayName = "Bunker (Small)";
                description = "Bunker (Small) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                 price = 500;
                 stock = 100;
				 code = "if (player == (_this select 0)) then {[container_2,'Land_BagBunker_Small_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_BagBunker_Large_F {
                displayName = "Bunker (Large)";
                description = "Bunker (Large) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BagBunker_Large_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_BagBunker_Tower_F {
                displayName = "Bunker (Tower)";
                description = "Bunker (Tower) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 2000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BagBunker_Tower_F'] call grad_fortifications_fnc_addFort}";
			};
			class Land_HBarrierTower_F {
                displayName = "H-barrier Watchtower";
                description = "H-barrier Watchtower can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 2000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HBarrierTower_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_DeerStand_01_F {
                displayName = "Deer Stand (v1)";
                description = "Deer Stand (v1) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 2000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_DeerStand_01_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_DeerStand_02_F {
                displayName = "Deer Stand (v2)";
                description = "Deer Stand (v2) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 2000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_DeerStand_02_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_GuardTower_02_F {
                displayName = "Guard Tower (small)";
                description = "Guard Tower (small) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 2000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_GuardTower_02_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Cargo_House_V1_F {
                displayName = "Military Cargo House (Green)";
                description = "Military Cargo House (Green) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Cargo_House_V1_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Cargo_Patrol_V1_F {
                displayName = "Military Cargo Post (Green)";
                description = "Military Cargo Post (Green) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Cargo_Patrol_V1_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Cargo_HQ_V1_F {
                displayName = "Military Cargo HQ (Green)";
                description = "Military Cargo HQ (Green) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 75000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Cargo_HQ_V1_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Cargo_Tower_V1_F {
                displayName = "Military Cargo Tower (Green)";
                description = "Military Cargo Tower (Green) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Cargo_Tower_V1_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_PillboxBunker_01_hex_F {
                displayName = "Pillbox (Hexagonal)";
                description = "Pillbox (Hexagonal) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_PillboxBunker_01_hex_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_PillboxBunker_01_rectangle_F {
                displayName = "Pillbox (Rectangular)";
                description = "Pillbox (Rectangular) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_PillboxBunker_01_rectangle_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_PillboxBunker_01_big_F {
                displayName = "Pillbox (Big)";
                description = "Pillbox (Big) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_PillboxBunker_01_big_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Bunker_01_small_F {
                displayName = "Land Bunker (Small)";
                description = "Land Bunker (Small) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Bunker_01_small_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Bunker_01_big_F {
                displayName = "Land Bunker (Big)";
                description = "Land Bunker (Big) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Bunker_01_big_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Bunker_01_tall_F {
                displayName = "Land Bunker (Tall)";
                description = "Land Bunker (Tall) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Bunker_01_tall_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Bunker_01_HQ_F {
                displayName = "Land Bunker (HQ)";
                description = "Land Bunker (HQ) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Bunker_01_HQ_F'] call grad_fortifications_fnc_addFort}";
            };
        };
		class Dfortifications {
            displayName = "Lights, Tents, Other";
            kindOf = "other";

			class Land_Camping_Light_F {
                displayName = "	Camping Lantern";
                description = "	Camping Lantern can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Camping_Light_F'] call grad_fortifications_fnc_addFort}";
            };			
			class Land_PortableLight_single_F {
                displayName = "Portable Lights (Single)";
                description = "Portable Lights (Single) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {code = [container_2,'Land_PortableLight_single_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_PortableLight_double_F {
                displayName = "Portable Lights (Double)";
                description = "Portable Lights (Double) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 75;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_PortableLight_double_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_LampStreet_small_F {
                displayName = "Street Lamp (Small) [on]";
                description = "Street Lamp (Small) [on] can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_LampStreet_small_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_LampAirport_F {
                displayName = "Airport Lamp [on]";
                description = "Airport Lamp [on] can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_LampAirport_F'] call grad_fortifications_fnc_addFort}";
            };
			class PortableHelipadLight_01_blue_F {
                displayName = "Portable Helipad Light (Blue)";
                description = "Portable Helipad Light (Blue) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'PortableHelipadLight_01_blue_F'] call grad_fortifications_fnc_addFort}";
            };
			class PortableHelipadLight_01_red_F {
                displayName = "Portable Helipad Light (Red)";
                description = "Portable Helipad Light (Red) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'PortableHelipadLight_01_red_F'] call grad_fortifications_fnc_addFort}";
            };
		    class CamoNet_BLUFOR_F {
                displayName = "Camouflage Net (Green)";
                description = "Camouflage Net (Green) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'CamoNet_BLUFOR_F'] call grad_fortifications_fnc_addFort}";
            };
			class CamoNet_BLUFOR_open_F {
                displayName = "Camouflage Net (Open, Green)";
                description = "Camouflage Net (Open, Green) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'CamoNet_BLUFOR_open_F'] call grad_fortifications_fnc_addFort}";
				
            };
			class CamoNet_BLUFOR_big_F {
                displayName = "Camouflage Vehicle Cover (Green)";
                description = "Camouflage Vehicle Cover (Green) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'CamoNet_BLUFOR_big_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_HelipadCircle_F {
                displayName = "Helipad (Circle)";
                description = "Helipad (Circle) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_HelipadCircle_F'] call grad_fortifications_fnc_addFort}";
            };		
			class Flag_US_F {
                displayName = "Flag (USA)";
                description = "Flag (USA) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Flag_US_F'] call grad_fortifications_fnc_addFort}";
            };
			class Flag_POWMIA_F {
                displayName = "Flag (POW MIA)";
                description = "Flag (POW MIA) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Flag_POWMIA_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Monument_02_F {
                displayName = "War Monument";
                description = "War Monument can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Monument_02_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Tombstone_17_F {
                displayName = "Tombstone (wooden, v6)";
                description = "Tombstone (wooden, v6) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Monument_02_F'] call grad_fortifications_fnc_addFort}";
            };			
			class Land_SignM_WarningMilitaryArea_english_F {
                displayName = "Sign (Military Area, English)";
                description = "Sign (Military Area, English) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_SignM_WarningMilitaryArea_english_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_SignM_WarningMilitaryVehicles_english_F {
                displayName = "Sign (Military Vehicles, English)";
                description = "Sign (Military Vehicles, English) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 30;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_SignM_WarningMilitaryVehicles_english_F'] call grad_fortifications_fnc_addFort}";
            };			
			class Land_PierLadder_F {
                displayName = "Ladder (Pier)";
                description = "Ladder (Pier) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_PierLadder_F'] call grad_fortifications_fnc_addFort}";
            };			
        };
	    		class Cfortifications {
            displayName = "Cargo and Logistical Supplies";
            kindOf = "other";
			
			class ACE_Track {
                displayName = "ACE Spare Track";
                description = "ACE Spare Track can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 10000;
				code = "if (player == (_this select 0)) then {[container_2,'ACE_Track'] call grad_fortifications_fnc_addFort}";
            };
			class ACE_Wheel {
                displayName = "ACE Spare Wheel";
                description = "ACE Spare Wheel can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 10000;
				code = "if (player == (_this select 0)) then {[container_2,'ACE_Wheel'] call grad_fortifications_fnc_addFort}";
            };	
			class Land_CanisterFuel_F {
                displayName = "Fuel Canister (Test)";
                description = "The fuel canister (test) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_CanisterFuel_F'] call grad_fortifications_fnc_addFort}";
            };	
			class FlexibleTank_01_sand_F {
                displayName = "Flexible Fuel Tank (300 Liters)";
                description = "Flexible Fuel Tank (300 liters) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 300;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'FlexibleTank_01_sand_F'] call grad_fortifications_fnc_addFort}";
            };
			class StorageBladder_01_fuel_sand_F {
                displayName = "Fuel Bladder (10,000 Liters)";
                description = "The fuel bladder (10,000 Liters) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'StorageBladder_01_fuel_sand_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_BarrelWater_F {
                displayName = "Plastic Barrel (160 Liters)";
                description = "Plastic Barrel (160 liters) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_BarrelWater_F'] call grad_fortifications_fnc_addFort}";
            };			
			class Land_StallWater_F {
                displayName = "Water Stall (250 Liters)";
                description = "The water stall (250 liters) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_StallWater_F'] call grad_fortifications_fnc_addFort}";
            };
			class StorageBladder_02_water_forest_F {
                displayName = "Water Bladder (10,000 Liters)";
                description = "Water Bladder (10,000 liters) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'StorageBladder_02_water_forest_F'] call grad_fortifications_fnc_addFort}";
            };		
			class WaterPump_01_forest_F {
                displayName = "Water Pump (Unlimited)";
                description = "Water Pump (unlimited) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'WaterPump_01_forest_F'] call grad_fortifications_fnc_addFort}";
            };
			class Box_NATO_Wps_F {
                displayName = "Basic Weapons [NATO]";
                description = "Basic weapons [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_Wps_F'] call grad_fortifications_fnc_addFort}";
            };
			class Box_NATO_WpsSpecial_F {
                displayName = "Special Weapons [NATO]";
                description = "Special weapons [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 30000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_WpsSpecial_F'] call grad_fortifications_fnc_addFort}";
            };
			class Box_NATO_Ammo_F {
                displayName = "Basic Ammo [NATO]";
                description = "Basic ammo [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 16000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_Ammo_F'] call grad_fortifications_fnc_addFort}";
            };
			class Box_NATO_Grenades_F {
                displayName = "Grenades [NATO]";
                description = "Grenades [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 6500;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_Grenades_F'] call grad_fortifications_fnc_addFort}";
            };
			class Box_NATO_WpsLaunch_F {
                displayName = "Launchers [NATO]";
                description = "Launchers [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 60000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_WpsLaunch_F'] call grad_fortifications_fnc_addFort}";
            };
			class Box_NATO_Support_F {
                displayName = "Support [NATO]";
                description = "Support [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_Support_F'] call grad_fortifications_fnc_addFort}";
            };
			class Box_NATO_AmmoVeh_F {
                displayName = "Vehicle Ammo [NATO]";
                description = "Vehicle ammo [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 25000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_AmmoVeh_F'] call grad_fortifications_fnc_addFort}";
            };
			class B_supplyCrate_F {
                displayName = "Supply Box [NATO]";
                description = "Supply box [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'B_supplyCrate_F'] call grad_fortifications_fnc_addFort}";
            };
			class B_CargoNet_01_ammo_F {
                displayName = "Cargo Net [NATO]";
                description = "Cargo Net [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 149000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'B_CargoNet_01_ammo_F'] call grad_fortifications_fnc_addFort}";
            };
			class Box_NATO_Equip_F {
                displayName = "Equipment Box [NATO]";
                description = "Equipment Box [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 17000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_Equip_F'] call grad_fortifications_fnc_addFort}";
            };
			class Box_NATO_Uniforms_F {
                displayName = "Uniforms Box [NATO]";
                description = "Uniforms Box [NATO] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 21000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_NATO_Uniforms_F'] call grad_fortifications_fnc_addFort}";
            };
			class Box_IED_Exp_F {
                displayName = "Explosives (IED)";
                description = "Explosives (IED) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_IED_Exp_F'] call grad_fortifications_fnc_addFort}";
            };
			class Box_Ammo_F {
                displayName = "Ammo Cache [NATO] (Empty)";
                description = "Ammo cache [NATO] (empty) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_Ammo_F'] call grad_fortifications_fnc_addFort}";
            };
			class Box_Wps_F {
                displayName = "Weapons Cache [NATO] (Empty)";
                description = "Weapons cache [NATO] (empty) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Box_Wps_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_PaperBox_01_small_closed_brown_food_F {
                displayName = "[IDAP] Cardboard Food Box (Empty)";
                description = "[IDAP] cardboard food box (empty) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_PaperBox_01_small_closed_brown_food_F'] call grad_fortifications_fnc_addFort}";
            };
			class CargoNet_01_box_F {
                displayName = "Cargo Net Box Pallet (Empty )";
                description = "Cargo net box pallet (empty) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'CargoNet_01_box_F'] call grad_fortifications_fnc_addFort}";
            };
			class B_Slingload_01_Cargo_F {
                displayName = "Huron Cargo Container";
                description = "Huron Cargo Container can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'B_Slingload_01_Cargo_F'] call grad_fortifications_fnc_addFort}";
            };
			class B_Slingload_01_Ammo_F {
                displayName = "Huron Ammo Container";
                description = "Huron Ammo Container can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'B_Slingload_01_Ammo_F'] call grad_fortifications_fnc_addFort}";
            };
			class B_Slingload_01_Fuel_F {
                displayName = "Huron Fuel Container";
                description = "Huron Fuel Container can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'B_Slingload_01_Ammo_F'] call grad_fortifications_fnc_addFort}";
            };
			class B_Slingload_01_Repair_F {
                displayName = "Huron Repair Container";
                description = "	Huron Repair Container can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'B_Slingload_01_Repair_F'] call grad_fortifications_fnc_addFort}";
            };
			class B_Slingload_01_Medevac_F {
                displayName = "Huron Medical Container";
                description = "Huron Medical Container can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'B_Slingload_01_Medevac_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Pod_Heli_Transport_04_ammo_F {
                displayName = "Taru Ammo Pod";
                description = "Taru Ammo Pod can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Pod_Heli_Transport_04_ammo_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Pod_Heli_Transport_04_bench_F {
                displayName = "Taru Bench Pod";
                description = "Taru Bench Pod can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Pod_Heli_Transport_04_bench_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Pod_Heli_Transport_04_box_F {
                displayName = "Taru Cargo Pod";
                description = "Taru Cargo Pod can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Pod_Heli_Transport_04_box_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Pod_Heli_Transport_04_fuel_F {
                displayName = "Taru Fuel Pod";
                description = "Taru Fuel Pod can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Pod_Heli_Transport_04_fuel_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Pod_Heli_Transport_04_medevac_F {
                displayName = "Taru Medical Pod";
                description = "Taru Medical Pod can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Pod_Heli_Transport_04_medevac_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Pod_Heli_Transport_04_repair_F {
                displayName = "Taru Repair Pod";
                description = "Taru Repair Pod can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Pod_Heli_Transport_04_repair_F'] call grad_fortifications_fnc_addFort}";
            };
			class Land_Pod_Heli_Transport_04_covered_F {
                displayName = "Taru Transport Pod";
                description = "Taru Transport Pod can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = "if (player == (_this select 0)) then {[container_2,'Land_Pod_Heli_Transport_04_covered_F'] call grad_fortifications_fnc_addFort}";
            };
	};
	    	class Sweapons {
            displayName = "Static Weapons";
            kindOf = "other";

		     class B_HMG_01_F {
                displayName = "Mk30 HMG .50";
                description = "Mk30 HMG .50 can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'B_HMG_01_F'] call grad_fortifications_fnc_addFort}";
			};
			class B_HMG_01_high_F {
                displayName = "Mk30 HMG .50 (Raised)";
                description = "Mk30 HMG .50 (Raised) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'B_HMG_01_high_F'] call grad_fortifications_fnc_addFort}";
			};
			class B_GMG_01_F {
                displayName = "Mk32 GMG 20 mm";
                description = "Mk32 GMG 20 mm can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'B_GMG_01_F'] call grad_fortifications_fnc_addFort}";
            };
			class B_GMG_01_high_F {
                displayName = "Mk32 GMG 20 mm (Raised)";
                description = "Mk32 GMG 20 mm (Raised) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'B_GMG_01_high_F'] call grad_fortifications_fnc_addFort}";
			};
			class B_Mortar_01_F {
                displayName = "Mk6 Mortar";
                description = "Mk6 Mortar can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 100;
				code = "if (player == (_this select 0)) then {[container_2,'B_Mortar_01_F'] call grad_fortifications_fnc_addFort}";
            };
        };	
		class Mammo {
            displayName = "Static Weapon Ammunition";
            kindOf = "Items";

			class ace_csw_100Rnd_127x99_mag_Red {
                displayName = "ACE 12.7 mm HMG Tracer (Red) Belt";
                description = "ACE 12.7 mm HMG Tracer (Red) belt used in the Mk30 HMG .50";
                price = 1000;
                stock = 10000;                
            };
			class ace_csw_20Rnd_20mm_g_belt {
                displayName = "ACE 20 mm Grenade Belt";
                description = "ACE 20 mm grenade belt used in the Mk32 GMG";
                price = 1000;
                stock = 10000;                
            };
			class ace_csw_50Rnd_127x108_mag {
                displayName = "ACE 12.7x108 mm Cartridge";
                description = "ACE 12.7x108 mm cartridge.";
                price = 1000;
                stock = 10000;                
            };
			class ACE_1Rnd_82mm_Mo_HE {
                displayName = "ACE 82mm HE Round";
                description = "ACE 82mm HE Round used in the Mk6 Mortar.";
                price = 100;
                stock = 10000;                
            };
			class ACE_1Rnd_82mm_Mo_HE_LaserGuided {
                displayName = "ACE 82mm Laser Guided HE Round";
                description = "ACE 82mm Laser Guided HE Round used in the Mk6 Mortar.";
                price = 100;
                stock = 10000;                
            };
			class ACE_1Rnd_82mm_Mo_Smoke {
                displayName = "ACE 82mm Smoke Round";
                description = "ACE 82mm Smoke Round used in the Mk6 Mortar.";
                price = 100;
                stock = 10000;                
            };
			class ACE_1Rnd_82mm_Mo_HE_Guided {
                displayName = "ACE 	82mm Guided HE Round";
                description = "ACE 	82mm Guided HE Round used in the Mk6 Mortar.";
                price = 100;
                stock = 10000;                
            };
			class ACE_1Rnd_82mm_Mo_Illum {
                displayName = "ACE 82mm Illumination Round";
                description = "ACE 82mm Illumination Round used in the Mk6 Mortar.";
                price = 100;
                stock = 10000;                
            };
        };
};
