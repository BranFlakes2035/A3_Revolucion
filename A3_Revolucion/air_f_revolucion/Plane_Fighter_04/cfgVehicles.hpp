class CfgVehicles
{
    /* Inheritance Tree */
	class Plane_Base_F;

    /* Bases */
	class Plane_Fighter_04_Base_F: Plane_Base_F
	{
		class EjectionSystem;

        /* Weapons / Ammunition
        - Let's reduce the ammunition count to 120 rounds
        - Source: https://en.wikipedia.org/wiki/Saab_JAS_39_Gripen#Specifications
        */
		magazines[] =
		{
			magazine_Fighter04_Gun20mm_AA_x120,
			Laserbatteries,
			240Rnd_CMFlare_Chaff_Magazine
		};

        /* Liveries */
		class TextureSources
		{
			class BDF
			{
				displayName = "FDB";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Air_F_Revolucion\Plane_Fighter_04\Data\Fighter_04_fuselage_01_fdb_CO.paa",
        			"\A3_Revolucion\Air_F_Revolucion\Plane_Fighter_04\Data\Fighter_04_fuselage_02_fdb_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_04\Data\Fighter_04_misc_01_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Ejection_Seat_Plane_Fighter_04_base_F;

	/* Factions */
	#include "cfgFDB.hpp"   // Marar
};