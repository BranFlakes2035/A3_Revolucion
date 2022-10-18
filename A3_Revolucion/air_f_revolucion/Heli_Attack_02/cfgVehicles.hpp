class CfgVehicles
{
    /* Inheritance Tree */
    class Helicopter_Base_F;

    /* Bases */
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
		class Components;

        /* Liveries */
		class TextureSources
		{
			class VZHex
			{
				displayName = $STR_A3_R_TextureSources_VZHex0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\air_f_revolucion\Heli_Attack_02\Data\Heli_Attack_02_body1_VZ_CO.paa",
					"\A3_Revolucion\air_f_revolucion\Heli_Attack_02\Data\Heli_Attack_02_body2_VZ_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Heli_Attack_02_dynamicLoadout_base_F: Heli_Attack_02_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					class PylonLeft1;
					class PylonLeft2;
					class PylonRight2;
					class PylonRight1;
				};
				class Presets
				{
					class Empty;
					class Default;
					class AT;
					class HAT;
					class CAS;
				};
			};
		};
	};

    /* Factions */
	#include "cfgVenezuela.hpp"		//Venezuela
};