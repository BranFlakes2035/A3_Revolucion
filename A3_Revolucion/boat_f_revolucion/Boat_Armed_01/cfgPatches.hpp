class CfgPatches
{
	class A3_revolucion_Boat_F_revolucion_Boat_Armed_01
	{
		addonRootClass = A3_revolucion_Boat_F_revolucion;
		requiredAddons[] =
		{
			A3_revolucion_Boat_F_revolucion,
			A3_Boat_F_Beta_Boat_Armed_01,
			A3_Boat_F_Boat_Armed_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgVenezuela.hpp" */
            revolucion_O_VZ_Boat_Armed_01_hmg_F,
        };
		weapons[] = {/* Automated */};
	};
};