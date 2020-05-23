    //buyables set/store:
    class weaponStore {
        //category:  
    
 		class Hweapons {
            displayName = "Handguns";
            kindOf = "Weapons";
            //items of this category:
			
			class hgun_Pistol_Signal_F {
                displayName = "Starter Pistol";
                description = "The Starter Pistol is a double-action revolver chambered to fire 10 mm signal flare slugs, It loads from 6-round cylinders and has both a fire rate and muzzle velocity of 240 rounds per minute/240 m/s. The Starter Pistol does not support being fitted with any accessories or muzzle attachments.";
                price = 0;
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
                price = 575;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class hgun_P07_khk_F {
                displayName = "P07 9 mm (Khaki)";
                description = "The P07 is a polymer framed, double-action semi-automatic handgun chambered to fire the 9×21 mm round, It can load from either 16- or 30-round magazines (the latter shared by the PDW2000 submachine gun), and is able to reach a fire rate of up to 500 rounds per minute with a muzzle velocity of 410 m/s. The P07 does not support being fitted with any optical sights but can have a sound suppressor mnounted onto its muzzle.";
                price = 575;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class hgun_Rook40_F {
                displayName = "Rook-40 9 mm";
                description = "The Rook-40 is a double-action semi-automatic handgun chambered to fire the 9×21 mm round, It can load from either 16 or 30 round magazines (the latter also shared by SMGs such as the PDW2000) and is able to attain a rate of fire of up to 600 rounds per minute, with a muzzle velocity of 450 m/s. The Rook-40 does not support any being fitted with any accessories but can have attachments mounted onto its muzzle.";
                price = 600;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class hgun_ACPC2_F {
                displayName = "ACP-C2 .45 ACP";
                description = "The ACP-C2 is a semi-automatic handgun chambered to fire the .45 ACP round, It loads from 9-round magazines, and can attain a fire rate of up to 400 rounds per minute with a muzzle velocity of 280 m/s. The ACP-C2 cannot mount optical sights, but supports muzzle attachments and has a compact underbarrel rail that can be fitted with a flashlight.";
                price = 700;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class hgun_Pistol_heavy_01_F {
                displayName = "4-five .45 ACP";
                description = "The 4-five is a polymer framed, semi-automatic handgun chambered to fire the .45 ACP round, It loads from 11-round magazines and can attain a fire rate of up to 600 rounds per minute, with a muzzle velocity of 380 m/s. The 4-five supports being fitted with the MRD red dot sight. Along with muzzle attachments, the 4-five also has an underbarrel rail that supports being fitted with a flashlight.";
                price = 700;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class hgun_Pistol_heavy_01_green_F {
                displayName = "4-five .45 ACP (Green)";
                description = "The 4-five is a polymer framed, semi-automatic handgun chambered to fire the .45 ACP round, It loads from 11-round magazines and can attain a fire rate of up to 600 rounds per minute, with a muzzle velocity of 380 m/s. The 4-five supports being fitted with the MRD red dot sight. Along with muzzle attachments, the 4-five also has an underbarrel rail that supports being fitted with a flashlight.";
                price = 700;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class hgun_Pistol_heavy_02_F {
                displayName = "Zubr .45 ACP";
                description = "The Zubr is a double-action revolver chambered to fire the .45 ACP round, It loads from 6-round cylinders and is only able to reach a fire rate of up to 240 rounds per minute, with a muzzle velocity of 480 m/s. The Zubr supports being mounted with the Yorris J2 red dot sight designed exclusively for mounting on the small rail just above the barrel. It cannot be fitted with muzzle attachments, but the Zubr has an underbarrel rail that can be fitted with a flashlight.";
                price = 700;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
};			
        class SMGweapons {
            displayName = "Sub Machine Guns";
            kindOf = "Weapons";
            //items of this category:			
			
			class SMG_05_F {
                displayName = "Protector 9 mm";
                description = "The Protector is a compact submachine gun chambered to fire the 9×21 mm round that uses a delayed roller locked bolt operation, It loads from 30-round curved box magazines, and can achieve a fire rate of up to 895 rounds per minute with a muzzle velocity of 375 m/s. The Protector accepts top and side rail accessories and can mount muzzle attachments.";
                price = 1500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class hgun_PDW2000_F {
                displayName = "PDW2000 9 mm";
                description = "The PDW2000 is a compact submachine gun that uses a delayed blowback operation and is chambered to fire the 9×21 mm round, It loads from 30-round plastic magazines, and can attain a rate of fire ranging from 900 up to 1,100 rounds per minute with a muzzle velocity of 420 m/s. It only accepts optical sights on its top rail but can mount attachments onto its muzzle.";
                price = 1600;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_02_flash_F {
                displayName = "Standard Sting 9 mm Submachine Gun";
                description = "The Sting is a selective-fire, blowback-operated submachine gun that is chambered to fire the the 9×21 mm round. It loads from 30-round translucent box magazines, and can attain a fire rate of up to 1,100 rounds per minute with a muzzle velocity of 370 m/s. The Sting can fit accessories onto its top and side rails and can also mount muzzle attachments.";
                price = 1700;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_01_F {
                displayName = "Vermin SMG .45 ACP";
                description = "The Vermin is a personal defence weapon that uses a delayed blowback, closed bolt operation and is chambered to fire the .45 ACP round, It loads from 30-round box magazines and can achieve an impressive fire rate of up to 1,200 rounds per minute, with a muzzle velocity of 280 m/s. The Vermin can be fitted with optical sights on its top rail, and can also mount attachments onto its muzzle. Although it does not have a side rail to attach laser pointers, it can fit a custom-designed flashlight in the notch located just above the end of the barrel.";
                price = 1700;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03_black {
                displayName = "ADR-97 5.7 mm (Black)";
                description = "The ADR-97 is a personal defence weapon that uses a straight blowback operation and is chambered to fire the 5.7×28 mm round, It loads from 50-round plastic box magazines and can attain a rate of fire of roughly ~ 900 rounds per minute, with a muzzle velocity of 786.5 m/s. It does not support being mounted with optical sights or side rail accessories, though it has an integrated reflex sight and can have attachments fitted onto its muzzle.";
                price = 1900;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03_camo {
                displayName = "ADR-97 5.7 mm (Camo)";
                description = "The ADR-97 is a personal defence weapon that uses a straight blowback operation and is chambered to fire the 5.7×28 mm round, It loads from 50-round plastic box magazines and can attain a rate of fire of roughly ~ 900 rounds per minute, with a muzzle velocity of 786.5 m/s. It does not support being mounted with optical sights or side rail accessories, though it has an integrated reflex sight and can have attachments fitted onto its muzzle.";
                price = 1900;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03_khaki {
                displayName = "ADR-97 5.7 mm (Khaki)";
                description = "The ADR-97 is a personal defence weapon that uses a straight blowback operation and is chambered to fire the 5.7×28 mm round, It loads from 50-round plastic box magazines and can attain a rate of fire of roughly ~ 900 rounds per minute, with a muzzle velocity of 786.5 m/s. It does not support being mounted with optical sights or side rail accessories, though it has an integrated reflex sight and can have attachments fitted onto its muzzle.";
                price = 1900;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03_hex {
                displayName = "ADR-97 5.7 mm (Hex)";
                description = "The ADR-97 is a personal defence weapon that uses a straight blowback operation and is chambered to fire the 5.7×28 mm round, It loads from 50-round plastic box magazines and can attain a rate of fire of roughly ~ 900 rounds per minute, with a muzzle velocity of 786.5 m/s. It does not support being mounted with optical sights or side rail accessories, though it has an integrated reflex sight and can have attachments fitted onto its muzzle.";
                price = 1900;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class SMG_03C_black {
                displayName = "ADR-97C 5.7 mm (Black)";
                description = "The ADR-97C is a compact variant of the baseline ADR-97 SMG, The only differences with this variant is that it has a lower muzzle velocity of 715 m/s and is less accurate due to using a shorter barrel. It is otherwise identical to its parent counterpart in all other aspects.";
                price = 1900;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03C_camo {
                displayName = "ADR-97C 5.7 mm (Camo)";
                description = "The ADR-97C is a compact variant of the baseline ADR-97 SMG, The only differences with this variant is that it has a lower muzzle velocity of 715 m/s and is less accurate due to using a shorter barrel. It is otherwise identical to its parent counterpart in all other aspects.";
                price = 1900;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03C_khaki {
                displayName = "ADR-97C 5.7 mm (Khaki)";
                description = "The ADR-97C is a compact variant of the baseline ADR-97 SMG, The only differences with this variant is that it has a lower muzzle velocity of 715 m/s and is less accurate due to using a shorter barrel. It is otherwise identical to its parent counterpart in all other aspects.";
                price = 1900;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03C_hex {
                displayName = "ADR-97C 5.7 mm (Hex)";
                description = "The ADR-97C is a compact variant of the baseline ADR-97 SMG, The only differences with this variant is that it has a lower muzzle velocity of 715 m/s and is less accurate due to using a shorter barrel. It is otherwise identical to its parent counterpart in all other aspects.";
                price = 1900;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class SMG_03_TR_black {
                displayName = "ADR-97 TR 5.7 mm (Black)";
                description = "The ADR-97 TR is a modified variant of the baseline ADR-97 SMG, While it has virtually identical performance stats to its parent counterpart, this variant eschews the built-in reflex sight in favour of having top and side rails, This means that the ADR-97 TR can be fitted with optics and other accessories, though consequently it no longer has any iron sights that can be used to aim if it is not fitted with an optical sight.";
                price = 2000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03_TR_camo {
                displayName = "ADR-97 TR 5.7 mm (Camo)";
                description = "The ADR-97 TR is a modified variant of the baseline ADR-97 SMG, While it has virtually identical performance stats to its parent counterpart, this variant eschews the built-in reflex sight in favour of having top and side rails, This means that the ADR-97 TR can be fitted with optics and other accessories, though consequently it no longer has any iron sights that can be used to aim if it is not fitted with an optical sight.";
                price = 2000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03_TR_khaki {
                displayName = "ADR-97 TR 5.7 mm (Khaki)";
                description = "The ADR-97 TR is a modified variant of the baseline ADR-97 SMG, While it has virtually identical performance stats to its parent counterpart, this variant eschews the built-in reflex sight in favour of having top and side rails, This means that the ADR-97 TR can be fitted with optics and other accessories, though consequently it no longer has any iron sights that can be used to aim if it is not fitted with an optical sight.";
                price = 2000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03_TR_hex {
                displayName = "ADR-97 TR 5.7 mm (Hex)";
                description = "The ADR-97 TR is a modified variant of the baseline ADR-97 SMG, While it has virtually identical performance stats to its parent counterpart, this variant eschews the built-in reflex sight in favour of having top and side rails, This means that the ADR-97 TR can be fitted with optics and other accessories, though consequently it no longer has any iron sights that can be used to aim if it is not fitted with an optical sight.";
                price = 2000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class SMG_03C_TR_black {
                displayName = "ADR-97C TR 5.7 mm (Black)";
                description = "Just like the conventional ADR-97C model, this variant almost identical to it in terms of performance (shorter barrel, lower muzzle velocity, higher dispersion), But similar to the ADR-97 TR variant, this model removes the built-in reflex sight in favour of having top and side rails, While this means that it no longer has an iron sight for aiming, it is able to mount optical sights onto its top rail and be fitted with accessories like laser sights onto its side rail.";
                price = 2000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03C_TR_camo {
                displayName = "ADR-97C TR 5.7 mm (Camo)";
                description = "Just like the conventional ADR-97C model, this variant almost identical to it in terms of performance (shorter barrel, lower muzzle velocity, higher dispersion), But similar to the ADR-97 TR variant, this model removes the built-in reflex sight in favour of having top and side rails, While this means that it no longer has an iron sight for aiming, it is able to mount optical sights onto its top rail and be fitted with accessories like laser sights onto its side rail.";
                price = 2000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03C_TR_khaki {
                displayName = "ADR-97C TR 5.7 mm (Khaki)";
                description = "Just like the conventional ADR-97C model, this variant almost identical to it in terms of performance (shorter barrel, lower muzzle velocity, higher dispersion), But similar to the ADR-97 TR variant, this model removes the built-in reflex sight in favour of having top and side rails, While this means that it no longer has an iron sight for aiming, it is able to mount optical sights onto its top rail and be fitted with accessories like laser sights onto its side rail.";
                price = 2000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class SMG_03C_TR_hex {
                displayName = "	ADR-97C TR 5.7 mm (Hex)";
                description = "Just like the conventional ADR-97C model, this variant almost identical to it in terms of performance (shorter barrel, lower muzzle velocity, higher dispersion), But similar to the ADR-97 TR variant, this model removes the built-in reflex sight in favour of having top and side rails, While this means that it no longer has an iron sight for aiming, it is able to mount optical sights onto its top rail and be fitted with accessories like laser sights onto its side rail.";
                price = 2000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
};	
        class Aweapons {
            displayName = "Assault Rifles";
            kindOf = "Weapons";
            //items of this category:
			
            class arifle_SDAR_F {
                displayName = "SDAR 5.56 mm";
                description = "The SDAR is a selective-fire, bullpup assault rifle that is chambered to fire the 5.56×45 mm NATO round. It can be used on both land and underwater. It accepts all types of 5.56 mm NATO ammunition and can fire them while the weapon is submerged, but only the dual purpose magazines are capable of inflicting damage underwater. The supercavitating rounds have an effective range of approximately 30 metres. Beyond that distance, they will lose most of their velocity and become unable to hit any targets.";
                price = 2500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_Mk20_plain_F {
                displayName = "Mk20 5.56 mm";
                description = "The Mk20 is a gas operated, selective-fire assault rifle that is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a rate of fire of up to roughly ~ 857 rounds per minute with a muzzle velocity of 900 m/s. The top and side rails support being mounted with accessories, while the muzzle can also be fitted with attachments.";
                price = 1750;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_Mk20_F {
                displayName = "Mk20 5.56 mm (Camo)";
                description = "The Mk20 is a gas operated, selective-fire assault rifle that is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a rate of fire of up to roughly ~ 857 rounds per minute with a muzzle velocity of 900 m/s. The top and side rails support being mounted with accessories, while the muzzle can also be fitted with attachments.";
                price = 1750;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };			
            class arifle_Mk20_GL_plain_F {
                displayName = "Mk20 EGLM 5.56 mm";
                description = "The Mk20 is a gas operated, selective-fire assault rifle that is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a rate of fire of up to roughly ~ 857 rounds per minute with a muzzle velocity of 900 m/s while the grenade launcher can launch 40 mm grenades, ranging from harmless smoke/flare shells to high-explosive (HE) rounds. The top and side rails support being mounted with accessories, while the muzzle can also be fitted with attachments.";
                price = 2450;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };			
            class arifle_Mk20_GL_F {
                displayName = "Mk20 EGLM 5.56 mm (Camo)";
                description = "The Mk20 is a gas operated, selective-fire assault rifle that is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a rate of fire of up to roughly ~ 857 rounds per minute with a muzzle velocity of 900 m/s while the grenade launcher can launch 40 mm grenades, ranging from harmless smoke/flare shells to high-explosive (HE) rounds. The top and side rails support being mounted with accessories, while the muzzle can also be fitted with attachments.";
                price = 2450;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_TRG20_F {
                displayName = "	TRG-20 5.56 mm";
                description = "The TRG-20 is a carbine variant of the baseline TRG-21. As with its parent weapon, it is chambered to fire 5.56×45 mm NATO ammunition, It loads from the same 30-round STANAG magazines and completely identical performance-wise, save for having a lower muzzle velocity of 840 m/s instead. The TRG-20 has the same ability to mount accessories on its top and side rails, and can be fitted with muzzle attachments.";
                price = 1800;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_TRG21_F {
                displayName = "TRG-21 5.56 mm";
                description = "The TRG-21 is a gas operated, selective-fire assault rifle that is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a fire rate of up to 750 rounds per minute with a muzzle velocity of 920 m/s. The top and side rails support being mounted with optical sights and side rail accessories, while the muzzle can be fitted with suppressor attachments.";
                price = 1850;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_TRG21_GL_F {
                displayName = "TRG-21 EGLM 5.56 mm";
                description = "The TRG-21 EGLM is a modified version of the baseline TRG-21 rifle that has an underbarrel grenade launcher attached to it, As with its parent weapon, it is also chambered to fire the same 5.56×45 mm NATO round, while the grenade launcher can launch 40 mm grenades with either smoke, flare or high-explosive (HE) warheads.";
                price = 2550;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_SPAR_01_blk_F {
                displayName = "SPAR-16 5.56 mm (Black)";
                description = "The SPAR-16 is a short-stroke, gas piston-operated assault rifle with a rotating bolt that forms the baseline model of the SPAR-16 family. Along with its sub-variants, it is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a fire rate of up to 857 rounds per minute with a muzzle velocity of 800 m/s. The SPAR-16 accepts accessories on its top, side and underbarrel rails and can also be fitted with muzzle attachments.";
                price = 1900;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_SPAR_01_khk_F {
                displayName = "SPAR-16 5.56 mm (Khaki)";
                description = "The SPAR-16 is a short-stroke, gas piston-operated assault rifle with a rotating bolt that forms the baseline model of the SPAR-16 family. Along with its sub-variants, it is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a fire rate of up to 857 rounds per minute with a muzzle velocity of 800 m/s. The SPAR-16 accepts accessories on its top, side and underbarrel rails and can also be fitted with muzzle attachments.";
                price = 1900;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_SPAR_01_snd_F {
                displayName = "SPAR-16 5.56 mm (Sand)";
                description = "The SPAR-16 is a short-stroke, gas piston-operated assault rifle with a rotating bolt that forms the baseline model of the SPAR-16 family. Along with its sub-variants, it is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a fire rate of up to 857 rounds per minute with a muzzle velocity of 800 m/s. The SPAR-16 accepts accessories on its top, side and underbarrel rails and can also be fitted with muzzle attachments.";
                price = 1900;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_SPAR_01_GL_blk_F {
                displayName = "SPAR-16 GL 5.56 mm (Black)";
                description = "The SPAR-16 GL is a modified version of the baseline SPAR-16 model that has a grenade launcher attached to it, As with its parent model, it is also chambered to fire the 5.56×45 mm NATO round and can launch 40 mm grenades from its underbarrel grenade launcher.";
                price = 2400;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_SPAR_01_GL_khk_F {
                displayName = "SPAR-16 GL 5.56 mm (Khaki)";
                description = "The SPAR-16 GL is a modified version of the baseline SPAR-16 model that has a grenade launcher attached to it, As with its parent model, it is also chambered to fire the 5.56×45 mm NATO round and can launch 40 mm grenades from its underbarrel grenade launcher.";
                price = 2400;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_SPAR_01_GL_snd_F {
                displayName = "SPAR-16 GL 5.56 mm (Sand)";
                description = "The SPAR-16 GL is a modified version of the baseline SPAR-16 model that has a grenade launcher attached to it, As with its parent model, it is also chambered to fire the 5.56×45 mm NATO round and can launch 40 mm grenades from its underbarrel grenade launcher.";
                price = 2400;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_CTAR_blk_F {
                displayName = "CAR-95 5.8 mm (Black)";
                description = "The CAR-95 is the baseline variant of the CAR-95 family. Along with its sub-variants, it is chambered to fire the 5.8×42 mm round, It loads from 30-round curved magazines and can attain a fire rate of roughly ~ 652 rounds per minute, with a muzzle velocity of 930 m/s. The CAR-95 can fit accessories on both its top and side rails and can also mount muzzle attachments.";
                price = 1950;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_CTAR_hex_F {
                displayName = "CAR-95 5.8 mm (Hex)";
                description = "The CAR-95 is the baseline variant of the CAR-95 family. Along with its sub-variants, it is chambered to fire the 5.8×42 mm round, It loads from 30-round curved magazines and can attain a fire rate of roughly ~ 652 rounds per minute, with a muzzle velocity of 930 m/s. The CAR-95 can fit accessories on both its top and side rails and can also mount muzzle attachments.";
                price = 1950;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_CTAR_ghex_F {
                displayName = "CAR-95 5.8 mm (Green Hex)";
                description = "The CAR-95 is the baseline variant of the CAR-95 family. Along with its sub-variants, it is chambered to fire the 5.8×42 mm round, It loads from 30-round curved magazines and can attain a fire rate of roughly ~ 652 rounds per minute, with a muzzle velocity of 930 m/s. The CAR-95 can fit accessories on both its top and side rails and can also mount muzzle attachments.";
                price = 1950;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_CTAR_GL_blk_F {
                displayName = "CAR-95 GL 5.8 mm (Black)";
                description = "The CAR-95 GL is simply a modified version of the baseline CAR-95 variant that has an underbarrel grenade launcher attached to it, As with its parent model, it is also chambered to fire the 5.8×42 mm round while the UGL can launch 40 mm grenades.";
                price = 2450;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_CTAR_GL_hex_F {
                displayName = "CAR-95 GL 5.8 mm (Hex)";
                description = "The CAR-95 GL is simply a modified version of the baseline CAR-95 variant that has an underbarrel grenade launcher attached to it, As with its parent model, it is also chambered to fire the 5.8×42 mm round while the UGL can launch 40 mm grenades.";
                price = 2450;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_CTAR_GL_ghex_F {
                displayName = "CAR-95 GL 5.8 mm (Green Hex)";
                description = "The CAR-95 GL is simply a modified version of the baseline CAR-95 variant that has an underbarrel grenade launcher attached to it, As with its parent model, it is also chambered to fire the 5.8×42 mm round while the UGL can launch 40 mm grenades.";
                price = 2450;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };			
            class arifle_ARX_blk_F {
                displayName = "Type 115 6.5 mm (Black)";
                description = "The Type 115 is a selective-fire assault rifle that is primarily chambered to fire caseless 6.5×39 mm ammunition. It also has an underbarrel anti-materiel rifle module that is designed to fire specialised .50 BW rounds,It loads from the same 30-round box magazines used by Mediterranean CSAT Katiba assault rifles, and can reach a fire rate of up to 895 rounds per minute with a muzzle velocity of 800 m/s. The Type 115 accepts accessories on all three of its rails; top, side, and underbarrel (located beneath the AMR module) and can mount attachments onto its muzzle as well.";
                price = 1850;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_ARX_ghex_F {
                displayName = "Type 115 6.5 mm (Green Hex)";
                description = "The Type 115 is a selective-fire assault rifle that is primarily chambered to fire caseless 6.5×39 mm ammunition. It also has an underbarrel anti-materiel rifle module that is designed to fire specialised .50 BW rounds,It loads from the same 30-round box magazines used by Mediterranean CSAT Katiba assault rifles, and can reach a fire rate of up to 895 rounds per minute with a muzzle velocity of 800 m/s. The Type 115 accepts accessories on all three of its rails; top, side, and underbarrel (located beneath the AMR module) and can mount attachments onto its muzzle as well.";
                price = 1850;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_ARX_hex_F {
                displayName = "Type 115 6.5 mm (Hex)";
                description = "The Type 115 is a selective-fire assault rifle that is primarily chambered to fire caseless 6.5×39 mm ammunition. It also has an underbarrel anti-materiel rifle module that is designed to fire specialised .50 BW rounds,It loads from the same 30-round box magazines used by Mediterranean CSAT Katiba assault rifles, and can reach a fire rate of up to 895 rounds per minute with a muzzle velocity of 800 m/s. The Type 115 accepts accessories on all three of its rails; top, side, and underbarrel (located beneath the AMR module) and can mount attachments onto its muzzle as well.";
                price = 1850;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_Katiba_C_F {
                displayName = "Katiba Carbine 6.5 mm";
                description = "The Katiba Carbine is a compact variant of the baseline Katiba. Just like its parent model, it is chambered to fire the same caseless 6.5×39 mm round, It loads from 30-round box magazines and has the same rate of fire (800 rounds per minute). The Katiba Carbine accepts being mounted with accessories on its top and side rails, and can be fitted with muzzle attachments.";
                price = 1850;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_Katiba_F {
                displayName = "Katiba 6.5 mm";
                description = "The Katiba GL is simply a modified version of the baseline Katiba model that has an underbarrel grenade launcher attached to it, As with its parent counterpart, it is also chambered to fire caseless 6.5×39 mm ammunition, while the grenade launcher can fire 40 mm grenades. It loads from the same 30-round box magazines and is statistics-wise, identical to the baseline Katiba rifle. It can fit accessories onto both its top and side rails while also accepting muzzle attachments.";
                price = 1900;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };
            class arifle_Katiba_GL_F {
                displayName = "Katiba GL 6.5 mm";
                description = "The Katiba is the baseline variant of the Katiba series. Along with its sub-variants, it is chambered to fire the caseless 6.5×39 mm round, It loads from 30-round box magazines and can attain a rate of fire of up to 800 rounds per minute, with a muzzle velocity of 900 m/s. The Katiba accepts accessories on its top and side rails and can be fitted with muzzle attachments.";
                price = 2450;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count
            };			
           class arifle_MXC_F {
                displayName = "MXC 6.5 mm carbine Rifle";
                description = "The MXC is a carbine variant of the baseline MX rifle. Like its parent weapon, it is also chambered to fire caseless 6.5×39 mm NATO ammunition, It loads from the same 30-round magazines and has an identical maximum fire rate of 625 rounds per minute. It can still be fitted with accessories onto its top and side rails, while also being able to mount attachments onto its muzzle, but cannot attach underbarrel accessories.";
                price = 1800;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
           class arifle_MXC_Black_F {
                displayName = "MXC 6.5 mm carbine Rifle (Black)";
                description = "The MXC is a carbine variant of the baseline MX rifle. Like its parent weapon, it is also chambered to fire caseless 6.5×39 mm NATO ammunition, It loads from the same 30-round magazines and has an identical maximum fire rate of 625 rounds per minute. It can still be fitted with accessories onto its top and side rails, while also being able to mount attachments onto its muzzle, but cannot attach underbarrel accessories.";
                price = 1800;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
           class arifle_MXC_khk_F {
                displayName = "MXC 6.5 mm carbine Rifle (Khaki)";
                description = "The MXC is a carbine variant of the baseline MX rifle. Like its parent weapon, it is also chambered to fire caseless 6.5×39 mm NATO ammunition, It loads from the same 30-round magazines and has an identical maximum fire rate of 625 rounds per minute. It can still be fitted with accessories onto its top and side rails, while also being able to mount attachments onto its muzzle, but cannot attach underbarrel accessories.";
                price = 1800;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class arifle_MX_F {
                displayName = "MX 6.5 mm Assault Rifle";
                description = "The MX is a selective-fire assault rifle chambered to fire the caseless 6.5×39 mm NATO round. It is the baseline assault rifle model upon which all other MX variants are based on, It loads from 30-round double-stack STANAGs, and can attain a fire rate of up to 625 rounds per minute with a muzzle velocity of 800 m/s. The MX accepts accessories on all three of its rails; top, side, and underbarrel, while also being able to mount attachments onto its muzzle.";
                price = 2000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MX_Black_F {
                displayName = "MX 6.5 mm Assault Rifle (Black)";
                description = "The MX is a selective-fire assault rifle chambered to fire the caseless 6.5×39 mm NATO round. It is the baseline assault rifle model upon which all other MX variants are based on, It loads from 30-round double-stack STANAGs, and can attain a fire rate of up to 625 rounds per minute with a muzzle velocity of 800 m/s. The MX accepts accessories on all three of its rails; top, side, and underbarrel, while also being able to mount attachments onto its muzzle.";
                price = 2000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MX_khk_F {
                displayName = "MX 6.5 mm Assault Rifle (Khaki)";
                description = "The MX is a selective-fire assault rifle chambered to fire the caseless 6.5×39 mm NATO round. It is the baseline assault rifle model upon which all other MX variants are based on, It loads from 30-round double-stack STANAGs, and can attain a fire rate of up to 625 rounds per minute with a muzzle velocity of 800 m/s. The MX accepts accessories on all three of its rails; top, side, and underbarrel, while also being able to mount attachments onto its muzzle.";
                price = 2000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class arifle_MX_GL_F {
                displayName = "MX 3GL 6.5 mm";
                description = "The MX is a selective-fire assault rifle chambered to fire the caseless 6.5×39 mm NATO round. It is the baseline assault rifle model upon which all other MX variants are based on, It loads from 30-round double-stack STANAGs, and can attain a fire rate of up to 625 rounds per minute with a muzzle velocity of 800 m/s, The underbarrel grenade launcher has a quadrant sight with a red dot for the operator to aim with, which can be zeroed up to a maximum range of 400 m. The MX accepts accessories on all three of its rails; top, side, and underbarrel, while also being able to mount attachments onto its muzzle.";
                price = 2500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MX_GL_Black_F {
                displayName = "MX 3GL 6.5 mm (Black)";
                description = "The MX is a selective-fire assault rifle chambered to fire the caseless 6.5×39 mm NATO round. It is the baseline assault rifle model upon which all other MX variants are based on, It loads from 30-round double-stack STANAGs, and can attain a fire rate of up to 625 rounds per minute with a muzzle velocity of 800 m/s, The underbarrel grenade launcher has a quadrant sight with a red dot for the operator to aim with, which can be zeroed up to a maximum range of 400 m. The MX accepts accessories on all three of its rails; top, side, and underbarrel, while also being able to mount attachments onto its muzzle.";
                price = 2500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MX_GL_khk_F {
                displayName = "MX 3GL 6.5 mm (Khaki)";
                description = "The MX is a selective-fire assault rifle chambered to fire the caseless 6.5×39 mm NATO round. It is the baseline assault rifle model upon which all other MX variants are based on, It loads from 30-round double-stack STANAGs, and can attain a fire rate of up to 625 rounds per minute with a muzzle velocity of 800 m/s, The underbarrel grenade launcher has a quadrant sight with a red dot for the operator to aim with, which can be zeroed up to a maximum range of 400 m. The MX accepts accessories on all three of its rails; top, side, and underbarrel, while also being able to mount attachments onto its muzzle.";
                price = 2500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_F {
                displayName = "Promet 6.5 mm";
                description = "The Promet is a selective-fire bullpup assault rifle chambered for the 6.5×39 mm NATO caseless round, It loads exclusively from 30-round magazines designed specifically for use with the Promet family, and can attain a fire rate of 800 rounds per minute with a muzzle velocity of 840 m/s. The Promet supports being fitted with accessories on its top and side rails and can also mount muzzle attachments.";
                price = 2050;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_black_F {
                displayName = "Promet 6.5 mm (Black)";
                description = "The Promet is a selective-fire bullpup assault rifle chambered for the 6.5×39 mm NATO caseless round, It loads exclusively from 30-round magazines designed specifically for use with the Promet family, and can attain a fire rate of 800 rounds per minute with a muzzle velocity of 840 m/s. The Promet supports being fitted with accessories on its top and side rails and can also mount muzzle attachments.";
                price = 2050;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_sand_F {
                displayName = "Promet 6.5 mm (Sand)";
                description = "The Promet is a selective-fire bullpup assault rifle chambered for the 6.5×39 mm NATO caseless round, It loads exclusively from 30-round magazines designed specifically for use with the Promet family, and can attain a fire rate of 800 rounds per minute with a muzzle velocity of 840 m/s. The Promet supports being fitted with accessories on its top and side rails and can also mount muzzle attachments.";
                price = 2050;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_camo_F {
                displayName = "Promet 6.5 mm (Camo)";
                description = "The Promet is a selective-fire bullpup assault rifle chambered for the 6.5×39 mm NATO caseless round, It loads exclusively from 30-round magazines designed specifically for use with the Promet family, and can attain a fire rate of 800 rounds per minute with a muzzle velocity of 840 m/s. The Promet supports being fitted with accessories on its top and side rails and can also mount muzzle attachments.";
                price = 2050;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_UBS_F {
                displayName = "Promet SG 6.5 mm";
                description = "Like the GL variant, the Promet SG is simply a modified Promet rifle fitted with an underbarrel shotgun module, Chambered to fire 12 Gauge shotshells of either pellet or slug variety, the TSP-12 module can attain a fire rate of up to 200 rounds per minute. It loads exclusively from 6-round cylinders.";
                price = 2150;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_UBS_black_F {
                displayName = "Promet SG 6.5 mm (Black)";
                description = "Like the GL variant, the Promet SG is simply a modified Promet rifle fitted with an underbarrel shotgun module, Chambered to fire 12 Gauge shotshells of either pellet or slug variety, the TSP-12 module can attain a fire rate of up to 200 rounds per minute. It loads exclusively from 6-round cylinders.";
                price = 2150;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_UBS_sand_F {
                displayName = "Promet SG 6.5 mm (Sand)";
                description = "Like the GL variant, the Promet SG is simply a modified Promet rifle fitted with an underbarrel shotgun module, Chambered to fire 12 Gauge shotshells of either pellet or slug variety, the TSP-12 module can attain a fire rate of up to 200 rounds per minute. It loads exclusively from 6-round cylinders.";
                price = 2150;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_UBS_camo_F {
                displayName = "Promet SG 6.5 mm (Camo)";
                description = "Like the GL variant, the Promet SG is simply a modified Promet rifle fitted with an underbarrel shotgun module, Chambered to fire 12 Gauge shotshells of either pellet or slug variety, the TSP-12 module can attain a fire rate of up to 200 rounds per minute. It loads exclusively from 6-round cylinders.";
                price = 2150;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_GL_F {
                displayName = "Promet GL 6.5 mm";
                description = "The Promet GL is simply a modified configuration of the baseline Promet rifle fitted with an underbarrel grenade launcher module, It is chambered to fire 6.5×39 mm NATO caseless ammunition while its underbarrel UGP-40 module can load 40 mm grenade rounds universally shared with other rifle UGLs. It can be fitted with accessories on its top and side rails and supports muzzle attachments.";
                price = 2450;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_GL_black_F {
                displayName = "Promet GL 6.5 mm (Black)";
                description = "The Promet GL is simply a modified configuration of the baseline Promet rifle fitted with an underbarrel grenade launcher module, It is chambered to fire 6.5×39 mm NATO caseless ammunition while its underbarrel UGP-40 module can load 40 mm grenade rounds universally shared with other rifle UGLs. It can be fitted with accessories on its top and side rails and supports muzzle attachments.";
                price = 2450;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_GL_sand_F {
                displayName = "Promet GL 6.5 mm (Sand)";
                description = "The Promet GL is simply a modified configuration of the baseline Promet rifle fitted with an underbarrel grenade launcher module, It is chambered to fire 6.5×39 mm NATO caseless ammunition while its underbarrel UGP-40 module can load 40 mm grenade rounds universally shared with other rifle UGLs. It can be fitted with accessories on its top and side rails and supports muzzle attachments.";
                price = 2450;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_GL_camo_F {
                displayName = "	Promet GL 6.5 mm (Camo)";
                description = "The Promet GL is simply a modified configuration of the baseline Promet rifle fitted with an underbarrel grenade launcher module, It is chambered to fire 6.5×39 mm NATO caseless ammunition while its underbarrel UGP-40 module can load 40 mm grenade rounds universally shared with other rifle UGLs. It can be fitted with accessories on its top and side rails and supports muzzle attachments.";
                price = 2450;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
           class arifle_AKM_FL_F {
                displayName = "AKM 7.62 mm";
                description = "The AKS is simply a modified variant of the AKM assault rifle that uses a folding stock as opposed to a fixed wooden stock. The AKS is chambered to fire the same 7.62×39 mm round as its parent weapon, Like the AKM, it loads from 30-round curved steel magazines and has the same rate of fire and muzzle velocity.";
                price = 2100;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
            class arifle_AKM_F {
                displayName = "AKM 7.62 mm";
                description = "The AKM is a Russian-made gas operated assault rifle developed in the 1950's that is chambered to fire the 7.62×39 mm round, It loads from 30-round curved steel magazines and can achieve a rate of fire of up to 600 rounds per minute, with a muzzle velocity of 710 m/s. The AKM lacks the ability to mount accessories and does not come in any variation that has optical sights or muzzle attachments.";
                price = 2100;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
            class arifle_AK12U_F {
                displayName = "AKU-12 7.62 mm";
                description = "A carbine configuration of its parent rifle, the AKU-12 is much lighter to wield and can still load both regular 30- and 75-round magazines, Its rate of fire remains unchanged with both fire modes. Attachments are supported on all three of its rails: top, side and underbarrel, along with the muzzle itself.";
                price = 2200;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_AK12U_arid_F {
                displayName = "AKU-12 7.62 mm (Arid)";
                description = "A carbine configuration of its parent rifle, the AKU-12 is much lighter to wield and can still load both regular 30- and 75-round magazines, Its rate of fire remains unchanged with both fire modes. Attachments are supported on all three of its rails: top, side and underbarrel, along with the muzzle itself.";
                price = 2200;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_AK12U_lush_F {
                displayName = "AKU-12 7.62 mm (Lush)";
                description = "A carbine configuration of its parent rifle, the AKU-12 is much lighter to wield and can still load both regular 30- and 75-round magazines, Its rate of fire remains unchanged with both fire modes. Attachments are supported on all three of its rails: top, side and underbarrel, along with the muzzle itself.";
                price = 2200;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_AK12_F {
                displayName = "AK-12 7.62 mm";
                description = "The AK-12 is a gas operated, selective-fire assault rifle with a long stroke piston. It is chambered to fire the 7.62×39 mm round, It can load either 30-round polymer magazines designed specifically for the AK-12, or older curved steel magazines used by the AKM. It retains a variable rate of fire that ranges from 600 rounds per minute up to 1,000 rounds on burst mode. The AK-12 has a muzzle velocity of 730 m/s and can accept attachments on all three of its rails; top, side, underbarrel and muzzle.";
                price = 2300;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_AK12_arid_F {
                displayName = "AK-12 7.62 mm (Arid)";
                description = "The AK-12 is a gas operated, selective-fire assault rifle with a long stroke piston. It is chambered to fire the 7.62×39 mm round, It can load either 30-round polymer magazines designed specifically for the AK-12, or older curved steel magazines used by the AKM. It retains a variable rate of fire that ranges from 600 rounds per minute up to 1,000 rounds on burst mode. The AK-12 has a muzzle velocity of 730 m/s and can accept attachments on all three of its rails; top, side, underbarrel and muzzle.";
                price = 2300;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
            class arifle_AK12_lush_F {
                displayName = "AK-12 7.62 mm (Lush)";
                description = "The AK-12 is a gas operated, selective-fire assault rifle with a long stroke piston. It is chambered to fire the 7.62×39 mm round, It can load either 30-round polymer magazines designed specifically for the AK-12, or older curved steel magazines used by the AKM. It retains a variable rate of fire that ranges from 600 rounds per minute up to 1,000 rounds on burst mode. The AK-12 has a muzzle velocity of 730 m/s and can accept attachments on all three of its rails; top, side, underbarrel and muzzle.";
                price = 2300;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class arifle_AK12_GL_F {
                displayName = "AK-12 GL 7.62 mm";
                description = "The AK-12 GL is simply a modified version of the baseline AK-12 rifle that has an underbarrel grenade launcher attached to it, Like its parent, it is also chambered to fire 7.62×39 mm while feeding from the same 30-round curved polymer magazines. The underbarrel grenade launcher can launch 40 mm grenades universally shared with other rifle UGLs.";
                price = 2700;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class arifle_AK12_GL_lush_F {
                displayName = "AK-12 GL 7.62 mm (Lush)";
                description = "The AK-12 GL is simply a modified version of the baseline AK-12 rifle that has an underbarrel grenade launcher attached to it, Like its parent, it is also chambered to fire 7.62×39 mm while feeding from the same 30-round curved polymer magazines. The underbarrel grenade launcher can launch 40 mm grenades universally shared with other rifle UGLs.";
                price = 2700;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class arifle_AK12_GL_arid_F {
                displayName = "AK-12 GL 7.62 mm (Arid)";
                description = "The AK-12 GL is simply a modified version of the baseline AK-12 rifle that has an underbarrel grenade launcher attached to it, Like its parent, it is also chambered to fire 7.62×39 mm while feeding from the same 30-round curved polymer magazines. The underbarrel grenade launcher can launch 40 mm grenades universally shared with other rifle UGLs.";
                price = 2700;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
	};		
        class Mweapons {
            displayName = "Marksman Rifles";
            kindOf = "Weapons";
            //items of this category:
			
			class arifle_MXM_F {
                displayName = "MXM 6.5 mm Marksman rifle";
                description = "The MXM is designed specifically to serve as a marksman rifle, It still feeds from the same 30-round, 6.5 mm NATO loaded magazines and can accept attachments on all three rails along with muzzle attachments. Thanks to its longer barrel, the MXM retains the highest muzzle velocity out of all the MX variants - an impressive 920 m/s in contrast to the baseline MX's 800 (or even the MXC's meagre 720). This significantly increases the MXM's range to well over 800 metres, which is traditionally the domain of dedicated 7.62 mm-chambered DMRs.";
                price = 2500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class arifle_MXM_Black_F {
                displayName = "MXM 6.5 mm Marksman rifle (Black)";
                description = "The MXM is designed specifically to serve as a marksman rifle, It still feeds from the same 30-round, 6.5 mm NATO loaded magazines and can accept attachments on all three rails along with muzzle attachments. Thanks to its longer barrel, the MXM retains the highest muzzle velocity out of all the MX variants - an impressive 920 m/s in contrast to the baseline MX's 800 (or even the MXC's meagre 720). This significantly increases the MXM's range to well over 800 metres, which is traditionally the domain of dedicated 7.62 mm-chambered DMRs.";
                price = 2500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MXM_khk_F {
                displayName = "MXM 6.5 mm Marksman rifle (Khaki)";
                description = "The MXM is designed specifically to serve as a marksman rifle, It still feeds from the same 30-round, 6.5 mm NATO loaded magazines and can accept attachments on all three rails along with muzzle attachments. Thanks to its longer barrel, the MXM retains the highest muzzle velocity out of all the MX variants - an impressive 920 m/s in contrast to the baseline MX's 800 (or even the MXC's meagre 720). This significantly increases the MXM's range to well over 800 metres, which is traditionally the domain of dedicated 7.62 mm-chambered DMRs.";
                price = 2500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_Mark_F {
                displayName = "Promet MR 6.5 mm";
                description = "The Promet MR is a reconfigured version of the baseline Promet rifle designed to serve in a marksman role. It utilises a longer barrel which enhances its muzzle velocity and range, Compared to the regular Promet, the MR variant fires rounds with a greater velocity of 900 m/s instead. Accuracy is also improved and like its parent weapon, the Promet MR is superior to its American-made counterpart when it comes to dispersion at distances beyond ~ 600 metres.";
                price = 2550;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_Mark_black_F {
                displayName = "Promet MR 6.5 mm (Black)";
                description = "The Promet MR is a reconfigured version of the baseline Promet rifle designed to serve in a marksman role. It utilises a longer barrel which enhances its muzzle velocity and range, Compared to the regular Promet, the MR variant fires rounds with a greater velocity of 900 m/s instead. Accuracy is also improved and like its parent weapon, the Promet MR is superior to its American-made counterpart when it comes to dispersion at distances beyond ~ 600 metres.";
                price = 2550;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_Mark_sand_F {
                displayName = "Promet MR 6.5 mm (Sand)";
                description = "The Promet MR is a reconfigured version of the baseline Promet rifle designed to serve in a marksman role. It utilises a longer barrel which enhances its muzzle velocity and range, Compared to the regular Promet, the MR variant fires rounds with a greater velocity of 900 m/s instead. Accuracy is also improved and like its parent weapon, the Promet MR is superior to its American-made counterpart when it comes to dispersion at distances beyond ~ 600 metres.";
                price = 2550;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MSBS65_Mark_camo_F {
                displayName = "Promet MR 6.5 mm (Camo)";
                description = "The Promet MR is a reconfigured version of the baseline Promet rifle designed to serve in a marksman role. It utilises a longer barrel which enhances its muzzle velocity and range, Compared to the regular Promet, the MR variant fires rounds with a greater velocity of 900 m/s instead. Accuracy is also improved and like its parent weapon, the Promet MR is superior to its American-made counterpart when it comes to dispersion at distances beyond ~ 600 metres.";
                price = 2550;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
            class srifle_DMR_06_hunter_F {
                displayName = "Mk14 7.62 mm (Marksman rifle Classic)";
                description = "The Mk14 is a selective-fire, gas operated battle rifle that is chambered to fire the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 705 rounds per minute, with a muzzle velocity of 850 m/s. The Mk14 only accepts optical sights on its top rail but can also fit bipods onto a small rail located beneath the forward end of the barrel, while also being able to mount attachments onto its muzzle.";
                price = 2700;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class srifle_DMR_06_camo_F {
                displayName = "Mk14 7.62 mm Marksman rifle (Camo)";
                description = "The Mk14 is a selective-fire, gas operated battle rifle that is chambered to fire the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 705 rounds per minute, with a muzzle velocity of 850 m/s. The Mk14 only accepts optical sights on its top rail but can also fit bipods onto a small rail located beneath the forward end of the barrel, while also being able to mount attachments onto its muzzle.";
                price = 2700;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class srifle_DMR_06_olive_F {
                displayName = "Mk14 7.62 mm Marksman rifle (Olive)";
                description = "The Mk14 is a selective-fire, gas operated battle rifle that is chambered to fire the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 705 rounds per minute, with a muzzle velocity of 850 m/s. The Mk14 only accepts optical sights on its top rail but can also fit bipods onto a small rail located beneath the forward end of the barrel, while also being able to mount attachments onto its muzzle.";
                price = 2700;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class srifle_EBR_F {
                displayName = "Mk18 ABR 7.62 mm Marksman rifle";
                description = "The Mk18 ABR is a selective fire, gas operated, rotating bolt battle rifle that is chambered for the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 705 rounds per minute on full auto, with a muzzle velocity of 850 m/s. The Mk18 can accept being fitted with accessories on its top, side and underbarrel rails, and can also be suppressed with muzzle attachments.";
                price = 2800;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
           class srifle_DMR_03_F {
                displayName = "Mk-I EMR 7.62 mm Marksman rifle (Black)";
                description = "The Mk-I EMR is a battle rifle that is chambered to fire the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 600 rounds per minute on full auto, with a muzzle velocity of 940 m/s. The EMR accepts accessories on its top, side and underbarrel rails, and can also mount attachments on its muzzle.";
                price = 3000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_03_khaki_F {
                displayName = "Mk-I EMR 7.62 mm Marksman rifle (Khaki)";
                description = "The Mk-I EMR is a battle rifle that is chambered to fire the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 600 rounds per minute on full auto, with a muzzle velocity of 940 m/s. The EMR accepts accessories on its top, side and underbarrel rails, and can also mount attachments on its muzzle.";
                price = 3000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_03_tan_F {
                displayName = "Mk-I EMR 7.62 mm Marksman rifle (Sand)";
                description = "The Mk-I EMR is a battle rifle that is chambered to fire the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 600 rounds per minute on full auto, with a muzzle velocity of 940 m/s. The EMR accepts accessories on its top, side and underbarrel rails, and can also mount attachments on its muzzle.";
                price = 3000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
           class srifle_DMR_03_multicam_F {
                displayName = "Mk-I EMR 7.62 mm Marksman rifle (Camo)";
                description = "The Mk-I EMR is a battle rifle that is chambered to fire the 7.62×51 mm NATO round, It loads from 20-round box magazines and can attain a fire rate of up to 600 rounds per minute on full auto, with a muzzle velocity of 940 m/s. The EMR accepts accessories on its top, side and underbarrel rails, and can also mount attachments on its muzzle.";
                price = 3000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_SPAR_03_blk_F {
                displayName = "SPAR-17 7.62 mm Marksman rifle (Black)";
                description = "The SPAR-17 is a selective-fire, short-stroke, gas piston-operated battle rifle with a rotating bolt that is chambered for the 7.62×51 mm NATO round, It loads from 20-round magazines and can attain a fire rate of up to 600 rounds per minute on full auto, with a muzzle velocity of 900 m/s. The SPAR-17 accepts accessories on its top, side and underbarrel rails, and can also mount attachments onto its muzzle.";
                price = 3000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class arifle_SPAR_03_khk_F {
                displayName = "SPAR-17 7.62 mm Marksman rifle (Khaki)";
                description = "The SPAR-17 is a selective-fire, short-stroke, gas piston-operated battle rifle with a rotating bolt that is chambered for the 7.62×51 mm NATO round, It loads from 20-round magazines and can attain a fire rate of up to 600 rounds per minute on full auto, with a muzzle velocity of 900 m/s. The SPAR-17 accepts accessories on its top, side and underbarrel rails, and can also mount attachments onto its muzzle.";
                price = 3000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class arifle_SPAR_03_snd_F {
                displayName = "SPAR-17 7.62 mm Marksman rifle (Sand)";
                description = "The SPAR-17 is a selective-fire, short-stroke, gas piston-operated battle rifle with a rotating bolt that is chambered for the 7.62×51 mm NATO round, It loads from 20-round magazines and can attain a fire rate of up to 600 rounds per minute on full auto, with a muzzle velocity of 900 m/s. The SPAR-17 accepts accessories on its top, side and underbarrel rails, and can also mount attachments onto its muzzle.";
                price = 3000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
           class srifle_DMR_04_F {
                displayName = "ASP-1 Kir 12.7 mm Marksman rifle (Black)";
                description = "The ASP-1 Kir is a semi-automatic, integrally-suppressed special sniper rifle chambered to fire the subsonic 12.7×54 mm round, It loads from 10-round box magazines and can attain a fire rate of up to 600 rounds per minute, with a muzzle velocity of just 290 m/s. It accepts accessories on all three of its rails: top, side, underbarrel, but cannot be fitted with any muzzle attachments as it uses an integrated suppressor.";
                price = 3200;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_04_Tan_F {
                displayName = "ASP-1 Kir 12.7 mm Marksman rifle (Tan)";
                description = "The ASP-1 Kir is a semi-automatic, integrally-suppressed special sniper rifle chambered to fire the subsonic 12.7×54 mm round, It loads from 10-round box magazines and can attain a fire rate of up to 600 rounds per minute, with a muzzle velocity of just 290 m/s. It accepts accessories on all three of its rails: top, side, underbarrel, but cannot be fitted with any muzzle attachments as it uses an integrated suppressor.";
                price = 3200;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
           class srifle_DMR_05_blk_F {
                displayName = "Cyrus 9.3 mm Marksman rifle (Black)";
                description = "The Cyrus is a gas operated, selective-fire marksman rifle chambered to fire the 9.3×64 mm round, It loads from 10-round box magazines and can attain a fire rate of up to 300 rounds per minute, with a muzzle velocity of 870 m/s. The Cyrus supports being mounted with accessories on its top, side, and underbarrel rails, and can be fitted with muzzle attachments.";
                price = 3400;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_05_hex_F {
                displayName = "Cyrus 9.3 mm Marksman rifle (Hex)";
                description = "The Cyrus is a gas operated, selective-fire marksman rifle chambered to fire the 9.3×64 mm round, It loads from 10-round box magazines and can attain a fire rate of up to 300 rounds per minute, with a muzzle velocity of 870 m/s. The Cyrus supports being mounted with accessories on its top, side, and underbarrel rails, and can be fitted with muzzle attachments.";
                price = 3400;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_05_tan_f {
                displayName = "Cyrus 9.3 mm Marksman rifle (Tan)";
                description = "The Cyrus is a gas operated, selective-fire marksman rifle chambered to fire the 9.3×64 mm round, It loads from 10-round box magazines and can attain a fire rate of up to 300 rounds per minute, with a muzzle velocity of 870 m/s. The Cyrus supports being mounted with accessories on its top, side, and underbarrel rails, and can be fitted with muzzle attachments.";
                price = 3400;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_02_F {
                displayName = "MAR-10 .338 Marksman rifle (Black)";
                description = "The MAR-10 is a piston driven, semi-automatic marksman rifle chambered to fire the .338 Lapua Magnum round, It loads from 10-round box magazines, and can attain a fire rate of up to 250 rounds per minute with a muzzle velocity of 915 m/s. It accepts accessories on all three of its rails; top, side, and underbarrel, and can have attachments mounted onto its muzzle.";
                price = 3500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_02_camo_F {
                displayName = "MAR-10 .338 Marksman rifle (Camo)";
                description = "The MAR-10 is a piston driven, semi-automatic marksman rifle chambered to fire the .338 Lapua Magnum round, It loads from 10-round box magazines, and can attain a fire rate of up to 250 rounds per minute with a muzzle velocity of 915 m/s. It accepts accessories on all three of its rails; top, side, and underbarrel, and can have attachments mounted onto its muzzle.";
                price = 3500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
           class srifle_DMR_02_sniper_F {
                displayName = "MAR-10 .338 Marksman rifle (Sand)";
                description = "The MAR-10 is a piston driven, semi-automatic marksman rifle chambered to fire the .338 Lapua Magnum round, It loads from 10-round box magazines, and can attain a fire rate of up to 250 rounds per minute with a muzzle velocity of 915 m/s. It accepts accessories on all three of its rails; top, side, and underbarrel, and can have attachments mounted onto its muzzle.";
                price = 3500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };						
	};
        class MGweapons {
            displayName = "Machine Guns";
            kindOf = "Weapons";
            //items of this category:
			
            class MMG_01_hex_F {
                displayName = "Navid 9.3 mm (Hex)";
                description = "The Navid is a gas operated medium machine gun that is chambered to fire the 9.3×64mm round, It feeds from 150-round belts stored in cloth pouches, and has a variable rate of fire depending on its current fire mode that can attain anywhere from just 705 rounds per minute up to an impressive 1,500 rounds per minute (on burst fire). It has a muzzle velocity of 785 m/s, and can fit accessories onto its top, side, and underbarrel rails. Unlike the Zafir LMG used by Mediterranean CSAT forces, the muzzle also supports being mounted with attachments.";
                price = 5500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 			
			};
            class MMG_01_tan_F {
                displayName = "Navid 9.3 mm (Tan)";
                description = "The Navid is a gas operated medium machine gun that is chambered to fire the 9.3×64mm round, It feeds from 150-round belts stored in cloth pouches, and has a variable rate of fire depending on its current fire mode that can attain anywhere from just 705 rounds per minute up to an impressive 1,500 rounds per minute (on burst fire). It has a muzzle velocity of 785 m/s, and can fit accessories onto its top, side, and underbarrel rails. Unlike the Zafir LMG used by Mediterranean CSAT forces, the muzzle also supports being mounted with attachments.";
                price = 5500;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 			
			};
            class MMG_02_black_F {
                displayName = "SPMG .338 (Black)";
                description = "The SPMG is a gas operated, long-stroke piston operated medium machine gun that is chambered to fire the .338 Norma Magnum round, It feeds from 130-round belts stored in cloth pouches, and can achieve a fire rate of up to 500 rounds per minute, with a muzzle velocity of 807 m/s. The SPMG can be fitted with accessories on its top, side, and underbarrel rails, and can mount attachments onto its muzzle.";
                price = 6000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 			
			};
            class MMG_02_camo_F {
                displayName = "SPMG .338 (MTP)";
                description = "The SPMG is a gas operated, long-stroke piston operated medium machine gun that is chambered to fire the .338 Norma Magnum round, It feeds from 130-round belts stored in cloth pouches, and can achieve a fire rate of up to 500 rounds per minute, with a muzzle velocity of 807 m/s. The SPMG can be fitted with accessories on its top, side, and underbarrel rails, and can mount attachments onto its muzzle.";
                price = 6000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 			
			};
            class MMG_02_sand_F {
                displayName = "SPMG .338 (Sand)";
                description = "The SPMG is a gas operated, long-stroke piston operated medium machine gun that is chambered to fire the .338 Norma Magnum round, It feeds from 130-round belts stored in cloth pouches, and can achieve a fire rate of up to 500 rounds per minute, with a muzzle velocity of 807 m/s. The SPMG can be fitted with accessories on its top, side, and underbarrel rails, and can mount attachments onto its muzzle.";
                price = 6000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 			
			};			
	};		
        class LMGweapons {
            displayName = "Light Machine Guns";
            kindOf = "Weapons";
            //items of this category:
			
            class arifle_SPAR_02_blk_F {
                displayName = "SPAR-16S 5.56 mm (Black)";
                description = "The SPAR-16 is a short-stroke, gas piston-operated assault rifle with a rotating bolt that forms the baseline model of the SPAR-16 family. Along with its sub-variants, it is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a fire rate of up to 857 rounds per minute with a muzzle velocity of 800 m/s. The SPAR-16 accepts accessories on its top, side and underbarrel rails and can also be fitted with muzzle attachments.";
                price = 3400;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_SPAR_02_khk_F {
                displayName = "SPAR-16S 5.56 mm (Khaki)";
                description = "The SPAR-16 is a short-stroke, gas piston-operated assault rifle with a rotating bolt that forms the baseline model of the SPAR-16 family. Along with its sub-variants, it is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a fire rate of up to 857 rounds per minute with a muzzle velocity of 800 m/s. The SPAR-16 accepts accessories on its top, side and underbarrel rails and can also be fitted with muzzle attachments.";
                price = 3400;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_SPAR_02_snd_F {
                displayName = "SPAR-16S 5.56 mm (Sand)";
                description = "The SPAR-16 is a short-stroke, gas piston-operated assault rifle with a rotating bolt that forms the baseline model of the SPAR-16 family. Along with its sub-variants, it is chambered to fire the 5.56×45 mm NATO round, It loads from 30-round STANAG magazines, and can attain a fire rate of up to 857 rounds per minute with a muzzle velocity of 800 m/s. The SPAR-16 accepts accessories on its top, side and underbarrel rails and can also be fitted with muzzle attachments.";
                price = 3400;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
            class LMG_03_F {
                displayName = "LIM-85 5.56 mm";
                description = "The LIM-85 is a belt fed, gas operated, selective-fire light machine gun that is chambered to fire the 5.56×45 mm NATO round, it feeds from 200-round linked belts stored in plastic boxes, and has a variable rate of fire that ranges from 400 up to 800 rounds per minute with a muzzle velocity of 915 m/s, The LIM-85 is capable of having accessories fitted to its top and side rails, and can also mount attachments onto its muzzle. It does not accept underbarrel accessories due to using an integrated grip pod.";
                price = 3700;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };			
            class arifle_CTARS_blk_F {
                displayName = "CAR-95-1 5.8mm (Black)";
                description = "The CAR-95-1 is a modified version of the baseline CAR-95 model that is specifically designed to be a squad automatic weapon. As with its parent model, it is also chambered to fire the 5.8×42 mm round, It loads from 100-round drums as opposed to the curved magazines of its parent, and is able to attain an increased rate of fire of up to 800 rounds per minute, along with having a slightly higher muzzle velocity of 970 m/s. The CAR-95-1 is able to mount accessories onto both its top and side rails, and can also be fitted with muzzle attachments. An integrated bipod can also be used to provide stability when firing sustained bursts.";
                price = 3800;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_CTARS_hex_F {
                displayName = "CAR-95-1 5.8mm (Hex)";
                description = "The CAR-95-1 is a modified version of the baseline CAR-95 model that is specifically designed to be a squad automatic weapon. As with its parent model, it is also chambered to fire the 5.8×42 mm round, It loads from 100-round drums as opposed to the curved magazines of its parent, and is able to attain an increased rate of fire of up to 800 rounds per minute, along with having a slightly higher muzzle velocity of 970 m/s. The CAR-95-1 is able to mount accessories onto both its top and side rails, and can also be fitted with muzzle attachments. An integrated bipod can also be used to provide stability when firing sustained bursts.";
                price = 3800;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
            class arifle_CTARS_ghex_F {
                displayName = "CAR-95-1 5.8mm (Green Hex)";
                description = "The CAR-95-1 is a modified version of the baseline CAR-95 model that is specifically designed to be a squad automatic weapon. As with its parent model, it is also chambered to fire the 5.8×42 mm round, It loads from 100-round drums as opposed to the curved magazines of its parent, and is able to attain an increased rate of fire of up to 800 rounds per minute, along with having a slightly higher muzzle velocity of 970 m/s. The CAR-95-1 is able to mount accessories onto both its top and side rails, and can also be fitted with muzzle attachments. An integrated bipod can also be used to provide stability when firing sustained bursts.";
                price = 3800;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
			class arifle_MX_SW_F {
                displayName = "MX SW 6.5 mm";
                description = "The MX SW is a modified variant of the baseline MX rifle that is designed specifically for suppression. Just like its parent rifle, it is also chambered to fire the same caseless 6.5×39mm NATO round, Unlike the baseline MX however, it primarily feeds from 100-round belts stored in quad stack magazines as opposed to 30-round STANAGs - though it can still optionally load the latter.";
                price = 3000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MX_SW_Black_F {
                displayName = "MX SW 6.5 mm (Black)";
                description = "The MX SW is a modified variant of the baseline MX rifle that is designed specifically for suppression. Just like its parent rifle, it is also chambered to fire the same caseless 6.5×39mm NATO round, Unlike the baseline MX however, it primarily feeds from 100-round belts stored in quad stack magazines as opposed to 30-round STANAGs - though it can still optionally load the latter.";
                price = 3000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_MX_SW_khk_F {
                displayName = "MX SW 6.5 mm (Khaki)";
                description = "The MX SW is a modified variant of the baseline MX rifle that is designed specifically for suppression. Just like its parent rifle, it is also chambered to fire the same caseless 6.5×39mm NATO round, Unlike the baseline MX however, it primarily feeds from 100-round belts stored in quad stack magazines as opposed to 30-round STANAGs - though it can still optionally load the latter.";
                price = 3000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class LMG_Mk200_F {
                displayName = "Mk200 6.5 mm";
                description = "The Mk200 is a belt fed, gas operated fully-automatic light machine gun that is chambered to fire 6.5×39 mm caseless rounds, It feeds from 200-round linked belts stored in soft pouches, and can attain a fire rate of up to 800 rounds per minute, The Mk200 can accept accessories on its side, top and underbarrel rails, and can also mount attachments onto its muzzle.";
                price = 4000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class LMG_Mk200_black_F {
                displayName = "Mk200 6.5 mm (Black)";
                description = "The Mk200 is a belt fed, gas operated fully-automatic light machine gun that is chambered to fire 6.5×39 mm caseless rounds, It feeds from 200-round linked belts stored in soft pouches, and can attain a fire rate of up to 800 rounds per minute, The Mk200 can accept accessories on its side, top and underbarrel rails, and can also mount attachments onto its muzzle.";
                price = 4000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class arifle_RPK12_F {
                displayName = "RPK-12 7.62 mm";
                description = "Intended to complement the baseline AK-12 rifle, the RPK-12 combines a longer barrel to help fulfil the weapon's role as a light machine gun, It is intended to primarily feed from its own 75-round drums, though the RPK-12 can also load 30-round rifle magazines if needed as well. Attachments are supported on its front and side rails along with the muzzle, though its usage of an integrated bipod eschews the need for bipod accessories.";
                price = 3400;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_RPK12_lush_F {
                displayName = "RPK-12 7.62 mm (Lush)";
                description = "Intended to complement the baseline AK-12 rifle, the RPK-12 combines a longer barrel to help fulfil the weapon's role as a light machine gun, It is intended to primarily feed from its own 75-round drums, though the RPK-12 can also load 30-round rifle magazines if needed as well. Attachments are supported on its front and side rails along with the muzzle, though its usage of an integrated bipod eschews the need for bipod accessories.";
                price = 3400;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class arifle_RPK12_arid_F {
                displayName = "RPK-12 7.62 mm (Arid)";
                description = "Intended to complement the baseline AK-12 rifle, the RPK-12 combines a longer barrel to help fulfil the weapon's role as a light machine gun, It is intended to primarily feed from its own 75-round drums, though the RPK-12 can also load 30-round rifle magazines if needed as well. Attachments are supported on its front and side rails along with the muzzle, though its usage of an integrated bipod eschews the need for bipod accessories.";
                price = 3400;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
            class LMG_Zafir_F {
                displayName = "Zafir 7.62 mm";
                description = "The Zafir is a belt fed, gas operated selective-fire light machine gun that is chambered to fire 7.62×54 mm rounds, It feeds from 150-round linked belts stored in cloth pouches, and has a rate of fire of 952 rounds per minute (depending on fire mode) with a muzzle velocity of 860 m/s, The Zafir accepts top and side rail accessories, but cannot mount any muzzle attachments. It has an integrated bipod fitted beneath the forward end of the handguard, and also uses a stabilised foregrip.";
                price = 4200;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count 				
            };
	};		
        class SRweapons {
            displayName = "Sniper Rifles";
            kindOf = "Weapons";
            //items of this category:
			
			class srifle_LRR_F {
                displayName = "M320 LRR .408";
                description = "The M320 LRR is a bolt-action sniper rifle that is chambered to fire the .408 Cheetah round. It loads from 7-round box magazines and can attain a fire rate of up to 50 rounds per minute, with a muzzle velocity of 910 m/s. The M320 has a single top rail that can only accept optical sights. It has an integrated bipod located just to the front of the barrel where the shroud is located. In terms of performance, the M320 completely outmatches every other sniper rifle and machine gun when it comes to both range and precision.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class srifle_LRR_camo_LRPS_F {
                displayName = "M320 LRR .408 (Camo)";
                description = "The M320 LRR is a bolt-action sniper rifle that is chambered to fire the .408 Cheetah round. It loads from 7-round box magazines and can attain a fire rate of up to 50 rounds per minute, with a muzzle velocity of 910 m/s. The M320 has a single top rail that can only accept optical sights. It has an integrated bipod located just to the front of the barrel where the shroud is located. In terms of performance, the M320 completely outmatches every other sniper rifle and machine gun when it comes to both range and precision.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class srifle_LRR_tna_F {
                displayName = "M320 LRR .408 (Tropic)";
                description = "The M320 LRR is a bolt-action sniper rifle that is chambered to fire the .408 Cheetah round. It loads from 7-round box magazines and can attain a fire rate of up to 50 rounds per minute, with a muzzle velocity of 910 m/s. The M320 has a single top rail that can only accept optical sights. It has an integrated bipod located just to the front of the barrel where the shroud is located. In terms of performance, the M320 completely outmatches every other sniper rifle and machine gun when it comes to both range and precision.";
                price = 8000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class srifle_GM6_F {
                displayName = "GM6 Lynx 12.7 mm";
                description = "The GM6 Lynx is a semi-automatic, long-recoil operated anti-materiel rifle that is chambered to fire the 12.7×108 mm round, It loads from 5-round box magazines and can attain a rate of fire of up to 150 rounds per minute, with a muzzle velocity of 820 m/s. It only has a top rail for mounting optical sights and cannot be fitted with other kinds of accessories or muzzle attachments. It also has a folding bipod fixed to the centre of the barrel, The GM6 provides the operator with the ability to provide both rapid and accurate sniper fire from ranges of 1,600 up to a maximum of 2,000 metres.";
                price = 7000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class srifle_GM6_camo_F {
                displayName = "GM6 Lynx 12.7 mm (Camo)";
                description = "The GM6 Lynx is a semi-automatic, long-recoil operated anti-materiel rifle that is chambered to fire the 12.7×108 mm round, It loads from 5-round box magazines and can attain a rate of fire of up to 150 rounds per minute, with a muzzle velocity of 820 m/s. It only has a top rail for mounting optical sights and cannot be fitted with other kinds of accessories or muzzle attachments. It also has a folding bipod fixed to the centre of the barrel, The GM6 provides the operator with the ability to provide both rapid and accurate sniper fire from ranges of 1,600 up to a maximum of 2,000 metres.";
                price = 7000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class srifle_GM6_ghex_F {
                displayName = "GM6 Lynx 12.7 mm (Green Hex)";
                description = "The GM6 Lynx is a semi-automatic, long-recoil operated anti-materiel rifle that is chambered to fire the 12.7×108 mm round, It loads from 5-round box magazines and can attain a rate of fire of up to 150 rounds per minute, with a muzzle velocity of 820 m/s. It only has a top rail for mounting optical sights and cannot be fitted with other kinds of accessories or muzzle attachments. It also has a folding bipod fixed to the centre of the barrel, The GM6 provides the operator with the ability to provide both rapid and accurate sniper fire from ranges of 1,600 up to a maximum of 2,000 metres.";
                price = 7000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
};
        class Lweapons {
            displayName = "Missile and Rocket Launchers";
            kindOf = "Weapons";
            //items of this category:			
			
		    class launch_RPG7_F {
                displayName = "RPG-7 Rocket Launcher";
                description = "The RPG-7V is a portable, reusable, unguided, shoulder-launched, anti-tank, rocket-propelled grenade launcher, It is capable of being loaded with two types of grenade rounds: the regular PG-7V and the larger PG-7VR. Both have the same effective ranges; only the PG-7VR has a higher damage output difference. It cannot be fitted with optics and only relies on a traditional ironsight.";
                price = 1000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_MRAWS_green_F {
                displayName = "MAAWS Mk4 Mod 1 (Green)";
                description = "The Carl Gustav is a portable, anti-tank recoilless rifle. It is designed to launch unguided 84 mm rockets, It can only load rockets fitted with high-explosive anti-tank (HEAT) warheads, and has a maximum effective range of approximately 600 metres. The Carl Gustav is fitted with an optical sight that has a magnification strength of 1.5x.";
                price = 3000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            }
			class launch_MRAWS_sand_F {
                displayName = "MAAWS Mk4 Mod 1 (Sand)";
                description = "The Carl Gustav is a portable, anti-tank recoilless rifle. It is designed to launch unguided 84 mm rockets, It can only load rockets fitted with high-explosive anti-tank (HEAT) warheads, and has a maximum effective range of approximately 600 metres. The Carl Gustav is fitted with an optical sight that has a magnification strength of 1.5x.";
                price = 3000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            }
			class launch_MRAWS_olive_F {
                displayName = "MAAWS Mk4 Mod 1 (Olive)";
                description = "The Carl Gustav is a portable, anti-tank recoilless rifle. It is designed to launch unguided 84 mm rockets, It can only load rockets fitted with high-explosive anti-tank (HEAT) warheads, and has a maximum effective range of approximately 600 metres. The Carl Gustav is fitted with an optical sight that has a magnification strength of 1.5x.";
                price = 3000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            }			
			class launch_RPG32_F {
                displayName = "RPG-42 Alamut";
                description = "The RPG-42 is a portable, recoilless, unguided, shoulder-launched, rocket-propelled grenade launcher, It can be loaded with either 105 mm PG-42V high-explosive anti-tank (HEAT) or 72 mm TBG-42V high-explosive (HE) grenades; with the former designed for use in taking out light/medium armour vehicles and the latter for large groups of infantry.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class launch_RPG32_ghex_F {
                displayName = "RPG-42 Alamut (Green Hex)";
                description = "The RPG-42 is a portable, recoilless, unguided, shoulder-launched, rocket-propelled grenade launcher, It can be loaded with either 105 mm PG-42V high-explosive anti-tank (HEAT) or 72 mm TBG-42V high-explosive (HE) grenades; with the former designed for use in taking out light/medium armour vehicles and the latter for large groups of infantry.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_RPG32_green_F {
                displayName = "RPG-42 (Green)";
                description = "The RPG-42 is a portable, recoilless, unguided, shoulder-launched, rocket-propelled grenade launcher, It can be loaded with either 105 mm PG-42V high-explosive anti-tank (HEAT) or 72 mm TBG-42V high-explosive (HE) grenades; with the former designed for use in taking out light/medium armour vehicles and the latter for large groups of infantry.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_RPG32_camo_F {
                displayName = "RPG-42 (Camo)";
                description = "The RPG-42 is a portable, recoilless, unguided, shoulder-launched, rocket-propelled grenade launcher, It can be loaded with either 105 mm PG-42V high-explosive anti-tank (HEAT) or 72 mm TBG-42V high-explosive (HE) grenades; with the former designed for use in taking out light/medium armour vehicles and the latter for large groups of infantry.";
                price = 5000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class launch_NLAW_F {
                displayName = "PCML Rocket Launcher";
                description = "The PCML is a portable short-range, fire-and-forget, guided missile launcher. It can only load missiles with 150 mm high-explosive anti-tank (HEAT) tandem charge warheads, which are capable of striking targets at distances of between 600 and up to 800 metres away. The launcher comes with an integrated night vision-capable sight that has a magnification strength of 2x, and an integrated laser rangefinder. It is able to toggle between using the standard direct-fire and an overfly top-attack (OTA) mode.";
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
                displayName = "9M135 Vorona (Brown)";
                description = "The 9M135 Vorona is a wire-guided, shoulder-launched anti-tank missile launcher, It is designed to be able to load missiles fitted with either high-explosive anti-tank (HEAT) or high-explosive (HE) warheads. The launcher itself uses an optical scope that has a magnification strength of 2x, a built-in laser rangefinder, and is able to switch between using normal day and orange/red-hot thermal vision modes.";
                price = 15000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class launch_Titan_F {
                displayName = "Titan MPRL";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 20000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_B_Titan_F {
                displayName = "Titan MPRL";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 20000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_I_Titan_F {
                displayName = "Titan MPRL";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 20000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_O_Titan_F {
                displayName = "Titan MPRL";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 20000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_B_Titan_tna_F {
                displayName = "Titan MPRL (Tropic)";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 20000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_O_Titan_ghex_F {
                displayName = "Titan MPRL (Green Hex)";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 20000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_I_Titan_eaf_F {
                displayName = "Titan MPRL (Geometric)";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 20000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_B_Titan_olive_F {
                displayName = "Titan MPRL (Olive)";
                description = "The Titan MPRL is a portable long-range, surface-to-air, guided missile launcher. It uses 127 mm missiles with high-explosive fragmentation (HE-Frag) warheads that are capable of tracking and hitting aircraft at distances of up to 3,500 metres. The launcher's command launch unit (CLU) can toggle between three modes of operation: normal day vision, white-hot thermal, and black-hot thermal. In addition, it can have its magnification adjusted to either 1x or 2x strength. The CLU has a small rail that supports being fitted with side rail accessories. The Titan can turn any infantry unit into an extremely dangerous threat for all aircraft.";
                price = 20000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
			class launch_Titan_short_F {
                displayName = "Titan MPRL Compact";
                description = "The Titan MPRL Compact is a portable long-range, fire-and-forget, guided missile launcher. It can be loaded with either 127 mm high-explosive anti-tank (HEAT) or antipersonnel (AP) warheads that are capable of striking targets at distances of up to 2,000 metres away. True to its name, the Titan's ability to load and fire AT/AP missiles is what makes it a unique multi-role weapon.";
                price = 20000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_B_Titan_short_F {
                displayName = "Titan MPRL Compact (Sand)";
                description = "The Titan MPRL Compact is a portable long-range, fire-and-forget, guided missile launcher. It can be loaded with either 127 mm high-explosive anti-tank (HEAT) or antipersonnel (AP) warheads that are capable of striking targets at distances of up to 2,000 metres away. True to its name, the Titan's ability to load and fire AT/AP missiles is what makes it a unique multi-role weapon.";
                price = 20000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_I_Titan_short_F {
                displayName = "Titan MPRL Compact (Olive)";
                description = "The Titan MPRL Compact is a portable long-range, fire-and-forget, guided missile launcher. It can be loaded with either 127 mm high-explosive anti-tank (HEAT) or antipersonnel (AP) warheads that are capable of striking targets at distances of up to 2,000 metres away. True to its name, the Titan's ability to load and fire AT/AP missiles is what makes it a unique multi-role weapon.";
                price = 20000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_O_Titan_short_F {
                displayName = "Titan MPRL Compact (Coyote)";
                description = "The Titan MPRL Compact is a portable long-range, fire-and-forget, guided missile launcher. It can be loaded with either 127 mm high-explosive anti-tank (HEAT) or antipersonnel (AP) warheads that are capable of striking targets at distances of up to 2,000 metres away. True to its name, the Titan's ability to load and fire AT/AP missiles is what makes it a unique multi-role weapon.";
                price = 20000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_B_Titan_short_tna_F {
                displayName = "Titan MPRL Compact (Tropic)";
                description = "The Titan MPRL Compact is a portable long-range, fire-and-forget, guided missile launcher. It can be loaded with either 127 mm high-explosive anti-tank (HEAT) or antipersonnel (AP) warheads that are capable of striking targets at distances of up to 2,000 metres away. True to its name, the Titan's ability to load and fire AT/AP missiles is what makes it a unique multi-role weapon.";
                price = 20000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };
			class launch_O_Titan_short_ghex_F {
                displayName = "Titan MPRL Compact (Green Hex)";
                description = "The Titan MPRL Compact is a portable long-range, fire-and-forget, guided missile launcher. It can be loaded with either 127 mm high-explosive anti-tank (HEAT) or antipersonnel (AP) warheads that are capable of striking targets at distances of up to 2,000 metres away. True to its name, the Titan's ability to load and fire AT/AP missiles is what makes it a unique multi-role weapon.";
                price = 20000;
                stock = 1000;                
                code = player setAmmo [primaryWeapon player, 1000000]; //full mag with default ammo count  
            };			
        };
        class ammo {
            displayName = "Ammunition";
            kindOf = "Items";

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
			class 10Rnd_9x21_Mag {
                displayName = "9 mm 10Rnd Mag";
                description = "Caliber: 9x21 mm Rounds: 10 Used in: PM 9 mm";
                price = 0;
                stock = 10000;                
            };
			class 16Rnd_9x21_red_Mag {
                displayName = "9 mm 16Rnd Reload Tracer (Red) Mag";
                description = "Caliber: 9x21 mm Tracers (Red) Rounds: 16 Used in: PDW2000, P07, ROOK-40";
                price = 20;
                stock = 10000;                
            };
			class 30Rnd_9x21_Red_Mag {
                displayName = "9 mm 30Rnd Reload Tracer (Red) Mag";
                description = "Caliber: 9x21 mm Tracers (Red) Rounds: 30Used in: PDW2000, P07, Rook-40.";
                price = 40;
                stock = 10000;                
            };
			class 30Rnd_9x21_Mag_SMG_02_Tracer_Red {
                displayName = "	9 mm 30Rnd Reload Tracer (Red) Mag";
                description = "Caliber: 9x21 mm Tracers (Red) Rounds: 30 Used in: Sting, Protector.";
                price = 50;
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
			class 50Rnd_570x28_SMG_03 {
                displayName = "5.7 mm 50Rnd ADR-97 Mag";
                description = "Caliber: 5.7x28 mm Rounds: 50 Used in: ADR-97, ADR-97C, ADR-97C TR.";
                price = 80;
                stock = 10000;                
            };			
			class 20Rnd_556x45_UW_mag {
                displayName = "SDAR 5.56 mm 20Rnd Dual Purpose Mag";
                description = "Caliber: 5.56x45 mm Dual Purpose (under water) Rounds: 20 Used in: SDAR.";
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
                price = 100;
                stock = 10000; 
            };			
			class 200Rnd_556x45_Box_Tracer_Red_F {
                displayName = "5.56 mm 200Rnd Tracer (Red) Box";
                description = "Caliber: 5.56x45 mm Tracers (Red) Rounds: 200 Used in: LIM-85.";
                price = 500;
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
                price = 300;
                stock = 10000; 
            };
			class 30Rnd_65x39_caseless_green_mag_Tracer {
                displayName = "6.5 mm 30Rnd Tracer (Green) Caseless Mag";
                description = "Caliber: 6.5x39 mm Tracer (Green) - Caseless Rounds: 30 Used in: Katiba, Type 115.";
                price = 150;
                stock = 10000; 
            };
			class 10Rnd_50BW_Mag_F {
                displayName = ".50 BW 10Rnd Caseless Mag";
                description = "Caliber: .50 BW - Caseless Rounds: 10 Used in: Type 115.";
                price = 150;
                stock = 10000; 
            };			
			class 30Rnd_65x39_caseless_black_mag_Tracer {
                displayName = "6.5 mm 30Rnd Tracer Black (Red) Mag";
                description = "Caliber: 6.5x39 mm STANAG Tracers (Red) Rounds: 30 Used in: MX/C/M/SW/3GL.";
                price = 150;
                stock = 10000;                
            };
			class 30Rnd_65x39_caseless_mag_Tracer {
                displayName = "6.5 mm 30Rnd Tracer Sand (Red) Mag";
                description = "Caliber: 6.5x39 mm STANAG Tracers (Red) Rounds: 30 Used in: MX/C/M/SW/3GL.";
                price = 150;
                stock = 10000;                
            };
			class 30Rnd_65x39_caseless_khaki_mag_Tracer {
                displayName = "6.5 mm 30Rnd Tracer Khaki (Red) Mag";
                description = "Caliber: 6.5x39 mm STANAG Tracers (Red) Rounds: 30 Used in: MX/C/M/SW/3GL.";
                price = 150;
                stock = 10000;                
            };			
			class 100Rnd_65x39_caseless_black_mag_tracer {
                displayName = "6.5 mm 100Rnd Tracer (Red) Black Mag";
                description = "Caliber: 6.5x39 mm Caseless Tracers (Red) Rounds: 100 Used in: MX/C/M/SW/3GL.";
                price = 300;
                stock = 10000;                
            };
			class 100Rnd_65x39_caseless_mag_Tracer {
                displayName = "6.5 mm 100Rnd Tracer (Red) Sand Mag";
                description = "Caliber: 6.5x39 mm Caseless Tracers (Red) Rounds: 100 Used in: MX/C/M/SW/3GL.";
                price = 300;
                stock = 10000;                
            };
			class 100Rnd_65x39_caseless_khaki_mag_tracer {
                displayName = "6.5 mm 100Rnd Tracer (Red) Khaki Mag";
                description = "Caliber: 6.5x39 mm Caseless Tracers (Red) Rounds: 100 Used in: MX/C/M/SW/3GL.";
                price = 300;
                stock = 10000;                
            };			
			class 200Rnd_65x39_cased_Box {
                displayName = "200 Round 6.5x39 mm cased box";
                description = "Caliber: 6.5x39 mm Rounds: 200 Used in: Mk200.";
                price = 600;
                stock = 10000;                
            };
			class 200Rnd_65x39_cased_Box_Red {
                displayName = "200 Round 6.5x39 mm Tracer (Red) cased box";
                description = "Caliber: 6.5x39 mm Tracers (Red) Rounds: 200 Used in: Mk200.";
                price = 600;
                stock = 10000;                
            };
			class 10Rnd_Mk14_762x51_Mag {
                displayName = "7.62 mm 10rnd Mk14 (Classic) Mag";
                description = "Caliber: 7.62x51 mm Rounds: 10 Used in: Mk18 ABR, Mk-I EMR, Mk14, SPAR-17.";
                price = 75;
                stock = 10000;                				
            };
			class 20Rnd_762x51_Mag {
                displayName = "7.62 mm 20Rnd Mag";
                description = "Caliber: 7.62x51 mm Rounds: 20 Used in: Mk18 ABR, Mk-I EMR, Mk14, SPAR-17.";
                price = 150;
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
			class 75rnd_762x39_AK12_Mag_F {
                displayName = "7.62 mm 75rnd AK12 Mag";
                description = "Caliber: 7.62x39 mm Rounds: 75 Used in: RPK-12, AK-12, AK-12 GL, AKM.";
                price = 225;
                stock = 10000;                				
            };
			class 75rnd_762x39_AK12_Lush_Mag_Tracer_F {
                displayName = "7.62 mm 75rnd AK12 Tracer Lush Mag";
                description = "Caliber: 7.62x39 mm Rounds: 75 Used in: RPK-12, AK-12, AK-12 GL, AKM.";
                price = 225;
                stock = 10000;                				
            };
			class 75rnd_762x39_AK12_Arid_Mag_Tracer_F {
                displayName = "7.62 mm 75rnd AK12 Tracer Arid Mag";
                description = "Caliber: 7.62x39 mm Rounds: 75 Used in: RPK-12, AK-12, AK-12 GL, AKM.";
                price = 225;
                stock = 10000;                				
            };			
			class 150Rnd_762x54_Box_Tracer {
                displayName = "7.62 mm 150Rnd Tracer (Green) Box";
                description = "Caliber: 7.62x39 mm Tracers (Green) Rounds: 150 Used in: Zafir.";
                price = 550;
                stock = 10000;                				
            };
			class 10Rnd_93x64_DMR_05_Mag {
                displayName = "9.3 mm 10Rnd Mag";
                description = "Caliber: 9.3x64mm Rounds: 10 Used in: Cyrus.";
                price = 40;
                stock = 10000;                				
            };
			class 150Rnd_93x64_Mag {
                displayName = "9.3 mm 150Rnd Belt";
                description = "Caliber: 9.3x64mm Rounds: 150 Used in: Navid.";
                price = 600;
                stock = 10000;                				
            };			
			class 10Rnd_338_Mag {
                displayName = ".338 LM 10Rnd Mag";
                description = "Caliber: .338 Lapua Magnum Rounds: 10 Used in: MAR-10.";
                price = 50;
                stock = 10000;                				
            };
			class 130Rnd_338_Mag {
                displayName = ".338 NM 130Rnd Belt";
                description = "Caliber: .338 Norma Magnum Rounds: 130 Used in: SPMG.";
                price = 750;
                stock = 10000;                				
            };			
			class 10Rnd_127x54_Mag {
                displayName = "12.7 mm 10Rnd Mag";
                description = "Caliber: 12.7x54 mm Rounds: 10 Used in: ASP-1 Kir.";
                price = 125;
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
                price = 100;
                stock = 10000;                
            };			
			class 7Rnd_408_Mag {
                displayName = ".408 7Rnd LRR Mag";
                description = "Caliber: .408 Rounds: 7 Used in: M320 LRR";
                price = 175;
                stock = 10000;                
            };
			class 3Rnd_HE_Grenade_shell {
                displayName = "40 mm HE Grenade Round (x3)";
                description = "40 mm HE Grenade Round (x3)";
                price = 200;
                stock = 10000;                
            };
			class 3Rnd_Smoke_Grenade_shell {
                displayName = "40mm Smoke Round (White) (x3)";
                description = "40mm Smoke Round (White) (x3)";
                price = 100;
                stock = 10000;                
            };
			class RPG32_F {
                displayName = "RPG-32 Rocket";
                description = "RPG-32 rocket";
                price = 500;
                stock = 10000;                
            };
			class RPG32_HE_F {
                displayName = "RPG-32 HE Rocket";
                description = "RPG-32 HE Rocket";
                price = 500;
                stock = 10000;                
            };			
			class RPG7_F {
                displayName = "PG-7VM HEAT Grenade";
                description = "PG-7VM HEAT Anti-Tank Grenade";
                price = 2000;
                stock = 10000;                
            };
			class MRAWS_HEAT_F {
                displayName = "MAAWS HEAT 75 Round";
                description = "Standard issue rocket. Uses a high-explosive anti-tank (HEAT) warhead, 75 Round";
                price = 2000;
                stock = 10000;                
            };
			class MRAWS_HE_F {
                displayName = "MAAWS HE 44 Round";
                description = "high-explosive dual purpose (HEDP) warhead, 44 Round";
                price = 2000;
                stock = 10000;                
            };
			class MRAWS_HEAT55_F {
                displayName = "MAAWS HEAT 55 Round";
                description = "Standard issue rocket. Uses a high-explosive anti-tank (HEAT) warhead, 55 Round";
                price = 2000;
                stock = 10000;                
            };			
			class NLAW_F {
                displayName = "PCML Missile";
                description = "150 mm high-explosive anti-tank (HEAT) tandem charge warhead for the PCML Rocket Launcher";
                price = 5000;
                stock = 10000;                
            };
			class Vorona_HEAT {
                displayName = "9M135 HEAT Missile";
                description = "Anti-tank with a powerful tandem HEAT warhead.";
                price = 7500;
                stock = 10000;                
            };
			class Vorona_HE {
                displayName = "9M135 HE Missile";
                description = " Anti-personnel with a HE-FRAG warhead.";
                price = 7500;
                stock = 10000;                
            };			
			class Titan_AA {
                displayName = "Titan AA Missile";
                description = "Anti-air missle for the Titan MPRL";
                price = 10000;
                stock = 10000;                
            };
			class Titan_AT {
                displayName = "Titan AT Missile";
                description = "Anti-Tank round used in the Titan MPRL Compact";
                price = 10000;
                stock = 10000;                
            };
			class Titan_AP {
                displayName = "Titan AP Missile";
                description = "Antipersonnel round used in the Titan MPRL Compact";
                price = 8000;
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
			class DemoCharge_Remote_Mag {
                displayName = "Explosive Charge";
                description = "Explosive charges can be utilize with the ACE self interaction menu, under explosives. After placing charge, interact with it with ACE and assign it to a type of detonator. ";
                price = 200;
                stock = 10000;                
            };
			class SatchelCharge_Remote_Mag {
                displayName = "Explosive Satchel";
                description = "Explosive satchels can be utilize with the ACE self interaction menu, under explosives. After placing charge, interact with it with ACE and assign it to a type of detonator.";
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

			class optic_MRD {
                displayName = "MRD";
                description = "MRD Close Range.";
                price = 50;
                stock = 10000;                
			};
			class optic_MRD_black {
                displayName = "MRD (Black)";
                description = "MRD Close Range.";
                price = 50;
                stock = 10000;                
			};
			class optic_Yorris {
                displayName = "Yorris J2";
                description = "Y-J2 Close Range.";
                price = 50;
                stock = 10000;                
			};
			class optic_Holosight_blk_F {
                displayName = "Mk17 Holosight (Black)";
                description = "Mk17 Close Range.";
                price = 100;
                stock = 10000;                
			};
			class optic_Holosight_smg_blk_F {
                displayName = "Mk17 Holosight SMG (Black)";
                description = "Mk17 Close Range.";
                price = 100;
                stock = 10000;                
			};
			class optic_Aco {
                displayName = "ACO (Red)";
                description = "Advanced Collimator Optics Color: Red, Close Range.";
                price = 100;
                stock = 10000;                
			};
			class optic_ACO_grn {
                displayName = "ACO (Green)";
                description = "Advanced Collimator Optics Color: Green, Close Range.";
                price = 100;
                stock = 10000;                
			};
			class optic_Aco_smg {
                displayName = "ACO SMG (Red";
                description = "Advanced Collimator Optics Color: Red, Close Range.";
                price = 100;
                stock = 10000;                
			};
			class optic_ACO_grn_smg {
                displayName = "ACO SMG (Green)";
                description = "Advanced Collimator Optics Color: Green, Close Range.";
                price = 100;
                stock = 10000;                
			};
			class optic_Hamr {
                displayName = "RCO";
                description = "Rifle Combat Optics Magnification: 2x";
                price = 150;
                stock = 10000;                
			};
			class optic_Arco_blk_F {
                displayName = "ARCO (Black)";
                description = "Advanced Rifle Combat Optics Magnification: 2x";
                price = 150;
                stock = 10000;                
			};
			class optic_ERCO_blk_F {
                displayName = "ERCO (Black)";
                description = "Enhanced Rifle Combat Optics Magnification: 2x.";
                price = 150;
                stock = 10000;                
            };
			class optic_MRCO {
                displayName = "MRCO";
                description = "MRCO Magnification: 2x.";
                price = 150;
                stock = 10000;                
            };
			class optic_DMS {
                displayName = "DMS";
                description = "DMS Magnification: 2x-4x.";
                price = 200;
                stock = 10000;                
            };
			class optic_NVS {
                displayName = "NVS";
                description = "Night Vision Scope Magnification: 5x.";
                price = 250;
                stock = 10000;                
            };
			class optic_SOS {
			    displayName = "MOS";
                description = "Marksman Optical Sights Magnification: 2.5x-5x.";
                price = 300;
                stock = 10000;                
            };
			class optic_AMS {
			    displayName = "AMS (Black)";
                description = "Advanced Marksman Scope Magnification: 3x-10x.";
                price = 350;
                stock = 10000;                
            };
			class optic_Nightstalker {
                displayName = "Nightstalker";
                description = "Nightstalker Sight Magnification: 4x-10x";
                price = 400;
                stock = 10000;                
            };
			class optic_tws {
                displayName = "TWS";
                description = "Thermal Weapon Sight Magnification: 4x-10x.";
                price = 450;
                stock = 10000;                
            };
			class optic_tws_mg {
                displayName = "TWS MG";
                description = "Thermal Weapon Sight for Machineguns Magnification: 4x-10x.";
                price = 450;
                stock = 10000;                
            };
			class optic_LRPS {
                displayName = "LRPS";
                description = "The LRPS (Long-Range Precision Scope Magnification: 6x-25x";
                price = 500;
                stock = 10000;                
			};
			class muzzle_snds_L {
                displayName = "Sound Suppressor (9 mm)";
                description = "Sound Suppressor (9 mm)";
                price = 150;
                stock = 10000;                
            };
			class muzzle_snds_acp {
                displayName = "Sound Suppressor (.45 ACP)";
                description = "Sound Suppressor (.45 ACP)";
                price = 150;
                stock = 10000;                
            };
			class muzzle_snds_M {
                displayName = "Sound Suppressor (5.56 mm)";
                description = "Sound Suppressor (5.56 mm)";
                price = 300;
                stock = 10000;                
			};
			class muzzle_snds_570 {
                displayName = "Sound Suppressor (5.7 mm)";
                description = "Sound Suppressor (5.7 mm)";
                price = 300;
                stock = 10000;                
			};
			class muzzle_snds_58_blk_F {
                displayName = "Stealth Sound Suppressor (5.8 mm, Black)";
                description = "Stealth Sound Suppressor (5.8 mm, Black)";
                price = 300;
                stock = 10000;                
			};
			class muzzle_snds_H {
                displayName = "Sound Suppressor (6.5 mm)";
                description = "Sound Suppressor (6.5 mm)";
                price = 300;
                stock = 10000;                
			};
			class muzzle_snds_B {
                displayName = "Sound Suppressor (7.62 mm)";
                description = "Sound Suppressor (7.62 mm)";
                price = 300;
                stock = 10000;                
            };
			class muzzle_snds_338_black {
                displayName = "Sound Suppressor (.338, Black)";
                description = "Sound Suppressor (.338, Black)";
                price = 320;
                stock = 10000;                
            };
			class muzzle_snds_93mmg {
                displayName = "Sound Suppressor (9.3mm, Black)";
                description = "Sound Suppressor (9.3mm, Black)";
                price = 320;
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
                price = 100;
                stock = 10000;                
            };
			class bipod_01_F_blk {
                displayName = "Bipod (Black) [NATO]";
                description = "Bipod (Black) [NATO]";
                price = 100;
                stock = 10000;                
            };
        };
		class Sweapons {
            displayName = "Static Weapons";
            kindOf = "others";

		     class ACE_SpottingScopeObject {
                displayName = "Spotting Scope (placed)";
                description = "Spotting Scope (placed).";
                price = 200;
                stock = 100;
				code = [player,"ACE_SpottingScopeObject"] call grad_fortifications_fnc_addFort;
			};
		     class B_HMG_01_F {
                displayName = "Mk30 HMG .50";
                description = "Mk30 HMG .50 can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 100;
				code = [player,"B_HMG_01_F"] call grad_fortifications_fnc_addFort;
			};
			class B_HMG_01_high_F {
                displayName = "Mk30 HMG .50 (Raised)";
                description = "Mk30 HMG .50 (Raised) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 100;
				code = [player,"B_HMG_01_high_F"] call grad_fortifications_fnc_addFort;
			};
			class B_GMG_01_F {
                displayName = "Mk32 GMG 20 mm";
                description = "Mk32 GMG 20 mm can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 100;
				code = [player,"B_GMG_01_F"] call grad_fortifications_fnc_addFort;
            };
			class B_GMG_01_high_F {
                displayName = "Mk32 GMG 20 mm (Raised)";
                description = "Mk32 GMG 20 mm (Raised) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 100;
				code = [player,"B_GMG_01_high_F"] call grad_fortifications_fnc_addFort;
			};
			class B_Mortar_01_F {
                displayName = "Mk6 Mortar";
                description = "Mk6 Mortar can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 100;
				code = [player,"B_Mortar_01_F"] call grad_fortifications_fnc_addFort;
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