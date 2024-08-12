//scripts/nuke/nukeTrigger_2.sqf
_nuketrigger2 = createTrigger ["EmptyDetector", [0,0,0]];
_nuketrigger2 setTriggerArea [0, 0, 0, false];
_nuketrigger2 setTriggerActivation ["BRAVO", "", false];
_nuketrigger2 setTriggerText "Activate 5kT Special Weapon Typhoon";
_nuketrigger2 setTriggerStatements [
									"this",
									"null = [getPos nuke_2, 5, false, true, 0] execVM 'freestyleNuke\iniNuke.sqf';
									hint '5kT nuke detonated. A CBRN suit, air purifying respirator, and combination unit respirator or any combination of the three items are recommended before entering the nuclear blastzone.'",
									""
								];