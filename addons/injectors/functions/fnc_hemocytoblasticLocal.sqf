#include "\x\astrid\addons\injectors\script_component.hpp"
#include "\z\ace\addons\medical_engine\script_macros_medical.hpp"









params ["_medic","_patient","_bodypart","_classname"];

private _current_blood = GET_BLOOD_VOLUME(_patient);
hint str _current_blood;