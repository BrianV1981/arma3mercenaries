
---

## Vehicle Ownership System

### Summary

The Vehicle Ownership System allows players to claim unowned vehicles in Arma 3. The system operates in three stages:

1. **Initial Ownership Check**: Players can perform an ownership check on a vehicle via an "Check Ownership" action. This action checks if the vehicle is already owned by another player or faction.
2. **Ownership Validation**: If the vehicle is unowned, the player is notified that they can proceed with the claim process. If the vehicle is owned, they are informed accordingly.
3. **Claim Vehicle**: If the vehicle is unowned, the system enables the player to claim the vehicle. Once claimed, the vehicle is marked as owned, and the claiming action is removed from the server.

### Functionality and Logic

- **Script 1: Add "Check Ownership" Action (`addCheckOwnership.sqf`)**
  - This script adds an action to the vehicle that allows players to perform an ownership check.
  - Once the "Check Ownership" action is selected, it removes itself from the vehicle and remotely executes the `ownershipCheck.sqf` script on the server.

- **Script 2: Ownership Check (`ownershipCheck.sqf`)**
  - This script checks if the vehicle has an `HG_Owner` or `grad_fortifications_fortOwner` variable set.
  - If the vehicle is unowned, the player is informed they can proceed with the claim process, and the `claimVehicleAddAction.sqf` script is executed.
  - If the vehicle is already owned, the player is notified that it is not available for claiming.

- **Script 3: Add "Claim Vehicle" Action (`claimVehicleAddAction.sqf`)**
  - This script adds a "Claim this vehicle" action to the vehicle.
  - When selected, the vehicle's ownership is set to the player, and any dynamic simulation settings are adjusted. The "Claim Vehicle" action is then removed to prevent others from claiming it.

### Installation and Usage Instructions

#### Installation

1. **Download the Scripts:**
   - Download or create the following scripts:
     - `addCheckOwnership.sqf`
     - `ownershipCheck.sqf`
     - `claimVehicleAddAction.sqf`

2. **Place the Scripts:**
   - Place all three scripts in the following directory within your Arma 3 mission folder:
     ```
     arma3mercenaries\vehicle_ownership\
     ```

3. **Add to Vehicle Initialization:**
   - In your mission file, ensure that `addCheckOwnership.sqf` is executed for any vehicle that you want to allow players to claim. This can be done in the vehicle's initialization field or through a script that initializes the vehicles.

   Example:
   ```sqf
   null = this execVM "arma3mercenaries\vehicle_ownership\addCheckOwnership.sqf";
   ```

#### Usage

1. **Check Ownership:**
   - When a player approaches a vehicle, they will see an option to "Check Ownership."
   - Selecting this option will trigger a check to see if the vehicle is already owned.

2. **Claim the Vehicle:**
   - If the vehicle is unowned, the player will be informed that they can proceed with the claim process.
   - The player can then select the "Claim this vehicle" action to take ownership of the vehicle.

3. **Handling Ownership:**
   - Once claimed, the vehicle cannot be claimed by another player.
   - The system handles ownership persistently across sessions using the configured variables.

---
