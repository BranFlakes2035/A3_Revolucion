class CfgVehicles
{
    class I_Heli_Light_01_F;
    class Helicopter_Base_H;
    class I_Heli_Light_01_dynamicLoadout_F;
    class I_C_Heli_Light_01_civil_F;
    class Heli_Light_01_base_F: Helicopter_Base_H
    {
        class Components;

        /* Liveries */
        class TextureSources
        {
            class FDB
            {
                displayName = "FDB";
                author = $STR_A3_A_BranFlakes;
                textures[] = {"A3_Revolucion\Air_F_Revolucion\Heli_Light_01\Data\Heli_Light_01_ext_FDB_CO.paa"};
                factions[] = {};
            };
        };
    };
    class Heli_Light_01_unarmed_base_F;
    class Heli_Light_01_armed_base_F: Heli_Light_01_base_F
    {
        /* Liveries */
        class TextureSources: TextureSources
        {
            class FDB: FDB
            {
                textures[] =
                {
                    "\A3_Revolucion\Air_F_Revolucion\Heli_Light_01\Data\Heli_Light_01_ext_FDB_CO.paa",
                    "\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"
                };
            };
        };
    };
    /* Factions */
	#include "cfgCartels.hpp"     // Cartels De Baracas
    #include "cfgBDF.hpp"         // Baracan Defence Forces
    #include "cfgFASR.hpp"        // FASR
};