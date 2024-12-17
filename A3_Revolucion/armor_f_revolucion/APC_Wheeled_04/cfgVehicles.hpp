class CfgVehicles
{
    /* Inheritance Tree */
    class Wheeled_APC_F;
    class APC_Wheeled_04_base_F: Wheeled_APC_F
    {
        class Turrets;
        class TextureSources
        {
            class Guerrila_FRR
            {
                displayName = $STR_A3_R_CfgMarkers_flag_FRR;
                author = $STR_A3_A_BranFlakes;
                textures[] =
                {
                    "\A3_revolucion\Armor_F_revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_body_FRR_CO.paa",
                    "\A3_revolucion\Armor_F_revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_body2_FRR_CO.paa",
                    "\A3_revolucion\Armor_F_revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_tow_FRR_CO.paa",
                    "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
                    "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
                };
            };
            class VZHex
            {
                displayName = $STR_A3_R_TextureSources_VZHex0;
                author = $STR_A3_A_BranFlakes;
                textures[] =
                {
                    "\A3_revolucion\Armor_F_revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_body_VZ_CO.paa",
                    "\A3_revolucion\Armor_F_revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_body2_VZ_CO.paa",
                    "\A3_revolucion\Armor_F_revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_tow_VZ_CO.paa",
                    "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
                    "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
                };
            };
        };

    };
    class APC_Wheeled_04_export_base_F: APC_Wheeled_04_base_F
    {
        class TextureSources
        {
            class BDF
            {
                displayName = "FDB";
                author = $STR_A3_A_BranFlakes;
                textures[] =
                {
                    "\A3_revolucion\Armor_F_Revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_body_FDB_CO.paa",
                    "\A3_revolucion\Armor_F_Revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_body2_FDB_CO.paa",
                    "\A3_revolucion\Armor_F_Revolucion\APC_Wheeled_04\data\btr100a_turret_FDB_co.paa"
                };
            };
        };
        class Turrets: Turrets
        {
            class MainTurret;
        };
        
    };
    class O_R_APC_Wheeled_04_cannon_F: APC_Wheeled_04_base_F{};

    /* Factions */
    #include "cfgFRR.hpp"           // FRR
    #include "cfgVenezuela.hpp"     // Venezuela
    #include "cfgFDB.hpp"           // Baracas
    #include "cfgFASR.hpp"          // FASR
};