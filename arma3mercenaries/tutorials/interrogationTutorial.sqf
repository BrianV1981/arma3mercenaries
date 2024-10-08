if (hasInterface) then {
    // Ensure the GUI is not displayed while in the loading screen
    waitUntil { !isNull findDisplay 46 };

    // Introduction to Interrogation Process
    "Interrogation Tutorial" hintC [
        "Welcome to the interrogation system in arma3mercenaries!",
        "To begin an interrogation process, you will need to have a civilian (the more the merrier) within 30 meters of the interrogation point.",
        "Look for the interaction prompt that appears when you're close to the interrogation processing target (a black bodybad).",
        "Select the action from the menu that appears. The interrogation process will start, and you'll need to wait for the designated time, each interrogation takes a different amount of time.",
        "Once the interrogation is complete, you'll receive a financial reward. Check your wallet after the process to see your earnings!",
		"During interrogations, you might uncover a High-Value Target (HVT) or crucial information leading to one—these discoveries offer significantly greater rewards than standard interrogations.",
        "Good luck, and make sure to use the information you gather wisely!"
    ];
};
