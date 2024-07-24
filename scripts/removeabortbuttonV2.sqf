//https://forums.bohemia.net/forums/topic/220528-help-disable-escape-options-when-killed/
//made with chat gpt and DOES NOT WORK

// Automatically set the TAG_abortIsAllowed variable to false at the start
missionNamespace setVariable ["TAG_abortIsAllowed", false, true];

// Function to disable the abort button
private _disableAbortButton = {
    disableSerialization;
    private _abortButton = (findDisplay 49) displayCtrl 104;
    if (!isNull _abortButton) then {
        _abortButton ctrlShow false;
    };
};

// Check the abort status and disable the button if necessary
if (!missionNamespace getVariable ["TAG_abortIsAllowed", true]) then {
    [] spawn _disableAbortButton;
};

// Re-check and update the abort button visibility for each player joining
"onPlayerConnected" addMissionEventHandler {
    if (!missionNamespace getVariable ["TAG_abortIsAllowed", true]) then {
        [] spawn _disableAbortButton;
    };
};

// Check if player is an admin
if (isServer || (isDedicated && (player getVariable ["isAdmin", false]))) then {
    // Admins will always see the abort button
    // Optional: You can add a toggle button for admins if needed
} else {
    // Remove the abort button from non-admins
    [] spawn _disableAbortButton;
};