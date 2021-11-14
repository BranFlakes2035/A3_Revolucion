class CfgVehicles
{
	/* Inheritance Tree */
	class Car_F;
	class Wheeled_APC_F: Car_F
	{
		class Turrets
		{
			class MainTurret;
		};
	};

    /* Bases */
	class APC_Wheeled_03_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
		class AnimationSources;
		class TextureSources
		{
			class BDF
			{
				displayName = "BDF";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_revolucion\Armor_F_Revolucion\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_BDF_CO.paa",
					"\A3_revolucion\Armor_F_Revolucion\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_BDF_CO.paa",
					"\A3_revolucion\Armor_F_Revolucion\APC_Wheeled_03\Data\RCWS30_BDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[] = {};
			};
		};
	};
    /* Factions */
	class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F{};
	class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
    #include "cfgBDF.hpp"   // Bundeswehr
};