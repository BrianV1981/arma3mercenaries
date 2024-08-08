// File: scripts/adjustVolume.sqf

params ["_sliderValue"];

// Map slider value from 0 to 1
_volume = _sliderValue / 100;

// Ensure the volume is between 0 and 1
_volume = clamp [_volume, 0, 1];

// Set the music volume
setMusicVolume _volume;

// Update the volume text
((findDisplay -1) displayCtrl 1001) ctrlSetText format ["Volume: %1%%", _sliderValue];
