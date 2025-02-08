class CfgPatches
{
	class A3_Revolucion_Boat_F_Revolucion_Boat_Civil_01
	{
		addonRootClass = A3_Revolucion_Boat_F_Revolucion;
		requiredAddons[] = {A3_Revolucion_Boat_F_Revolucion};
		requiredVersion = 0.1;
		units[] =
        {
			/* From "cfgCivil.hpp" */
			Rev_C_Boat_Civil_01_F,
			Rev_C_Boat_Civil_01_Rescue_F,

        };
		weapons[] = {/* Automated */};
	};
};