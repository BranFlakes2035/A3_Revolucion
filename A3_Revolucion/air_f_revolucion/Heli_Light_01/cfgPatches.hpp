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
            /* From "cfgCartels.hpp" */
			Rev_I_CDB_Heli_Light_01_F
        };
		weapons[] = {/* Automated */};
	};
};