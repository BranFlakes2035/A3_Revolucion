class CfgPatches
{
	class A3_Revolucion_Boat_F_Revolucion_Boat_Transport_02
	{
		addonRootClass = A3_Revolucion_Boat_F_Revolucion;
		requiredAddons[] = 
        {
            A3_Revolucion_Boat_F_Revolucion,
            A3_Atlas_Boat_F_Atlas,
            A3_Aegis_Boat_F_Aegis
        };
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBDF.hpp" */
            Rev_B_BDF_Boat_Transport_02_F,

            /* From "cfgCartels.hpp" */
            Rev_I_CDB_Boat_Transport_02_F
        };
		weapons[] = {/* Automated */};
	};
};