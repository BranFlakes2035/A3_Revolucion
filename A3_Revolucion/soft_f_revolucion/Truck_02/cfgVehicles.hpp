class CfgVehicles
{
	/* Inheritance Tree */
	class Car_F;
	class Truck_F: Car_F
	{
		class AnimationSources;
        class EventHandlers;
	};

    /* Bases */
	class Truck_02_base_F: Truck_F
	{
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3,
			camo4
		};
		class AnimationSources: AnimationSources
		{
			class spz_hide;
		};

        /* Liveries */
		class TextureSources
		{
			class BDF
			{
				displayName = "BDF";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kab_BDF_CO.paa",
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kuz_BDF_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class VZHex
			{
				displayName = $STR_A3_R_TextureSources_VZHex0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kab_VZ_CO.paa",
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kuz_VZ_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_transport_base_F: Truck_02_base_F
	{
        /* Liveries */
		class TextureSources
		{
			class BDF
			{
				displayName = "BDF";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kab_BDF_CO.paa",
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kuz_BDF_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class VZHex
			{
				displayName = $STR_A3_R_TextureSources_VZHex0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kab_VZ_CO.paa",
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kuz_VZ_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_box_base_lxWS: Truck_02_Base_F
	{
		/* Liveries */
		class TextureSources
		{
			class BDF
			{
				displayName = "BDF";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kab_BDF_CO.paa",
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_repair_BDF_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class VZHex
			{
				displayName = $STR_A3_R_TextureSources_VZHex0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kab_VZ_CO.paa",
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_repair_VZ_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_medical_base_F: Truck_02_box_base_lxWS
	{
        /* Liveries */
		class TextureSources
		{
			class BDF
			{
				displayName = "BDF";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kab_BDF_CO.paa",
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kuz_BDF_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class VZHex
			{
				displayName = $STR_A3_R_TextureSources_VZHex0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kab_VZ_CO.paa",
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kuz_VZ_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_Ammo_base_lxWS: Truck_02_base_F
	{
        /* Liveries */
		class TextureSources
		{
			class BDF
			{
				displayName = "BDF";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kab_BDF_CO.paa",
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_repair_BDF_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class VZHex
			{
				displayName = $STR_A3_R_TextureSources_VZHex0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kab_VZ_CO.paa",
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_repair_VZ_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_fuel_base_F: Truck_02_base_F
	{
        /* Liveries */
		class TextureSources
		{
			class BDF
			{
				displayName = "BDF";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kab_BDF_CO.paa",
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_fuel_BDF_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class VZHex
			{
				displayName = $STR_A3_R_TextureSources_VZHex0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kab_VZ_CO.paa",
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_fuel_VZ_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_cargo_base_lxWS: Truck_02_Base_F
	{
		hiddenSelections[] = {camo1, camo2, camo3, camo4, camo9};
		/* Liveries */
		class TextureSources
		{
			class BDF
			{
				displayName = "BDF";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kab_BDF_CO.paa",
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kuz_BDF_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class VZHex
			{
				displayName = $STR_A3_R_TextureSources_VZHex0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kab_VZ_CO.paa",
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kuz_VZ_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_flatbed_base_lxWS: Truck_02_cargo_base_lxWS{};
	class Truck_02_aa_base_lxWS;
	class Truck_02_MRL_base_F: Truck_02_base_F
	{
        /* Liveries */
		class TextureSources
		{
			class VZHex
			{
				displayName = $STR_A3_R_TextureSources_VZHex0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_kab_VZ_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Revolucion\Soft_F_Revolucion\Truck_02\Data\Truck_02_MRL_VZ_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
                factions[] = {};
			};
		};
	};

    /* Factions */
    #include "cfgBDF.hpp" // BDF
	#include "cfgFASR.hpp"	// FASR
	#include "cfgVenezuela.hpp"	//Venezuela
};