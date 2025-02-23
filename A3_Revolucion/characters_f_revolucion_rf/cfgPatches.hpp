class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Revolucion_Characters_F_Revolucion_rf
	{
		author = $STR_A3_A_BranFlakes;
		name = "Arma 3 Revolución - Reaction Forces Characters";
		url = linkRevolucion;
		requiredAddons[] =
		{
            A3_Revolucion_Data_F_Revolucion,
            RF_Characters
		};
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		units[] =
        {
			/* From "cfgBDF.hpp" */
			Rev_B_BDF_Soldier_PSRL_F,
			Rev_B_BDF_Marine_PSRL_F,
			Rev_B_BDF_Support_CMort_F,

			/* From "cfgCartels.hpp"*/

			/* From "cfgFASR.hpp" */
			Rev_O_FASR_Support_CMort_F,

			/* From "cfgFRR.hpp" */
			Rev_B_FRR_Support_CMort_F,
			Rev_I_FRR_Support_CMort_F,
			Rev_O_FRR_Support_CMort_F,
			Rev_B_FRR_Sharpshooter_RF,
			Rev_I_FRR_Sharpshooter_RF,
			Rev_O_FRR_Sharpshooter_RF,

			/* From "cfgPolicia.hpp" */
			Rev_B_PNB_Sharpshooter_F,
			Rev_O_PNB_Sharpshooter_F,

			/* From "cfgVenezeula.hpp" */
			Rev_O_VZ_Support_CMort_F,

			/* From "cfgCivil.hpp" */
			Rev_C_Man_Firefighter_RF,
			Rev_C_Pilot_RF,
			Rev_C_Pilot_Rescue_RF
        };
		weapons[] = {/* Automated */};
	};
};