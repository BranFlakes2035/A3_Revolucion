class CfgPatches
{
	class A3_revolucion_Air_F_revolucion_Heli_Light_02
	{
		addonRootClass = A3_revolucion_Air_F_revolucion;
		requiredAddons[] =
		{
			A3_revolucion_Air_F_revolucion,
			A3_Air_F_Heli_Light_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgVenezuela.hpp" */
            Rev_O_VZ_Heli_Light_02_dynamicLoadout_F,
            Rev_O_VZ_Heli_Light_02_unarmed_F,

			/* From "cfgCivil.hpp" */
			Rev_C_Heli_Light_02_civil_F
        };
		weapons[] = {/* Automated */};
	};
};