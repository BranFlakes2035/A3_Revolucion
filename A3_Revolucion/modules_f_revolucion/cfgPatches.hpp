class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Revolucion_Modules_F_Revolucion
	{
		author = $STR_A3_A_Ravenholme;
		name = "Arma 3 Revolución - Scripted Modules";
		url = linkRevolucion;
		requiredAddons[] =
		{
			A3_Revolucion_Data_F_Revolucion,
			A3_Modules_F
		};
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};