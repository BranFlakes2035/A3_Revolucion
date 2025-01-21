class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter_Base_F;
    class Helicopter_Base_H: Helicopter_base_F
	{
		/* Turrets Inheritance - For Doorgunners*/
		class Turrets;
	};

    /* Bases */
	class jj_uh1h_base: Helicopter_Base_H
	{
		/* Turrets Inheritance - For Doorgunners*/
		class Turrets: Turrets
		{
			class uh1_LeftDoorGun;
			class uh1_RightDoorGun;
			class uh1_CopilotTurret;
			class uh1_CargoTurret_01;
			class uh1_CargoTurret_02;
			class uh1_CargoTurret_Right;
			class uh1_CargoTurret_Left;
		};
        /* Liveries */
		class TextureSources
		{
			class FDB
			{
				displayName = "FDB";
				author = $STR_A3_A_BranFlakes;
				textures[] =
    			{
        			"\A3_Revolucion\air_f_revolucion_jh\UH1X\data\uh1_ext_01_fdb_co.paa",
        			"JH_UH1X\data\uh1_int_01_co.paa",
        			"JH_UH1X\data\uh1_int_02_co.paa",
        			"JH_UH1X\data\uh1_ext_02_co.paa",
        			"JH_UH1X\data\uh1_int_03_co.paa",
       			 	"JH_UH1X\data\uh1_int_04_co.paa",
        			"\A3_Revolucion\air_f_revolucion_jh\UH1X\data\Nose_fdb_co.paa",
        			"JH_UH1X\data\uh1_ext_03_ca.paa"
    			};
				factions[] = {};
			};
		};
	};
	class jj_uh1h_unarmed_base;
	class jj_uh1h_doorgunner_base: jj_uh1h_base
	{
		/* Turrets Inheritance - For Doorgunners*/
		class Turrets: Turrets
		{
			class uh1_LeftDoorGun: uh1_LeftDoorGun{};
			class uh1_RightDoorGun: uh1_RightDoorGun{};
			class uh1_CopilotTurret: uh1_CopilotTurret{};
			class uh1_CargoTurret_01: uh1_CargoTurret_01{};
			class uh1_CargoTurret_02: uh1_CargoTurret_02{};
			class uh1_CargoTurret_Right: uh1_CargoTurret_Right{};
			class uh1_CargoTurret_Left: uh1_CargoTurret_Left{};
		};
	};
	
	class jj_uh1h_medical_base;

    /* Factions */
	#include "cfgFDB.hpp"		//Venezuela
};