/*

To execute the command as an admin, you can enter the following in the admin console:

["playerUID", save#] call restorePlayerFromBackup;

Restore the 5th backup (the oldest one):

["playerUID", 5] call restorePlayerFromBackup;

This command will restore the player's data from the 5th backup file.

Load the current most recent save:

["playerUID", 1] call restorePlayerFromBackup;

example of restoring the 2nd backup, as the 1st one is the one that is usually corrupted:

["76561197997216797", 2] call restorePlayerFromBackup;

This command will restore the player's data from the most recent backup file.

///////////////////////////////

Ensure your description.ext includes the function definitions.

description.ext

class CfgFunctions {
    class MyFunctions {
        class savePlayerBackup {
            file = "scripts\savePlayerBackup.sqf";
        };
        class restorePlayerFromBackup {
            file = "scripts\restorePlayerFromBackup.sqf";
        };
    };
};



///////////////////////////////////
Schedule Regular Backups
You can schedule the savePlayerBackup.sqf script to run periodically for each player.

Example:

[] spawn {
    while {true} do {
        {
            [_x] call savePlayerBackup;
        } forEach allPlayers;
        sleep 1800; // Backup every 30 minutes
    };
};




*/

/////THIS SCRIPT DOES NOT WORK

#include "script_component.hpp"

// Function to restore player data from a specified backup
params ["_uid", "_backupIndex"];

// Get the mission tag
private _missionTag = [] call GRAD_persistence_fnc_getMissionTag;

// Construct the tag for player data
private _playersTag = _missionTag + "_players";

// Retrieve the players data hash
private _playersDataHash = [_playersTag, true, false] call GRAD_persistence_fnc_getSaveData;

// Exit if the UID is empty
if (_uid == "") exitWith {};

// Define the path to the backup folder
private _backupFolderPath = format ["%1/playerBackups_%2", profileNamespace, _uid];

// Find all backup files for the specified player
private _backupFiles = call {
    private _pattern = format ["%1/playerData_%2_backup_*.sav", _backupFolderPath, _uid];
    findFiles _pattern
};

// Exit if the specified backup index is out of range
if (count _backupFiles < _backupIndex) exitWith {
    ERROR_1("Backup index %1 out of range.", _backupIndex)
};

// Get the file path of the specified backup
private _backupFilePath = _backupFiles select (_backupIndex - 1);

// Load the backup data from the file
private _unitDataHash = loadFile _backupFilePath;

// Exit if the backup data failed to load
if (_unitDataHash isEqualType false) exitWith {
    ERROR_1("Failed to load backup data from %1.", _backupFilePath)
};

// Set the loaded backup data for the player in the players data hash
[_playersDataHash, _uid, _unitDataHash] call CBA_fnc_hashSet;

// Save the updated profile namespace to persist the restored data
saveProfileNamespace;
