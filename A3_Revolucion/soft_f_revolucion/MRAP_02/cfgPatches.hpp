class CfgPatches
{
	class A3_Revolucion_Soft_F_Revolucion_MRAP_02
	{
		addonRootClass = A3_Revolucion_Soft_F_Revolucion;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis,
			A3_Soft_F_Exp_MRAP_02,
			A3_Soft_F_MRAP_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgPolicia.hpp" */
            Rev_B_PNB_MRAP_02_F,
			Rev_O_PNB_MRAP_02_F
        };
		weapons[] = {/* Automated */};
	};
};