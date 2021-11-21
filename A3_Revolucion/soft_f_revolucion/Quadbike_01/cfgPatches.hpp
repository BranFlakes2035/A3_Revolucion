class CfgPatches
{
	class A3_Revolucion_Soft_F_Revolucion_Quadbike_01
	{
		addonRootClass = A3_Revolucion_Soft_F_Revolucion;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis_Quadbike_01,
			A3_Revolucion_Soft_F_Revolucion,
			A3_Soft_F_Exp_Quadbike_01
		};
		requiredVersion = 0.1;
		units[] = 
		{
			/* From "cfgBDF.hpp" */
			Rev_B_BDF_Quadbike_01_F,

			/* From "cfgCartels.hpp" */
			Rev_I_CDB_Quadbike_01_F,

			/* From "cfgFASR.hpp" */
			Rev_O_FASR_Quadbike_01_F,

			/* From "cfgFRR.hpp" */
			Rev_B_FRR_Quadbike_01_F,
			Rev_I_FRR_Quadbike_01_F,
			Rev_O_FRR_Quadbike_01_F
		};
		weapons[] = {/* Automated */};
	};
};