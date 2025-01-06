class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Offroad_01_base_F;
	class Offroad_01_unarmed_base_F: Offroad_01_base_F{};
    class Pickup_01_base_rf: Offroad_01_unarmed_base_F
    {
		class Turrets;
        class AnimationSources;
		class TextureSources
		{
			class BDF_01
			{
				displayName = "BDF";
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
					"\A3_revolucion\Soft_F_revolucion_RF\pickup_01\Data\rev_pickup_01_ext_fdb_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_nato_pacific_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa",
					"\A3_revolucion\Soft_F_revolucion_RF\pickup_01\Data\rev_pickup_01_service_fdb_co.paa"
				};
				factions[] = {Revolucion_BLU_BDF_F};
			};
		};
    };
    class Pickup_01_aat_base_rf;
    class Pickup_01_rcws_base_rf: Pickup_01_aat_base_rf
    {
		class Turrets;
        class AnimationSources;
		class TextureSources
		{
			class BDF_RCWS
			{
				displayName = "BDF";
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
					"\A3_revolucion\Soft_F_revolucion_RF\pickup_01\Data\rev_pickup_01_ext_fdb_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_nato_pacific_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
					"lxrf\vehicles_rf\pickup_01\Data\RCWS\rcws_black_co.paa",
					"\A3_revolucion\Soft_F_revolucion_RF\pickup_01\Data\rev_pickup_01_service_fdb_co.paa"
				};
				factions[] = {Revolucion_BLU_BDF_F};
			};
		};
    };
	class B_Pickup_rf;
	class B_Pickup_Comms_rf;
	class B_Pickup_mmg_rf;
	class B_Pickup_aat_rf;
	
	

    
	// Arma 3 Revolucion
	#include "cfgBDF.hpp"               // BDF
};
