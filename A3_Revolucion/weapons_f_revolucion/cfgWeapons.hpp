class cfgWeapons
{
    // Arma 3
    class arifle_AK12U_545_F;
    class arifle_AK12_545_F;
    class arifle_AK12_F;
    class arifle_AK12U_F;
    class arifle_AK12_GL_F;
    class arifle_RPK12_F;
    class arifle_SPAR_01_blk_F;
    class arifle_SPAR_01_GL_blk_F;
    class arifle_SPAR_03_blk_F;
    class arifle_CTAR_blk_F;
    class arifle_CTAR_GL_blk_F;
    class arifle_CTARS_blk_F;
    class arifle_Katiba_GL_F;
    class srifle_DMR_03_F;
    class srifle_DMR_05_blk_F;
    class LMG_03_F;
    class LMG_Zafir_black_F;
    class hgun_P07_blk_F;
    class arifle_ARX_blk_F;
    class NVGoggles;

    // Arma 3 West Sahara CDLC
    class arifle_Velko_lxWS;
    class arifle_VelkoR5_lxWS;
    class arifle_VelkoR5_GL_lxWS;
    class arifle_Galat_lxWS;
    class arifle_SLR_lxWS;
    class arifle_SLR_V_lxWS;
    class arifle_SLR_V_GL_lxWS;
    class LMG_S77_Compact_lxWS;

    // Arma 3 Aegis/Atlas
    class arifle_NCAR15_F;
    class arifle_NCAR15_GL_F;
    class arifle_NCAR15_MG_F;
    class arifle_NCAR15B_F;
    class arifle_SA80_blk_F;
    class arifle_SA80_GL_blk_F;
    class arifle_SCAR_black_F;
    class arifle_SCAR_L_GL_black_F;
    class arifle_SCAR_L_short_black_F;
    class arifle_scar_L_grip_black_F;
    class arifle_SCAR_GL_black_F;
    class hgun_G17_black_F;
    class arifle_FORT651_F;
    class arifle_FORT652_F;
    class arifle_FORT652_GL_F;
    class Atlas_LMG_Negev_black_F;
    class Aegis_arifle_AK74_oak_F;
    class Aegis_arifle_AK74_GL_oak_F;
    class Aegis_arifle_AKS74_oak_F;
    class Aegis_arifle_AKM74_F;
    class Aegis_arifle_AKM74_GL_F;
    class Aegis_arifle_AK103_F;
    class Aegis_arifle_AK103_GL_F;
    class Aegis_arifle_M4A1_F;
    class Aegis_arifle_M4A1_grip_F;
    class Aegis_arifle_M4A1_short_F;
    class Aegis_arifle_M4A1_GL_F;
    class Aegis_srifle_SVD_f;
    class Aegis_srifle_SVD_blk_f;
    class Aegis_srifle_SVD_plum_f;
    class Aegis_SMG_Gepard_blk_F;
    class Aegis_MMG_FNMAG_F;
    class Aegis_NV_G_Armband_Blu_F: NVGoggles
    {
        class ItemInfo;
    };

    class rev_NV_G_Armband_fasr_F: Aegis_NV_G_Armband_Blu_F
    {
        author = $STR_A3_A_Jamie;
        displayName = "Armband [FASR]";
        picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_IDAP_F_CA.paa";
        hiddenSelectionsTextures[] = 
        {
            "\A3_Revolucion\Characters_F_revolucion\Facewear\Data\G_Armband_fasr_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] = 
            {
                "\A3_Revolucion\Characters_F_revolucion\Facewear\Data\G_Armband_fasr_CO.paa"
            };
        };
    };
    class rev_NV_G_Armband_fasr_alt_F: rev_NV_G_Armband_fasr_F
    {
        author = $STR_A3_A_Jamie;
        displayName = "Armband [FASR] (Alt)";
        model = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
        picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_IDAP_F_CA.paa";
        hiddenSelectionsTextures[] = 
        {
            "\A3_Revolucion\Characters_F_revolucion\Facewear\Data\G_Armband_fasr_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
            modelOff = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
            mass = 2;
        };
    };
    class rev_NV_G_Armband_vz_F: Aegis_NV_G_Armband_Blu_F
    {
        author = $STR_A3_A_Jamie;
        displayName = "Armband [Venezuela]";
        picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_IDAP_F_CA.paa";
        hiddenSelectionsTextures[] = 
        {
            "\A3_Revolucion\Characters_F_revolucion\Facewear\Data\G_Armband_vz_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] = 
            {
                "\A3_Revolucion\Characters_F_revolucion\Facewear\Data\G_Armband_vz_CO.paa"
            };
        };
    };
    class rev_NV_G_Armband_vz_alt_F: rev_NV_G_Armband_fasr_F
    {
        author = $STR_A3_A_Jamie;
        displayName = "Armband [Venezuela] (Alt)";
        model = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
        picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_IDAP_F_CA.paa";
        hiddenSelectionsTextures[] = 
        {
            "\A3_Revolucion\Characters_F_revolucion\Facewear\Data\G_Armband_vz_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
            modelOff = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
            mass = 2;
        };
    };

    // Presets
    #include "presets.hpp"
};