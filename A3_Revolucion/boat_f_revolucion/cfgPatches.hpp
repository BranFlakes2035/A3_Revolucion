class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Revolucion_Boat_F_Revolucion
	{
		author = $STR_A3_A_BranFlakes;
		name = "Arma 3 Revolución - Boats and Submersibles";
		url = linkAegis;
		requiredAddons[] =
        {
            A3_Aegis_Data_F_Aegis,
			A3_Atlas_Data_F_Atlas,
            A3_Boat_F_Destroyer_Destroyer_01,
            A3_Boat_F_Gamma_Boat_Civil_04,
            A3_Boat_F_Jets_Carrier_01
        };
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};