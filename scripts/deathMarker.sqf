 /////////////https://forums.bohemia.net/forums/topic/134991-death-marker-script///////////////////////

{if (side _x == West) then {

         _x addEventHandler ["Killed",{

         _mrkName = format ["%1", name(_this select 0)];
         deleteMarker _mrkName

        }
       ]
      }
     } foreach allUnits;

{if (side _x == West) then {

         _x addEventHandler ["Killed",{

         _mrkName = format ["%1", name(_this select 0)];
         _m = createMarker[format ["%1", name(_this select 0)],getPosATL (_this select 0)];    
         _m setMarkerShape "ICON";    
         _m setMarkerType "mil_warning";   
         _m setMarkerColor "ColorRed"; 
         _m setmarkerSize [.5,.5];  
         _m setMarkerText _mrkName

        }
       ]
      }
     } foreach allUnits;