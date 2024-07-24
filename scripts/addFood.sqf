// addFoodAndWater.sqf
//made with Chat GPT 7-21-2024
private "_this";
_this = _this select 0;

// Ensure the script runs only on the server
if (!isServer) exitWith {};

// Add water bottles
_this addItemCargoGlobal ["ACE_WaterBottle", 25];

// Add tomato soup
_this addItemCargoGlobal ["ACE_MRE_CreamTomatoSoup", 75];