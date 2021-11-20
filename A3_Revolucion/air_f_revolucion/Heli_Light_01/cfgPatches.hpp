class CfgPatches
{
	class A3_Revolucion_Air_F_Revolucion_Heli_Light_01
	{
		addonRootClass = A3_Revolucion_Air_F_Revolucion;
		requiredAddons[] =
		{
			A3_Revolucion_Air_F_Revolucion,
			A3_Air_F_Heli_Light_01
		};
		requiredVersion = 0.1;
		units[] =
        {
			/* From "cfgBDF.hpp" */
			Rev_B_BDF_Heli_Light_01_F,
			Rev_B_BDF_Heli_Light_01_dynamicLoadout_F,

            /* From "cfgCartels.hpp" */
			Rev_I_CDB_Heli_Light_01_F,

			/* From "cfgFASR.hpp" */
			Rev_O_FASR_Heli_Light_01_F,
			Rev_O_FASR_Heli_Light_01_dynamicLoadout_F
        };
		weapons[] = {/* Automated */};
	};
};