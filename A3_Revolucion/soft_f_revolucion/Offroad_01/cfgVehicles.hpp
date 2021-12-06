class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Offroad_01_base_F: Car_F{};
    class Offroad_01_military_base_F: Offroad_01_base_F
    {
		class Turrets;
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
			class Cartel
			{
				displayName = "Cartel";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
					"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {Revolucion_IND_CDB_F};
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
			class Cartel
			{
				displayName = "Cartel";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
					"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
					"\A3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {Revolucion_IND_CDB_F};
			};
        };
        class EventHandlers;
    };
	class Offroad_01_AT_base_F: Offroad_01_military_base_F{};
    class Offroad_01_military_comms_base_F: Offroad_01_military_covered_base_F{};
	class B_G_Offroad_01_F;
	class B_G_Offroad_01_AT_F;
	class B_G_Offroad_01_armed_F;
	class B_G_Offroad_01_repair_F;

	// Arma 3 West Sahara
	class Offroad_01_base_lxWS;
	class Offroad_01_armed_lxWS;
	class Offroad_01_AT_lxWS;
	class Offroad_01_armor_base_lxWS: Offroad_01_base_lxWS
	{
		class TextureSources
        {
			class Cartel
			{
				displayName = "Cartel";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
					"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
					"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
         			"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_black_co.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {Revolucion_IND_CDB_F};
			};
		};	
	};
	class Offroad_01_armor_armed_lxWS: Offroad_01_armed_lxWS
	{
		class TextureSources
        {
			class Cartel
			{
				displayName = "Cartel";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
					"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
					"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
         			"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_black_co.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {Revolucion_IND_CDB_F};
			};
		};	
	};
	class Offroad_01_armor_AT_lxWS: Offroad_01_AT_lxWS
	{
		class TextureSources
        {
			class Cartel
			{
				displayName = "Cartel";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
					"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
					"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
         			"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_black_co.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				faction[] = {Revolucion_IND_CDB_F};
			};
		};	
	};
	class B_G_Offroad_01_armor_base_lxWS;
	class B_G_Offroad_01_armor_AT_lxWS;
	class B_G_Offroad_01_armor_armed_lxWS;
	

    
	// Arma 3 Revolucion
	#include "cfgBDF.hpp"               // BDF
	#include "cfgCartel.hpp"			//Cartel
	#include "cfgFRR.hpp"				// FRR
	#include "cfgFASR.hpp"				// FASR
};
