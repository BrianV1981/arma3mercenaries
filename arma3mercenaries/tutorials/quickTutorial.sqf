if (hasInterface) then {
    // Ensure the GUI is not displayed while in the loading screen
    waitUntil { !isNull findDisplay 46 };

    // Introduction to arma3mercenaries
    "Welcome to arma3mercenaries!" hintC [
		"When, not if but when, you die, your corpse will contain all of your inventory items and wallet. A red warning marker will appear on the map at the location. You have 2 hours to retrieve your stuff!",
		"Some basic items are provided free of charge on the Black Market Computers: basic transportation, a basic uniform, etc.",
        "Help NATO eliminate CSAT and FIA members! Get paid to engage in combat! Earn 0 to 5,000 Cr per enemy killed (check the corpse for extra cash). Beware, penalties for harming civilians or allies are severe.",
        "Help locate HVTs. Get paid to deliver captured civilians to Enhanced Interrogation locations for a chance at substantial payouts for uncovering vital intelligence.",
		"Help NATO forces hold Fort MAGA and push into enemy territory. Get paid to capture and hold critical sectors for up to one hour.",
		"Use the credits that you earned at the Black Market Computers (and other computers) that are marked on the map.",
		"Build and customize bases with credits earned on the battlefield.",
        "Persistent systems include player inventory, group memberships, group inventory, player-owned vehicles, player-owned vehicle inventories, vehicle garages, static weapons, and fortifications.",
		"For more information, visit https://github.com/BrianV1981/arma3mercenaries/wiki"
    ];
};
