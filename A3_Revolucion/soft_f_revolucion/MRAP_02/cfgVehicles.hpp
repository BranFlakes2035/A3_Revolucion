class CfgVehicles
{
	/* Inheritance Tree */
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
	};

    /* Bases */
	class MRAP_02_base_F: Car_F
	{
        /* Inventory */
		class TransportMagazines
		{
			delete _xx_HandGrenade;
		    mag_xx(HandGrenade_East,10);
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};

        /* Liveries */
		class TextureSources
		{
			class Policia
			{
				displayName = "Policia";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
        			"\A3_Revolucion\Soft_F_Revolucion\MRAP_02\Data\MRAP_02_ext_01_Policia_CO.paa",
        			"\A3_Revolucion\Soft_F_Revolucion\MRAP_02\Data\MRAP_02_ext_02_Policia_CO.paa",
        			"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa"
				};
				factions[] = {};
			};
		};
	};
    
    /* Factions */
	class O_MRAP_02_F;
	
    #include "cfgPolicia.hpp"   // Policia
};