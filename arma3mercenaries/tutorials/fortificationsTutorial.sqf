if (hasInterface) then {
    // Ensure the GUI is not displayed while in the loading screen
    waitUntil { !isNull findDisplay 46 };

    // Introduction to Fortifications
    "Fortification Tutorial" hintC [
        "Welcome to the Fortification system in arma3mercenaries!",
        "This system allows you to build Forward Operating Bases (FOBs) and fortifications on the battlefield, enhancing your strategic positions.",
        "To start building, ensure you have earned enough credits through combat or completing objectives. You can purchase fortifications from the Black Market Computers, which are labeled on the map.",
        "After purchasing, you must retrieve your fortification from the green cargo container located outside the store. Use the ACE interaction menu to access the container and collect your item.",
        "To place fortifications, use the ACE self-interaction menu. Navigate to Equipment > Fortifications, and select the fortification you want to deploy.",
        "Available fortifications include barriers, bunkers, watchtowers, and more. These structures can provide cover, establish defensive positions, and create strongholds in key areas.",
        "To build an FOB, choose a strategic location on the battlefield, ideally near important objectives or supply routes. Place your fortifications to create a defensible position that can support your operations.",
        "Not only are these fortifications persistent through server restarts, but they also carry over from war to war, ensuring your efforts are long-lasting and impactful.",
        "Building an FOB is an investment in your team’s success. Well-placed fortifications can turn the tide of battle, providing a secure base for launching attacks or defending against enemy assaults.",
        "Use your rewards wisely, and plan your fortifications to maximize your battlefield advantage!"
    ];
};
