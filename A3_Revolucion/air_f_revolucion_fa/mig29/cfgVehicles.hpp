class CfgVehicles
{
    /* Inheritance Tree */
	class Plane_Fighter_03_dynamicLoadout_base_F;
    /* Bases */
	class FA_Mig29_BASE: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class TextureSources
		{
			class VZHex
			{
				displayName = $STR_A3_R_TextureSources_VZHex0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
    			{
        			"\A3_Revolucion\air_f_revolucion_fa\mig29\data\mig29_vz_co.paa",
        			"FA_Mig29\data\textures\cockpit_co.paa"
    			};
				factions[] = {};
			};
		};
	};

    /* Factions */
	#include "cfgVenezuela.hpp"		//Venezuela
};