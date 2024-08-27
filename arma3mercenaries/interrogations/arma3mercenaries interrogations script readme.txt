/*
## Script Overview
This collection of scripts enables faction-specific interrogation scenarios within the Arma 3 mission `arma3mercenaries`. Players interact with designated objects to initiate interrogation sequences against various targets, enhancing both strategic depth and gameplay dynamics.

### Features
- **Dynamic Faction Interaction**: Players from specified factions can interrogate enemy or civilian targets.
- **Customizable Delay**: Default delay for interrogation is 5 minutes, customizable to 1 minute or other durations as needed.
- **Financial Rewards**: Successful interrogations result in financial rewards, compatible with various in-game monetary systems.
- **Extensibility**: Scripts can be easily modified to integrate additional functionalities such as varied rewards, enhanced notifications, or specific consequences based on interrogation outcomes.

### Scenarios and AddAction Commands
<details>
<summary>Interrogate Any on Civilian</summary>
Any faction player can interrogate civilians within a 30-meter radius, ideal for intelligence gathering from local populations.

this addAction ["Interrogate Civilians", {[] execVM "arma3mercenaries\interrogations\arma3mercenaries_interrogate_any_on_civilian.sqf";}];

</details>

<details>
<summary>BLUFOR on OPFOR</summary>
BLUFOR players interrogate OPFOR soldiers, focusing on gathering critical military intelligence.

this addAction ["Interrogate OPFOR Soldiers", {[] execVM "arma3mercenaries\interrogations\arma3mercenaries_interrogate_blufor_on_opfor.sqf";}];

</details>

<details>
<summary>BLUFOR on OPFOR and Independent</summary>
BLUFOR players interrogate both OPFOR and Independent soldiers, broadening intelligence gathering from multiple enemy factions.

this addAction ["Interrogate OPFOR and Independent", {[] execVM "arma3mercenaries\interrogations\arma3mercenaries_interrogate_blufor_on_opforIndep.sqf";}];

</details>

<details>
<summary>BLUFOR and Independent on Civilians</summary>
Both BLUFOR and Independent factions collaborate to interrogate civilians, enhancing civil-military operations.

this addAction ["Interrogate Civilians", {[] execVM "arma3mercenaries\interrogations\arma3mercenaries_interrogate_bluforIndep_on_civilians.sqf";}];

</details>

<details>
<summary>BLUFOR and Independent on OPFOR</summary>
A joint operation where BLUFOR and Independent players interrogate OPFOR soldiers, enhancing cooperation between allied factions.

this addAction ["Interrogate OPFOR Soldiers", {[] execVM "arma3mercenaries\interrogations\arma3mercenaries_interrogate_bluforIndep_on_opfor.sqf";}];

</details>

<details>
<summary>Independent on BLUFOR</summary>
Independent players interrogate BLUFOR soldiers, focusing on extracting information from a major military power.

this addAction ["Interrogate BLUFOR Soldiers", {[] execVM "arma3mercenaries\interrogations\arma3mercenaries_interrogate_indep_on_blufor.sqf";}];

</details>

<details>
<summary>Independent on OPFOR</summary>
Independent faction players interrogate OPFOR soldiers, aimed at destabilizing opponent military capabilities.

this addAction ["Interrogate OPFOR Soldiers", {[] execVM "arma3mercenaries\interrogations\arma3mercenaries_interrogate_indep_on_opfor.sqf";}];

</details>

<details>
<summary>Independent and OPFOR on BLUFOR</summary>
A unique alliance where Independent and OPFOR players come together to interrogate BLUFOR soldiers, showcasing shifting alliances and dynamic battlefield conditions.

this addAction ["Interrogate BLUFOR Soldiers", {[] execVM "arma3mercenaries\interrogations\arma3mercenaries_interrogate_indepOpfor_on_blufor.sqf";}];

</details>

<details>
<summary>OPFOR on BLUFOR and Independent</summary>
OPFOR players interrogate both BLUFOR and Independent soldiers, maximizing intelligence extraction from opposing factions.

this addAction ["Interrogate BLUFOR and Independent", {[] execVM "arma3mercenaries\interrogations\arma3mercenaries_interrogate_opfor_on_bluforIndep.sqf";}];

</details>

<details>
<summary>OPFOR on Independent</summary>
OPFOR players specifically target Independent soldiers for interrogation, focusing on weakening a potentially unpredictable faction.

this addAction ["Interrogate Independent Soldiers", {[] execVM "arma3mercenaries\interrogations\arma3mercenaries_interrogate_opfor_on_indep.sqf";}];

</details>

### Installation Directions
1. Place the `arma3mercenaries` folder inside your Arma 3 mission directory.
2. Each script file should be placed within the `interrogations` subfolder.
3. Assign the `addAction` commands to relevant objects within your mission editor.
4. Ensure that paths in `addAction` commands correctly point to the location of each script within the mission directory structure.
5. Test each action to verify proper execution and behavior in-game.
*/
