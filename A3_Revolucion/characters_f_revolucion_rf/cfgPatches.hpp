class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Revolucion_Characters_F_Revolucion_rf
	{
		author = $STR_A3_A_BranFlakes;
		name = "Arma 3 Revolución - Reaction Forces Characters";
		url = linkRevolucion;
		requiredAddons[] =
		{
            A3_Revolucion_Data_F_Revolucion,
            RF_Characters
		};
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		units[] =
        {
        };
		weapons[] = {/* Automated */};
	};
};