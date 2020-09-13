_nuketrigger1 = createTrigger ["EmptyDetector", [0,0,0]];
_nuketrigger1 setTriggerArea [0, 0, 0, false];
_nuketrigger1 setTriggerActivation ["CHARLIE", "", false];
_nuketrigger1 setTriggerText "Activate 10kT Special Weapon Typhoon";
_nuketrigger1 setTriggerStatements [
									"this",
									"null = [getPos nuke_3, 10, false, true, 0] execVM 'freestyleNuke\iniNuke.sqf';
									hint '10kT nuke detonated. A CBRN suit, air purifying respirator, and combination unit respirator or any combination of the three items are recommended before entering the nuclear blastzone.'",
									""
								];