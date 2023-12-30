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
				class Turrets;
			};
		};
	};
	class MBT_02_base_F: Tank_F
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
    class O_MBT_02_base_F: MBT_02_base_F
	{
		class TextureSources
		{
			class VZHex
			{
				displayName = $STR_A3_R_TextureSources_VZHex0;
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
					"\A3_Revolucion\Armor_F_Revolucion\MBT_02\Data\rev_MBT_02_body_VZ_CO.paa",
					"\A3_Revolucion\Armor_F_Revolucion\MBT_02\Data\rev_MBT_02_turret_VZ_CO.paa",
					"\A3_Revolucion\Armor_F_Revolucion\MBT_02\Data\rev_MBT_02_VZ_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa"
				};
				faction[] = {};
			};
		};
	};
    class O_MBT_02_cannon_F: O_MBT_02_base_F{};

    /* Factions */
    #include "cfgVenezuela.hpp" // Venezuela
};