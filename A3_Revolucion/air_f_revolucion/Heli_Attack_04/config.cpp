#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Helicopter_Base_F;
	class Heli_Attack_02_Base_F: Helicopter_Base_F
	{
		class Components;
		class Turrets;
	};
	// Arma 3 Aegis
	class Aegis_Heli_Attack_04_base_F: Heli_Attack_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					class PylonLeft1;
					class PylonLeft2;
					class PylonLeft3;
					class PylonRight1;
					class PylonRight2;
					class PylonRight3;
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
		class TextureSources
		{
			class VZHex
			{
				displayName = $STR_A3_R_TextureSources_VZHex0;
				author = $STR_A3_A_Grave;
				textures[] = 
				{
					"\A3_Revolucion\air_f_revolucion\Heli_Attack_04\Data\Heli_Attack_04_ext_01_VZ_CO.paa",
					"\A3_Revolucion\air_f_revolucion\Heli_Attack_04\Data\Heli_Attack_04_ext_02_VZ_CO.paa",
					"\A3_Revolucion\air_f_revolucion\Heli_Attack_04\Data\Heli_Attack_04_ext_03_VZ_CO.paa"
				};
				faction[] = {};
			};
		};
	};
	
	// Arma 3 Atlas
	#include "cfgVenezuela.hpp"       // Venezuela
};