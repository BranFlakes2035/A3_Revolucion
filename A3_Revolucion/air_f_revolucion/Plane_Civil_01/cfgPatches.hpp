class CfgPatches
{
	class A3_Revolucion_Air_F_Revolucion_Plane_Civil_01
	{
		addonRootClass = A3_Revolucion_Air_F_Revolucion;
		requiredAddons[] =
		{
			A3_Revolucion_Air_F_Revolucion,
			A3_Air_F_Exp_Plane_Civil_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgCartels.hpp" */
			Rev_I_CDB_Plane_Civil_01_F
        };
		weapons[] = {/* Automated */};
	};
};