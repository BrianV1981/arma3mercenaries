// Profiling all non profiled units on the map
// You can trigger the profiler to profile all non profiled units (handy for MCC and Zeus or scripts that spawn units during gameplay). 
// This function needs to be called on the server locality after a short pause to enable ALiVE to finish initialising:
// http://alivemod.com/wiki/index.php/Script_Snippets

if (isServer) then {
    [] spawn {
        while {true} do {
            sleep 60;
            [] call ALiVE_fnc_createProfilesFromUnitsRuntime;
        };
    };
};