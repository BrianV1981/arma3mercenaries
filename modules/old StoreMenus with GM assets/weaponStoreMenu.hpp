    //buyables set/store:
    class weaponStore {
        //category:  
    
 		class Hweapons {
            displayName = "Handguns";
            kindOf = "Weapons";
			tracking = 1;
            //items of this category:

			class ACE_Flashlight_Maglite_ML300L {
                displayName = "ACE Maglite ML300L";
                description = "Flash light that requires 2 hands and utilizes the handgun inventory slot.";
                price = 0;
                stock = 1000;
            };
			class ACE_VMH3 {
                displayName = "ACE VMH3";
                description = "The VMH3 detector is designed to meet the very specific needs of the mine clearance professionals for humanitarian demining in post conflict areas.";
				price = 5000;
                stock = 10000;
            };
			class ACE_VMM3 {
                displayName = "ACE VMM3";
                description = "The VMM3 has been designed for the highly accurate detection of all types of metallic mines and plastic mines with minimum metal content.";
				price = 5000;
                stock = 10000;
            };
			class hgun_Pistol_Signal_F {
                displayName = "Starter Pistol";
                description = "The Starter Pistol is a double-action revolver chambered to fire 10 mm signal flare slugs, It loads from 6-round cylinders and has both a fire rate and muzzle velocity of 240 rounds per minute/240 m/s. The Starter Pistol does not support being fitted with any accessories or muzzle attachments.";
                price = 0;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class gm_lp1_blk {
                displayName = "LP1 26.5 mm";
                description = "The LP1 is a smoothbore flare gun designed to load 26.5 mm flare/smoke rounds, It has a muzzle velocity of 240 m/s and can attain a fire rate of up to 240 rounds per minute. The LP1 cannot be fitted with any optical sights or muzzle attachments.";
                price = 0;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };									
			class gm_p2a1_blk {
                displayName = "P2A1 26.5 mm";
                description = "The P2A1 is a single-shot, break action 26.5 mm flare gun, It is designed to load either individual flare/smoke or multi-star flare 26.5 mm rounds. It can attain a fire rate of up to 240 rounds per minute and has a muzzle velocity of 240 m/s. The P2A1 cannot be fitted with any optical sights or attachments.";
                price = 0;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
                        class hgun_esd_01_F {
                displayName = "Spectrum Device";
                description = "Spectrum Device is a small handheld transceiver with an electromagnetic spectrum analyser. Its standard grip is designed to fit a range of directional antennas with varying frequency ranges, One common use for these devices is for jamming drones. When fitted with other antennas however, it allows the operator to receive and identify a myriad of signals, as well as to record and transmit them.";
                price = 1000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class hgun_Pistol_01_F {
                displayName = "PM 9 mm";
                description = "The PM is a semi-automatic handgun chambered to fire the 9×21 mm round, It loads from 10-round box magazines, and can attain a fire rate of up to 400 rounds per minute with a muzzle velocity of 315 m/s. Unlike other handguns, the PM is unable to mount any accessories or muzzle attachments.";
                price = 0;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class hgun_P07_F {
                displayName = "P07 9 mm";
                description = "The P07 is a polymer framed, double-action semi-automatic handgun chambered to fire the 9×21 mm round, It can load from either 16- or 30-round magazines (the latter shared by the PDW2000 submachine gun), and is able to reach a fire rate of up to 500 rounds per minute with a muzzle velocity of 410 m/s. The P07 does not support being fitted with any optical sights but can have a sound suppressor mnounted onto its muzzle.";
                price = 500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class gm_p1_blk {
                displayName = "P1 9x19 mm";
                description = "The P1 is a short-recoil operated, locked-breech pistol that uses a double-action/single-action trigger. It is chambered to fire the 9×19 mm round, It loads exclusively from 8-round magazines, and can attain a fire rate of up to 600 rounds per minute with a muzzle velocity of 240 m/s. It does not support being fitted with optical sights or muzzle attachments.";
                price = 500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class gm_pm_blk {
                displayName = "PM 9x18 mm";
                description = "The PM is a straight blowback action, frame-fixed barrel handgun that is chambered to fire the 9×18 mm round, It loads exclusively from 8-round magazines, and can achieve a fire rate of up to 600 rounds per minute with a muzzle velocity of 240 m/s. It cannot be fitted with optical sights, but its muzzle is able to mount sound suppressors.";
                price = 500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class hgun_P07_khk_F {
                displayName = "P07 9 mm (Khaki)";
                description = "The P07 is a polymer framed, double-action semi-automatic handgun chambered to fire the 9×21 mm round, It can load from either 16- or 30-round magazines (the latter shared by the PDW2000 submachine gun), and is able to reach a fire rate of up to 500 rounds per minute with a muzzle velocity of 410 m/s. The P07 does not support being fitted with any optical sights but can have a sound suppressor mnounted onto its muzzle.";
                price = 500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class hgun_Rook40_F {
                displayName = "Rook-40 9 mm";
                description = "The Rook-40 is a double-action semi-automatic handgun chambered to fire the 9×21 mm round, It can load from either 16 or 30 round magazines (the latter also shared by SMGs such as the PDW2000) and is able to attain a rate of fire of up to 600 rounds per minute, with a muzzle velocity of 450 m/s. The Rook-40 does not support any being fitted with any accessories but can have attachments mounted onto its muzzle.";
                price = 550;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class hgun_ACPC2_F {
                displayName = "ACP-C2 .45 ACP";
                description = "The ACP-C2 is a semi-automatic handgun chambered to fire the .45 ACP round, It loads from 9-round magazines, and can attain a fire rate of up to 400 rounds per minute with a muzzle velocity of 280 m/s. The ACP-C2 cannot mount optical sights, but supports muzzle attachments and has a compact underbarrel rail that can be fitted with a flashlight.";
                price = 550;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class hgun_Pistol_heavy_01_F {
                displayName = "4-five .45 ACP";
                description = "The 4-five is a polymer framed, semi-automatic handgun chambered to fire the .45 ACP round, It loads from 11-round magazines and can attain a fire rate of up to 600 rounds per minute, with a muzzle velocity of 380 m/s. The 4-five supports being fitted with the MRD red dot sight. Along with muzzle attachments, the 4-five also has an underbarrel rail that supports being fitted with a flashlight.";
                price = 750;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class hgun_Pistol_heavy_01_green_F {
                displayName = "4-five .45 ACP (Green)";
                description = "The 4-five is a polymer framed, semi-automatic handgun chambered to fire the .45 ACP round, It loads from 11-round magazines and can attain a fire rate of up to 600 rounds per minute, with a muzzle velocity of 380 m/s. The 4-five supports being fitted with the MRD red dot sight. Along with muzzle attachments, the 4-five also has an underbarrel rail that supports being fitted with a flashlight.";
                price = 750;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class hgun_Pistol_heavy_02_F {
                displayName = "Zubr .45 ACP";
                description = "The Zubr is a double-action revolver chambered to fire the .45 ACP round, It loads from 6-round cylinders and is only able to reach a fire rate of up to 240 rounds per minute, with a muzzle velocity of 480 m/s. The Zubr supports being mounted with the Yorris J2 red dot sight designed exclusively for mounting on the small rail just above the barrel. It cannot be fitted with muzzle attachments, but the Zubr has an underbarrel rail that can be fitted with a flashlight.";
                price = 1000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
};			
        class SMGweapons {
            displayName = "Sub Machine Guns";
            kindOf = "Weapons";
			tracking = 1;
            //items of this category:			
			
			class SMG_05_F {
                displayName = "Protector 9 mm";
                description = "The Protector is a compact submachine gun chambered to fire the 9×21 mm round that uses a delayed roller locked bolt operation, It loads from 30-round curved box magazines, and can achieve a fire rate of up to 895 rounds per minute with a muzzle velocity of 375 m/s. The Protector accepts top and side rail accessories and can mount muzzle attachments.";
                price = 0;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class hgun_PDW2000_F {
                displayName = "PDW2000 9 mm";
                description = "The PDW2000 is a compact submachine gun that uses a delayed blowback operation and is chambered to fire the 9×21 mm round, It loads from 30-round plastic magazines, and can attain a rate of fire ranging from 900 up to 1,100 rounds per minute with a muzzle velocity of 420 m/s. It only accepts optical sights on its top rail but can mount attachments onto its muzzle.";
                price = 3000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_02_flash_F {
                displayName = "Standard Sting 9 mm Submachine Gun";
                description = "The Sting is a selective-fire, blowback-operated submachine gun that is chambered to fire the the 9×21 mm round. It loads from 30-round translucent box magazines, and can attain a fire rate of up to 1,100 rounds per minute with a muzzle velocity of 370 m/s. The Sting can fit accessories onto its top and side rails and can also mount muzzle attachments.";
                price = 4000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class gm_mp2a1_blk {
                displayName = "MP2A1 9x19 mm Submachine Gun";
                description = "The MP2A1 is an open bolt, blowback-operated selective fire submachine gun chambered for the 9×19 mm round, It loads exclusively from 32-round box magazines, and can attain a fire rate of up to 750 rounds per minute with a muzzle velocity of 400 m/s. The MP2A1 doesn't support being fitted with optical scopes and is unable to mount sound suppressors, though its sights can be adjusted between two fixed distances of either 100 m or 200 m.";
                price = 4000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class gm_mp5a2_blk {
                displayName = "SG5A2 9x19 mm Submachine Gun";
                description = "The SG5A2 is a selective-fire 9×19 mm submachine gun that fires from a closed bolt and uses a roller-delayed blowback operation, It loads exclusively from 30-round magazines that can be either curved or straight-shaped. It can achieve a fire rate of up to 800 rounds per minute and has a muzzle velocity of 400 m/s. The SG5A2 cannot be suppressed, but can be fitted with riflescopes onto its accessory mount.";
                price = 4100;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class gm_mp5a3_blk {
                displayName = "SG5A3 9x19 mm Submachine Gun";
                description = "An updated compact variant, the SG5A3 is exclusively used by West German special operations teams, It features some minor modifications to the SG5's furniture; notably, the fixed buttstock has been removed and replaced with a retractable metal stock, This modification reduces its inertia penalty by 25%, though it remains identical in all other aspects.";
                price = 4200;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class gm_mp5sd2_blk {
                displayName = "SG5SD2 9x19 mm Submachine Gun";
                description = "The SG5SD2 is an integrally suppressed version of the baseline SG5A2 SMG. It remains unused by any of the factions, Thanks to its integrated sound suppressor, the SG5SD2 is perfect for stealth missions and retains the same positive (and negative) traits of the baseline SG5A2, However, it should be noted that a consequence of its design is that it comes at the cost of muzzle velocity; all rounds fired out of the SG5SD2 have even lower velocities of only 288 m/s, This significantly reduces its effective firing range to well under ~ 125 metres. As such, it should not be employed for anything outside of close quarters.";
                price = 4300;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class gm_mp5sd3_blk {
                displayName = "SG5SD3 9x19 mm Submachine Gun";
                description = "The SG5SD3 is an integrally suppressed variant of the SG5A3. It is exclusively used by West German special operations units, Just like the SG5SD2, the SG5SD3 shares the same advantage of possessing an integrated suppressor which makes it a properly silent weapon. As with the former, it also suffers from a reduced muzzle velocity of only 288 m/s, The SG5SD3's main strength over the SG5SD2 is that its buttstock isn't fixed, lowering the inertia penalty it inflicts on the user by 25% (as with the non-suppressed SG5A3). There are otherwise no differences compared to regular SG5A3s.";
                price = 4400;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class 	gm_pm63_blk {
                displayName = "PM-63 9x18 mm Submachine Gun";
                description = "The PM-63 is a selective-fire, blowback-operated compact submachine gun chambered for the 9×18 mm cartridge, It can load from either 25- or 15-round box magazines, and can attain a fire rate of ~ 650 rounds per minute with a muzzle velocity of 320 m/s. The PM-63 cannot be fitted with optical sights but can be zeroed between two fixed distances of either 75 m or 150 m. It can also (optionally) mount the specially-designed Safloryt sound suppressor.";
                price = 4500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };		
			class SMG_01_F {
                displayName = "Vermin SMG .45 ACP";
                description = "The Vermin is a personal defence weapon that uses a delayed blowback, closed bolt operation and is chambered to fire the .45 ACP round, It loads from 30-round box magazines and can achieve an impressive fire rate of up to 1,200 rounds per minute, with a muzzle velocity of 280 m/s. The Vermin can be fitted with optical sights on its top rail, and can also mount attachments onto its muzzle. Although it does not have a side rail to attach laser pointers, it can fit a custom-designed flashlight in the notch located just above the end of the barrel.";
                price = 4500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03_black {
                displayName = "ADR-97 5.7 mm (Black)";
                description = "The ADR-97 is a personal defence weapon that uses a straight blowback operation and is chambered to fire the 5.7×28 mm round, It loads from 50-round plastic box magazines and can attain a rate of fire of roughly ~ 900 rounds per minute, with a muzzle velocity of 786.5 m/s. It does not support being mounted with optical sights or side rail accessories, though it has an integrated reflex sight and can have attachments fitted onto its muzzle.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03_camo {
                displayName = "ADR-97 5.7 mm (Camo)";
                description = "The ADR-97 is a personal defence weapon that uses a straight blowback operation and is chambered to fire the 5.7×28 mm round, It loads from 50-round plastic box magazines and can attain a rate of fire of roughly ~ 900 rounds per minute, with a muzzle velocity of 786.5 m/s. It does not support being mounted with optical sights or side rail accessories, though it has an integrated reflex sight and can have attachments fitted onto its muzzle.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03_khaki {
                displayName = "ADR-97 5.7 mm (Khaki)";
                description = "The ADR-97 is a personal defence weapon that uses a straight blowback operation and is chambered to fire the 5.7×28 mm round, It loads from 50-round plastic box magazines and can attain a rate of fire of roughly ~ 900 rounds per minute, with a muzzle velocity of 786.5 m/s. It does not support being mounted with optical sights or side rail accessories, though it has an integrated reflex sight and can have attachments fitted onto its muzzle.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03_hex {
                displayName = "ADR-97 5.7 mm (Hex)";
                description = "The ADR-97 is a personal defence weapon that uses a straight blowback operation and is chambered to fire the 5.7×28 mm round, It loads from 50-round plastic box magazines and can attain a rate of fire of roughly ~ 900 rounds per minute, with a muzzle velocity of 786.5 m/s. It does not support being mounted with optical sights or side rail accessories, though it has an integrated reflex sight and can have attachments fitted onto its muzzle.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class SMG_03C_black {
                displayName = "ADR-97C 5.7 mm (Black)";
                description = "The ADR-97C is a compact variant of the baseline ADR-97 SMG, The only differences with this variant is that it has a lower muzzle velocity of 715 m/s and is less accurate due to using a shorter barrel. It is otherwise identical to its parent counterpart in all other aspects.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03C_camo {
                displayName = "ADR-97C 5.7 mm (Camo)";
                description = "The ADR-97C is a compact variant of the baseline ADR-97 SMG, The only differences with this variant is that it has a lower muzzle velocity of 715 m/s and is less accurate due to using a shorter barrel. It is otherwise identical to its parent counterpart in all other aspects.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03C_khaki {
                displayName = "ADR-97C 5.7 mm (Khaki)";
                description = "The ADR-97C is a compact variant of the baseline ADR-97 SMG, The only differences with this variant is that it has a lower muzzle velocity of 715 m/s and is less accurate due to using a shorter barrel. It is otherwise identical to its parent counterpart in all other aspects.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03C_hex {
                displayName = "ADR-97C 5.7 mm (Hex)";
                description = "The ADR-97C is a compact variant of the baseline ADR-97 SMG, The only differences with this variant is that it has a lower muzzle velocity of 715 m/s and is less accurate due to using a shorter barrel. It is otherwise identical to its parent counterpart in all other aspects.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class SMG_03_TR_black {
                displayName = "ADR-97 TR 5.7 mm (Black)";
                description = "The ADR-97 TR is a modified variant of the baseline ADR-97 SMG, While it has virtually identical performance stats to its parent counterpart, this variant eschews the built-in reflex sight in favour of having top and side rails, This means that the ADR-97 TR can be fitted with optics and other accessories, though consequently it no longer has any iron sights that can be used to aim if it is not fitted with an optical sight.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03_TR_camo {
                displayName = "ADR-97 TR 5.7 mm (Camo)";
                description = "The ADR-97 TR is a modified variant of the baseline ADR-97 SMG, While it has virtually identical performance stats to its parent counterpart, this variant eschews the built-in reflex sight in favour of having top and side rails, This means that the ADR-97 TR can be fitted with optics and other accessories, though consequently it no longer has any iron sights that can be used to aim if it is not fitted with an optical sight.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03_TR_khaki {
                displayName = "ADR-97 TR 5.7 mm (Khaki)";
                description = "The ADR-97 TR is a modified variant of the baseline ADR-97 SMG, While it has virtually identical performance stats to its parent counterpart, this variant eschews the built-in reflex sight in favour of having top and side rails, This means that the ADR-97 TR can be fitted with optics and other accessories, though consequently it no longer has any iron sights that can be used to aim if it is not fitted with an optical sight.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03_TR_hex {
                displayName = "ADR-97 TR 5.7 mm (Hex)";
                description = "The ADR-97 TR is a modified variant of the baseline ADR-97 SMG, While it has virtually identical performance stats to its parent counterpart, this variant eschews the built-in reflex sight in favour of having top and side rails, This means that the ADR-97 TR can be fitted with optics and other accessories, though consequently it no longer has any iron sights that can be used to aim if it is not fitted with an optical sight.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class SMG_03C_TR_black {
                displayName = "ADR-97C TR 5.7 mm (Black)";
                description = "Just like the conventional ADR-97C model, this variant almost identical to it in terms of performance (shorter barrel, lower muzzle velocity, higher dispersion), But similar to the ADR-97 TR variant, this model removes the built-in reflex sight in favour of having top and side rails, While this means that it no longer has an iron sight for aiming, it is able to mount optical sights onto its top rail and be fitted with accessories like laser sights onto its side rail.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03C_TR_camo {
                displayName = "ADR-97C TR 5.7 mm (Camo)";
                description = "Just like the conventional ADR-97C model, this variant almost identical to it in terms of performance (shorter barrel, lower muzzle velocity, higher dispersion), But similar to the ADR-97 TR variant, this model removes the built-in reflex sight in favour of having top and side rails, While this means that it no longer has an iron sight for aiming, it is able to mount optical sights onto its top rail and be fitted with accessories like laser sights onto its side rail.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03C_TR_khaki {
                displayName = "ADR-97C TR 5.7 mm (Khaki)";
                description = "Just like the conventional ADR-97C model, this variant almost identical to it in terms of performance (shorter barrel, lower muzzle velocity, higher dispersion), But similar to the ADR-97 TR variant, this model removes the built-in reflex sight in favour of having top and side rails, While this means that it no longer has an iron sight for aiming, it is able to mount optical sights onto its top rail and be fitted with accessories like laser sights onto its side rail.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03C_TR_hex {
                displayName = "ADR-97C TR 5.7 mm (Hex)";
                description = "Just like the conventional ADR-97C model, this variant almost identical to it in terms of performance (shorter barrel, lower muzzle velocity, higher dispersion), But similar to the ADR-97 TR variant, this model removes the built-in reflex sight in favour of having top and side rails, While this means that it no longer has an iron sight for aiming, it is able to mount optical sights onto its top rail and be fitted with accessories like laser sights onto its side rail.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
};	
        class Aweapons {
            displayName = "Assault Rifles";
            kindOf = "Weapons";
			tracking = 1;
            //items of this category:
			
            class gm_mpiak74n_brn {
                displayName = "MPi AK-74 5.45x39 mm";
                description = "The AK-74 is a gas operated, selective-fire assault rifle chambered to fire the 5.45×39 mm cartridge, It primarily loads from 30-round plastic magazines but can also accept 45-round curved magazines used by the LMG RPK-74. The AK-74 can attain a fire rate of up to ~ 652 rounds per minute and has a muzzle velocity of 900 m/s. It can be fitted with dovetail-compatible scopes/night sights as well as bayonets, but isn't able to mount any suppressors.";
                price = 4900;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class gm_mpiaks74n_brn {
                displayName = "MPi AKS-74 5.45x39 mm";
                description = "The MPi AKS-74 is a modified AK-74 rifle with a side folding metal stock, Compared to regular AK-74 rifles, it is slightly lighter to wield since it no longer uses a fixed stock like its parent weapon. For close quarters, its inertia penalty has also been reduced by ~ 16%, In all other aspects, it remains unchanged from the basic AK-74 rifle.";
                price = 4900;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class gm_mpiaks74nk_brn {
                displayName = "MPi AKS-74K 5.45x39 mm";
                description = "The MPi AKS-74K is another derivative of the AK-74 rifle but is designed with a carbine-style configuration and utilises a shorter barrel, As with AKS-74s, it has a ~ 16% lower inertia penalty thanks to the side folding metal stock. In addition, it is even lighter to carry due to the compensator's removal, However, one consequence of its shortened barrel is that the AKS-74K suffers from a sharply lowered muzzle velocity of 738 m/s, effectively cutting its range down to less than ~ 400 metres.";
                price = 4900;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };		
            class arifle_SDAR_F {
                displayName = "SDAR 5.56 mm";
                description = "The SDAR is a selective-fire, bullpup assault rifle that is chambered to fire the 5.56×45 mm NATO round. It can be used on both land and underwater. It accepts all types of 5.56 mm NATO ammunition and can fire them while the weapon is submerged, but only the dual purpose magazines are capable of inflicting damage underwater. The supercavitating rounds have an effective range of approximately 30 metres. Beyond that distance, they will lose most of their velocity and become unable to hit any targets.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };		
            class arifle_Mk20_plain_F {
                displayName = "Mk20 5.56 mm";
                description = "The Mk20 is a gas operated, selective-fire assault rifle that is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a rate of fire of up to roughly ~ 857 rounds per minute with a muzzle velocity of 900 m/s. The top and side rails support being mounted with accessories, while the muzzle can also be fitted with attachments.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_Mk20_F {
                displayName = "Mk20 5.56 mm (Camo)";
                description = "The Mk20 is a gas operated, selective-fire assault rifle that is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a rate of fire of up to roughly ~ 857 rounds per minute with a muzzle velocity of 900 m/s. The top and side rails support being mounted with accessories, while the muzzle can also be fitted with attachments.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };			
            class arifle_Mk20_GL_plain_F {
                displayName = "Mk20 EGLM 5.56 mm";
                description = "The Mk20 is a gas operated, selective-fire assault rifle that is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a rate of fire of up to roughly ~ 857 rounds per minute with a muzzle velocity of 900 m/s while the grenade launcher can launch 40 mm grenades, ranging from harmless smoke/flare shells to high-explosive (HE) rounds. The top and side rails support being mounted with accessories, while the muzzle can also be fitted with attachments.";
                price = 6000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };			
            class arifle_Mk20_GL_F {
                displayName = "Mk20 EGLM 5.56 mm (Camo)";
                description = "The Mk20 is a gas operated, selective-fire assault rifle that is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a rate of fire of up to roughly ~ 857 rounds per minute with a muzzle velocity of 900 m/s while the grenade launcher can launch 40 mm grenades, ranging from harmless smoke/flare shells to high-explosive (HE) rounds. The top and side rails support being mounted with accessories, while the muzzle can also be fitted with attachments.";
                price = 6000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_TRG20_F {
                displayName = "	TRG-20 5.56 mm";
                description = "The TRG-20 is a carbine variant of the baseline TRG-21. As with its parent weapon, it is chambered to fire 5.56×45 mm NATO ammunition, It loads from the same 30-round STANAG magazines and completely identical performance-wise, save for having a lower muzzle velocity of 840 m/s instead. The TRG-20 has the same ability to mount accessories on its top and side rails, and can be fitted with muzzle attachments.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_TRG21_F {
                displayName = "TRG-21 5.56 mm";
                description = "The TRG-21 is a gas operated, selective-fire assault rifle that is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a fire rate of up to 750 rounds per minute with a muzzle velocity of 920 m/s. The top and side rails support being mounted with optical sights and side rail accessories, while the muzzle can be fitted with suppressor attachments.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_TRG21_GL_F {
                displayName = "TRG-21 EGLM 5.56 mm";
                description = "The TRG-21 EGLM is a modified version of the baseline TRG-21 rifle that has an underbarrel grenade launcher attached to it, As with its parent weapon, it is also chambered to fire the same 5.56×45 mm NATO round, while the grenade launcher can launch 40 mm grenades with either smoke, flare or high-explosive (HE) warheads.";
                price = 6000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_SPAR_01_blk_F {
                displayName = "SPAR-16 5.56 mm (Black)";
                description = "The SPAR-16 is a short-stroke, gas piston-operated assault rifle with a rotating bolt that forms the baseline model of the SPAR-16 family. Along with its sub-variants, it is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a fire rate of up to 857 rounds per minute with a muzzle velocity of 800 m/s. The SPAR-16 accepts accessories on its top, side and underbarrel rails and can also be fitted with muzzle attachments.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_SPAR_01_khk_F {
                displayName = "SPAR-16 5.56 mm (Khaki)";
                description = "The SPAR-16 is a short-stroke, gas piston-operated assault rifle with a rotating bolt that forms the baseline model of the SPAR-16 family. Along with its sub-variants, it is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a fire rate of up to 857 rounds per minute with a muzzle velocity of 800 m/s. The SPAR-16 accepts accessories on its top, side and underbarrel rails and can also be fitted with muzzle attachments.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_SPAR_01_snd_F {
                displayName = "SPAR-16 5.56 mm (Sand)";
                description = "The SPAR-16 is a short-stroke, gas piston-operated assault rifle with a rotating bolt that forms the baseline model of the SPAR-16 family. Along with its sub-variants, it is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a fire rate of up to 857 rounds per minute with a muzzle velocity of 800 m/s. The SPAR-16 accepts accessories on its top, side and underbarrel rails and can also be fitted with muzzle attachments.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_SPAR_01_GL_blk_F {
                displayName = "SPAR-16 GL 5.56 mm (Black)";
                description = "The SPAR-16 GL is a modified version of the baseline SPAR-16 model that has a grenade launcher attached to it, As with its parent model, it is also chambered to fire the 5.56×45 mm NATO round and can launch 40 mm grenades from its underbarrel grenade launcher.";
                price = 6000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_SPAR_01_GL_khk_F {
                displayName = "SPAR-16 GL 5.56 mm (Khaki)";
                description = "The SPAR-16 GL is a modified version of the baseline SPAR-16 model that has a grenade launcher attached to it, As with its parent model, it is also chambered to fire the 5.56×45 mm NATO round and can launch 40 mm grenades from its underbarrel grenade launcher.";
                price = 6000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_SPAR_01_GL_snd_F {
                displayName = "SPAR-16 GL 5.56 mm (Sand)";
                description = "The SPAR-16 GL is a modified version of the baseline SPAR-16 model that has a grenade launcher attached to it, As with its parent model, it is also chambered to fire the 5.56×45 mm NATO round and can launch 40 mm grenades from its underbarrel grenade launcher.";
                price = 6000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class gm_c7a1_oli {
                displayName = "C7A1 5.56 mm";
                description = "The C7A1 is a selective-fire assault rifle with a direct impingement operation that is chambered to fire the 5.56×45 mm NATO round, It feeds from 30-round STANAG magazines but can also load older 20-round box magazines utilised by the American-made M16A1. It can attain a fire rate of up to ~ 652 rounds per minute (800 on full auto) and retains a muzzle velocity of 960 m/s. The C7A1 supports being fitted with optical sights and can mount muzzle attachments.";
                price = 6300;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class gm_m16a1_blk {
                displayName = "	M16A1 5.56 mm";
                description = "The M16A1 is a gas operated, selective-fire assault rifle chambered for the 5.56×45 mm round, It primarily feeds from 20-round magazines but can also load 30-rounders used by its newer counterpart. It can attain a fire rate of up to ~ 652 rounds per minute (800 on full auto) and retains a muzzle velocity of 960 m/s. The M16A1 cannot be fitted with any optical sights but can mount sound suppressors.";
                price = 6300;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class gm_m16a2_blk {
                displayName = "M16A2 5.56 mm";
                description = "The M16A2 is an upgraded model of the M16A1 rifle, It loads from 30-round STANAG magazines but can also feed from 20-rounders shared with the M16A1. It has the same rate of fire and muzzle velocity of the M16A1. It cannot be fitted with optical sights but can mount muzzle attachments, For all intents and purposes, the M16A2 is simply a modified M16A1 that cannot fire on full auto.";
                price = 6300;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };		
            class arifle_CTAR_blk_F {
                displayName = "CAR-95 5.8 mm (Black)";
                description = "The CAR-95 is the baseline variant of the CAR-95 family. Along with its sub-variants, it is chambered to fire the 5.8×42 mm round, It loads from 30-round curved magazines and can attain a fire rate of roughly ~ 652 rounds per minute, with a muzzle velocity of 930 m/s. The CAR-95 can fit accessories on both its top and side rails and can also mount muzzle attachments.";
                price = 6500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_CTAR_hex_F {
                displayName = "CAR-95 5.8 mm (Hex)";
                description = "The CAR-95 is the baseline variant of the CAR-95 family. Along with its sub-variants, it is chambered to fire the 5.8×42 mm round, It loads from 30-round curved magazines and can attain a fire rate of roughly ~ 652 rounds per minute, with a muzzle velocity of 930 m/s. The CAR-95 can fit accessories on both its top and side rails and can also mount muzzle attachments.";
                price = 6500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_CTAR_ghex_F {
                displayName = "CAR-95 5.8 mm (Green Hex)";
                description = "The CAR-95 is the baseline variant of the CAR-95 family. Along with its sub-variants, it is chambered to fire the 5.8×42 mm round, It loads from 30-round curved magazines and can attain a fire rate of roughly ~ 652 rounds per minute, with a muzzle velocity of 930 m/s. The CAR-95 can fit accessories on both its top and side rails and can also mount muzzle attachments.";
                price = 6500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_CTAR_GL_blk_F {
                displayName = "CAR-95 GL 5.8 mm (Black)";
                description = "The CAR-95 GL is simply a modified version of the baseline CAR-95 variant that has an underbarrel grenade launcher attached to it, As with its parent model, it is also chambered to fire the 5.8×42 mm round while the UGL can launch 40 mm grenades.";
                price = 7000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_CTAR_GL_hex_F {
                displayName = "CAR-95 GL 5.8 mm (Hex)";
                description = "The CAR-95 GL is simply a modified version of the baseline CAR-95 variant that has an underbarrel grenade launcher attached to it, As with its parent model, it is also chambered to fire the 5.8×42 mm round while the UGL can launch 40 mm grenades.";
                price = 7000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_CTAR_GL_ghex_F {
                displayName = "CAR-95 GL 5.8 mm (Green Hex)";
                description = "The CAR-95 GL is simply a modified version of the baseline CAR-95 variant that has an underbarrel grenade launcher attached to it, As with its parent model, it is also chambered to fire the 5.8×42 mm round while the UGL can launch 40 mm grenades.";
                price = 7000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };			
            class arifle_ARX_blk_F {
                displayName = "Type 115 6.5 mm (Black)";
                description = "The Type 115 is a selective-fire assault rifle that is primarily chambered to fire caseless 6.5×39 mm ammunition. It also has an underbarrel anti-materiel rifle module that is designed to fire specialised .50 BW rounds,It loads from the same 30-round box magazines used by Mediterranean CSAT Katiba assault rifles, and can reach a fire rate of up to 895 rounds per minute with a muzzle velocity of 800 m/s. The Type 115 accepts accessories on all three of its rails; top, side, and underbarrel (located beneath the AMR module) and can mount attachments onto its muzzle as well.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_ARX_ghex_F {
                displayName = "Type 115 6.5 mm (Green Hex)";
                description = "The Type 115 is a selective-fire assault rifle that is primarily chambered to fire caseless 6.5×39 mm ammunition. It also has an underbarrel anti-materiel rifle module that is designed to fire specialised .50 BW rounds,It loads from the same 30-round box magazines used by Mediterranean CSAT Katiba assault rifles, and can reach a fire rate of up to 895 rounds per minute with a muzzle velocity of 800 m/s. The Type 115 accepts accessories on all three of its rails; top, side, and underbarrel (located beneath the AMR module) and can mount attachments onto its muzzle as well.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_ARX_hex_F {
                displayName = "Type 115 6.5 mm (Hex)";
                description = "The Type 115 is a selective-fire assault rifle that is primarily chambered to fire caseless 6.5×39 mm ammunition. It also has an underbarrel anti-materiel rifle module that is designed to fire specialised .50 BW rounds,It loads from the same 30-round box magazines used by Mediterranean CSAT Katiba assault rifles, and can reach a fire rate of up to 895 rounds per minute with a muzzle velocity of 800 m/s. The Type 115 accepts accessories on all three of its rails; top, side, and underbarrel (located beneath the AMR module) and can mount attachments onto its muzzle as well.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_Katiba_C_F {
                displayName = "Katiba Carbine 6.5 mm";
                description = "The Katiba Carbine is a compact variant of the baseline Katiba. Just like its parent model, it is chambered to fire the same caseless 6.5×39 mm round, It loads from 30-round box magazines and has the same rate of fire (800 rounds per minute). The Katiba Carbine accepts being mounted with accessories on its top and side rails, and can be fitted with muzzle attachments.";
                price = 7000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_Katiba_F {
                displayName = "Katiba 6.5 mm";
                description = "The Katiba GL is simply a modified version of the baseline Katiba model that has an underbarrel grenade launcher attached to it, As with its parent counterpart, it is also chambered to fire caseless 6.5×39 mm ammunition, while the grenade launcher can fire 40 mm grenades. It loads from the same 30-round box magazines and is statistics-wise, identical to the baseline Katiba rifle. It can fit accessories onto both its top and side rails while also accepting muzzle attachments.";
                price = 7000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_Katiba_GL_F {
                displayName = "Katiba GL 6.5 mm";
                description = "The Katiba is the baseline variant of the Katiba series. Along with its sub-variants, it is chambered to fire the caseless 6.5×39 mm round, It loads from 30-round box magazines and can attain a rate of fire of up to 800 rounds per minute, with a muzzle velocity of 900 m/s. The Katiba accepts accessories on its top and side rails and can be fitted with muzzle attachments.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };			
           class arifle_MXC_F {
                displayName = "MXC 6.5 mm carbine Rifle";
                description = "The MXC is a carbine variant of the baseline MX rifle. Like its parent weapon, it is also chambered to fire caseless 6.5×39 mm NATO ammunition, It loads from the same 30-round magazines and has an identical maximum fire rate of 625 rounds per minute. It can still be fitted with accessories onto its top and side rails, while also being able to mount attachments onto its muzzle, but cannot attach underbarrel accessories.";
                price = 6500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
           class arifle_MXC_Black_F {
                displayName = "MXC 6.5 mm carbine Rifle (Black)";
                description = "The MXC is a carbine variant of the baseline MX rifle. Like its parent weapon, it is also chambered to fire caseless 6.5×39 mm NATO ammunition, It loads from the same 30-round magazines and has an identical maximum fire rate of 625 rounds per minute. It can still be fitted with accessories onto its top and side rails, while also being able to mount attachments onto its muzzle, but cannot attach underbarrel accessories.";
                price = 6500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
           class arifle_MXC_khk_F {
                displayName = "MXC 6.5 mm carbine Rifle (Khaki)";
                description = "The MXC is a carbine variant of the baseline MX rifle. Like its parent weapon, it is also chambered to fire caseless 6.5×39 mm NATO ammunition, It loads from the same 30-round magazines and has an identical maximum fire rate of 625 rounds per minute. It can still be fitted with accessories onto its top and side rails, while also being able to mount attachments onto its muzzle, but cannot attach underbarrel accessories.";
                price = 6500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class arifle_MX_F {
                displayName = "MX 6.5 mm Assault Rifle";
                description = "The MX is a selective-fire assault rifle chambered to fire the caseless 6.5×39 mm NATO round. It is the baseline assault rifle model upon which all other MX variants are based on, It loads from 30-round double-stack STANAGs, and can attain a fire rate of up to 625 rounds per minute with a muzzle velocity of 800 m/s. The MX accepts accessories on all three of its rails; top, side, and underbarrel, while also being able to mount attachments onto its muzzle.";
                price = 7000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MX_Black_F {
                displayName = "MX 6.5 mm Assault Rifle (Black)";
                description = "The MX is a selective-fire assault rifle chambered to fire the caseless 6.5×39 mm NATO round. It is the baseline assault rifle model upon which all other MX variants are based on, It loads from 30-round double-stack STANAGs, and can attain a fire rate of up to 625 rounds per minute with a muzzle velocity of 800 m/s. The MX accepts accessories on all three of its rails; top, side, and underbarrel, while also being able to mount attachments onto its muzzle.";
                price = 7000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MX_khk_F {
                displayName = "MX 6.5 mm Assault Rifle (Khaki)";
                description = "The MX is a selective-fire assault rifle chambered to fire the caseless 6.5×39 mm NATO round. It is the baseline assault rifle model upon which all other MX variants are based on, It loads from 30-round double-stack STANAGs, and can attain a fire rate of up to 625 rounds per minute with a muzzle velocity of 800 m/s. The MX accepts accessories on all three of its rails; top, side, and underbarrel, while also being able to mount attachments onto its muzzle.";
                price = 7000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class arifle_MX_GL_F {
                displayName = "MX 3GL 6.5 mm";
                description = "The MX is a selective-fire assault rifle chambered to fire the caseless 6.5×39 mm NATO round. It is the baseline assault rifle model upon which all other MX variants are based on, It loads from 30-round double-stack STANAGs, and can attain a fire rate of up to 625 rounds per minute with a muzzle velocity of 800 m/s, The underbarrel grenade launcher has a quadrant sight with a red dot for the operator to aim with, which can be zeroed up to a maximum range of 400 m. The MX accepts accessories on all three of its rails; top, side, and underbarrel, while also being able to mount attachments onto its muzzle.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MX_GL_Black_F {
                displayName = "MX 3GL 6.5 mm (Black)";
                description = "The MX is a selective-fire assault rifle chambered to fire the caseless 6.5×39 mm NATO round. It is the baseline assault rifle model upon which all other MX variants are based on, It loads from 30-round double-stack STANAGs, and can attain a fire rate of up to 625 rounds per minute with a muzzle velocity of 800 m/s, The underbarrel grenade launcher has a quadrant sight with a red dot for the operator to aim with, which can be zeroed up to a maximum range of 400 m. The MX accepts accessories on all three of its rails; top, side, and underbarrel, while also being able to mount attachments onto its muzzle.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MX_GL_khk_F {
                displayName = "MX 3GL 6.5 mm (Khaki)";
                description = "The MX is a selective-fire assault rifle chambered to fire the caseless 6.5×39 mm NATO round. It is the baseline assault rifle model upon which all other MX variants are based on, It loads from 30-round double-stack STANAGs, and can attain a fire rate of up to 625 rounds per minute with a muzzle velocity of 800 m/s, The underbarrel grenade launcher has a quadrant sight with a red dot for the operator to aim with, which can be zeroed up to a maximum range of 400 m. The MX accepts accessories on all three of its rails; top, side, and underbarrel, while also being able to mount attachments onto its muzzle.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_F {
                displayName = "Promet 6.5 mm";
                description = "The Promet is a selective-fire bullpup assault rifle chambered for the 6.5×39 mm NATO caseless round, It loads exclusively from 30-round magazines designed specifically for use with the Promet family, and can attain a fire rate of 800 rounds per minute with a muzzle velocity of 840 m/s. The Promet supports being fitted with accessories on its top and side rails and can also mount muzzle attachments.";
                price = 7000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_black_F {
                displayName = "Promet 6.5 mm (Black)";
                description = "The Promet is a selective-fire bullpup assault rifle chambered for the 6.5×39 mm NATO caseless round, It loads exclusively from 30-round magazines designed specifically for use with the Promet family, and can attain a fire rate of 800 rounds per minute with a muzzle velocity of 840 m/s. The Promet supports being fitted with accessories on its top and side rails and can also mount muzzle attachments.";
                price = 7000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_sand_F {
                displayName = "Promet 6.5 mm (Sand)";
                description = "The Promet is a selective-fire bullpup assault rifle chambered for the 6.5×39 mm NATO caseless round, It loads exclusively from 30-round magazines designed specifically for use with the Promet family, and can attain a fire rate of 800 rounds per minute with a muzzle velocity of 840 m/s. The Promet supports being fitted with accessories on its top and side rails and can also mount muzzle attachments.";
                price = 7000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_camo_F {
                displayName = "Promet 6.5 mm (Camo)";
                description = "The Promet is a selective-fire bullpup assault rifle chambered for the 6.5×39 mm NATO caseless round, It loads exclusively from 30-round magazines designed specifically for use with the Promet family, and can attain a fire rate of 800 rounds per minute with a muzzle velocity of 840 m/s. The Promet supports being fitted with accessories on its top and side rails and can also mount muzzle attachments.";
                price = 7000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_UBS_F {
                displayName = "Promet SG 6.5 mm";
                description = "Like the GL variant, the Promet SG is simply a modified Promet rifle fitted with an underbarrel shotgun module, Chambered to fire 12 Gauge shotshells of either pellet or slug variety, the TSP-12 module can attain a fire rate of up to 200 rounds per minute. It loads exclusively from 6-round cylinders.";
                price = 7500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_UBS_black_F {
                displayName = "Promet SG 6.5 mm (Black)";
                description = "Like the GL variant, the Promet SG is simply a modified Promet rifle fitted with an underbarrel shotgun module, Chambered to fire 12 Gauge shotshells of either pellet or slug variety, the TSP-12 module can attain a fire rate of up to 200 rounds per minute. It loads exclusively from 6-round cylinders.";
                price = 7500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_UBS_sand_F {
                displayName = "Promet SG 6.5 mm (Sand)";
                description = "Like the GL variant, the Promet SG is simply a modified Promet rifle fitted with an underbarrel shotgun module, Chambered to fire 12 Gauge shotshells of either pellet or slug variety, the TSP-12 module can attain a fire rate of up to 200 rounds per minute. It loads exclusively from 6-round cylinders.";
                price = 7500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_UBS_camo_F {
                displayName = "Promet SG 6.5 mm (Camo)";
                description = "Like the GL variant, the Promet SG is simply a modified Promet rifle fitted with an underbarrel shotgun module, Chambered to fire 12 Gauge shotshells of either pellet or slug variety, the TSP-12 module can attain a fire rate of up to 200 rounds per minute. It loads exclusively from 6-round cylinders.";
                price = 7500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_GL_F {
                displayName = "Promet GL 6.5 mm";
                description = "The Promet GL is simply a modified configuration of the baseline Promet rifle fitted with an underbarrel grenade launcher module, It is chambered to fire 6.5×39 mm NATO caseless ammunition while its underbarrel UGP-40 module can load 40 mm grenade rounds universally shared with other rifle UGLs. It can be fitted with accessories on its top and side rails and supports muzzle attachments.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_GL_black_F {
                displayName = "Promet GL 6.5 mm (Black)";
                description = "The Promet GL is simply a modified configuration of the baseline Promet rifle fitted with an underbarrel grenade launcher module, It is chambered to fire 6.5×39 mm NATO caseless ammunition while its underbarrel UGP-40 module can load 40 mm grenade rounds universally shared with other rifle UGLs. It can be fitted with accessories on its top and side rails and supports muzzle attachments.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_GL_sand_F {
                displayName = "Promet GL 6.5 mm (Sand)";
                description = "The Promet GL is simply a modified configuration of the baseline Promet rifle fitted with an underbarrel grenade launcher module, It is chambered to fire 6.5×39 mm NATO caseless ammunition while its underbarrel UGP-40 module can load 40 mm grenade rounds universally shared with other rifle UGLs. It can be fitted with accessories on its top and side rails and supports muzzle attachments.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_GL_camo_F {
                displayName = "Promet GL 6.5 mm (Camo)";
                description = "The Promet GL is simply a modified configuration of the baseline Promet rifle fitted with an underbarrel grenade launcher module, It is chambered to fire 6.5×39 mm NATO caseless ammunition while its underbarrel UGP-40 module can load 40 mm grenade rounds universally shared with other rifle UGLs. It can be fitted with accessories on its top and side rails and supports muzzle attachments.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
           class gm_akm_wud {
                displayName = "AKM 7.62x39 mm";
                description = "The AKM is a selective-fire, gas operated assault rifle with a rotating bolt that is chambered to fire the 7.62×39 mm round, It loads from 30-round curved magazines but can optionally load 75-round drums as well. It can attain a fire rate of up to 600 rounds per minute and retains a muzzle velocity of 715 m/s. The AKM does not support being fitted with any accessories other than night sights, but can mount bayonets onto the lug beneath the barrel.";
                price = 7500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class gm_akmn_wud {
                displayName = "AKMN 7.62x39 mm";
                description = "The AKMN is statistically identical to the baseline AKM, Aesthetically, it's similar to the AKM but the sole difference is that it has been modified with a dovetail mount integrated onto the receiver, This allows the user to attach riflescopes like the ZFK 4x25 or any other compatible optic, rendering the AKM slightly more useful in longer ranged firefights, There are otherwise no functional or statistical differences to the regular AKM rifle.";
                price = 7500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class gm_mpikm72_brn {
                displayName = "MPi KM-72 7.62x39 mm";
                description = "The KM-72 is a selective-fire assault rifle chambered to fire the 7.62×39 mm cartridge. It uses a gas operation with a rotating bolt, It primarily feeds from 30-round curved magazines but can also load 75-round drums utilised by the LMG RPK. It has a muzzle velocity of 715 m/s, and can reach fire rates of up to 600 rounds per minute. The KM-72 can be fitted with either optical scopes or night sights and bayonets, but is unable to mount any sound suppressors.";
                price = 7500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class gm_mpikms72_brn {
                displayName = "MPi KMS-72 7.62x39 mm";
                description = "The MPi KMS-72 is a slightly modified configuration of its parent weapon, Unlike regular KM-72s, the KMS-72 utilises a side-folding stock as opposed to a fixed one. It is also just slightly lighter to carry, weighing ~ 3 mass less than the KM-72, There are no other functional differences compared to the baseline KM-72.";
                price = 7500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };		
           class arifle_AKM_FL_F {
                displayName = "AKM 7.62 mm";
                description = "The AKS is simply a modified variant of the AKM assault rifle that uses a folding stock as opposed to a fixed wooden stock. The AKS is chambered to fire the same 7.62×39 mm round as its parent weapon, Like the AKM, it loads from 30-round curved steel magazines and has the same rate of fire and muzzle velocity.";
                price = 7500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };		
            class arifle_AKM_F {
                displayName = "AKM 7.62 mm";
                description = "The AKM is a Russian-made gas operated assault rifle developed in the 1950's that is chambered to fire the 7.62×39 mm round, It loads from 30-round curved steel magazines and can achieve a rate of fire of up to 600 rounds per minute, with a muzzle velocity of 710 m/s. The AKM lacks the ability to mount accessories and does not come in any variation that has optical sights or muzzle attachments.";
                price = 7500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
            class arifle_AK12U_F {
                displayName = "AKU-12 7.62 mm";
                description = "A carbine configuration of its parent rifle, the AKU-12 is much lighter to wield and can still load both regular 30- and 75-round magazines, Its rate of fire remains unchanged with both fire modes. Attachments are supported on all three of its rails: top, side and underbarrel, along with the muzzle itself.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_AK12U_arid_F {
                displayName = "AKU-12 7.62 mm (Arid)";
                description = "A carbine configuration of its parent rifle, the AKU-12 is much lighter to wield and can still load both regular 30- and 75-round magazines, Its rate of fire remains unchanged with both fire modes. Attachments are supported on all three of its rails: top, side and underbarrel, along with the muzzle itself.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_AK12U_lush_F {
                displayName = "AKU-12 7.62 mm (Lush)";
                description = "A carbine configuration of its parent rifle, the AKU-12 is much lighter to wield and can still load both regular 30- and 75-round magazines, Its rate of fire remains unchanged with both fire modes. Attachments are supported on all three of its rails: top, side and underbarrel, along with the muzzle itself.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class gm_g3a3_oli {
                displayName = "G3A3 7.62 mm";
                description = "The G3A3 is a selective-fire battle rifle that uses a roller-delayed blowback operating system. It is chambered to fire the ubiquitous 7.62×51 mm NATO round, It loads exclusively from 20-round box magazines designed specifically for use with the G3 series. It can achieve a fire rate of up to ~ 550 rounds per minute with a muzzle velocity of 800 m/s. The G3A3 utilises a claw mount and can be fitted with riflescopes and sound suppressors.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class gm_g3a4_oli {
                displayName = "G3A4 7.62 mm";
                description = "The G3A4 is an updated variant of the baseline G3A3 rifle. It is visually similar to the G3A3 but has a collapsible stock as opposed to the standard fixed one, It possesses the same statistics as its parent weapon; the only difference stems from the ~ 14% reduced inertia penalty, which makes it less punishing to wield in close quarters, Otherwise, there are no differences compared to the regular G3A3 rifle.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };		
            class arifle_AK12_F {
                displayName = "AK-12 7.62 mm";
                description = "The AK-12 is a gas operated, selective-fire assault rifle with a long stroke piston. It is chambered to fire the 7.62×39 mm round, It can load either 30-round polymer magazines designed specifically for the AK-12, or older curved steel magazines used by the AKM. It retains a variable rate of fire that ranges from 600 rounds per minute up to 1,000 rounds on burst mode. The AK-12 has a muzzle velocity of 730 m/s and can accept attachments on all three of its rails; top, side, underbarrel and muzzle.";
                price = 8500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_AK12_arid_F {
                displayName = "AK-12 7.62 mm (Arid)";
                description = "The AK-12 is a gas operated, selective-fire assault rifle with a long stroke piston. It is chambered to fire the 7.62×39 mm round, It can load either 30-round polymer magazines designed specifically for the AK-12, or older curved steel magazines used by the AKM. It retains a variable rate of fire that ranges from 600 rounds per minute up to 1,000 rounds on burst mode. The AK-12 has a muzzle velocity of 730 m/s and can accept attachments on all three of its rails; top, side, underbarrel and muzzle.";
                price = 8500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
            class arifle_AK12_lush_F {
                displayName = "AK-12 7.62 mm (Lush)";
                description = "The AK-12 is a gas operated, selective-fire assault rifle with a long stroke piston. It is chambered to fire the 7.62×39 mm round, It can load either 30-round polymer magazines designed specifically for the AK-12, or older curved steel magazines used by the AKM. It retains a variable rate of fire that ranges from 600 rounds per minute up to 1,000 rounds on burst mode. The AK-12 has a muzzle velocity of 730 m/s and can accept attachments on all three of its rails; top, side, underbarrel and muzzle.";
                price = 8500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class arifle_AK12_GL_F {
                displayName = "AK-12 GL 7.62 mm";
                description = "The AK-12 GL is simply a modified version of the baseline AK-12 rifle that has an underbarrel grenade launcher attached to it, Like its parent, it is also chambered to fire 7.62×39 mm while feeding from the same 30-round curved polymer magazines. The underbarrel grenade launcher can launch 40 mm grenades universally shared with other rifle UGLs.";
                price = 10000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class arifle_AK12_GL_lush_F {
                displayName = "AK-12 GL 7.62 mm (Lush)";
                description = "The AK-12 GL is simply a modified version of the baseline AK-12 rifle that has an underbarrel grenade launcher attached to it, Like its parent, it is also chambered to fire 7.62×39 mm while feeding from the same 30-round curved polymer magazines. The underbarrel grenade launcher can launch 40 mm grenades universally shared with other rifle UGLs.";
                price = 10000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class arifle_AK12_GL_arid_F {
                displayName = "AK-12 GL 7.62 mm (Arid)";
                description = "The AK-12 GL is simply a modified version of the baseline AK-12 rifle that has an underbarrel grenade launcher attached to it, Like its parent, it is also chambered to fire 7.62×39 mm while feeding from the same 30-round curved polymer magazines. The underbarrel grenade launcher can launch 40 mm grenades universally shared with other rifle UGLs.";
                price = 10000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
	};		
        class Mweapons {
            displayName = "Marksman Rifles";
            kindOf = "Weapons";
			tracking = 1;
            //items of this category:
			
			class arifle_MXM_F {
                displayName = "MXM 6.5 mm Marksman rifle";
                description = "The MXM is designed specifically to serve as a marksman rifle, It still feeds from the same 30-round, 6.5 mm NATO loaded magazines and can accept attachments on all three rails along with muzzle attachments. Thanks to its longer barrel, the MXM retains the highest muzzle velocity out of all the MX variants - an impressive 920 m/s in contrast to the baseline MX's 800 (or even the MXC's meagre 720). This significantly increases the MXM's range to well over 800 metres, which is traditionally the domain of dedicated 7.62 mm-chambered DMRs.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class arifle_MXM_Black_F {
                displayName = "MXM 6.5 mm Marksman rifle (Black)";
                description = "The MXM is designed specifically to serve as a marksman rifle, It still feeds from the same 30-round, 6.5 mm NATO loaded magazines and can accept attachments on all three rails along with muzzle attachments. Thanks to its longer barrel, the MXM retains the highest muzzle velocity out of all the MX variants - an impressive 920 m/s in contrast to the baseline MX's 800 (or even the MXC's meagre 720). This significantly increases the MXM's range to well over 800 metres, which is traditionally the domain of dedicated 7.62 mm-chambered DMRs.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MXM_khk_F {
                displayName = "MXM 6.5 mm Marksman rifle (Khaki)";
                description = "The MXM is designed specifically to serve as a marksman rifle, It still feeds from the same 30-round, 6.5 mm NATO loaded magazines and can accept attachments on all three rails along with muzzle attachments. Thanks to its longer barrel, the MXM retains the highest muzzle velocity out of all the MX variants - an impressive 920 m/s in contrast to the baseline MX's 800 (or even the MXC's meagre 720). This significantly increases the MXM's range to well over 800 metres, which is traditionally the domain of dedicated 7.62 mm-chambered DMRs.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_Mark_F {
                displayName = "Promet MR 6.5 mm";
                description = "The Promet MR is a reconfigured version of the baseline Promet rifle designed to serve in a marksman role. It utilises a longer barrel which enhances its muzzle velocity and range, Compared to the regular Promet, the MR variant fires rounds with a greater velocity of 900 m/s instead. Accuracy is also improved and like its parent weapon, the Promet MR is superior to its American-made counterpart when it comes to dispersion at distances beyond ~ 600 metres.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_Mark_black_F {
                displayName = "Promet MR 6.5 mm (Black)";
                description = "The Promet MR is a reconfigured version of the baseline Promet rifle designed to serve in a marksman role. It utilises a longer barrel which enhances its muzzle velocity and range, Compared to the regular Promet, the MR variant fires rounds with a greater velocity of 900 m/s instead. Accuracy is also improved and like its parent weapon, the Promet MR is superior to its American-made counterpart when it comes to dispersion at distances beyond ~ 600 metres.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_Mark_sand_F {
                displayName = "Promet MR 6.5 mm (Sand)";
                description = "The Promet MR is a reconfigured version of the baseline Promet rifle designed to serve in a marksman role. It utilises a longer barrel which enhances its muzzle velocity and range, Compared to the regular Promet, the MR variant fires rounds with a greater velocity of 900 m/s instead. Accuracy is also improved and like its parent weapon, the Promet MR is superior to its American-made counterpart when it comes to dispersion at distances beyond ~ 600 metres.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_Mark_camo_F {
                displayName = "Promet MR 6.5 mm (Camo)";
                description = "The Promet MR is a reconfigured version of the baseline Promet rifle designed to serve in a marksman role. It utilises a longer barrel which enhances its muzzle velocity and range, Compared to the regular Promet, the MR variant fires rounds with a greater velocity of 900 m/s instead. Accuracy is also improved and like its parent weapon, the Promet MR is superior to its American-made counterpart when it comes to dispersion at distances beyond ~ 600 metres.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
            class gm_svd_wud {
                displayName = "SVD 7.62x54 mm Marksman Rifle";
                description = "The SVD is a semi-automatic, gas-operated sniper/marksman rifle with a short-stroke gas-piston system. It is chambered to fire the 7.62×54 mm round, It loads exclusively from 10-round curved magazines, and can attain a fire rate of up to 600 rounds per minute with a muzzle velocity of 715 m/s. The SVD can only be fitted with the PSO-1 scope but can have bayonets mounted beneath the muzzle (suppressors are not supported).";
                price = 9300;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class srifle_DMR_06_hunter_F {
                displayName = "Mk14 7.62 mm (Marksman rifle Classic)";
                description = "The Mk14 is a selective-fire, gas operated battle rifle that is chambered to fire the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 705 rounds per minute, with a muzzle velocity of 850 m/s. The Mk14 only accepts optical sights on its top rail but can also fit bipods onto a small rail located beneath the forward end of the barrel, while also being able to mount attachments onto its muzzle.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };		
            class srifle_DMR_06_camo_F {
                displayName = "Mk14 7.62 mm Marksman rifle (Camo)";
                description = "The Mk14 is a selective-fire, gas operated battle rifle that is chambered to fire the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 705 rounds per minute, with a muzzle velocity of 850 m/s. The Mk14 only accepts optical sights on its top rail but can also fit bipods onto a small rail located beneath the forward end of the barrel, while also being able to mount attachments onto its muzzle.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class srifle_DMR_06_olive_F {
                displayName = "Mk14 7.62 mm Marksman rifle (Olive)";
                description = "The Mk14 is a selective-fire, gas operated battle rifle that is chambered to fire the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 705 rounds per minute, with a muzzle velocity of 850 m/s. The Mk14 only accepts optical sights on its top rail but can also fit bipods onto a small rail located beneath the forward end of the barrel, while also being able to mount attachments onto its muzzle.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class srifle_EBR_F {
                displayName = "Mk18 ABR 7.62 mm Marksman rifle";
                description = "The Mk18 ABR is a selective fire, gas operated, rotating bolt battle rifle that is chambered for the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 705 rounds per minute on full auto, with a muzzle velocity of 850 m/s. The Mk18 can accept being fitted with accessories on its top, side and underbarrel rails, and can also be suppressed with muzzle attachments.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
           class srifle_DMR_03_F {
                displayName = "Mk-I EMR 7.62 mm Marksman rifle (Black)";
                description = "The Mk-I EMR is a battle rifle that is chambered to fire the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 600 rounds per minute on full auto, with a muzzle velocity of 940 m/s. The EMR accepts accessories on its top, side and underbarrel rails, and can also mount attachments on its muzzle.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_03_khaki_F {
                displayName = "Mk-I EMR 7.62 mm Marksman rifle (Khaki)";
                description = "The Mk-I EMR is a battle rifle that is chambered to fire the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 600 rounds per minute on full auto, with a muzzle velocity of 940 m/s. The EMR accepts accessories on its top, side and underbarrel rails, and can also mount attachments on its muzzle.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_03_tan_F {
                displayName = "Mk-I EMR 7.62 mm Marksman rifle (Sand)";
                description = "The Mk-I EMR is a battle rifle that is chambered to fire the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 600 rounds per minute on full auto, with a muzzle velocity of 940 m/s. The EMR accepts accessories on its top, side and underbarrel rails, and can also mount attachments on its muzzle.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
           class srifle_DMR_03_multicam_F {
                displayName = "Mk-I EMR 7.62 mm Marksman rifle (Camo)";
                description = "The Mk-I EMR is a battle rifle that is chambered to fire the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 600 rounds per minute on full auto, with a muzzle velocity of 940 m/s. The EMR accepts accessories on its top, side and underbarrel rails, and can also mount attachments on its muzzle.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_SPAR_03_blk_F {
                displayName = "SPAR-17 7.62 mm Marksman rifle (Black)";
                description = "The SPAR-17 is a selective-fire, short-stroke, gas piston-operated battle rifle with a rotating bolt that is chambered for the 7.62×51 mm NATO round, It loads from 20-round magazines and can attain a fire rate of up to 600 rounds per minute on full auto, with a muzzle velocity of 900 m/s. The SPAR-17 accepts accessories on its top, side and underbarrel rails, and can also mount attachments onto its muzzle.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class arifle_SPAR_03_khk_F {
                displayName = "SPAR-17 7.62 mm Marksman rifle (Khaki)";
                description = "The SPAR-17 is a selective-fire, short-stroke, gas piston-operated battle rifle with a rotating bolt that is chambered for the 7.62×51 mm NATO round, It loads from 20-round magazines and can attain a fire rate of up to 600 rounds per minute on full auto, with a muzzle velocity of 900 m/s. The SPAR-17 accepts accessories on its top, side and underbarrel rails, and can also mount attachments onto its muzzle.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class arifle_SPAR_03_snd_F {
                displayName = "SPAR-17 7.62 mm Marksman rifle (Sand)";
                description = "The SPAR-17 is a selective-fire, short-stroke, gas piston-operated battle rifle with a rotating bolt that is chambered for the 7.62×51 mm NATO round, It loads from 20-round magazines and can attain a fire rate of up to 600 rounds per minute on full auto, with a muzzle velocity of 900 m/s. The SPAR-17 accepts accessories on its top, side and underbarrel rails, and can also mount attachments onto its muzzle.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
           class srifle_DMR_04_F {
                displayName = "ASP-1 Kir 12.7 mm Marksman rifle (Black)";
                description = "The ASP-1 Kir is a semi-automatic, integrally-suppressed special sniper rifle chambered to fire the subsonic 12.7×54 mm round, It loads from 10-round box magazines and can attain a fire rate of up to 600 rounds per minute, with a muzzle velocity of just 290 m/s. It accepts accessories on all three of its rails: top, side, underbarrel, but cannot be fitted with any muzzle attachments as it uses an integrated suppressor.";
                price = 10500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_04_Tan_F {
                displayName = "ASP-1 Kir 12.7 mm Marksman rifle (Tan)";
                description = "The ASP-1 Kir is a semi-automatic, integrally-suppressed special sniper rifle chambered to fire the subsonic 12.7×54 mm round, It loads from 10-round box magazines and can attain a fire rate of up to 600 rounds per minute, with a muzzle velocity of just 290 m/s. It accepts accessories on all three of its rails: top, side, underbarrel, but cannot be fitted with any muzzle attachments as it uses an integrated suppressor.";
                price = 10500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
           class srifle_DMR_05_blk_F {
                displayName = "Cyrus 9.3 mm Marksman rifle (Black)";
                description = "The Cyrus is a gas operated, selective-fire marksman rifle chambered to fire the 9.3×64 mm round, It loads from 10-round box magazines and can attain a fire rate of up to 300 rounds per minute, with a muzzle velocity of 870 m/s. The Cyrus supports being mounted with accessories on its top, side, and underbarrel rails, and can be fitted with muzzle attachments.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_05_hex_F {
                displayName = "Cyrus 9.3 mm Marksman rifle (Hex)";
                description = "The Cyrus is a gas operated, selective-fire marksman rifle chambered to fire the 9.3×64 mm round, It loads from 10-round box magazines and can attain a fire rate of up to 300 rounds per minute, with a muzzle velocity of 870 m/s. The Cyrus supports being mounted with accessories on its top, side, and underbarrel rails, and can be fitted with muzzle attachments.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_05_tan_f {
                displayName = "Cyrus 9.3 mm Marksman rifle (Tan)";
                description = "The Cyrus is a gas operated, selective-fire marksman rifle chambered to fire the 9.3×64 mm round, It loads from 10-round box magazines and can attain a fire rate of up to 300 rounds per minute, with a muzzle velocity of 870 m/s. The Cyrus supports being mounted with accessories on its top, side, and underbarrel rails, and can be fitted with muzzle attachments.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_02_F {
                displayName = "MAR-10 .338 Marksman rifle (Black)";
                description = "The MAR-10 is a piston driven, semi-automatic marksman rifle chambered to fire the .338 Lapua Magnum round, It loads from 10-round box magazines, and can attain a fire rate of up to 250 rounds per minute with a muzzle velocity of 915 m/s. It accepts accessories on all three of its rails; top, side, and underbarrel, and can have attachments mounted onto its muzzle.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_02_camo_F {
                displayName = "MAR-10 .338 Marksman rifle (Camo)";
                description = "The MAR-10 is a piston driven, semi-automatic marksman rifle chambered to fire the .338 Lapua Magnum round, It loads from 10-round box magazines, and can attain a fire rate of up to 250 rounds per minute with a muzzle velocity of 915 m/s. It accepts accessories on all three of its rails; top, side, and underbarrel, and can have attachments mounted onto its muzzle.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_02_sniper_F {
                displayName = "MAR-10 .338 Marksman rifle (Sand)";
                description = "The MAR-10 is a piston driven, semi-automatic marksman rifle chambered to fire the .338 Lapua Magnum round, It loads from 10-round box magazines, and can attain a fire rate of up to 250 rounds per minute with a muzzle velocity of 915 m/s. It accepts accessories on all three of its rails; top, side, and underbarrel, and can have attachments mounted onto its muzzle.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };						
	};
        class MGweapons {
            displayName = "Machine Guns";
            kindOf = "Weapons";
			tracking = 1;
            //items of this category:
			
            class gm_hmgpkm_prp {
                displayName = "HMG PKM 7.62x54 mm";
                description = "The HMG PKM is a gas operated, air-cooled, belt fed machine gun that fires from an open bolt. It is chambered to fire the 7.62×54 mm cartridge, It loads from 100-round belt boxes, and can attain a fire rate of ~ 652 rounds per minute with a muzzle velocity of 825 m/s. The HMG PKM cannot be fitted with optical sights or muzzle attachments, but features an integrated folding bipod and can be zeroed up to a maximum range of 1000 m.";
                price = 13000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 			
	    };
            class gm_mg3_blk {
                displayName = "MG3 7.62x51 mm";
                description = "The MG3 is a short recoil operated and striker-fired general-purpose machine gun with a roller-locked bolt carrier, firing from a closed bolt. It is chambered for the 7.62×51 mm NATO cartridge, It loads exclusively from 120-round belt boxes, and can attain a fire rate of up to 1,200 rounds per minute with a muzzle velocity of 820 m/s. The MG3 does not support being fitted with optical sights or muzzle attachments, but can be zeroed up to a maximum range of 1200 m. It also features an integrated folding bipod.";
                price = 13000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 			
	    };		
            class MMG_01_hex_F {
                displayName = "Navid 9.3 mm (Hex)";
                description = "The Navid is a gas operated medium machine gun that is chambered to fire the 9.3×64mm round, It feeds from 150-round belts stored in cloth pouches, and has a variable rate of fire depending on its current fire mode that can attain anywhere from just 705 rounds per minute up to an impressive 1,500 rounds per minute (on burst fire). It has a muzzle velocity of 785 m/s, and can fit accessories onto its top, side, and underbarrel rails. Unlike the Zafir LMG used by Mediterranean CSAT forces, the muzzle also supports being mounted with attachments.";
                price = 17000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 			
	    };		
            class MMG_01_tan_F {
                displayName = "Navid 9.3 mm (Tan)";
                description = "The Navid is a gas operated medium machine gun that is chambered to fire the 9.3×64mm round, It feeds from 150-round belts stored in cloth pouches, and has a variable rate of fire depending on its current fire mode that can attain anywhere from just 705 rounds per minute up to an impressive 1,500 rounds per minute (on burst fire). It has a muzzle velocity of 785 m/s, and can fit accessories onto its top, side, and underbarrel rails. Unlike the Zafir LMG used by Mediterranean CSAT forces, the muzzle also supports being mounted with attachments.";
                price = 17000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 			
	    };
            class MMG_02_black_F {
                displayName = "SPMG .338 (Black)";
                description = "The SPMG is a gas operated, long-stroke piston operated medium machine gun that is chambered to fire the .338 Norma Magnum round, It feeds from 130-round belts stored in cloth pouches, and can achieve a fire rate of up to 500 rounds per minute, with a muzzle velocity of 807 m/s. The SPMG can be fitted with accessories on its top, side, and underbarrel rails, and can mount attachments onto its muzzle.";
                price = 17000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 			
	    };
            class MMG_02_camo_F {
                displayName = "SPMG .338 (MTP)";
                description = "The SPMG is a gas operated, long-stroke piston operated medium machine gun that is chambered to fire the .338 Norma Magnum round, It feeds from 130-round belts stored in cloth pouches, and can achieve a fire rate of up to 500 rounds per minute, with a muzzle velocity of 807 m/s. The SPMG can be fitted with accessories on its top, side, and underbarrel rails, and can mount attachments onto its muzzle.";
                price = 17000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 			
	    };
            class MMG_02_sand_F {
                displayName = "SPMG .338 (Sand)";
                description = "The SPMG is a gas operated, long-stroke piston operated medium machine gun that is chambered to fire the .338 Norma Magnum round, It feeds from 130-round belts stored in cloth pouches, and can achieve a fire rate of up to 500 rounds per minute, with a muzzle velocity of 807 m/s. The SPMG can be fitted with accessories on its top, side, and underbarrel rails, and can mount attachments onto its muzzle.";
                price = 17000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 			
	    };			
	};		
        class LMGweapons {
            displayName = "Light Machine Guns";
            kindOf = "Weapons";
			tracking = 1;
            //items of this category:
			
            class gm_lmgrpk74n_prp {
                displayName = "LMG RPK-74 5.45x39 mm";
                description = "The LMG RPK-74 is a selective-fire, gas operated light support weapon that is chambered to fire the 5.45×39 mm round, It loads from 45-round curved magazines but can also be fed with 30-round plastic magazines used by the AK-74 assault rifle. It can attain a fire rate of up to ~ 652 rounds per minute with a muzzle velocity of 945 m/s. The LMG RPK-74 does not support being fitted with suppressors or bayonets, but can mount optical scopes/night sights and utilises an integrated bipod.";
                price = 9000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_SPAR_02_blk_F {
                displayName = "SPAR-16S 5.56 mm (Black)";
                description = "The SPAR-16 is a short-stroke, gas piston-operated assault rifle with a rotating bolt that forms the baseline model of the SPAR-16 family. Along with its sub-variants, it is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a fire rate of up to 857 rounds per minute with a muzzle velocity of 800 m/s. The SPAR-16 accepts accessories on its top, side and underbarrel rails and can also be fitted with muzzle attachments.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };		
            class arifle_SPAR_02_khk_F {
                displayName = "SPAR-16S 5.56 mm (Khaki)";
                description = "The SPAR-16 is a short-stroke, gas piston-operated assault rifle with a rotating bolt that forms the baseline model of the SPAR-16 family. Along with its sub-variants, it is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a fire rate of up to 857 rounds per minute with a muzzle velocity of 800 m/s. The SPAR-16 accepts accessories on its top, side and underbarrel rails and can also be fitted with muzzle attachments.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_SPAR_02_snd_F {
                displayName = "SPAR-16S 5.56 mm (Sand)";
                description = "The SPAR-16 is a short-stroke, gas piston-operated assault rifle with a rotating bolt that forms the baseline model of the SPAR-16 family. Along with its sub-variants, it is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a fire rate of up to 857 rounds per minute with a muzzle velocity of 800 m/s. The SPAR-16 accepts accessories on its top, side and underbarrel rails and can also be fitted with muzzle attachments.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
            class LMG_03_F {
                displayName = "LIM-85 5.56 mm";
                description = "The LIM-85 is a belt fed, gas operated, selective-fire light machine gun that is chambered to fire the 5.56×45 mm NATO round, it feeds from 200-round linked belts stored in plastic boxes, and has a variable rate of fire that ranges from 400 up to 800 rounds per minute with a muzzle velocity of 915 m/s, The LIM-85 is capable of having accessories fitted to its top and side rails, and can also mount attachments onto its muzzle. It does not accept underbarrel accessories due to using an integrated grip pod.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
            class arifle_CTARS_blk_F {
                displayName = "CAR-95-1 5.8mm (Black)";
                description = "The CAR-95-1 is a modified version of the baseline CAR-95 model that is specifically designed to be a squad automatic weapon. As with its parent model, it is also chambered to fire the 5.8×42 mm round, It loads from 100-round drums as opposed to the curved magazines of its parent, and is able to attain an increased rate of fire of up to 800 rounds per minute, along with having a slightly higher muzzle velocity of 970 m/s. The CAR-95-1 is able to mount accessories onto both its top and side rails, and can also be fitted with muzzle attachments. An integrated bipod can also be used to provide stability when firing sustained bursts.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_CTARS_hex_F {
                displayName = "CAR-95-1 5.8mm (Hex)";
                description = "The CAR-95-1 is a modified version of the baseline CAR-95 model that is specifically designed to be a squad automatic weapon. As with its parent model, it is also chambered to fire the 5.8×42 mm round, It loads from 100-round drums as opposed to the curved magazines of its parent, and is able to attain an increased rate of fire of up to 800 rounds per minute, along with having a slightly higher muzzle velocity of 970 m/s. The CAR-95-1 is able to mount accessories onto both its top and side rails, and can also be fitted with muzzle attachments. An integrated bipod can also be used to provide stability when firing sustained bursts.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_CTARS_ghex_F {
                displayName = "CAR-95-1 5.8mm (Green Hex)";
                description = "The CAR-95-1 is a modified version of the baseline CAR-95 model that is specifically designed to be a squad automatic weapon. As with its parent model, it is also chambered to fire the 5.8×42 mm round, It loads from 100-round drums as opposed to the curved magazines of its parent, and is able to attain an increased rate of fire of up to 800 rounds per minute, along with having a slightly higher muzzle velocity of 970 m/s. The CAR-95-1 is able to mount accessories onto both its top and side rails, and can also be fitted with muzzle attachments. An integrated bipod can also be used to provide stability when firing sustained bursts.";
                price = 9500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
			class arifle_MX_SW_F {
                displayName = "MX SW 6.5 mm";
                description = "The MX SW is a modified variant of the baseline MX rifle that is designed specifically for suppression. Just like its parent rifle, it is also chambered to fire the same caseless 6.5×39mm NATO round, Unlike the baseline MX however, it primarily feeds from 100-round belts stored in quad stack magazines as opposed to 30-round STANAGs - though it can still optionally load the latter.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MX_SW_Black_F {
                displayName = "MX SW 6.5 mm (Black)";
                description = "The MX SW is a modified variant of the baseline MX rifle that is designed specifically for suppression. Just like its parent rifle, it is also chambered to fire the same caseless 6.5×39mm NATO round, Unlike the baseline MX however, it primarily feeds from 100-round belts stored in quad stack magazines as opposed to 30-round STANAGs - though it can still optionally load the latter.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MX_SW_khk_F {
                displayName = "MX SW 6.5 mm (Khaki)";
                description = "The MX SW is a modified variant of the baseline MX rifle that is designed specifically for suppression. Just like its parent rifle, it is also chambered to fire the same caseless 6.5×39mm NATO round, Unlike the baseline MX however, it primarily feeds from 100-round belts stored in quad stack magazines as opposed to 30-round STANAGs - though it can still optionally load the latter.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class LMG_Mk200_F {
                displayName = "Mk200 6.5 mm";
                description = "The Mk200 is a belt fed, gas operated fully-automatic light machine gun that is chambered to fire 6.5×39 mm caseless rounds, It feeds from 200-round linked belts stored in soft pouches, and can attain a fire rate of up to 800 rounds per minute, The Mk200 can accept accessories on its side, top and underbarrel rails, and can also mount attachments onto its muzzle.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class LMG_Mk200_black_F {
                displayName = "Mk200 6.5 mm (Black)";
                description = "The Mk200 is a belt fed, gas operated fully-automatic light machine gun that is chambered to fire 6.5×39 mm caseless rounds, It feeds from 200-round linked belts stored in soft pouches, and can attain a fire rate of up to 800 rounds per minute, The Mk200 can accept accessories on its side, top and underbarrel rails, and can also mount attachments onto its muzzle.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class gm_lmgrpk_prp {
                displayName = "LMG RPK 7.62x39 mm";
                description = "The LMG RPK is a selective-fire, gas operated, air-cooled light machine gun. It fires from a closed rotating bolt, and is chambered for the 7.62×39 mm cartridge, It primarily feeds from 75-round drums but can also (optionally) load 30-round curved steel magazines used by other 7.62 mm-chambered assault rifles. It can attain a fire rate of up to 600 rounds per minute with a muzzle velocity of 750.75 m/s. The LMG RPK cannot be fitted with sound suppressors, but supports optical scopes/night sights and also features an integrated bipod.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class 	gm_rpk_wud {
                displayName = "RPK 7.62x39 mm";
                description = "The RPK is simply the Polish military's variant of the original Soviet-made RPK machine gun, It shares the exact same statistics and handling, though it is generally fed with newer 7.62 mm ammunition rather than the older M43 rounds used by East German forces, There are no other differences in capability compared to the regular LMG RPK.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };		
			class arifle_RPK12_F {
                displayName = "RPK-12 7.62 mm";
                description = "Intended to complement the baseline AK-12 rifle, the RPK-12 combines a longer barrel to help fulfil the weapon's role as a light machine gun, It is intended to primarily feed from its own 75-round drums, though the RPK-12 can also load 30-round rifle magazines if needed as well. Attachments are supported on its front and side rails along with the muzzle, though its usage of an integrated bipod eschews the need for bipod accessories.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_RPK12_lush_F {
                displayName = "RPK-12 7.62 mm (Lush)";
                description = "Intended to complement the baseline AK-12 rifle, the RPK-12 combines a longer barrel to help fulfil the weapon's role as a light machine gun, It is intended to primarily feed from its own 75-round drums, though the RPK-12 can also load 30-round rifle magazines if needed as well. Attachments are supported on its front and side rails along with the muzzle, though its usage of an integrated bipod eschews the need for bipod accessories.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };	
			class arifle_RPK12_arid_F {
                displayName = "RPK-12 7.62 mm (Arid)";
                description = "Intended to complement the baseline AK-12 rifle, the RPK-12 combines a longer barrel to help fulfil the weapon's role as a light machine gun, It is intended to primarily feed from its own 75-round drums, though the RPK-12 can also load 30-round rifle magazines if needed as well. Attachments are supported on its front and side rails along with the muzzle, though its usage of an integrated bipod eschews the need for bipod accessories.";
                price = 12000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
            class LMG_Zafir_F {
                displayName = "Zafir 7.62 mm";
                description = "The Zafir is a belt fed, gas operated selective-fire light machine gun that is chambered to fire 7.62×54 mm rounds, It feeds from 150-round linked belts stored in cloth pouches, and has a rate of fire of 952 rounds per minute (depending on fire mode) with a muzzle velocity of 860 m/s, The Zafir accepts top and side rail accessories, but cannot mount any muzzle attachments. It has an integrated bipod fitted beneath the forward end of the handguard, and also uses a stabilised foregrip.";
                price = 14500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
	};		
        class SRweapons {
            displayName = "Sniper Rifles";
            kindOf = "Weapons";
			tracking = 1;
            //items of this category:
			
			class srifle_LRR_F {
                displayName = "M320 LRR .408";
                description = "The M320 LRR is a bolt-action sniper rifle that is chambered to fire the .408 Cheetah round. It loads from 7-round box magazines and can attain a fire rate of up to 50 rounds per minute, with a muzzle velocity of 910 m/s. The M320 has a single top rail that can only accept optical sights. It has an integrated bipod located just to the front of the barrel where the shroud is located. In terms of performance, the M320 completely outmatches every other sniper rifle and machine gun when it comes to both range and precision.";
                price = 15000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class srifle_LRR_camo_LRPS_F {
                displayName = "M320 LRR .408 (Camo)";
                description = "The M320 LRR is a bolt-action sniper rifle that is chambered to fire the .408 Cheetah round. It loads from 7-round box magazines and can attain a fire rate of up to 50 rounds per minute, with a muzzle velocity of 910 m/s. The M320 has a single top rail that can only accept optical sights. It has an integrated bipod located just to the front of the barrel where the shroud is located. In terms of performance, the M320 completely outmatches every other sniper rifle and machine gun when it comes to both range and precision.";
                price = 15000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class srifle_LRR_tna_F {
                displayName = "M320 LRR .408 (Tropic)";
                description = "The M320 LRR is a bolt-action sniper rifle that is chambered to fire the .408 Cheetah round. It loads from 7-round box magazines and can attain a fire rate of up to 50 rounds per minute, with a muzzle velocity of 910 m/s. The M320 has a single top rail that can only accept optical sights. It has an integrated bipod located just to the front of the barrel where the shroud is located. In terms of performance, the M320 completely outmatches every other sniper rifle and machine gun when it comes to both range and precision.";
                price = 15000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class srifle_GM6_F {
                displayName = "GM6 Lynx 12.7 mm";
                description = "The GM6 Lynx is a semi-automatic, long-recoil operated anti-materiel rifle that is chambered to fire the 12.7×108 mm round, It loads from 5-round box magazines and can attain a rate of fire of up to 150 rounds per minute, with a muzzle velocity of 820 m/s. It only has a top rail for mounting optical sights and cannot be fitted with other kinds of accessories or muzzle attachments. It also has a folding bipod fixed to the centre of the barrel, The GM6 provides the operator with the ability to provide both rapid and accurate sniper fire from ranges of 1,600 up to a maximum of 2,000 metres.";
                price = 15000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class srifle_GM6_camo_F {
                displayName = "GM6 Lynx 12.7 mm (Camo)";
                description = "The GM6 Lynx is a semi-automatic, long-recoil operated anti-materiel rifle that is chambered to fire the 12.7×108 mm round, It loads from 5-round box magazines and can attain a rate of fire of up to 150 rounds per minute, with a muzzle velocity of 820 m/s. It only has a top rail for mounting optical sights and cannot be fitted with other kinds of accessories or muzzle attachments. It also has a folding bipod fixed to the centre of the barrel, The GM6 provides the operator with the ability to provide both rapid and accurate sniper fire from ranges of 1,600 up to a maximum of 2,000 metres.";
                price = 15000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class srifle_GM6_ghex_F {
                displayName = "GM6 Lynx 12.7 mm (Green Hex)";
                description = "The GM6 Lynx is a semi-automatic, long-recoil operated anti-materiel rifle that is chambered to fire the 12.7×108 mm round, It loads from 5-round box magazines and can attain a rate of fire of up to 150 rounds per minute, with a muzzle velocity of 820 m/s. It only has a top rail for mounting optical sights and cannot be fitted with other kinds of accessories or muzzle attachments. It also has a folding bipod fixed to the centre of the barrel, The GM6 provides the operator with the ability to provide both rapid and accurate sniper fire from ranges of 1,600 up to a maximum of 2,000 metres.";
                price = 15000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
};
        class Lweapons {
            displayName = "Missile and Rocket Launchers";
            kindOf = "Weapons";
			tracking = 1;
            //items of this category:			
	
			class gm_p2a1_launcher_blk {
                displayName = "P2A1 Experimental";
                description = "26.5cm Potato Cannon.";
                price = 0;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
		    class gm_rpg7_wud {
                displayName = "RPG-7 Rocket Launcher 40 mm";
                description = "The RPG-7 is an unguided, shoulder-fired, anti-tank launcher, It exclusively loads 40 mm grenades fitted with high-explosive anti-tank (HEAT) warheads. The RPG-7 can be fitted with the PGO-7V scope, but features an adjustable (non-magnified) ironsight which can be zeroed up to a maximum of 400 m and rises in 100 m increments.";
                price = 4800;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };		
		    class gm_rpg7_prp {
                displayName = "RPG-7 Rocket Launcher 40 mm (Plum)";
                description = "The RPG-7 is an unguided, shoulder-fired, anti-tank launcher, It exclusively loads 40 mm grenades fitted with high-explosive anti-tank (HEAT) warheads. The RPG-7 can be fitted with the PGO-7V scope, but features an adjustable (non-magnified) ironsight which can be zeroed up to a maximum of 400 m and rises in 100 m increments.";
                price = 4800;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
		    class launch_RPG7_F {
                displayName = "RPG-7 Rocket Launcher 40 mm";
                description = "The RPG-7V is a portable, reusable, unguided, shoulder-launched, anti-tank, rocket-propelled grenade launcher, It is capable of being loaded with two types of grenade rounds: the regular PG-7V and the larger PG-7VR. Both have the same effective ranges; only the PG-7VR has a higher damage output difference. It cannot be fitted with optics and only relies on a traditional ironsight.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
		    class gm_pzf44_2_oli {
                displayName = "PzF44-2 Rocket Launcher 44x537mm";
                description = "The PzF 44-2 is an unguided, shoulder-fired anti-tank launcher, It is designed to load 44 mm grenades fitted with high-explosive anti-tank (HEAT) warheads. The launcher does not feature an integrated optic and the ironsight cannot be zeroed, but it can be fitted with the Fero Z 2x17 sight.";
                price = 5500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
		    class gm_pzf44_2_des {
                displayName = "PzF44-2 Rocket Launcher 44x537mm (Tan)";
                description = "The PzF 44-2 is an unguided, shoulder-fired anti-tank launcher, It is designed to load 44 mm grenades fitted with high-explosive anti-tank (HEAT) warheads. The launcher does not feature an integrated optic and the ironsight cannot be zeroed, but it can be fitted with the Fero Z 2x17 sight.";
                price = 5500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
		    class gm_pzf44_2_win {
                displayName = "PzF44-2 Rocket Launcher 44x537mm (Winter)";
                description = "The PzF 44-2 is an unguided, shoulder-fired anti-tank launcher, It is designed to load 44 mm grenades fitted with high-explosive anti-tank (HEAT) warheads. The launcher does not feature an integrated optic and the ironsight cannot be zeroed, but it can be fitted with the Fero Z 2x17 sight.";
                price = 5500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };		
		    class gm_9k32m_oli {
                displayName = "9K32M Strela-2 70mm";
                description = "The 9K32M Strela-2 is a fire-and-forget, infrared-guided surface-to-air missile launcher, It fires 70mm missiles fitted with high-explosive (HE) warheads. The launcher features a simple ironsight for aiming and has a maximum lock-on range of 4,500 metres.";
                price = 6500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class gm_fim43_oli {
                displayName = "FIM-43 Redeye 70";
                description = "The FIM-43 Redeye is a fire-and-forget, infrared-guided surface-to-air missile launcher, It launches 70 mm missiles fitted with high-explosive (HE) warheads. The sight unit provides a 1.5x magnified view and the launcher itself has a maximum lock-on range of 4,500 metres.";
                price = 6500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            }		
			class gm_pzf84_oli {
                displayName = "PzF84 84 mm";
                description = "The PzF 84 is a multi-purpose, unguided shoulder-fired recoilless rifle, It is capable of loading 84 mm rounds that can be fitted with high-explosive anti-tank (HEAT) or harmless illumination warheads. The launcher does not feature an integrated optic but has an ironsight (that cannot be zeroed). It can however, be fitted with the Fero Z 2x17 scope in lieu of the launcher's ironsight.";
                price = 7800;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            }
			class gm_pzf84_des {
                displayName = "PzF84 84 mm (Tan)";
                description = "The PzF 84 is a multi-purpose, unguided shoulder-fired recoilless rifle, It is capable of loading 84 mm rounds that can be fitted with high-explosive anti-tank (HEAT) or harmless illumination warheads. The launcher does not feature an integrated optic but has an ironsight (that cannot be zeroed). It can however, be fitted with the Fero Z 2x17 scope in lieu of the launcher's ironsight.";
                price = 7800;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            }
			class gm_pzf84_win {
                displayName = "PzF84 84 mm (Winter)";
                description = "The PzF 84 is a multi-purpose, unguided shoulder-fired recoilless rifle, It is capable of loading 84 mm rounds that can be fitted with high-explosive anti-tank (HEAT) or harmless illumination warheads. The launcher does not feature an integrated optic but has an ironsight (that cannot be zeroed). It can however, be fitted with the Fero Z 2x17 scope in lieu of the launcher's ironsight.";
                price = 7800;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            }		
			class launch_MRAWS_green_F {
                displayName = "MAAWS Mk4 Mod 1 (Green) 84 mm";
                description = "The Carl Gustav is a portable, anti-tank recoilless rifle. It is designed to launch unguided 84 mm rockets, It can only load rockets fitted with high-explosive anti-tank (HEAT) warheads, and has a maximum effective range of approximately 600 metres. The Carl Gustav is fitted with an optical sight that has a magnification strength of 1.5x.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            }		
			class launch_MRAWS_sand_F {
                displayName = "MAAWS Mk4 Mod 1 (Sand) 84 mm";
                description = "The Carl Gustav is a portable, anti-tank recoilless rifle. It is designed to launch unguided 84 mm rockets, It can only load rockets fitted with high-explosive anti-tank (HEAT) warheads, and has a maximum effective range of approximately 600 metres. The Carl Gustav is fitted with an optical sight that has a magnification strength of 1.5x.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            }
			class launch_MRAWS_olive_F {
                displayName = "MAAWS Mk4 Mod 1 (Olive) 84 mm";
                description = "The Carl Gustav is a portable, anti-tank recoilless rifle. It is designed to launch unguided 84 mm rockets, It can only load rockets fitted with high-explosive anti-tank (HEAT) warheads, and has a maximum effective range of approximately 600 metres. The Carl Gustav is fitted with an optical sight that has a magnification strength of 1.5x.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            }			
			class launch_RPG32_F {
                displayName = "RPG-42 Alamut 105 mm / 72 mm";
                description = "The RPG-42 is a portable, recoilless, unguided, shoulder-launched, rocket-propelled grenade launcher, It can be loaded with either 105 mm PG-42V high-explosive anti-tank (HEAT) or 72 mm TBG-42V high-explosive (HE) grenades; with the former designed for use in taking out light/medium armour vehicles and the latter for large groups of infantry.";
                price = 10000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class launch_RPG32_ghex_F {
                displayName = "RPG-42 Alamut (Green Hex) 105 mm / 72 mm";
                description = "The RPG-42 is a portable, recoilless, unguided, shoulder-launched, rocket-propelled grenade launcher, It can be loaded with either 105 mm PG-42V high-explosive anti-tank (HEAT) or 72 mm TBG-42V high-explosive (HE) grenades; with the former designed for use in taking out light/medium armour vehicles and the latter for large groups of infantry.";
                price = 10000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_RPG32_green_F {
                displayName = "RPG-42 (Green) 105 mm / 72 mm";
                description = "The RPG-42 is a portable, recoilless, unguided, shoulder-launched, rocket-propelled grenade launcher, It can be loaded with either 105 mm PG-42V high-explosive anti-tank (HEAT) or 72 mm TBG-42V high-explosive (HE) grenades; with the former designed for use in taking out light/medium armour vehicles and the latter for large groups of infantry.";
                price = 10000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_RPG32_camo_F {
                displayName = "RPG-42 (Camo) 105 mm / 72 mm";
                description = "The RPG-42 is a portable, recoilless, unguided, shoulder-launched, rocket-propelled grenade launcher, It can be loaded with either 105 mm PG-42V high-explosive anti-tank (HEAT) or 72 mm TBG-42V high-explosive (HE) grenades; with the former designed for use in taking out light/medium armour vehicles and the latter for large groups of infantry.";
                price = 10000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class launch_O_Vorona_green_F {
                displayName = "9M135 Vorona (Green)";
                description = "The 9M135 Vorona is a wire-guided, shoulder-launched anti-tank missile launcher, It is designed to be able to load missiles fitted with either high-explosive anti-tank (HEAT) or high-explosive (HE) warheads. The launcher itself uses an optical scope that has a magnification strength of 2x, a built-in laser rangefinder, and is able to switch between using normal day and orange/red-hot thermal vision modes.";
                price = 15000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_O_Vorona_brown_F {
                displayName = "9M135 Vorona (Brown) 130 mm";
                description = "The 9M135 Vorona is a wire-guided, shoulder-launched anti-tank missile launcher, It is designed to be able to load missiles fitted with either high-explosive anti-tank (HEAT) or high-explosive (HE) warheads. The launcher itself uses an optical scope that has a magnification strength of 2x, a built-in laser rangefinder, and is able to switch between using normal day and orange/red-hot thermal vision modes.";
                price = 15000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_NLAW_F {
                displayName = "PCML Rocket Launcher 150 mm";
                description = "The PCML is a portable short-range, fire-and-forget, guided missile launcher. NLAW uses Predicted Line Of Sight guidance, It can only load missiles with 150 mm high-explosive anti-tank (HEAT) tandem charge warheads, which are capable of striking targets at distances of between 600 and up to 800 metres away. The launcher comes with an integrated night vision-capable sight that has a magnification strength of 2x, and an integrated laser rangefinder. It is able to toggle between using the standard direct-fire and an overfly top-attack (OTA) mode.";
                price = 20000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class ACE_launch_NLAW_Used_F {
                displayName = "ACE PCML Rocket Launcher 150 mm";
                description = "The PCML is a portable short-range, fire-and-forget, guided missile launcher. NLAW uses Predicted Line Of Sight guidance, It can only load missiles with 150 mm high-explosive anti-tank (HEAT) tandem charge warheads, which are capable of striking targets at distances of between 600 and up to 800 metres away. The launcher comes with an integrated night vision-capable sight that has a magnification strength of 2x, and an integrated laser rangefinder. It is able to toggle between using the standard direct-fire and an overfly top-attack (OTA) mode.";
                price = 25000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };		
			class launch_Titan_F {
                displayName = "Titan MPRL 127 mm";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 25000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_B_Titan_F {
                displayName = "Titan MPRL 127 mm";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 25000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_I_Titan_F {
                displayName = "Titan MPRL 127 mm";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 25000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_O_Titan_F {
                displayName = "Titan MPRL 127 mm";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 25000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_B_Titan_tna_F {
                displayName = "Titan MPRL (Tropic) 127 mm";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 25000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_O_Titan_ghex_F {
                displayName = "Titan MPRL (Green Hex) 127 mm";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 25000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_I_Titan_eaf_F {
                displayName = "Titan MPRL (Geometric) 127 mm";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 25000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_B_Titan_olive_F {
                displayName = "Titan MPRL (Olive) 127 mm";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 25000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class launch_Titan_short_F {
                displayName = "Titan MPRL Compact 127 mm";
                description = "The Titan MPRL Compact is a portable long-range, fire-and-forget, guided missile launcher. It can be loaded with either 127 mm high-explosive anti-tank (HEAT) or antipersonnel (AP) warheads that are capable of striking targets at distances of up to 2,000 metres away. True to its name, the Titan's ability to load and fire AT/AP missiles is what makes it a unique multi-role weapon.";
                price = 25000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_B_Titan_short_F {
                displayName = "Titan MPRL Compact (Sand) 127 mm";
                description = "The Titan MPRL Compact is a portable long-range, fire-and-forget, guided missile launcher. It can be loaded with either 127 mm high-explosive anti-tank (HEAT) or antipersonnel (AP) warheads that are capable of striking targets at distances of up to 2,000 metres away. True to its name, the Titan's ability to load and fire AT/AP missiles is what makes it a unique multi-role weapon.";
                price = 25000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_I_Titan_short_F {
                displayName = "Titan MPRL Compact (Olive) 127 mm";
                description = "The Titan MPRL Compact is a portable long-range, fire-and-forget, guided missile launcher. It can be loaded with either 127 mm high-explosive anti-tank (HEAT) or antipersonnel (AP) warheads that are capable of striking targets at distances of up to 2,000 metres away. True to its name, the Titan's ability to load and fire AT/AP missiles is what makes it a unique multi-role weapon.";
                price = 25000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_O_Titan_short_F {
                displayName = "Titan MPRL Compact (Coyote) 127 mm";
                description = "The Titan MPRL Compact is a portable long-range, fire-and-forget, guided missile launcher. It can be loaded with either 127 mm high-explosive anti-tank (HEAT) or antipersonnel (AP) warheads that are capable of striking targets at distances of up to 2,000 metres away. True to its name, the Titan's ability to load and fire AT/AP missiles is what makes it a unique multi-role weapon.";
                price = 25000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_B_Titan_short_tna_F {
                displayName = "Titan MPRL Compact (Tropic) 127 mm";
                description = "The Titan MPRL Compact is a portable long-range, fire-and-forget, guided missile launcher. It can be loaded with either 127 mm high-explosive anti-tank (HEAT) or antipersonnel (AP) warheads that are capable of striking targets at distances of up to 2,000 metres away. True to its name, the Titan's ability to load and fire AT/AP missiles is what makes it a unique multi-role weapon.";
                price = 25000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_O_Titan_short_ghex_F {
                displayName = "Titan MPRL Compact (Green Hex) 127 mm";
                description = "The Titan MPRL Compact is a portable long-range, fire-and-forget, guided missile launcher. It can be loaded with either 127 mm high-explosive anti-tank (HEAT) or antipersonnel (AP) warheads that are capable of striking targets at distances of up to 2,000 metres away. True to its name, the Titan's ability to load and fire AT/AP missiles is what makes it a unique multi-role weapon.";
                price = 25000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
        };
        class ammo {
            displayName = "Ammunition";
            kindOf = "Items";
			tracking = 1;

			class gm_1Rnd_265mm_flare_single_wht_gc {
                displayName = "26.5 mm Flare (White)";
                description = "Caliber: 26.5 mm flare (White) Rounds : 1 Used in: LP1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_flare_single_grn_gc {
                displayName = "26.5 mm Flare (Green)";
                description = "Caliber: 26.5 mm flare (Green) Rounds : 1 Used in: LP1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_flare_single_red_gc {
                displayName = "26.5 mm Flare (Red)";
                description = "Caliber: 26.5 mm flare (Red) Rounds : 1 Used in: LP1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_flare_multi_red_gc {
                displayName = "26.5 mm Flare (Multi Red)";
                description = "Caliber: 26.5 mm flare (Multi Red) Rounds : 3 Used in: LP1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_flare_para_yel_DM16 {
                displayName = "26.5 mm Flare DM16 (Yellow)";
                description = "Caliber: 26.5 mm flare (Yellow) Rounds : 1 Used in: P2A1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_flare_single_wht_DM15 {
                displayName = "26.5 mm Flare DM15 (White)";
                description = "Caliber: 26.5 mm flare (White) Rounds : 1 Used in: P2A1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_flare_single_red_DM13 {
                displayName = "26.5 mm Flare DM13 (Red)";
                description = "Caliber: 26.5 mm flare (Red) Rounds : 1 Used in: P2A1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_flare_single_grn_DM11 {
                displayName = "26.5 mm Flare DM11 (Green)";
                description = "Caliber: 26.5 mm flare (Green) Rounds : 1 Used in: P2A1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_flare_single_yel_DM10 {
                displayName = "26.5 mm Flare DM10 (Yellow)";
                description = "Caliber: 26.5 mm flare (Yellow) Rounds : 1 Used in: P2A1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_flare_multi_wht_DM25 {
                displayName = "26.5 mm Flare DM25 (Multi White)";
                description = "Caliber: 26.5 mm flare (Multi White) Rounds : 4 Used in: P2A1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_flare_multi_red_DM23 {
                displayName = "26.5 mm Flare DM23 (Multi Red)";
                description = "Caliber: 26.5 mm flare (Multi Red) Rounds : 4 Used in: P2A1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_flare_multi_grn_DM21 {
                displayName = "26.5 mm Flare DM21 (Multi Green)";
                description = "Caliber: 26.5 mm flare (Multi Green) Rounds : 4 Used in: P2A1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_flare_multi_yel_DM20 {
                displayName = "26.5 mm Flare DM20 (Multi Yellow)";
                description = "Caliber: 26.5 mm flare (Multi Yellow) Rounds : 4 Used in: P2A1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_flare_multi_nbc_DM47 {
                displayName = "26.5 mm Flare DM47 (NBC)";
                description = "Caliber: 26.5 mm flare (NBC) Rounds : 3 Used in: P2A1";
                price = 0;
                stock = 10000;                
            };		
			class 6Rnd_GreenSignal_F {
                displayName = "6Rnd Signal Cylinder (Green)";
                description = "Caliber: 10 mm signal flare slugs (Green) Rounds : 6 Used in: Starter Pistol";
                price = 0;
                stock = 10000;                
            };		
			class 6Rnd_RedSignal_F {
                displayName = "	6Rnd Signal Cylinder (Red)";
                description = "Caliber: 10 mm signal flare slugs (Red) Rounds : 6 Used in: Starter Pistol";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_84x245mm_ILLUM_DM16_carlgustaf {
                displayName = "84 mm Illum DM16";
                description = "Caliber: 84x245 mm flare DM16 rocket. Uses a illumination flare round., Used in: Pzf84";
                price = 0;
                stock = 10000;                
            };
			class gm_8Rnd_9x19mm_B_DM11_p1_blk {
                displayName = "9 mm 8Rnd Ball DM11 Mag";
                description = "Caliber: 9x19 mm Ball DM11 Rounds: 8 Used in: P1";
                price = 12;
                stock = 10000;                
            };
			class gm_8Rnd_9x19mm_B_DM51_p1_blk {
                displayName = "9 mm 8Rnd Ball DM51 Mag";
                description = "Caliber: 9x19 mm Ball DM51 Rounds: 8 Used in: P1";
                price = 12;
                stock = 10000;                
            };
			class gm_8Rnd_9x18mm_B_pst_pm_blk {
                displayName = "9 mm 8Rnd Ball PST Mag";
                description = "Caliber: 9x18 mm Ball PST Rounds: 8 Used in: PM";
                price = 12;
                stock = 10000;                
            };		
			class 10Rnd_9x21_Mag {
                displayName = "9 mm 10Rnd Mag";
                description = "Caliber: 9x21 mm Rounds: 10 Used in: PM 9 mm";
                price = 0;
                stock = 10000;                
            };
			class gm_15Rnd_9x18mm_b_pst_pm63_blk {
                displayName = "9 mm 15Rnd Ball PST Mag";
                description = "Caliber: 9x18 mm Ball PST Rounds: 15 Used in: PM-63";
                price = 20;
                stock = 10000;                
            };
			class gm_25Rnd_9x18mm_b_pst_pm63_blk {
                displayName = "9 mm 25Rnd Ball PST Mag";
                description = "Caliber: 9x18 mm Ball PST Rounds: 25 Used in: PM-63";
                price = 33;
                stock = 10000;                
            };		
			class 16Rnd_9x21_red_Mag {
                displayName = "9 mm 16Rnd Reload Tracer (Red) Mag";
                description = "Caliber: 9x21 mm Tracers (Red) Rounds: 16 Used in: PDW2000, P07, ROOK-40";
                price = 20;
                stock = 10000;                
            };
			class gm_30Rnd_9x19mm_b_DM51_mp5_blk {
                displayName = "9 mm 30Rnd Ball DM 51 Mag";
                description = "Caliber: 9x19 mm Ball DM51 Rounds: 30 Used in: SG5";
                price = 40;
                stock = 10000;                
            };
			class gm_30Rnd_9x19mm_b_DM11_mp5_blk {
                displayName = "9 mm 30Rnd Ball DM 11 Mag";
                description = "Caliber: 9x19 mm Ball DM11 Rounds: 30 Used in: SG5";
                price = 40;
                stock = 10000;                
            };
			class gm_30Rnd_9x19mm_b_DM51_mp5a3_blk {
                displayName = "9 mm 30Rnd Ball DM 51 Mag";
                description = "Caliber: 9x19 mm Ball DM51 Rounds: 30 Used in: SG5";
                price = 40;
                stock = 10000;                
            };
			class gm_30Rnd_9x19mm_b_DM11_mp5a3_blk {
                displayName = "9 mm 30Rnd Ball DM 11 Mag";
                description = "Caliber: 9x19 mm Ball DM11 Rounds: 30 Used in: SG5";
                price = 40;
                stock = 10000;                
            };		
			class 30Rnd_9x21_Red_Mag {
                displayName = "9 mm 30Rnd Reload Tracer (Red) Mag";
                description = "Caliber: 9x21 mm Tracers (Red) Rounds: 30 Used in: PDW2000, P07, Rook-40.";
                price = 40;
                stock = 10000;                
            };
			class 30Rnd_9x21_Mag_SMG_02_Tracer_Red {
                displayName = "9 mm 30Rnd Reload Tracer (Red) Mag";
                description = "Caliber: 9x21 mm Tracers (Red) Rounds: 30 Used in: Sting, Protector.";
                price = 0;
                stock = 10000;                
            };
			class gm_32Rnd_9x19mm_B_DM51_mp2_blk {
                displayName = "	9 mm 32Rnd Ball DM51 Mag";
                description = "Caliber: 9x19 mm Ball DM51 Rounds: 32 Used in: MP2.";
                price = 44;
                stock = 10000;                
            };
			class gm_32Rnd_9x19mm_B_DM11_mp2_blk {
                displayName = "	9 mm 32Rnd Ball DM11 Mag";
                description = "Caliber: 9x19 mm Ball DM11 Rounds: 32 Used in: MP2.";
                price = 44;
                stock = 10000;                
            };		
			class 6Rnd_45ACP_Cylinder {
                displayName = ".45 ACP 6Rnd Cylinder";
                description = "Caliber: .45 ACP Rounds: 6 Used in: Zubr.";
                price = 15;
                stock = 10000;                
            };			
			class 9Rnd_45ACP_Mag {
                displayName = ".45 ACP 9 Rounnd Magazine";
                description = "Caliber: .45 ACP Rounds: 9 Used in: ACP-C2.";
                price = 20;
                stock = 10000;                
            };
			class 11Rnd_45ACP_Mag {
                displayName = ".45 ACP 11Rnd Mag";
                description = "Caliber: .45 ACP Rounds: 11 Used in: 4-five.";
                price = 25;
                stock = 10000;                
            };
			class 30Rnd_45ACP_Mag_SMG_01 {
                displayName = ".45 ACP 30Rnd Vermin Mag";
                description = "Caliber: .45 ACP Rounds: 30 Used in: Vermin SMG.";
                price = 65;
                stock = 10000;                
            };
			class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red {
                displayName = ".45 ACP 30Rnd Vermin Tracers (Red) Mag";
                description = "Caliber: .45 ACP Tracers (Red) Rounds: 30 Used in: Vermin SMG.";
                price = 65;
                stock = 10000;                
            };
			class 6Rnd_12Gauge_Slug {
                displayName = "12 Gauge 6Rnd Slug";
                description = "12 Gauge 6Rnd Slug Rounds: 6 Used in: Promet GL.";
                price = 40;
                stock = 10000;                
            };
			class 10Rnd_50BW_Mag_F {
                displayName = ".50 BW 10Rnd Caseless Mag";
                description = "Caliber: .50 BW - Caseless Rounds: 10 Used in: Type 115.";
                price = 150;
                stock = 10000; 
            };
			class gm_30Rnd_545x39mm_B_7N6_ak74_prp {
                displayName = "5.45 mm 30Rnd Ball 7N6 Mag";
                description = "Caliber: 5.45x39 mm Ball 7N6 Rounds: 30 Used in: AK-74.";
                price = 150;
                stock = 10000;                
            };
			class gm_30Rnd_545x39mm_B_T_7T3_ak74_prp {
                displayName = "5.45 mm 30Rnd Ball-T 7T3 Mag";
                description = "Caliber: 5.45x39 mm Ball-T 7T3 Rounds: 30 Used in: AK-74.";
                price = 150;
                stock = 10000;                
            };
			class gm_30Rnd_545x39mm_B_7N6_ak74_org {
                displayName = "5.45 mm 30Rnd Ball 7N6 Mag";
                description = "Caliber: 5.45x39 mm Ball 7N6 Rounds: 30 Used in: AK-74.";
                price = 150;
                stock = 10000;                
            };
			class gm_30Rnd_545x39mm_B_T_7T3_ak74_org {
                displayName = "5.45 mm 30Rnd Ball-T 7T3 Mag";
                description = "Caliber: 5.45x39 mm Ball-T 7T3 Rounds: 30 Used in: AK-74.";
                price = 150;
                stock = 10000;                
            };
			class gm_45Rnd_545x39mm_B_7N6_ak74_prp {
                displayName = "5.45 mm 45Rnd Ball 7N6 Mag";
                description = "Caliber: 5.45x39 mm Ball 7N6 Rounds: 45 Used in: AK-74.";
                price = 225;
                stock = 10000;                
            };
			class gm_45Rnd_545x39mm_B_T_7T3_ak74_prp {
                displayName = "5.45 mm 45Rnd Ball-T 7T3 Mag";
                description = "Caliber: 5.45x39 mm Ball-T 7T3 Rounds: 45 Used in: AK-74.";
                price = 225;
                stock = 10000;                
            };
			class gm_45Rnd_545x39mm_B_7N6_ak74_org {
                displayName = "5.45 mm 45Rnd Ball 7N6 Mag";
                description = "Caliber: 5.45x39 mm Ball 7N6 Rounds: 45 Used in: AK-74.";
                price = 225;
                stock = 10000;                
            };
			class gm_45Rnd_545x39mm_B_T_7T3_ak74_org {
                displayName = "5.45 mm 45Rnd Ball-T 7T3 Mag";
                description = "Caliber: 5.45x39 mm Ball-T 7T3 Rounds: 45 Used in: AK-74.";
                price = 225;
                stock = 10000;                
            };				
			class 50Rnd_570x28_SMG_03 {
                displayName = "5.7 mm 50Rnd ADR-97 Mag";
                description = "Caliber: 5.7x28 mm Rounds: 50 Used in: ADR-97, ADR-97C, ADR-97C TR.";
                price = 80;
                stock = 10000;                
            };			
			class gm_20Rnd_556x45mm_b_M855_stanag_gry {
                displayName = "5.56 mm 20Rnd Ball M855 Mag";
                description = "Caliber: 5.56x45 mm Ball M855 Rounds: 20 Used in: M16, C7.";
                price = 65;
                stock = 10000;                
            };
			class gm_20Rnd_556x45mm_b_t_M856_stanag_gry {
                displayName = "5.56 mm 20Rnd Ball-T M856 Mag";
                description = "Caliber: 5.56x45 mm Ball-T M856 Rounds: 20 Used in: M16, C7.";
                price = 65;
                stock = 10000;                
            };		
			class 20Rnd_556x45_UW_mag {
                displayName = "SDAR 5.56 mm 20Rnd Dual Purpose Mag";
                description = "Caliber: 5.56x45 mm Dual Purpose (under water) Rounds: 20 Used in: SDAR.";
                price = 65;
                stock = 10000;                
            };
			class gm_30Rnd_556x45mm_b_M855_stanag_gry {
                displayName = "5.56 mm 30Rnd Ball M855 Mag";
                description = "Caliber: 5.56x45 mm Ball M855 Rounds: 30 Used in: M16, C7.";
                price = 100;
                stock = 10000; 
            };
			class gm_30Rnd_556x45mm_b_t_M856_stanag_gry {
                displayName = "5.56 mm 30Rnd Ball-T M856 Mag";
                description = "Caliber: 5.56x45 mm Ball-T M856 Rounds: 30 Used in: M16, C7.";
                price = 100;
                stock = 10000; 
            };		
			class 30Rnd_556x45_Stanag_Tracer_Red {
                displayName = "5.56 mm 30rnd Tracer (Red) Mag";
                description = "Caliber: 5.56x45 mm STANAG Tracers (Red) Rounds: 30 Used in: TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16/S.";
                price = 100;
                stock = 10000; 
            };
			class 150Rnd_556x45_Drum_Mag_Tracer_F {
                displayName = "5.56 mm 150Rnd Tracer (Red) Mag";
                description = "Caliber: 5.56x45 mm Tracers (Red) Rounds: 150 Used in: SPAR-16/S.";
                price = 500;
                stock = 10000; 
            };			
			class 200Rnd_556x45_Box_Tracer_Red_F {
                displayName = "5.56 mm 200Rnd Tracer (Red) Box";
                description = "Caliber: 5.56x45 mm Tracers (Red) Rounds: 200 Used in: LIM-85.";
                price = 700;
                stock = 10000; 
            };
			class 30Rnd_580x42_Mag_Tracer_F {
                displayName = "5.8 mm 30Rnd Tracer (Green) Green Hex Mag";
                description = "Caliber: 5.8x42 mm Tracers (Green) Rounds: 30 Used in: CAR-95, CAR-95-1, CAR-95 GL.";
                price = 175;
                stock = 10000; 
            };			
			class 100Rnd_580x42_ghex_Mag_Tracer_F {
                displayName = "5.8 mm 100Rnd Tracer (Green) Green Hex Mag";
                description = "Caliber: 5.8x42 mm Tracers (Green) Rounds: 100 Used in: CAR-95, CAR-95-1, CAR-95 GL.";
                price = 550;
                stock = 10000; 
            };
			class 30Rnd_65x39_caseless_green_mag_Tracer {
                displayName = "6.5 mm 30Rnd Tracer Caseless Mag (Green)";
                description = "Caliber: 6.5x39 mm Tracer (Green) - Caseless Rounds: 30 Used in: Katiba, Type 115.";
                price = 150;
                stock = 10000; 
            };			
			class 30Rnd_65x39_caseless_black_mag_Tracer {
                displayName = "6.5 mm 30Rnd Tracer Black Mag (Red)";
                description = "Caliber: 6.5x39 mm STANAG Tracers (Red) Rounds: 30 Used in: MX/C/M/SW/3GL.";
                price = 150;
                stock = 10000;                
            };
			class 30Rnd_65x39_caseless_mag_Tracer {
                displayName = "6.5 mm 30Rnd Tracer Sand Mag (Red)";
                description = "Caliber: 6.5x39 mm STANAG Tracers (Red) Rounds: 30 Used in: MX/C/M/SW/3GL.";
                price = 150;
                stock = 10000;                
            };
			class 30Rnd_65x39_caseless_khaki_mag_Tracer {
                displayName = "6.5 mm 30Rnd Tracer Khaki Mag (Red)";
                description = "Caliber: 6.5x39 mm STANAG Tracers (Red) Rounds: 30 Used in: MX/C/M/SW/3GL.";
                price = 150;
                stock = 10000;                
            };			
			class 100Rnd_65x39_caseless_black_mag_tracer {
                displayName = "6.5 mm 100Rnd Tracer Black Mag (Red)";
                description = "Caliber: 6.5x39 mm Caseless Tracers (Red) Rounds: 100 Used in: MX/C/M/SW/3GL.";
                price = 500;
                stock = 10000;                
            };
			class 100Rnd_65x39_caseless_mag_Tracer {
                displayName = "6.5 mm 100Rnd Tracer Sand Mag (Red)";
                description = "Caliber: 6.5x39 mm Caseless Tracers (Red) Rounds: 100 Used in: MX/C/M/SW/3GL.";
                price = 500;
                stock = 10000;                
            };
			class 100Rnd_65x39_caseless_khaki_mag_tracer {
                displayName = "6.5 mm 100Rnd Tracer Khaki Mag (Red)";
                description = "Caliber: 6.5x39 mm Caseless Tracers (Red) Rounds: 100 Used in: MX/C/M/SW/3GL.";
                price = 500;
                stock = 10000;                
            };			
			class 200Rnd_65x39_cased_Box {
                displayName = "200 Round 6.5x39 mm cased box";
                description = "Caliber: 6.5x39 mm Rounds: 200 Used in: Mk200.";
                price = 1000;
                stock = 10000;                
            };
			class 200Rnd_65x39_cased_Box_Red {
                displayName = "200 Round 6.5x39 mm Tracer cased box (Red)";
                description = "Caliber: 6.5x39 mm Tracers (Red) Rounds: 200 Used in: Mk200.";
                price = 1000;
                stock = 10000;                
            };
			class gm_10Rnd_762x54mmR_ap_7n1_svd_blk {
                displayName = "7.62 mm 10Rnd AP 7N1 Mag";
                description = "Caliber: 7.62x54 mmR AP 7N1 Rounds: 10 Used in: SVD.";
                price = 70;
                stock = 10000;                				
            };
			class gm_10Rnd_762x54mmR_api_7bz3_svd_blk {
                displayName = "7.62 mm 10Rnd AP 7BZ3 Mag";
                description = "Caliber: 7.62x54 mmR AP 7BZ3 Rounds: 10 Used in: SVD.";
                price = 70;
                stock = 10000;                				
            };
			class gm_10Rnd_762x54mmR_b_t_7t2_svd_blk {
                displayName = "7.62 mm 10Rnd AP 7T2 Mag;";
                description = "Caliber: 7.62x54 mmR AP 7T2 Rounds: 10 Used in: SVD.";
                price = 70;
                stock = 10000;                				
            };		
			class 10Rnd_Mk14_762x51_Mag {
                displayName = "7.62 mm 10rnd Mk14 Mag (Classic)";
                description = "Caliber: 7.62x51 mm Rounds: 10 Used in: Mk18 ABR, Mk-I EMR, Mk14, SPAR-17.";
                price = 70;
                stock = 10000;                				
            };
			class gm_20Rnd_762x51mm_B_T_DM21_g3_blk {
                displayName = "7.62 mm 20Rnd Ball-T DM21 Mag";
                description = "Caliber: 7.62x51 mm Ball-T DM21 Rounds: 20 Used in: G3, G8.";
                price = 140;
                stock = 10000;                				
            };
			class gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk {
                displayName = "7.62 mm 20Rnd Ball-T DM21A1 Mag";
                description = "Caliber: 7.62x51 mm Ball-T DM21A1 Rounds: 20 Used in: G3, G8.";
                price = 140;
                stock = 10000;                				
            };
			class gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk {
                displayName = "7.62 mm 20Rnd Ball-T DM21A2 Mag";
                description = "Caliber: 7.62x51 mm Ball-T DM21A2 Rounds: 20 Used in: G3, G8.";
                price = 140;
                stock = 10000;                				
            };
			class gm_20Rnd_762x51mm_B_DM111_g3_blk {
                displayName = "7.62 mm 20Rnd Ball DM111 Mag";
                description = "Caliber: 7.62x51 mm Ball DM111 Rounds: 20 Used in: G3, G8.";
                price = 140;
                stock = 10000;                				
            };
			class gm_20Rnd_762x51mm_B_DM41_g3_blk {
                displayName = "7.62 mm 20Rnd Ball DM41 Mag";
                description = "Caliber: 7.62x51 mm Ball DM41 Rounds: 20 Used in: G3, G8.";
                price = 140;
                stock = 10000;                				
            };
			class gm_20Rnd_762x51mm_AP_DM151_g3_blk {
                displayName = "7.62 mm 20Rnd AP DM151 Mag";
                description = "Caliber: 7.62x51 mm AP DM151 Rounds: 20 Used in: G3, G8.";
                price = 140;
                stock = 10000;                				
            };
			class gm_20Rnd_762x51mm_B_T_DM21_g3_des {
                displayName = "7.62 mm 20Rnd Ball-T DM21 Mag";
                description = "Caliber: 7.62x51 mm Ball-T DM21 Rounds: 20 Used in: G3, G8.";
                price = 140;
                stock = 10000;                				
            };
			class gm_20Rnd_762x51mm_B_T_DM21A1_g3_des {
                displayName = "7.62 mm 20Rnd Ball-T DM21A1 Mag";
                description = "Caliber: 7.62x51 mm Ball-T DM21A1 Rounds: 20 Used in: G3, G8.";
                price = 140;
                stock = 10000;                				
            };
			class gm_20Rnd_762x51mm_B_T_DM21A2_g3_des {
                displayName = "7.62 mm 20Rnd Ball-T DM21A2 Mag";
                description = "Caliber: 7.62x51 mm Ball-T DM21A2 Rounds: 20 Used in: G3, G8.";
                price = 140;
                stock = 10000;                				
            };
			class gm_20Rnd_762x51mm_B_DM111_g3_des {
                displayName = "7.62 mm 20Rnd Ball DM111 Mag";
                description = "Caliber: 7.62x51 mm Ball DM111 Rounds: 20 Used in: G3, G8.";
                price = 140;
                stock = 10000;                				
            };
			class gm_20Rnd_762x51mm_B_DM41_g3_des {
                displayName = "7.62 mm 20Rnd Ball DM41 Mag";
                description = "Caliber: 7.62x51 mm Ball DM41 Rounds: 20 Used in: G3, G8.";
                price = 140;
                stock = 10000;                				
            };
			class gm_20Rnd_762x51mm_AP_DM151_g3_des {
                displayName = "7.62 mm 20Rnd AP DM151 Mag";
                description = "Caliber: 7.62x51 mm AP DM151 Rounds: 20 Used in: G3, G8.";
                price = 140;
                stock = 10000;                				
            };		
			class 20Rnd_762x51_Mag {
                displayName = "7.62 mm 20Rnd Mag";
                description = "Caliber: 7.62x51 mm Rounds: 20 Used in: Mk18 ABR, Mk-I EMR, Mk14, SPAR-17.";
                price = 140;
                stock = 10000;                				
            };			
			class gm_30Rnd_762x39mm_B_M43_ak47_blk {
                displayName = "7.62 mm 30Rnd Ball M43 Mag";
                description = "Caliber: 7.62x39 mm Ball M43 Rounds: 30 Used in: AK-47, RPK.";
                price = 225;
                stock = 10000;                				
            };
			class gm_30Rnd_762x39mm_B_T_M43_ak47_blk {
                displayName = "7.62 mm 30Rnd Ball-T M43 Mag";
                description = "Caliber: 7.62x39 mm Ball-T M43 Rounds: 30 Used in: AK-47, RPK.";
                price = 225;
                stock = 10000;                				
            };		
			class 30Rnd_762x39_AK12_Mag_F {
                displayName = "7.62 mm 30rnd AK12 Mag";
                description = "Caliber: 7.62x51 mm Rounds: 30 Used in: AK-12, AK-12 GL, AKM.";
                price = 225;
                stock = 10000;                				
            };		
			class 30Rnd_762x39_Mag_Tracer_Green_F {
                displayName = "7.62 mm 30rnd AK12 Tracer (Green) Mag";
                description = "Caliber: 7.62x51 mm Tracers (Green) Rounds: 30 Used in: AK-12, AK-12 GL, AKM.";
                price = 225;
                stock = 10000;                				
            };
			class 30Rnd_762x39_AK12_Lush_Mag_Tracer_F {
                displayName = "7.62 mm 30rnd AK12 Tracer (Lush) Mag";
                description = "Caliber: 7.62x51 mm Tracers (Green) Rounds: 30 Used in: AK-12, AK-12 GL, AKM.";
                price = 225;
                stock = 10000;                				
            };
			class 30Rnd_762x39_AK12_Arid_Mag_Tracer_F {
                displayName = "7.62 mm 30rnd AK12 Tracer (Arid) Mag";
                description = "Caliber: 7.62x51 mm Tracers (Green) Rounds: 30 Used in: AK-12, AK-12 GL, AKM.";
                price = 225;
                stock = 10000;                				
            };
			class gm_75Rnd_762x39mm_B_M43_ak47_blk {
                displayName = "7.62 mm 75Rnd Ball M43 Mag";
                description = "Caliber: 7.62x39 mm Ball M43 Rounds: 75 Used in: AK-47, RPK.";
                price = 580;
                stock = 10000;                				
            };
			class gm_75Rnd_762x39mm_B_T_M43_ak47_blk {
                displayName = "7.62 mm 75Rnd Ball-T M43 Mag";
                description = "Caliber: 7.62x39 mm Ball-T M43 Rounds: 75 Used in: AK-47, RPK.";
                price = 580;
                stock = 10000;                				
            };		
			class 75rnd_762x39_AK12_Mag_F {
                displayName = "7.62 mm 75rnd AK12 Mag";
                description = "Caliber: 7.62x39 mm Rounds: 75 Used in: RPK-12, AK-12, AK-12 GL, AKM.";
                price = 580;
                stock = 10000;                				
            };
			class 75rnd_762x39_AK12_Lush_Mag_Tracer_F {
                displayName = "7.62 mm 75rnd AK12 Tracer Lush Mag";
                description = "Caliber: 7.62x39 mm Rounds: 75 Used in: RPK-12, AK-12, AK-12 GL, AKM.";
                price = 580;
                stock = 10000;                				
            };
			class 75rnd_762x39_AK12_Arid_Mag_Tracer_F {
                displayName = "7.62 mm 75rnd AK12 Tracer Arid Mag";
                description = "Caliber: 7.62x39 mm Rounds: 75 Used in: RPK-12, AK-12, AK-12 GL, AKM.";
                price = 580;
                stock = 10000;                				
            };
			class gm_100Rnd_762x54mm_B_T_T46_pk_grn {
                displayName = "7.62 mm 100Rnd Ball-T T46 Mag";
                description = "Caliber: 7.62x54 mm Ball-T Rounds: 100 Used in: PK.";
                price = 775;
                stock = 10000;                				
            };
			class gm_100Rnd_762x54mm_API_B32_pk_grn {
                displayName = "7.62 mm 100Rnd API B32 Mag";
                description = "Caliber: 7.62x54 mm API Rounds: 100 Used in: PK.";
                price = 775;
                stock = 10000;                				
            };		
			class gm_120Rnd_762x51mm_B_T_DM21_mg3_grn {
                displayName = "7.62 mm 120Rnd Ball-T DM21 Mag";
                description = "Caliber: 7.62x51 mm Ball-T DM21 Rounds: 120 Used in: MG3.";
                price = 930;
                stock = 10000;                				
            };
			class gm_120Rnd_762x51mm_B_T_DM21A1_mg3_grn {
                displayName = "7.62 mm 120Rnd Ball-T DM21A1 Mag";
                description = "Caliber: 7.62x51 mm Ball-T DM21A1 Rounds: 120 Used in: MG3.";
                price = 930;
                stock = 10000;                				
            };
			class gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn {
                displayName = "7.62 mm 120Rnd Ball-T DM21A2 Mag";
                description = "Caliber: 7.62x51 mm Ball-T DM21A2 Rounds: 120 Used in: MG3.";
                price = 930;
                stock = 10000;                				
            };		
			class 150Rnd_762x54_Box_Tracer {
                displayName = "7.62 mm 150Rnd Tracer (Green) Box";
                description = "Caliber: 7.62x39 mm Tracers (Green) Rounds: 150 Used in: Zafir.";
                price = 1160;
                stock = 10000;                				
            };
			class 10Rnd_93x64_DMR_05_Mag {
                displayName = "9.3 mm 10Rnd Mag";
                description = "Caliber: 9.3x64mm Rounds: 10 Used in: Cyrus.";
                price = 100;
                stock = 10000;                				
            };
			class 150Rnd_93x64_Mag {
                displayName = "9.3 mm 150Rnd Belt";
                description = "Caliber: 9.3x64mm Rounds: 150 Used in: Navid.";
                price = 1500;
                stock = 10000;                				
            };			
			class 10Rnd_338_Mag {
                displayName = ".338 LM 10Rnd Mag";
                description = "Caliber: .338 Lapua Magnum Rounds: 10 Used in: MAR-10.";
                price = 100;
                stock = 10000;                				
            };
			class 130Rnd_338_Mag {
                displayName = ".338 NM 130Rnd Belt";
                description = "Caliber: .338 Norma Magnum Rounds: 130 Used in: SPMG.";
                price = 1300;
                stock = 10000;                				
            };			
			class 10Rnd_127x54_Mag {
                displayName = "12.7 mm 10Rnd Mag";
                description = "Caliber: 12.7x54 mm Rounds: 10 Used in: ASP-1 Kir.";
                price = 200;
                stock = 10000;                				
            };			
			class 5Rnd_127x108_Mag {
                displayName = "12.7 mm 5Rnd Mag";
                description = "Caliber: 12.7x108 mm Russian Rounds: 5 Used in: GM6 Lynx.";
                price = 100;
                stock = 10000;       
            };
			class 5Rnd_127x108_APDS_Mag {
                displayName = "12.7 mm 5Rnd APDS Mag";
                description = "Caliber: 12.7x108 mm APDS Rounds: 5 Used in: GM6 Lynx.";
                price = 125;
                stock = 10000;
            };	
			class 7Rnd_408_Mag {
                displayName = ".408 7Rnd LRR Mag";
                description = "Caliber: .408 Rounds: 7 Used in: M320 LRR";
                price = 110;
                stock = 10000;                
            };
			class 1Rnd_HE_Grenade_shell {
                displayName = "40 mm HE Grenade Round (x1)";
                description = "40 mm HE Grenade Round (x1)";
                price = 100;
                stock = 10000;                
            };		
			class 3Rnd_HE_Grenade_shell {
                displayName = "40 mm HE Grenade Round (x3)";
                description = "40 mm HE Grenade Round (x3)";
                price = 300;
                stock = 10000;                
            };
			class 1Rnd_Smoke_Grenade_shell {
                displayName = "40mm Smoke Round (White) (x1)";
                description = "40mm Smoke Round (White) (x1)";
                price = 50;
                stock = 10000;                
            };		
			class 3Rnd_Smoke_Grenade_shell {
                displayName = "40mm Smoke Round (White) (x3)";
                description = "40mm Smoke Round (White) (x3)";
                price = 150;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_smoke_single_yel_gc {
                displayName = "26.5 mm Smoke (Yellow)";
                description = "Caliber: 26.5 mm Smoke (Yellow) Rounds : 1 Used in: LP1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_smoke_single_blu_gc {
                displayName = "26.5 mm Smoke (Blue)";
                description = "Caliber: 26.5 mm Smoke (Blue) Rounds : 1 Used in: LP1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_smoke_single_blk_gc {
                displayName = "26.5 mm Smoke (Black)";
                description = "Caliber: 26.5 mm Smoke (Black) Rounds : 1 Used in: LP1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_smoke_single_yel_DM19 {
                displayName = "26.5 mm Smoke DM19 (Yellow)";
                description = "Caliber: 26.5 mm Smoke (Yellow) Rounds : 1 Used in: P2A1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_smoke_single_org_DM22 {
                displayName = "26.5 mm Smoke DM22 (Orange)";
                description = "Caliber: 26.5 mm Smoke (Blue) Rounds : 1 Used in: P2A1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_265mm_smoke_single_vlt_DM24 {
                displayName = "	26.5 mm Smoke DM24 (Purple)";
                description = "Caliber: 26.5 mm Smoke (Black) Rounds : 1 Used in: P2A1";
                price = 0;
                stock = 10000;                
            };
			class gm_1Rnd_2650mm_potato_dm11 {
                displayName = "26.5 mm 1Rnd POTATO DM11";
                description = "Caliber: Potato";
                price = 0;
                stock = 10000;                
            };		
			class gm_1Rnd_40mm_heat_pg7v_rpg7 {
                displayName = "40 mm HEAT PG-7V";
                description = "Caliber: 40 mm HEAT PG-7V Rounds : 1 Used in: RPG7";
                price = 100;
                stock = 10000;                
            };		
			class RPG7_F {
                displayName = "PG-7VM HEAT Grenade 40mm";
                description = "PG-7VM HEAT 40mm Anti-Tank Grenade";
                price = 100;
                stock = 10000;                
            };
			class gm_1Rnd_44x537mm_heat_dm32_pzf44_2 {
                displayName = "44 mm HEAT DM32";
                description = "Caliber: 44x537 mm HEAT DM32 Rounds : 1 Used in: Pzf44-2";
                price = 150;
                stock = 10000;                
            };		
			class RPG32_F {
                displayName = "RPG-32 Rocket";
                description = "105 mm PG-42V high-explosive anti-tank (HEAT)";
                price = 500;
                stock = 10000;                
            };
			class RPG32_HE_F {
                displayName = "RPG-32 HE Rocket";
                description = "72 mm TBG-42V high-explosive (HE) grenades";
                price = 200;
                stock = 10000;                
            };			
			class gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf {
                displayName = "84 mm HEAT-T DM12";
                description = "84x245 mm HEAT DM12 rocket. Uses a high-explosive (HEAT) warhead, Used in: Pzf84";
                price = 200;
                stock = 10000;                
            };
			class gm_1Rnd_84x245mm_heat_t_DM12a1_carlgustaf {
                displayName = "84 mm HEAT-T DM12A1";
                description = "84x245 mm HEAT DM12A1 rocket. Uses a high-explosive (HEAT) warhead, Used in: Pzf84";
                price = 200;
                stock = 10000;                
            };
			class gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf {
                displayName = "84 mm HEAT-T DM22";
                description = "84x245 mm HEAT DM22 rocket. Standard high-explosive anti-tank (HEAT) warhead, Used in: Pzf84";
                price = 500;
                stock = 10000;                
            };
			class gm_1Rnd_84x245mm_heat_t_DM32_carlgustaf {
                displayName = "84 mm HEAT-T DM32";
                description = "84x245 mm HEAT DM32 rocket. Alternate high-explosive anti-tank (HEAT) warhead, Used in: Pzf84";
                price = 500;
                stock = 10000;                
            };		
			class MRAWS_HEAT_F {
                displayName = "MAAWS HEAT 75 Round";
                description = "84 mm standard issue rocket. Uses a high-explosive anti-tank (HEAT) warhead, 75 Round";
                price = 500;
                stock = 10000;                
            };		
			class MRAWS_HE_F {
                displayName = "MAAWS HE 44 Round";
                description = "84 mm high-explosive dual purpose (HEDP) warhead, 44 Round";
                price = 200;
                stock = 10000;                
            };
			class MRAWS_HEAT55_F {
                displayName = "MAAWS HEAT 55 Round";
                description = "84 mm standard issue rocket. Uses a high-explosive anti-tank (HEAT) warhead, 55 Round";
                price = 250;
                stock = 10000;                
            };			
			class Vorona_HEAT {
                displayName = "9M135 HEAT Missile";
                description = "130 mm Anti-tank with a powerful tandem HEAT warhead.";
                price = 700;
                stock = 10000;                
            };
			class Vorona_HE {
                displayName = "9M135 HE Missile";
                description = "130 mm Anti-personnel with a HE-FRAG warhead.";
                price = 300;
                stock = 10000;                
            };
			class NLAW_F {
                displayName = "PCML Missile";
                description = "150 mm high-explosive anti-tank (HEAT) tandem charge warhead for the PCML Rocket Launcher";
                price = 1500;
                stock = 10000;                
            };		
			class Titan_AA {
                displayName = "Titan AA Missile";
                description = "127 mm Anti-air missle for the Titan MPRL";
                price = 2000;
                stock = 10000;                
            };
			class Titan_AT {
                displayName = "Titan AT Missile";
                description = "127 mm Anti-Tank round used in the Titan MPRL Compact";
                price = 2000;
                stock = 10000;                
            };
			class Titan_AP {
                displayName = "Titan AP Missile";
                description = "Antipersonnel round used in the Titan MPRL Compact";
                price = 500;
                stock = 10000;                
            };
			class gm_handgrenade_frag_rgd5 {
                displayName = "Fragmentation Grenade RGD5";
                description = "Fragmentation Grenade RGD5";
                price = 100;
                stock = 10000;                
            };		
			class gm_handgrenade_frag_dm51 {
                displayName = "Fragmentation Grenade DM51";
                description = "Fragmentation Grenade DM51";
                price = 100;
                stock = 10000;                
            };
			class gm_handgrenade_frag_dm51a1 {
                displayName = "Fragmentation Grenade DM51A1";
                description = "Fragmentation Grenade DM51A1";
                price = 100;
                stock = 10000;                
            };
			class gm_handgrenade_pracfrag_dm58 {
                displayName = "Practice Fragmentation Grenade DM58";
                description = "Practice Fragmentation Grenade DM58";
                price = 100;
                stock = 10000;                
            };		
			class HandGrenade {
                displayName = "RGO Grenade";
                description = "RGO Defensive Grenade";
                price = 100;
                stock = 10000;                
            };
			class MiniGrenade {
                displayName = "RGN Grenade";
                description = "RGN Offensive Grenade";
                price = 100;
                stock = 10000;                
            };
			class ACE_M14 {
                displayName = "AN-M14 Incendiary Grenade";
                description = "AN-M14 Incendiary Grenade";
                price = 75;
                stock = 10000;                
            };
			class gm_handgrenade_conc_dm51 {
                displayName = "Concussion Grenade DM51";
                description = "Concussion Grenade DM51";
                price = 75;
                stock = 10000;                
            };
			class gm_handgrenade_conc_dm51a1 {
                displayName = "Concussion Grenade DM51A1";
                description = "Concussion Grenade DM51A1";
                price = 75;
                stock = 10000;                
            };
			class gm_handgrenade_pracconc_dm58 {
                displayName = "Practice Concussion Grenade DM58";
                description = "Practice Concussion Grenade DM58";
                price = 75;
                stock = 10000;                
            };		
			class ACE_M84 {
                displayName = "M84 Stun Grenade";
                description = "M84 Stun Grenade	";
                price = 75;
                stock = 10000;                
            };		
			class ACE_CTS9 {
                displayName = "CTS 7290 9-bang Flash Grenade";
                description = "CTS 7290 9-bang Flash Grenade";
                price = 75;
                stock = 10000;                
            };			
			class gm_smokeshell_grn_dm21 {
                displayName = "Smoke Grenade DM21 (Green)";
                description = "Hand smoke grenade";
                price = 50;
                stock = 10000;                
            };
			class gm_smokeshell_red_dm23 {
                displayName = "Smoke Grenade DM23 (Red)";
                description = "Hand smoke grenade";
                price = 50;
                stock = 10000;                
            };
			class gm_smokeshell_yel_dm26 {
                displayName = "Smoke Grenade DM26 (Yellow)";
                description = "Hand smoke grenade";
                price = 50;
                stock = 10000;                
            };
			class gm_smokeshell_org_dm32 {
                displayName = "Smoke Grenade DM32 (Orange)";
                description = "Hand smoke grenade";
                price = 50;
                stock = 10000;                
            };
			class gm_smokeshell_wht_dm25 {
                displayName = "Smoke Grenade DM25 (White)";
                description = "Hand smoke grenade";
                price = 50;
                stock = 10000;                
            };		
			class SmokeShell {
                displayName = "Hand Smoke Grenade";
                description = "Hand smoke grenade";
                price = 50;
                stock = 10000;                
            };		
			class ACE_HandFlare_White {
                displayName = "M127A1 Hand Held Signal (White)";
                description = "M127A1 Hand Held Signal (White)";
                price = 50;
                stock = 10000;                
            };			
			class B_IR_Grenade {
                displayName = "IR Grenade [NATO]";
                description = "IR grenade [NATO]";
                price = 50;
                stock = 10000;                
            };
			class I_IR_Grenade {
                displayName = "IR Grenade [AAF]";
                description = "IR Grenade [AAF]";
                price = 40;
                stock = 10000;                
            };			
        };
		class Eammo {
            displayName = "Plantable Explosives";
            kindOf = "Items";
			tracking = 1;
			
			class ACE_DefusalKit {
                displayName = "ACE ACE Defusal Kit";
                description = "The ACE ACE defusal kit can be utilize with the ACE interaction menu.";
                price = 50;
                stock = 10000;
            };
   			class ACE_Cellphone {
                displayName = "ACE Cellphone";
                description = "The ACE cellphone can be utilize with the ACE self interaction menu, under explosives. After placing the charge, interact with it with ACE and assign it to a type of detonator.";
                price = 300;
                stock = 10000;                
            };
			class ACE_Clacker {
                displayName = "ACE M57 Firing Device";
                description = "The ACE M57 firing device can be utilize with the ACE self interaction menu, under explosives. After placing the charge, interact with it with ACE and assign it to a type of detonator.";
                price = 200;
                stock = 10000;                
            };
			class ACE_M26_Clacker {
                displayName = "ACE M26 Firing Device";
                description = "The ACE M26 firing device can be utilize with the ACE self interaction menu, under explosives. After placing the charge, interact with it with ACE and assign it to a type of detonator.";
                price = 200;
                stock = 10000;                
            };
			class ACE_DeadManSwitch {
                displayName = "ACE Dead Man’s Switch";
                description = "The ACE Dead Man’s Switch can be utilize with the ACE self interaction menu, under explosives. After placing the charge, interact with it with ACE and assign it to a type of detonator.";
                price = 200;
                stock = 10000;                
            };
			class DemoCharge_Remote_Mag {
                displayName = "Explosive Charge";
                description = "Explosive charges can be utilize with the ACE self interaction menu, under explosives. After placing charge, interact with it with ACE and assign it to a type of detonator. ";
                price = 200;
                stock = 10000;                
            };
			class SatchelCharge_Remote_Mag {
                displayName = "Explosive Satchel";
                description = "Explosive satchels can be utilize with the ACE self interaction menu, under explosives. After placing charge, interact with it with ACE and assign it to a type of detonator.";
                price = 750;
                stock = 10000;                
            };
			class IEDLandSmall_Remote_Mag {
                displayName = "Small IED (Dug-in)";
                description = "The small IED (dug-in) can be utilize with the ACE self interaction menu, under explosives. After placing charge, interact with it with ACE and assign it to a type of detonator.";
                price = 200;
                stock = 10000;                
            };
			class IEDUrbanSmall_Remote_Mag {
                displayName = "Small IED (Urban)";
                description = "The small IED (urban) can be utilize with the ACE self interaction menu, under explosives. After placing charge, interact with it with ACE and assign it to a type of detonator.";
                price = 200;
                stock = 10000;                
            };
			class IEDLandBig_Remote_Mag {
                displayName = "Large IED (Dug-in)";
                description = "The large IED (dug-in) can be utilize with the ACE self interaction menu, under explosives. After placing charge, interact with it with ACE and assign it to a type of detonator.";
                price = 500;
                stock = 10000;                
            };
			class IEDUrbanBig_Remote_Mag {
                displayName = "	Large IED (Urban)";
                description = "The large IED (urban) can be utilize with the ACE self interaction menu, under explosives. After placing charge, interact with it with ACE and assign it to a type of detonator.";
                price = 500;
                stock = 10000;                
            };
			class ATMine_Range_Mag {
                displayName = "AT Mine";
                description = "Anti-tank mine";
                price = 1000;
                stock = 10000;                
            };
			class SLAMDirectionalMine_Wire_Mag {
                displayName = "M6 SLAM Mine";
                description = "Anti-armor penetration mine";
                price = 500;
                stock = 10000;                
            };
			class ClaymoreDirectionalMine_Remote_Mag {
                displayName = "Claymore Charge";
                description = "Anti-personnel fragmentation charge";
                price = 250;
                stock = 10000;                
            };			
			class APERSMine_Range_Mag {
                displayName = "APERS Mine";
                description = "Anti-personnel mine";
                price = 100;
                stock = 10000;                
            };
			class APERSBoundingMine_Range_Mag {
                displayName = "APERS Bounding Mine";
                description = "Anti-personnel bounding mine";
                price = 100;
                stock = 10000;                
            };
			class APERSTripMine_Wire_Mag {
                displayName = "APERS Tripwire Mine";
                description = "Anti-personnel tripwire mine";
                price = 100;
                stock = 10000;
            };
        };
        class accessories {
            displayName = "Weapon Accessories";
            kindOf = "Items";
			tracking = 1;

			class gm_zvn64_rear_ak {
                displayName = "ZVN-64 Rear Sight";
                description = "The ZVN-64 is intended exclusively for use in night fighting situations. It is mounted directly on the existing rear sight/base of the front sight and emits a pale white light in darkness (AKM/AKMN/LMG RPK-74/LMG RPK/MPi AK-74/MPi AKS-74/MPi AKS-74K/MPi KM-72/MPi KMS-72/RPK).";
                price = 100;
                stock = 10000;                
	};
			class gm_zvn64_front {
                displayName = "ZVN-64/69 Front Post";
                description = "The ZVN-64 is intended exclusively for use in night fighting situations. It is mounted directly on the existing rear sight/base of the front sight and emits a pale white light in darkness (AKM/AKMN/LMG RPK-74/LMG RPK/MPi AK-74/MPi AKS-74/MPi AKS-74K/MPi KM-72/MPi KMS-72/RPK).";
                price = 100;
                stock = 10000;                
	};		
			class optic_MRD {
                displayName = "MRD";
                description = "MRD Close Range.";
                price = 100;
                stock = 10000;                
	};		
			class optic_MRD_black {
                displayName = "MRD (Black)";
                description = "MRD Close Range.";
                price = 100;
                stock = 10000;                
	};
			class optic_Yorris {
                displayName = "Yorris J2";
                description = "Y-J2 Close Range.";
                price = 100;
                stock = 10000;                
	};
			class optic_Holosight {
                displayName = "Mk17 Holosight";
                description = "Mk17 Close Range.";
                price = 200;
                stock = 10000;                
	};
			class optic_Holosight_arid_F {
                displayName = "Mk17 Holosight (Arid)";
                description = "Mk17 Close Range.";
                price = 200;
                stock = 10000;                
	};
			class optic_Holosight_blk_F {
                displayName = "Mk17 Holosight (Black)";
                description = "Mk17 Close Range.";
                price = 200;
                stock = 10000;                
	};
			class optic_Holosight_khk_F {
                displayName = "Mk17 Holosight (Khaki)";
                description = "Mk17 Close Range.";
                price = 200;
                stock = 10000;                
	};		
			class optic_Holosight_lush_F {
                displayName = "Mk17 Holosight (Lush)";
                description = "Mk17 Close Range.";
                price = 200;
                stock = 10000;                
	};		
			class optic_Holosight_smg {
                displayName = "Mk17 Holosight SMG";
                description = "Mk17 Close Range.";
                price = 200;
                stock = 10000;                
	};
			class optic_Holosight_smg_blk_F {
                displayName = "Mk17 Holosight SMG (Black)";
                description = "Mk17 Close Range.";
                price = 200;
                stock = 10000;                
	};
			class optic_Holosight_smg_khk_F {
                displayName = "Mk17 Holosight SMG (Khaki)";
                description = "Mk17 Close Range.";
                price = 200;
                stock = 10000;                
	};		
			class optic_Aco {
                displayName = "ACO (Red)";
                description = "Advanced Collimator Optics Color: Red, Close Range.";
                price = 0;
                stock = 10000;                
	};
			class optic_ACO_grn {
                displayName = "ACO (Green)";
                description = "Advanced Collimator Optics Color: Green, Close Range.";
                price = 0;
                stock = 10000;                
	};
			class optic_Aco_smg {
                displayName = "ACO SMG (Red";
                description = "Advanced Collimator Optics Color: Red, Close Range.";
                price = 0;
                stock = 10000;                
	    };
			class optic_ACO_grn_smg {
                displayName = "ACO SMG (Green)";
                description = "Advanced Collimator Optics Color: Green, Close Range.";
                price = 0;
                stock = 10000;                
	    };
			class optic_ico_01_f {
                displayName = "Promet Modular Sight";
                description = "Riflescope Magnification: 200m to 300m fixed, 1x-2x";
                price = 300;
                stock = 10000;                
	    };
			class optic_ico_01_camo_f {
                displayName = "Promet Modular Sight (Camo)";
                description = "Riflescope Magnification: 200m to 300m fixed, 1x-2x";
                price = 300;
                stock = 10000;                
	    };
			class optic_ico_01_black_f {
                displayName = "Promet Modular Sight (Black)";
                description = "Riflescope Magnification: 200m to 300m fixed, 1x-2x";
                price = 300;
                stock = 10000;                
	    };
			class optic_ico_01_sand_f {
                displayName = "Promet Modular Sight (Sand)";
                description = "Riflescope Magnification: 200m to 300m fixed, 1x-2x";
                price = 300;
                stock = 10000;                
	    };		
			class gm_feroz2x17_pzf44_2_blk {
                displayName = "Fero Z 2x17";
                description = "optical scope Magnification: 200m fixed, 2x (PzF 44-2)";
                price = 325;
                stock = 10000;                
	    };
			class gm_feroz2x17_pzf44_2_des {
                displayName = "Fero Z 2x17 (Tan)";
                description = "optical scope Magnification: 200m fixed, 2x (PzF 44-2)";
                price = 325;
                stock = 10000;                
	    };
			class gm_feroz2x17_pzf44_2_win {
                displayName = "Fero Z 2x17 (Winter)";
                description = "optical scope Magnification: 200m fixed, 2x (PzF 44-2)";
                price = 325;
                stock = 10000;                
	    };		
			class gm_feroz2x17_pzf84_blk {
                displayName = "Fero Z 2x17";
                description = "optical scope Magnification: 200m fixed, 2x (PzF84)";
                price = 325;
                stock = 10000;                
	    };
			class gm_feroz2x17_pzf84_des {
                displayName = "Fero Z 2x17 (Tan)";
                description = "optical scope Magnification: 200m fixed, 2x (PzF84)";
                price = 325;
                stock = 10000;                
	    };
			class gm_feroz2x17_pzf84_win {
                displayName = "Fero Z 2x17 (Winter)";
                description = "optical scope Magnification: 200m fixed, 2x (PzF84)";
                price = 325;
                stock = 10000;                
	    };		
			class gm_pgo7v_blk {
                displayName = "PGO-7V";
                description = "optical scope Magnification: 2.8X (RPG-7)";
                price = 350;
                stock = 10000;                
	    };		
			class gm_feroz24_blk {
                displayName = "Fero Z-24";
                description = "low-powered riflescope Magnification: 100m to 600m, 4x (G3A3/G3A4/GV M/75/GV M/75 Carbine/SG5A2/SG5A3)";
                price = 375;
                stock = 10000;                
	    };
			class gm_feroz24_des {
                displayName = "Fero Z-24 (Tan)";
                description = "low-powered riflescope Magnification: 100m to 600m, 4x (G3A3/G3A4/GV M/75/GV M/75 Carbine/SG5A2/SG5A3)";
                price = 375;
                stock = 10000;                
	    };		
			class gm_c79a1_blk {
                displayName = "C79A1";
                description = "telescopic sight Magnification: 200m to 800m, 3.4X (GV M-95/ C7A1)";
                price = 400;
                stock = 10000;                
	    };
			class gm_c79a1_oli {
                displayName = "C79A1(Olive)";
                description = "telescopic sight Magnification: 200m to 800m, 3.4X (GV M-95/ C7A1)";
                price = 400;
                stock = 10000;                
	    };		
			class gm_pso1_gry {
                displayName = "PSO-1";
                description = "low-powered riflescope Magnification: 100m to 800m, 4x (SVD)";
                price = 400;
                stock = 10000;                
	    };		
			class gm_zfk4x25_blk {
                displayName = "ZFK 4x25";
                description = "low-powered riflescope Magnification: 100m to 800m, 4x25 (LMG RPK/LMG RPK-74/MPi AK-74/MPi KM-72/AKMN)";
                price = 400;
                stock = 10000;                
	    };		
			class optic_Hamr {
                displayName = "RCO";
                description = "Rifle Combat Optics Magnification: 2x";
                price = 400;
                stock = 10000;                
	    };
			class optic_Hamr_khk_F {
                displayName = "RCO (Khaki)";
                description = "Rifle Combat Optics Magnification: 2x";
                price = 400;
                stock = 10000;                
	    };
			class optic_Hamr_broken {
                displayName = "RCO (Defunct)";
                description = "Rifle Combat Optics Magnification: 2x";
                price = 400;
                stock = 10000;                
	    };		
			class ACE_optic_Hamr_2D {
                displayName = "RCO (2D)";
                description = "Enhanced Rifle Combat Optics Magnification: 2x.";
                price = 400;
                stock = 10000;                
            };
			class ACE_optic_Hamr_PIP {
                displayName = "RCO (PIP)";
                description = "Enhanced Rifle Combat Optics Magnification: 2x.";
                price = 400;
                stock = 10000;                
            };
			class optic_ERCO_blk_F {
                displayName = "ERCO (Black)";
                description = "Enhanced Rifle Combat Optics Magnification: 2x.";
                price = 500;
                stock = 10000;                
            };
			class optic_ERCO_khk_F {
                displayName = "ERCO (Khaki)";
                description = "Enhanced Rifle Combat Optics Magnification: 2x.";
                price = 500;
                stock = 10000;                
            };
			class optic_ERCO_snd_F {
                displayName = "ERCO (Sand)";
                description = "Enhanced Rifle Combat Optics Magnification: 2x.";
                price = 500;
                stock = 10000;                
            };		
			class optic_Arco {
                displayName = "ARCO";
                description = "Advanced Rifle Combat Optics Magnification: 2x";
                price = 600;
                stock = 10000;                
	   };
			class optic_Arco_arid_F {
                displayName = "ARCO (Arid)";
                description = "Advanced Rifle Combat Optics Magnification: 2x";
                price = 600;
                stock = 10000;                
	   };
			class optic_Arco_blk_F {
                displayName = "ARCO (Black)";
                description = "Advanced Rifle Combat Optics Magnification: 2x";
                price = 600;
                stock = 10000;                
	   };
			class optic_Arco_ghex_F {
                displayName = "ARCO (Green Hex)";
                description = "Advanced Rifle Combat Optics Magnification: 2x";
                price = 600;
                stock = 10000;                
	   };
			class optic_Arco_lush_F {
                displayName = "ARCO (Lush)";
                description = "Advanced Rifle Combat Optics Magnification: 2x";
                price = 600;
                stock = 10000;                
	   };
			class optic_Arco_AK_arid_F {
                displayName = "ARCO AK (Arid)";
                description = "Advanced Rifle Combat Optics Magnification: 2x";
                price = 600;
                stock = 10000;                
	   };
			class optic_Arco_AK_blk_F {
                displayName = "ARCO AK (Black)";
                description = "Advanced Rifle Combat Optics Magnification: 2x";
                price = 600;
                stock = 10000;                
	   };
			class optic_Arco_AK_lush_F {
                displayName = "ARCO AK (Lush)";
                description = "Advanced Rifle Combat Optics Magnification: 2x";
                price = 600;
                stock = 10000;                
	   };		
			class ACE_optic_Arco_2D {
                displayName = "ARCO (2D)";
                description = "Advanced Rifle Combat Optics Magnification: 2x";
                price = 600;
                stock = 10000;                
	  };
			class ACE_optic_Arco_PIP {
                displayName = "ARCO (PIP)";
                description = "Advanced Rifle Combat Optics Magnification: 2x";
                price = 600;
                stock = 10000;                
          };
			class optic_MRCO {
                displayName = "MRCO";
                description = "MRCO Magnification: 2x.";
                price = 600;
                stock = 10000;                
            };
			class ACE_optic_MRCO_2D {
                displayName = "MRCO (2D)";
                description = "MRCO Magnification: 2x.";
                price = 600;
                stock = 10000;                
            };
			class ACE_optic_MRCO_PIP {
                displayName = "MRCO (PIP)";
                description = "MRCO Magnification: 2x.";
                price = 600;
                stock = 10000;                
            };
			class optic_DMS {
                displayName = "DMS";
                description = "DMS Magnification: 2x-4x.";
                price = 1000;
                stock = 10000;                
            };
			class optic_DMS_ghex_F {
                displayName = "DMS (Green Hex)";
                description = "DMS Magnification: 2x-4x.";
                price = 1000;
                stock = 10000;                
            };
			class optic_DMS_weathered_F {
                displayName = "DMS (Old)";
                description = "DMS Magnification: 2x-4x.";
                price = 1000;
                stock = 10000;                
            };
			class optic_DMS_weathered_Kir_F {
                displayName = "DMS Kir (Old)";
                description = "DMS Magnification: 2x-4x.";
                price = 1000;
                stock = 10000;                
            };		
			class optic_NVS {
                displayName = "NVS";
                description = "Night Vision Scope Magnification: 5x.";
                price = 1000;
                stock = 10000;
            };
			class optic_SOS {
			    displayName = "MOS";
                description = "Marksman Optical Sights Magnification: 2.5x-5x.";
                price = 1100;
                stock = 10000;
            };
			class optic_SOS_khk_F {
			    displayName = "MOS (Khaki)";
                description = "Marksman Optical Sights Magnification: 2.5x-5x.";
                price = 1100;
                stock = 10000;
            };		
			class ACE_optic_SOS_2D {
			    displayName = "MOS (2D)";
                description = "Marksman Optical Sights Magnification: 2.5x-5x.";
                price = 1100;
                stock = 10000;
            };
			class ACE_optic_SOS_PIP {
			    displayName = "MOS (PIP)";
                description = "Marksman Optical Sights Magnification: 2.5x-5x.";
                price = 1100;
                stock = 10000;                
            };
			class Item_optic_KHS_blk {
                displayName = "Kahlia";
                description = "The Kahlia has a magnification strength range of 5x-11x. It has a minimum zeroing range of 300 m to a maximum of 2,000 m.";
                price = 1200;
                stock = 10000;                
	};
			class optic_KHS_hex {
                displayName = "Kahlia (Hex)";
                description = "The Kahlia has a magnification strength range of 5x-11x. It has a minimum zeroing range of 300 m to a maximum of 2,000 m.";
                price = 1200;
                stock = 10000;                
	};
			class optic_KHS_old {
                displayName = "Kahlia (Old)";
                description = "The Kahlia has a magnification strength range of 5x-11x. It has a minimum zeroing range of 300 m to a maximum of 2,000 m.";
                price = 1200;
                stock = 10000;                
	};
			class optic_KHS_tan {
                displayName = "Kahlia (Tan)";
                description = "The Kahlia has a magnification strength range of 5x-11x. It has a minimum zeroing range of 300 m to a maximum of 2,000 m.";
                price = 1200;
                stock = 10000;                
	};		
			class optic_AMS {
			    displayName = "AMS (Black)";
                description = "Advanced Marksman Scope Magnification: 3x-10x.";
                price = 1400;
                stock = 10000;                
            };
			class optic_AMS_khk {
			    displayName = "AMS (Khaki)";
                description = "Advanced Marksman Scope Magnification: 3x-10x.";
                price = 1400;
                stock = 10000;                
            };
			class optic_AMS_snd {
			    displayName = "AMS (Sand)";
                description = "Advanced Marksman Scope Magnification: 3x-10x.";
                price = 1400;
                stock = 10000;                
            };		
			class optic_tws {
                displayName = "TWS";
                description = "Thermal Weapon Sight Magnification: 4x-10x.";
                price = 2000;
                stock = 10000;                
            };
			class optic_tws_mg {
                displayName = "TWS MG";
                description = "Thermal Weapon Sight for Machineguns Magnification: 4x-10x.";
                price = 2000;
                stock = 10000;                
            };
			class optic_Nightstalker {
                displayName = "Nightstalker";
                description = "Nightstalker Sight Magnification: 4x-10x";
                price = 2000;
                stock = 10000;                
            };		
			class optic_LRPS {
                displayName = "LRPS";
                description = "The LRPS (Long-Range Precision Scope Magnification: 6x-25x";
                price = 2500;
                stock = 10000;                
			};
			class optic_LRPS_ghex_F {
                displayName = "LRPS (Green Hex)";
                description = "The LRPS (Long-Range Precision Scope Magnification: 6x-25x";
                price = 2500;
                stock = 10000;                
			};
			class optic_LRPS_tna_F {
                displayName = "LRPS (Tropic)";
                description = "The LRPS (Long-Range Precision Scope Magnification: 6x-25x";
                price = 2500;
                stock = 10000;                
			};		
			class ACE_optic_LRPS_2D {
                displayName = "ACE LRPS (2D)";
                description = "The LRPS (Long-Range Precision Scope Magnification: 6x-25x";
                price = 2500;
                stock = 10000;                
			};
			class ACE_optic_LRPS_PIP {
                displayName = "LRPS (PIP)";
                description = "The LRPS (Long-Range Precision Scope Magnification: 6x-25x";
                price = 2500;
                stock = 10000;                
			};
			class Item_optic_ico_01_black_f {
                displayName = "PMS";
                description = "The PMS or Promet Modular Sight is an integrated combat sight designed exclusively for use with the LDF's Promet bullpup. It combines a magnified riflescope with a backup ironsight, all contained within a compact carrying handle.";
                price = 1000;
                stock = 10000;                
			};
			class ace_muzzle_mzls_smg_02 {
                displayName = "Flash Suppressor (9 mm)";
                description = "A flash suppressor, also known as a flash guard, flash eliminator, flash hider, or flash cone, is a muzzle device attached to the muzzle of a rifle that reduces its visible signature while firing by cooling or dispersing the burning gases that exit the muzzle, a phenomenon typical of carbine-length weapons. Its primary intent is to reduce the chances that the shooter will be blinded in low-light shooting conditions. Contrary to popular belief, it is only a minor secondary benefit if a flash suppressor reduces the intensity of the flash visible to the enemy.";
                price = 150;
                stock = 10000;                
            };
			class ace_muzzle_mzls_smg_01 {
                displayName = "Flash Suppressor (.45 ACP)";
                description = "A flash suppressor, also known as a flash guard, flash eliminator, flash hider, or flash cone, is a muzzle device attached to the muzzle of a rifle that reduces its visible signature while firing by cooling or dispersing the burning gases that exit the muzzle, a phenomenon typical of carbine-length weapons. Its primary intent is to reduce the chances that the shooter will be blinded in low-light shooting conditions. Contrary to popular belief, it is only a minor secondary benefit if a flash suppressor reduces the intensity of the flash visible to the enemy.";
                price = 200;
                stock = 10000;                
            };
			class ace_muzzle_mzls_l {
                displayName = "Flash Suppressor (5.56mm)";
                description = "A flash suppressor, also known as a flash guard, flash eliminator, flash hider, or flash cone, is a muzzle device attached to the muzzle of a rifle that reduces its visible signature while firing by cooling or dispersing the burning gases that exit the muzzle, a phenomenon typical of carbine-length weapons. Its primary intent is to reduce the chances that the shooter will be blinded in low-light shooting conditions. Contrary to popular belief, it is only a minor secondary benefit if a flash suppressor reduces the intensity of the flash visible to the enemy.";
                price = 300;
                stock = 10000;                
            };
			class ace_muzzle_mzls_h {
                displayName = "Flash Suppressor (6.5 mm)";
                description = "A flash suppressor, also known as a flash guard, flash eliminator, flash hider, or flash cone, is a muzzle device attached to the muzzle of a rifle that reduces its visible signature while firing by cooling or dispersing the burning gases that exit the muzzle, a phenomenon typical of carbine-length weapons. Its primary intent is to reduce the chances that the shooter will be blinded in low-light shooting conditions. Contrary to popular belief, it is only a minor secondary benefit if a flash suppressor reduces the intensity of the flash visible to the enemy.";
                price = 450;
                stock = 10000;                
            };
			class ace_muzzle_mzls_b {
                displayName = "Flash Suppressor (7.62 mm)";
                description = "A flash suppressor, also known as a flash guard, flash eliminator, flash hider, or flash cone, is a muzzle device attached to the muzzle of a rifle that reduces its visible signature while firing by cooling or dispersing the burning gases that exit the muzzle, a phenomenon typical of carbine-length weapons. Its primary intent is to reduce the chances that the shooter will be blinded in low-light shooting conditions. Contrary to popular belief, it is only a minor secondary benefit if a flash suppressor reduces the intensity of the flash visible to the enemy.";
                price = 500;
                stock = 10000;                
            };		
			class ace_muzzle_mzls_338 {
                displayName = "Flash Suppressor (.338)";
                description = "A flash suppressor, also known as a flash guard, flash eliminator, flash hider, or flash cone, is a muzzle device attached to the muzzle of a rifle that reduces its visible signature while firing by cooling or dispersing the burning gases that exit the muzzle, a phenomenon typical of carbine-length weapons. Its primary intent is to reduce the chances that the shooter will be blinded in low-light shooting conditions. Contrary to popular belief, it is only a minor secondary benefit if a flash suppressor reduces the intensity of the flash visible to the enemy.";
                price = 550;
                stock = 10000;                
            };
			class ace_muzzle_mzls_93mmg {
                displayName = "Flash Suppressor (9.3 mm)";
                description = "A flash suppressor, also known as a flash guard, flash eliminator, flash hider, or flash cone, is a muzzle device attached to the muzzle of a rifle that reduces its visible signature while firing by cooling or dispersing the burning gases that exit the muzzle, a phenomenon typical of carbine-length weapons. Its primary intent is to reduce the chances that the shooter will be blinded in low-light shooting conditions. Contrary to popular belief, it is only a minor secondary benefit if a flash suppressor reduces the intensity of the flash visible to the enemy.";
                price = 600;
                stock = 10000;                
            };
			class muzzle_snds_L {
                displayName = "Sound Suppressor (9 mm)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 200;
                stock = 10000;                
            };
			class gm_suppressor_safloryt_blk {
                displayName = "Silencer for Safloryt PM-63 (9 mm)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 200;
                stock = 10000;                
            };		
			class muzzle_snds_acp {
                displayName = "Sound Suppressor (.45 ACP)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 200;
                stock = 10000;                
            };
			class muzzle_snds_M {
                displayName = "Sound Suppressor (5.56 mm)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 300;
                stock = 10000;                
	    };
			class muzzle_snds_m_khk_F {
                displayName = "Sound Suppressor (5.56 mm, Khaki)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 300;
                stock = 10000;                
	    };
			class muzzle_snds_m_snd_F {
                displayName = "Sound Suppressor (5.56 mm, Sand)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 300;
                stock = 10000;                
	    };		
			class muzzle_snds_570 {
                displayName = "Sound Suppressor (5.7 mm)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 350;
                stock = 10000;                
	    };
			class muzzle_snds_58_blk_F {
                displayName = "Stealth Sound Suppressor (5.8 mm, Black)";
                description = "The 5.8 mm suppressor is unique for being able to conceal its heat signature, and will not light up on infrared sensors during and after continuous fire. There is otherwise no difference to the regular 5.56 mm suppressor (performance-wise).";
                price = 400;
                stock = 10000;                
	    };
			class muzzle_snds_58_ghex_F {
                displayName = "Stealth Sound Suppressor (5.8 mm, Green Hex)";
                description = "The 5.8 mm suppressor is unique for being able to conceal its heat signature, and will not light up on infrared sensors during and after continuous fire. There is otherwise no difference to the regular 5.56 mm suppressor (performance-wise).";
                price = 400;
                stock = 10000;                
	    };
			class muzzle_snds_58_hex_F {
                displayName = "Stealth Sound Suppressor (5.8 mm, Hex)";
                description = "The 5.8 mm suppressor is unique for being able to conceal its heat signature, and will not light up on infrared sensors during and after continuous fire. There is otherwise no difference to the regular 5.56 mm suppressor (performance-wise).";
                price = 400;
                stock = 10000;                
	    };
			class muzzle_snds_58_wdm_F {
                displayName = "Stealth Sound Suppressor (5.8 mm, Green Hex)";
                description = "The 5.8 mm suppressor is unique for being able to conceal its heat signature, and will not light up on infrared sensors during and after continuous fire. There is otherwise no difference to the regular 5.56 mm suppressor (performance-wise).";
                price = 400;
                stock = 10000;                
	    };
			class muzzle_snds_65_TI_blk_F {
                displayName = "Stealth Sound Suppressor (6.5 mm, Black)";
                description = "The 5.8 mm suppressor is unique for being able to conceal its heat signature, and will not light up on infrared sensors during and after continuous fire. There is otherwise no difference to the regular 5.56 mm suppressor (performance-wise).";
                price = 500;
                stock = 10000;
	    };		
			class muzzle_snds_65_TI_ghex_F {
                displayName = "Stealth Sound Suppressor (6.5 mm, Green Hex)";
                description = "The 5.8 mm suppressor is unique for being able to conceal its heat signature, and will not light up on infrared sensors during and after continuous fire. There is otherwise no difference to the regular 5.56 mm suppressor (performance-wise).";
                price = 500;
                stock = 10000;
	    };
			class muzzle_snds_65_TI_hex_F {
                displayName = "Stealth Sound Suppressor (6.5 mm, Hex)";
                description = "The 5.8 mm suppressor is unique for being able to conceal its heat signature, and will not light up on infrared sensors during and after continuous fire. There is otherwise no difference to the regular 5.56 mm suppressor (performance-wise).";
                price = 500;
                stock = 10000;
	    };
			class muzzle_snds_H {
                displayName = "Sound Suppressor (6.5 mm)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 450;
                stock = 10000;                
	    };		
			class muzzle_snds_H_khk_F {
                displayName = "Sound Suppressor (6.5 mm, Khaki)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 450;
                stock = 10000;                
	    };
			class muzzle_snds_H_snd_F {
                displayName = "Sound Suppressor (6.5 mm, Sand)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 450;
                stock = 10000;                
	    };
			class muzzle_snds_H_MG {
                displayName = "Sound Suppressor LMG (6.5 mm)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 450;
                stock = 10000;                
	    };		
			class muzzle_snds_H_MG_blk_F {
                displayName = "Sound Suppressor LMG (6.5 mm, Black)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 450;
                stock = 10000;                
	    };
			class muzzle_snds_H_MG_khk_F {
                displayName = "Sound Suppressor LMG (6.5 mm, Khaki)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 450;
                stock = 10000;                
	    };
			class muzzle_snds_H_SW {
                displayName = "Sound Suppressor LMG (6.5 mm)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 450;
                stock = 10000;                
	    };		
			class muzzle_snds_B {
                displayName = "Sound Suppressor (7.62 mm)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 500;
                stock = 10000;
            };
			class muzzle_snds_B_arid_F {
                displayName = "Sound Suppressor (7.62 mm, Arid)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 500;
                stock = 10000;
            };
			class muzzle_snds_B_khk_F {
                displayName = "Sound Suppressor (7.62 mm, Khaki)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 500;
                stock = 10000;
            };
			class muzzle_snds_B_lush_F {
                displayName = "Sound Suppressor (7.62 mm, Lush)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 500;
                stock = 10000;
            };
			class muzzle_snds_B_snd_F {
                displayName = "Sound Suppressor (7.62 mm, Sand)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 500;
                stock = 10000;
            };		
			class muzzle_snds_338_black {
                displayName = "Sound Suppressor (.338, Black)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 550;
                stock = 10000;
            };
			class muzzle_snds_338_green {
                displayName = "Sound Suppressor (.338, Green)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 550;
                stock = 10000;
            };
			class muzzle_snds_338_sand {
                displayName = "Sound Suppressor (.338, Sand)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 550;
                stock = 10000;
            };
			class muzzle_snds_93mmg {
                displayName = "Sound Suppressor (9.3mm, Black)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 600;
                stock = 10000;
            };		
			class muzzle_snds_93mmg_tan {
                displayName = "Sound Suppressor (9.3mm, Tan)";
                description = "Suppressors are designed to be fitted onto the muzzle of firearms. Once attached, the suppressor will alter the sound signature of the weapon and make it harder for enemies within range to hear the discharge. Suppressors will also minimise (not remove) the weapon's muzzle flash, which can help prevent the shooter's position from becoming exposed at nighttime. In addition, suppressors will enhance the velocity of a weapon slightly which can provide a small boost to its effective firing range.";
                price = 600;
                stock = 10000;
            };
			class gm_bayonet_6x3_wud {
                displayName = "6H3";
                description = "Bayonet for MPi AK-74/ MPi AKS-74/ MPi AKS-74K/ MPi KM-72/ MPi KMS-72/ SDV/ AKM/ AKMN.";
                price = 100;
                stock = 10000;
            };
			class gm_bayonet_6x3_blk {
                displayName = "6H3 (Black)";
                description = "Bayonet for MPi AK-74/ MPi AKS-74/ MPi AKS-74K/ MPi KM-72/ MPi KMS-72/ SDV/ AKM/ AKMN.";
                price = 100;
                stock = 10000;
            };		
			class acc_flashlight_pistol {
                displayName = "Pistol Flashlight";
                description = "Weapon mounted light.";
                price = 100;
                stock = 10000;
            };
			class acc_esd_01_flashlight {
                displayName = "SD Flashlight";
                description = "Weapon mounted light.";
                price = 100;
                stock = 10000;
            };
			class acc_flashlight_smg_01 {
                displayName = "Flashlight";
                description = "Weapon mounted light (SMG).";
                price = 100;
                stock = 10000;
            };
			class acc_flashlight {
                displayName = "Flashlight";
                description = "Weapon mounted light (RIFLE).";
                price = 100;
                stock = 10000;                
            };
			class acc_pointer_IR {
                displayName = "IR Laser Pointer";
                description = "Weapon mounted IR laser pointer tha emits light visible in the image intensification mode (night vision).";
                price = 150;
                stock = 10000;                
            };
			class bipod_01_F_blk {
                displayName = "Bipod (Black) [NATO]";
                description = "Bipod (Black) [NATO]";
                price = 150;
                stock = 10000;                
            };
			class bipod_01_F_khk {
                displayName = "Bipod (Khaki) [NATO]";
                description = "Bipod (Khaki) [NATO]";
                price = 150;
                stock = 10000;                
            };
			class bipod_01_F_mtp {
                displayName = "Bipod (MTP) [NATO]";
                description = "Bipod (MTP) [NATO]";
                price = 150;
                stock = 10000;                
            };
			class bipod_01_F_snd {
                displayName = "Bipod (Sand) [NATO]";
                description = "Bipod (Sand) [NATO]";
                price = 150;
                stock = 10000;                
            };		
			class ACE_SpareBarrel {
                displayName = "ACE Spare barrel";
                description = "The ACE spare barrel is useful when your weapon barrel tempertures start to exceed 500°c or when the temperture bar is half full (yellow). It can be utilize with the ACE self interaction menu > Equipment > Swap Barrel";
                kindOf = "Items";
				price = 500;
                stock = 10000;                
            };
        };
};
