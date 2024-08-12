/*

arma3mercenaries Death Marker Script Overview
This script handles the placement of death markers on the map in Arma 3 when a unit is killed. It distinguishes between AI and player deaths, creating appropriately colored markers on the map that display relevant information, such as the faction of the killed unit, the name of the killer, the weapon used, and the distance of the kill.

Script Breakdown
Initialization:

The script starts by logging the initialization of the arma3mercenaries Death Marker Script.
It adds an event handler to listen for the entityKilled event, which is triggered whenever an entity is killed in the mission.
Handling the entityKilled Event:

The script captures three key parameters:
_killed: The unit that was killed.
_killer: The unit responsible for the kill.
_instigator: The unit or object that initiated the kill (e.g., a vehicle driver).
Instigator Check:

If the _instigator is null (such as in a road kill scenario), the script sets the _killer as the _instigator to ensure the correct unit is credited with the kill.
Local Instigator and Human-Like Unit Check:

The script checks if the _instigator is local to the machine (i.e., controlled by the local client) and if the _killed unit is a human-like entity (CAManBase).
This ensures that markers are placed only in relevant scenarios, such as when the unit is a player or AI controlled by a player.
Determine the Side of the Killed Unit:

The script determines the faction (side) of the killed unit by checking its configuration in the game.
It stores this value in _sideKilled.
Get Faction Name:

A readable name for the faction of the killed unit is determined based on _sideKilled and stored in _factionName.
The possible factions include OPFOR, NATO, Independent, and Civilian.
Determine Marker Color:

The script determines the color of the marker based on the faction (side) of the killed unit:
OPFOR: Red (ColorEAST)
NATO: Blue (ColorWEST)
Independent: Green (colorIndependent)
Civilian: Purple (ColorCIV)
The marker color is stored in _markerColor.
AI Death Marker:

If the killed unit is an AI and the killer is a player, the script proceeds to create a death marker for the AI.
Marker Creation:
The script first deletes any existing marker named "LastEnemyKilled" to ensure only the latest kill is marked.
A new marker is created at the position where the AI was killed.
The marker is set to be an icon (ICON) with a dot (mil_dot) shape and the color corresponding to the AI’s faction.
The marker is labeled with a text that includes the faction name of the killed unit, the killer’s name, the weapon used, and the distance of the kill.
Player Death Marker:

If the killed unit is a player, the script proceeds to create a death marker for the player.
Marker Creation:
The script deletes any existing marker with the player's name to avoid duplicates.
A new marker is created at the player's position.
The marker is set to be an icon (ICON) with a warning icon (mil_warning) and is colored red (ColorRed).
The marker is labeled with the player's name.
Summary
Functionality: This script manages the placement of death markers on the map in Arma 3. It creates markers for both AI and player deaths, with different colors and labels depending on the faction of the killed unit and whether the unit was a player or AI.
Logic: The script distinguishes between AI and player deaths, applying appropriate marker colors and labels based on the faction and status (player or AI) of the killed unit. It provides players with visual cues on the map, helping them track where recent deaths occurred and who was responsible for them.

*/

diag_log "//________________ arma3mercenaries Death Marker Script ________________";

addMissionEventHandler ["entityKilled", {
    params ["_killed", "_killer", "_instigator"];

    // If the instigator is null (e.g., road kill), set the killer as the instigator
    if (isNull _instigator) then { _instigator = _killer };

    // Check if the instigator is local to the machine and the killed unit is a human-like unit
    if (local _instigator && _killed isKindOf "CAManBase") then {
        // Determine the sides of the killer and the killed unit
        private _sideKilled = getNumber (configFile >> "cfgVehicles" >> typeOf _killed >> "side");

        // Get a readable name for the faction
        private _factionName = switch (_sideKilled) do {
            case 0: { "OPFOR" };
            case 1: { "NATO" };
            case 2: { "Independent" };
            case 3: { "Civilian" };
            default { "Unknown Faction" };
        };

        // Determine the marker color based on the side of the killed unit
        private _markerColor = switch (_sideKilled) do {
            case 0: { "ColorEAST" };         // OPFOR
            case 1: { "ColorWEST" };        // NATO
            case 2: { "colorIndependent" }; // Independent
            case 3: { "ColorCIV" };         // Civilian
        };

        // AI Death Marker - Only if the killer is a player
        if (!isPlayer _killed && isPlayer _instigator) then {
            private _mrkName = "LastEnemyKilled";
            // Delete any existing marker with the same name
            deleteMarker _mrkName;

            // Create a new marker at the AI's position
            private _m = createMarker [_mrkName, getPosATL _killed];
            // Set the shape of the marker to an icon
            _m setMarkerShape "ICON";
            // Set the type of the marker to a dot icon
            _m setMarkerType "mil_dot";
            // Set the color of the marker based on the killed unit's side
            _m setMarkerColor _markerColor;
            // Set the size of the marker
            _m setMarkerSize [0.5, 0.5];
            // Set the text of the marker to include the faction, killer’s name, weapon used, and distance
            _m setMarkerText format ["%1 killed by %2 with a %3 from %4m", _factionName, name _instigator, _weaponDisplayName, floor _distance];
        };

        // Player Death Marker - Only for non-AI players
        if (isPlayer _killed) then {
            private _mrkName = format ["%1", name _killed];
            // Delete any existing marker with the same name
            deleteMarker _mrkName;

            // Create a new marker at the player's position
            private _m = createMarker [_mrkName, getPosATL _killed];
            // Set the shape of the marker to an icon
            _m setMarkerShape "ICON";
            // Set the type of the marker to a warning icon
            _m setMarkerType "mil_warning";
            // Set the color of the marker to red
            _m setMarkerColor "ColorRed";
            // Set the size of the marker
            _m setMarkerSize [0.5, 0.5];
            // Set the text of the marker to the player's name
            _m setMarkerText name _killed;
        };
    };
}];


