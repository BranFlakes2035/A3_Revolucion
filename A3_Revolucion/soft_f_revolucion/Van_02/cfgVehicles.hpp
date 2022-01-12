class CfgVehicles
{

    /* Arma 3 */
	class Van_02_base_F;
	class Van_02_transport_base_F: Van_02_base_F
	{
		class TextureSources
		{
			class Policia
			{
				displayName = "Policia";
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
					"\A3_revolucion\Soft_F_Revolucion\Van_02\Data\van_body_Policia_CO.paa",
					"\A3\Soft_F_enoch\Van_02\Data\van_wheel_ldf_MP_CO.paa",
					"\A3\soft_f_enoch\van_02\data\van_glass_MP_CA.paa",
					"\A3_revolucion\Soft_F_Revolucion\Van_02\Data\van_body_Policia_CO.paa"
				};
				materials[] = 
				{
					"\a3\Soft_F_Orange\Van_02\Data\van_body_dirty.rvmat",
					"\A3\Soft_F_Orange\Van_02\Data\van_wheel_dirty.rvmat",
					"",
					"",
					"\a3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"
				};
				factions[] = {Revolucion_BLU_PNB_F, Revolucion_OPF_PNB_F};
			};
		};
	};
	class Van_02_vehicle_base_F: Van_02_base_F
	{
		class TextureSources
		{
			class LDF
			{
				displayName = "Policia";
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
					"A3\Soft_F_enoch\Van_02\Data\van_body_ldf_CO.paa",
					"a3\Soft_F_enoch\Van_02\Data\van_wheel_ldf_MP_CO.paa",
					"a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
					"a3\soft_f_enoch\van_02\data\van_body_ldf_CO.paa"
				};
				materials[] = 
				{
					"\a3\Soft_F_Orange\Van_02\Data\van_body_dirty.rvmat",
					"\A3\Soft_F_Orange\Van_02\Data\van_wheel_dirty.rvmat",
					"",
					"",
					"\a3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"
				};
				factions[] = {Revolucion_BLU_PNB_F, Revolucion_OPF_PNB_F};
			};
		};
	};
	class C_Van_02_Transport_F;
	class C_Van_02_Vehicle_F;
	class B_G_Van_02_Transport_F;
	class B_G_Van_02_Vehicle_F;

	/* Arma 3 Revolucion */
	#include "cfgCartels.hpp"	// Cartels De Baracas
	#include "cfgFRR.hpp"		// FRR
	#include "cfgPNB.hpp"		// Policia Nacional de Baracas
};