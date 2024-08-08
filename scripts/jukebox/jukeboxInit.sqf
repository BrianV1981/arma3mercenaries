/*

this addAction ["Open Interface", {[] execVM "scripts\jukebox\openInterface.sqf";}];

*/

// File: scripts/jukebox/jukeboxInit.sqf

// Initialize the interface and load the functions
execVM "scripts\jukebox\jukeboxFunctions.sqf";

// Define the addActions for the interface
jukebox addAction ["Open Interface", {
    createDialog "customInterface";
}];