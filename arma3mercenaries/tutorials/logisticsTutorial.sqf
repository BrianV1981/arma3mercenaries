if (hasInterface) then {
    // Ensure the GUI is not displayed while in the loading screen
    waitUntil { !isNull findDisplay 46 };

    // Introduction to ACE Logistics
    "arma3mercenaries Logistics Tutorial" hintC [
        "Welcome to the logistics system in arma3mercenaries!",
        "This system allows you to manage essential resources such as water, fuel, ammunition, and medical supplies for your faction to utilize in the battlefield.",
        "Water Tanks: Use these to refill canteens or cool off weapons. Simply approach the tank, interact with it, and select the option that you want.",
        "Fuel Tanks: These are vital for refueling vehicles in the field. Drive your vehicle close to a fuel tank, interact with it, and choose the refuel option.",
        "Vehicle Ammo Boxes: These boxes contain ammunition for  vehicle weapon systems and static weapons. Position your vehicle near an ammo box, interact with it, and select the option to resupply your vehicle's or static weapon's ammo.",
        "Medic Containers: These are forward spawn points that also allow you to use Personal Aid Kits (PAKs) to fully heal yourself from brusies and battle fatigue. Approach the container, interact with it, and select the option to use a PAK on a wounded soldier.",
        "All of these resources, including water, fuel, ammo, and medic supplies, have vehicle versions, allowing you to bring these vital logistics into the field.",
        "Remember to strategically place these resources near your operations to maintain your combat effectiveness. Plan ahead, and keep your vehicles and troops supplied!"
    ];
};
