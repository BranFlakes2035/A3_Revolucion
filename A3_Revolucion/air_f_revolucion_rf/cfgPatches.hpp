class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Revolucion_Air_F_Revolucion_RF
	{
		author = $STR_A3_A_Ravenholme;
		name = "Arma 3 Revolucion - Reaction Force Aircraft";
		url = linkAegis;
		requiredAddons[] = 
        {
            A3_Revolucion_Data_F_Revolucion,
			A3_Revolucion_Air_F_Revolucion,
            RF_Air
        };
		requiredVersion = 0.1;
        skipWhenMissingDependencies = 1;
		units[] ={};
		weapons[] = {/* Automated */};
	};
};