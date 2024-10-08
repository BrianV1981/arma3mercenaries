if (hasInterface) then {
    // Ensure the GUI is not displayed while in the loading screen
    waitUntil { !isNull findDisplay 46 };

    // Introduction to Sector Control with Rewards
    "Sector Control Tutorial" hintC [
        "Welcome to the Sector Control system in arma3mercenaries!",
        "Your objective is to capture and hold key sectors on the map. These sectors are vital for gaining strategic advantages and earning substantial rewards.",
        "To capture a sector, move into the marked area on the map and eliminate any enemy forces present. Stay within the sector to secure it and start earning rewards.",
        "As you hold the sector, you'll receive multiple rewards over time. The longer you stay, the higher the rewards, with the amount increasing over time.",
        "Be cautious—if you leave the sector before receiving all rewards, payments will be halted, and you'll have to wait before you can earn rewards in this sector again.",
        "Additionally, during the defending process, you might trigger enemy reinforcements, making it crucial to maintain control and be prepared for incoming threats. Fortifications and logisticical supplies are key.",
        "Once you’ve earned all rewards, you will be temporarily blocked from earning further rewards in that sector for a set time.",
        "Good luck, and make sure to strategize your movements to maximize your gains and control the battlefield!"
    ];
};
