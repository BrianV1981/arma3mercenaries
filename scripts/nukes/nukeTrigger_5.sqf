//scripts/nuke/nukeTrigger_5.sqf
_nuketrigger5 = createTrigger ["EmptyDetector", [0,0,0]];
_nuketrigger5 setTriggerArea [0, 0, 0, false];
_nuketrigger5 setTriggerActivation ["ECHO", "", false];
_nuketrigger5 setTriggerText "Activate 50kT Special Weapon Typhoon";
_nuketrigger5 setTriggerStatements [
									"this",
									"null = [getPos nuke_5, 50, false, true, 0] execVM 'freestyleNuke\iniNuke.sqf';
									hint '50kT nuke detonated. A CBRN suit, air purifying respirator, and combination unit respirator or any combination of the three items are recommended before entering the nuclear blastzone.'",
									""
								];