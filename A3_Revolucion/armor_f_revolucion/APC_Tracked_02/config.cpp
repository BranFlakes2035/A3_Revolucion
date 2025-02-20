#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F{};
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class TextureSources
		{
		};
	};
	class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class TextureSources
		{
            /*
			class CDF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_CDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_02_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_01_AA_Tower_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\Data\camonet_CDF_green_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\Data\cage_CDF_CO.paa"
				};
				factions[] = {Atlas_IND_C_F};
			};
            */
		};
	};

	// Arma 3 Western Sahara
	class O_APC_Tracked_02_30mm_lxWS: O_APC_Tracked_02_cannon_F
	{
    	class TextureSources
    	{
    		class VZHex
        	{
            	displayName = "Venezuela";
				author = $STR_A3_A_BranFlakes;
            	textures[] =
            	{
					"\A3_revolucion\Armor_F_revolucion\APC_Tracked_02\Data\APC_Tracked_02_ext_01_vhex_CO.paa",
					"\A3_revolucion\Armor_F_revolucion\APC_Tracked_02\Data\APC_Tracked_02_ext_02_vhex_CO.paa",
        			"\A3_revolucion\Armor_F_revolucion\APC_Tracked_02\Data\apc_tracked_02_ext_03_vhex_co.paa",
        			"\A3_revolucion\Armor_F_revolucion\APC_Tracked_02\data\APC_Wheeled_04_tow_VZ_CO.paa",
        			"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa",
       				"\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
				};
            	factions[] = {};
    		};
		};
	};
	#include "cfgVenezuela.hpp"		// Takistani Army
};