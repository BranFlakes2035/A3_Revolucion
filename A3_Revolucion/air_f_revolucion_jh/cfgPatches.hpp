class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Revolucion_Air_F_Revolucion_jj
	{
		author = $STR_A3_A_BranFlakes;
		name = "Arma 3 Revolucion - JH UH-1X";
		url = linkRevolucion;
		requiredAddons[] = 
		{
			A3_Revolucion_Data_F_Revolucion,
			jj_uh1
		};
		skipWhenMissingDependencies = 1;
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};