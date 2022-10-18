class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter_Base_H;

    /* Bases */
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
		class Components;

        /* Liveries */
		class TextureSources
		{
			class VZHex
			{
				displayName = $STR_A3_R_TextureSources_VZHex0;
				author = $STR_A3_A_BranFlakes;
				textures[] = {"\A3_Revolucion\air_f_revolucion\Heli_Light_02\Data\Heli_Light_02_ext_VZ_CO.paa"};
				faction[] = {};
			};
		};

		class EventHandlers;
	};
	class Heli_Light_02_unarmed_base_F: Heli_Light_02_base_F{};
	class Heli_Light_02_dynamicLoadout_base_F: Heli_Light_02_base_F{};

    /* Factions */
	#include "cfgVenezuela.hpp"		// Venezuela
};