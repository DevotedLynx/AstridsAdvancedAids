#include "\x\astrid\addons\injectors\script_component.hpp"








//SO ps over kill function only adding the details and medication to ace medical in fnc_Mule.sqf is required actual code is called every time stamina is calculated by ace in XEH_postInit.sqf under Astrid_Mule
params ["_medic", "_patient","_classname"];

["Astrid_Mule", [_patient,0]] call CBA_fnc_localEvent;
[
	{
		params ["_patient"];
		["Astrid_Mule", [_patient,0]] call CBA_fnc_localEvent
	},
	[
		_patient,_classname
	],
	180
] call CBA_fnc_waitAndExecute;