class CfgPatches
{
	class A3_Revolucion_Static_F_Revolucion_HMG_02
	{
		addonRootClass = A3_Revolucion_Static_F_Revolucion;
		requiredAddons[] = {A3_Revolucion_Static_F_Revolucion};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgCartels.hpp" */
            Rev_I_CDB_HMG_02_F,
            Rev_I_CDB_HMG_02_high_F
        };
		weapons[] = {/* Automated */};
	};
};