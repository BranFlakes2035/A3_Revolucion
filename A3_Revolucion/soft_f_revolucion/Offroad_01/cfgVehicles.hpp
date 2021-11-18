class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Offroad_01_base_F: Car_F{};
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
    class Offroad_01_armed_base_F: Offroad_01_military_base_F{};
    class Offroad_01_military_covered_base_F: Offroad_01_military_base_F
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
					"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa",
                    "\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_cover_BDF_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {Revolucion_BLU_BDF_F};
			};
        };
        class EventHandlers;
    };
    class Offroad_01_military_comms_base_F: Offroad_01_military_covered_base_F{};
	class B_G_Offroad_01_F;
	class B_G_Offroad_01_AT_F;
	class B_G_Offroad_01_armed_F;
	class B_G_Offroad_01_repair_F;
	class B_G_Offroad_01_armor_base_lxWS;
	class B_G_Offroad_01_armor_AT_lxWS;
	class B_G_Offroad_01_armor_armed_lxWS;

    
	// Arma 3 Revolucion
	#include "cfgBDF.hpp"               // BDF
	#include "cfgFRR.hpp"				// FRR
	//#include "cfgFASR.hpp"				// FASR
};
