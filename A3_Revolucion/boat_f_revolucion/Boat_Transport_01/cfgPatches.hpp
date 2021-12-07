class CfgPatches
{
	class A3_Revolucion_Boat_F_Revolucion_Boat_Transport_01
	{
		addonRootClass = A3_Revolucion_Boat_F_Revolucion;
		requiredAddons[] = 
        {
            A3_Revolucion_Boat_F_Revolucion,
            A3_Aegis_Boat_F_Aegis
        };
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBDF.hpp" */
            Rev_B_BDF_Boat_Transport_01_F,

            /* From "cfgCartels.hpp" */
            Rev_I_CDB_Boat_Transport_01_F,

            /* From "cfgFASR.hpp" */
            Rev_O_FASR_Boat_Transport_01_F,

            /* From "cfgFRR.hpp" */
            Rev_B_FRR_Boat_Transport_01_F,
            Rev_I_FRR_Boat_Transport_01_F,
            Rev_O_FRR_Boat_Transport_01_F,

            /* From "cfgVenezuela.hpp" */
            Rev_O_VZ_Boat_Transport_01_F
        };
		weapons[] = {/* Automated */};
	};
};