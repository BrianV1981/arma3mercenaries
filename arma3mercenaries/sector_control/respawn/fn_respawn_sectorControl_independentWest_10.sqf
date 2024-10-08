/*
<details>
  <summary>fn_respawnsectorControl_independentWest_1.sqf</summary>
  
  fn_respawnsectorControl_independentWest_1.sqf

                     __..-----')
         ,.--._ .-'_..--...-'
        '-"'. _/_ /  ..--''""'-.
        _.--""...:._:(_ ..:"::. \
     .-' ..::--""_(##)#)"':. \ \)    
    /_:-:'/  :__(##)##)    ): )   
    "  / |  :' :/""\///)  /:.'  
      / :( :( :(   (#//)  "       
     / :/|\ :\_:\   \#//\   
     |:/ | ""--':\   (#//)              
     \/  \ :|  \ :\  (#//)
          \:\   '.':. \#//\      
           ':|    "--'(#///)
                      (#///)
                      (#///)
                       \#///\
                       (##///)
                       (BV///)
                       (+#///)
                       (JL///)
                        \=#///\
                        (ANV///)
                        (IRV///)
                        (MWV////)__...-----....__
                        (#/::'''                 ""--.._
                   __..-'''                             "-._
           __..--""           By BrianV1981            	   "-..____
  ___..--""                                                    "-..____
    (_ ""---....___                                     __...--"" _)
      """--...  ___"""""-----......._______......----"""     --"""
                    """"       ---.....   ___....----

  ## Sector Control Respawn Management Script

  This script dynamically manages respawn points based on sector control in Arma 3. It enables and disables respawn points for specific factions depending on which side controls the sector.

  ### Features:

  - **Dynamic Respawn Creation:** Automatically creates a respawn point at preplaced markers when a faction takes control of the sector.
  - **Joint Respawn Logic:** If Independent or West controls the sector, both factions get a respawn point. If CSAT (East) controls the sector, only CSAT gets a respawn point.
  - **Mission Status Notifications:** Displays a custom message when a sector is secured, including the capturing faction's name, map grid, and military time.
  - **Flexible Configuration:** Works with predefined markers named `respawnWest_sector_1`, `respawnIndependent_sector_1`, and `respawnEast_sector_1`.

  ### How to Use:

  1. **Place Markers in the Editor:**
     - Place markers on the map where you want respawn points to appear. Name them `respawnWest_sector_1`, `respawnIndependent_sector_1`, and `respawnEast_sector_1`.

  2. **Save the Script:**
     - Save the `fn_respawnsectorControl_independentWest_1.sqf` script in your mission's `scripts/sector_control/` folder.

  3. **Configure the Sector Control Module:**
     - In the Arma 3 editor, place a `ModuleSector_F`.
     - In the Expression field (found under System Specific - Sector category), enter the following line:
     
     ```sqf
     [_this select 0, _this select 1, _this select 2] execVM 'scripts\sector_control\fn_respawnsectorControl_independentWest_1.sqf';
     ```

  4. **Testing:**
     - Start your mission and observe how the respawn points are created or disabled based on sector control changes.

  ### Important Notes:

  - **Marker Names:** Ensure that the markers in the editor match the names used in the script.
  - **Respawn ID Management:** The script dynamically stores the respawn ID when a point is created and removes it when no longer needed, ensuring clean management of respawn points.
  - **Script Execution:** This script is triggered whenever the sector changes control, ensuring that only the controlling faction has access to the respawn point.

</details>
*/

params ["_sector", "_ownerSide", "_previousOwnerSide"];

// Define the markers and their associated sides
private _markerData = [
    ["respawnWest_sector_10", west],
    ["respawnIndependent_sector_10", independent],
    ["respawnEast_sector_10", east]
];

// Disable all respawn points first
{
    private _markerName = _x select 0;
    private _side = _x select 1;

    // Retrieve the respawn point data if it was added previously
    private _respawnData = missionNamespace getVariable [_markerName, [-1, -1]];
    private _respawnID = _respawnData select 1;

    // If a valid respawn ID exists, remove the respawn position
    if (_respawnID != -1) then {
        [_side, _respawnID] call BIS_fnc_removeRespawnPosition;
        missionNamespace setVariable [_markerName, nil]; // Clear the ID from the namespace
    };
} forEach _markerData;

// Determine the faction name based on the side
private _factionName = "";
switch (true) do {
    case (_ownerSide == west): { _factionName = "NATO"; };
    case (_ownerSide == east): { _factionName = "CSAT"; };
    case (_ownerSide == independent): { _factionName = "Independent"; };
};

// Enable the respawn point for the faction that took control
{
    private _markerName = _x select 0;
    private _side = _x select 1;

    // If the new owner side matches the side associated with the marker
    if (_ownerSide == _side || (_ownerSide == independent && _side == west) || (_ownerSide == west && _side == independent)) then {
        // Get the position of the marker
        private _markerPos = getMarkerPos _markerName;

        // Create the respawn point at the marker position
        private _respawnData = [_side, _markerPos] call BIS_fnc_addRespawnPosition;
        private _respawnID = _respawnData select 1;

        // Store the respawn ID for future reference (e.g., removal)
        missionNamespace setVariable [_markerName, _respawnData];
    };
} forEach _markerData;

// Display the message with faction name and time
private _time = date;
private _hours = _time select 3;
private _minutes = _time select 4;

// Ensure hours and minutes are always two digits
private _formattedHours = format ["%1", _hours];
if (_hours < 10) then { _formattedHours = format ["0%1", _hours]; };

private _formattedMinutes = format ["%1", _minutes];
if (_minutes < 10) then { _formattedMinutes = format ["0%1", _minutes]; };

private _message = format ["Sector Seized by %1<br/>Sector Location: %2<br/>Time Captured: %3:%4", _factionName, mapGridPosition _sector, _formattedHours, _formattedMinutes];

// Send dynamic text to all players only
{
    if (isPlayer _x) then {
        [_message, 0.9, 0.9, 30, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _x];
    };
} forEach allPlayers;
