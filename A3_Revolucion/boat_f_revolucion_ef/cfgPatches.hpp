class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Revolucion_Boat_F_Revolucion_EF
	{
		author = $STR_A3_A_BranFlakes;
		name = "Arma 3 Revolución - Boats and Submersibles";
		url = linkAegis;
		requiredAddons[] =
        {
            A3_Revolucion_Data_F_Revolucion,
			EF_CombatBoat_C
        };
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};