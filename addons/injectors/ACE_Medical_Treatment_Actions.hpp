class ACE_Medical_Treatment_Actions {
	class BasicBandage;
	class FieldDressing;
	class Morphine;
	class Adrenaline: Morphine 
	{
		displayName = "Inject Adrenaline";
        displayNameProgress = "Injecting Adrenaline";
        medicRequired = false;
		condition = "ace_medical_treatment_advancedMedication";
		callbackSuccess = QFUNC(adrenaline);
        items[] = {"astrid_adrenaline"};
	};
	class Mule: Morphine
	{
		displayName = "Inject Mule";
        displayNameProgress = "Injecting Mule";
        medicRequired = false;
		condition = "ace_medical_treatment_advancedMedication";
		callbackSuccess = QFUNC(Mule);
        items[] = {"astrid_Mule"};	
	};
	class Hemocytoblastic_Stimulant: Morphine
	{
		displayName = "Inject Hemocytoblastic Stimulant";
        displayNameProgress = "Injecting Hemocytoblastic Stimulant";
        medicRequired = false;
		condition = "ace_medical_treatment_advancedMedication";
		callbackSuccess = QFUNC(Hemocytoblastic);
        items[] = {"astrid_Hemocytoblastic_Stimulant"};	
	};
};