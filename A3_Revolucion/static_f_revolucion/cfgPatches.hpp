class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Revolucion_Static_F_Revolucion
	{
		author = $STR_A3_A_BranFlakes;
		name = "Arma 3 Revolución - Turrets";
		url = linkRevolucion;
		requiredAddons[] =
		{
			A3_Revolucion_Data_F_Revolucion,
			A3_Static_F,
            A3_Static_F_Destroyer_Boat_Rack_01
		};
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};