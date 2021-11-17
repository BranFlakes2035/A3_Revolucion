class CfgPatches
{
	class A3_revolucion_Air_F_revolucion_Plane_Fighter_03
	{
		addonRootClass = A3_revolucion_Air_F_revolucion;
		requiredAddons[] =
		{
			A3_revolucion_Air_F_revolucion,
			A3_Air_F_Gamma_Plane_Fighter_03
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgOPFOR.hpp" */
            O_A_Ejection_Seat_Plane_Fighter_03_F,
            O_A_Plane_Fighter_03_dynamicLoadout_F
        };
		weapons[] = {/* Automated */};
	};
};
