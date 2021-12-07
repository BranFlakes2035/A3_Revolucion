class CfgPatches
{
	class A3_Revolucion_Static_F_Revolucion_Mortar_01
	{
		addonRootClass = A3_Revolucion_Static_F_Revolucion;
		requiredAddons[] = {A3_Revolucion_Static_F_Revolucion};
		requiredVersion = 0.1;
		units[] =
        {
			/* From "cfgBDF.hpp" */
			Rev_B_BDF_Mortar_01_F,

            /* From "cfgFASR.hpp" */
            Rev_O_FASR_Mortar_01_F,
            /* From "cfgVenezuela.hpp" */
            Rev_O_VZ_Mortar_01_F
        };
		weapons[] = {/* Automated */};
	};
};