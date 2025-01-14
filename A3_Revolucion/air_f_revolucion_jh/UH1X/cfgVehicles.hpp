class CfgVehicles
{
    /* Inheritance Tree */
    class Helicopter_Base_H;

    /* Bases */
	class jj_uh1h_base: Helicopter_Base_H
	{

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

    /* Factions */
	#include "cfgFDB.hpp"		//Venezuela
};