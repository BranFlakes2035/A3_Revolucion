class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Revolucion_Characters_F_Revolucion_ef
	{
		author = $STR_A3_A_BranFlakes;
		name = "Arma 3 Revolución - Expedtionary Forces Characters";
		url = linkRevolucion;
		requiredAddons[] =
		{
            A3_Revolucion_Data_F_Revolucion,
            EF_Data,
			EF_Marines
		};
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		units[] =
        {
        };
		weapons[] = {/* Automated */};
	};
};