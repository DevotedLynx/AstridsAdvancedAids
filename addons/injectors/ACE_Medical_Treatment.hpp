class ACE_Medical_Treatment {
	class Medication {
		class Adrenaline {
			painReduce = 0;
            hrIncreaseLow[] = {50, 65};
            hrIncreaseNormal[] = {50, 65};
            hrIncreaseHigh[] = {40, 90};
            timeInSystem = 180;
            timeTillMaxEffect = 30;
            maxDose = 3;
            incompatibleMedication[] = {};
		};
        class Mule {
           	painReduce = 0.2;
            hrIncreaseLow[] = {15, 25};
            hrIncreaseNormal[] = {20, 35};
            hrIncreaseHigh[] = {35, 40};
            timeInSystem = 180;
            timeTillMaxEffect = 30;
            maxDose = 3;
            incompatibleMedication[] = {}; 
        };
        class Hemocytoblastic_Stimulant {
            painReduce = -0.2;
            hrIncreaseLow[] = {5, 10};
            hrIncreaseNormal[] = {5, 10};
            hrIncreaseHigh[] = {5, 10};
            timeInSystem = 600;
            timeTillMaxEffect = 60;
            maxDose = 5;
            incompatibleMedication[] = {};
        };
	};
};