#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
		class EventHandlers;
	};
	class Offroad_01_base_F: Car_F
	{
		class TextureSources
		{
			class BDF
			{
				displayName = "BDF";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa",
					"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {Revolucion_BLU_BDF_F};
			};
		};
	};
	class Offroad_01_military_base_F: Offroad_01_base_F
	{
		class AnimationSources;
		class TextureSources
		{
			class BDF
			{
				displayName = "BDF";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa",
					"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {Revolucion_BLU_BDF_F};
			};
		};
	};
	class I_G_Offroad_01_F;
	class Offroad_01_armed_base_F: Offroad_01_military_base_F
	{
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret{};
		};
		class AnimationSources: AnimationSources
		{
			class Hide_Shield;
			class Hide_Rail;
		};
	};
	class Offroad_01_AT_base_F: Offroad_01_military_base_F
	{
		class Turrets: Turrets
		{
			class AT_Turret: MainTurret{};
		};
	};
	class I_G_Offroad_01_AT_F: Offroad_01_AT_base_F{};
	class I_G_Offroad_01_armed_F: Offroad_01_armed_base_F{};
	class O_G_Offroad_01_F;
	class O_G_Offroad_01_armed_F: I_G_Offroad_01_armed_F{};
	class O_G_Offroad_01_AT_F: I_G_Offroad_01_AT_F{};
    // Arma 3 Enoch
	class Offroad_01_military_covered_base_F: Offroad_01_military_base_F{};
	class Offroad_01_military_comms_base_F: Offroad_01_military_covered_base_F{};
	
	#include "cfgBDF.hpp"
    // Deprecated Classes
};