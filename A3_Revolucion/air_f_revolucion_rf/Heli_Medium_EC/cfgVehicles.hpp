class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter_Base_F;
	class Helicopter_Base_H: Helicopter_base_F
	{
		class TextureSources;
	};

    /* RF + Aegis Compatibility */
	class Heli_EC_01_base_RF: Helicopter_Base_H
	{
		class Turrets;
	};
	class Heli_EC_01_civ_base_RF;
	class Heli_EC_01A_base_RF;
	class Heli_EC_01A_civ_base_RF;
	class Heli_EC_01A_military_base_RF;
	class Heli_EC_02_base_RF: Heli_EC_01_base_RF
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
	};
	class Heli_EC_03_base_RF;
	class Heli_EC_04_base_RF;
	class Heli_EC_04_military_base_RF;

    /* Rev Factions */
	#include "cfgCivil.hpp"			// Baracan Civs

};