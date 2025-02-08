class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Revolucion_Air_F_Revolucion_RF_Heli_Medium_EC
	{
		addonRootClass = A3_Revolucion_Air_F_Revolucion_RF;
		requiredAddons[] = 
        {
            A3_Revolucion_Data_F_Revolucion,
			A3_Revolucion_Air_F_Revolucion,
            RF_Air,
			RF_Air_Heli_Medium_EC
        };
		requiredVersion = 0.1;
        skipWhenMissingDependencies = 1;
		units[] = 
		{
			/* From "cfgCivil.hpp" */
			Rev_C_Heli_EC_01_civ_RF,
			Rev_C_Heli_EC_01A_civ_RF,
			Rev_C_Heli_EC_04_Rescue_RF
		};
		weapons[] = {/* Automated */};
	};
};