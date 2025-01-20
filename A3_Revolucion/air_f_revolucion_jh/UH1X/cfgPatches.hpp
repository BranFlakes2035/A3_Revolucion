class CfgPatches
{
	class A3_revolucion_Air_F_revolucion_jj_UH1X
	{
		addonRootClass = A3_Revolucion_Air_F_Revolucion_jj;
		requiredAddons[] = 
		{
			A3_Revolucion_Air_F_Revolucion_jj,
			jj_uh1
		};
		skipWhenMissingDependencies = 1;
		requiredVersion = 0.1;
		weapons[] = {/* Auto-compiled by pboProject */};
		units[] =
        {
			Rev_B_FDB_JH_UH1X_armed_F,
			Rev_B_FDB_JH_UH1X_unarmed_F,
			Rev_B_FDB_JH_UH1X_medical_F
		};
	};
};