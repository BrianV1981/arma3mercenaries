/*

	ambientRadioChatter.sqf
	Author: BrianV1981
	Description:
	Here’s a detailed description of the features, logic, and installation instructions for your Arma 3 ambient radio chatter script:

---

## **Ambient Radio Chatter Script**

Your description is generally clear and well-structured, but there are a few areas of redundancy and some minor rewording that could improve clarity and flow. Here's a reworked version:

---

### **Features**
- **Dynamic Radio Chatter**: Plays random ambient radio chatter when a player enters a vehicle, simulating realistic radio noise inside the vehicle.
- **Randomized Sound Selection**: Automatically selects from 30 pre-defined radio chatter sound files, ensuring variety and avoiding repetition.
- **Flexible Timing**: Chatter plays at random intervals between 30 and 120 seconds, enhancing unpredictability and realism.
- **Automatic Start/Stop**: The radio chatter system activates when a player enters a vehicle and stops when they exit, ensuring the sound is contextually appropriate.
- **Standalone Usage**: The script operates independently and can be added to missions without requiring any other systems.
- **Seamless Integration**: When incorporated into larger missions or vehicle systems, this script enhances immersion by adding dynamic radio chatter that responds to player actions.
- **Optional**: The script is entirely optional; vehicles will function as normal without it, allowing for flexible usage.
- **Event-Driven Execution**: Uses event handlers to trigger radio chatter based on player behavior, ensuring smooth, responsive integration with Arma 3's game engine.

---

### **Script Logic**
1. **Event Handlers**:
   - `GetInMan` event handler: When a player enters a vehicle, the radio chatter script starts.
   - `GetOutMan` event handler: When the player exits the vehicle, the radio chatter stops.
   
2. **Random Sound Selection**:
   - A format-based method is used to generate a random file name for the radio chatter sounds. The script picks a random number from 1 to 30 and appends it to the file path of the sound, resulting in different radio chatter sounds.
   
3. **Random Timing**:
   - Once a sound plays, the script waits for a random period between 30 and 120 seconds before playing the next sound.
   
4. **Sound Playback**:
   - The sound is played in 3D space, attached to the vehicle, making the audio appear to come from the vehicle's position.

---

### **Installation Instructions**

1. **Script Placement**:
   - this script should be executed in the `initPlayerLocal.sqf' file
   ```
   execVM "arma3mercenaries\jukebox\ambientRadioChatter.sqf";
   ```

---

This script will give you dynamic ambient radio chatter in vehicles for each player, creating an immersive atmosphere in your Arma 3 missions.
	
*/

// Function to play random radio chatter when the player is in an allowed vehicle
fn_playRadioChatter = {
    params ["_veh"];
    
    // Wait for a random amount of time before playing the first sound (between 5 to 60 seconds)
    sleep (5 + random 55);
    
    while {vehicle player == _veh} do {
        // Pick a random sound file name between 1 and 30
        private _sound = format ["A3\Sounds_F\sfx\radio\ambient_radio%1.wss", floor (1 + random 30)];
        
        // Play the sound in 3D space, attached to the vehicle
        playSound3D [_sound, _veh, true, getPosASL _veh, 1, 1, 50];
        
        // Wait for a random amount of time before playing the next sound (between 20 to 120 seconds)
        sleep (20 + random 100);
    };
};

// Add event handler for when the player enters a vehicle
player addEventHandler ["GetInMan", {
    params ["_unit", "_role", "_vehicle"];
    if (_unit == player) then {
        // Check if the vehicle entered is an allowed type using isKindOf for Car, Helicopter, Motorcycle, Plane, Ship, StaticWeapon, Submarine, Tank, TrackedAPC, WheeledAPC
        if (_vehicle isKindOf "Tank" || _vehicle isKindOf "Ship" || _vehicle isKindOf "WheeledAPC" || _vehicle isKindOf "TrackedAPC" || _vehicle isKindOf "Plane" || _vehicle isKindOf "Helicopter") then {
            // Play radio chatter attached to the entered vehicle
            [_vehicle] spawn fn_playRadioChatter;
        };
    };
}];

// Add event handler for when the player exits a vehicle
player addEventHandler ["GetOutMan", {
    params ["_unit", "_role", "_vehicle"];
    if (_unit == player) then {
        // Optionally stop any sound or chatter logic when the player exits the vehicle
    };
}];

