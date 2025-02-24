class CfgPatches
{
	class A3_revolucion_Air_F_revolucion_fa_mig29
	{
		addonRootClass = A3_Revolucion_Air_F_Revolucion_fa;
		requiredAddons[] = 
		{
			A3_Revolucion_Air_F_Revolucion_fa,
			FA_Mig29
		};
		skipWhenMissingDependencies = 1;
		requiredVersion = 0.1;
		weapons[] = {/* Auto-compiled by pboProject */};
		units[] =
        {
			rev_FA_Mig29_VZ_F
		};
	};
};