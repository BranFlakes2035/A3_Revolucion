class CfgVehicles
{
    /* Definitions */
    #include "\A3_Aegis\macros_smokeShells.hpp"

    /* Arsenal */
    class B_Carryall_oli;
    class B_TacticalPack_oli;
    class B_FieldPack_green_F;
    class B_Kitbag_rgr;
    class B_Kitbag_blk;
    class B_AssaultPack_khk;
    class B_RadioBag_01_base_F;

    class B_RadioBag_01_aucamo_F: B_RadioBag_01_base_F
    {
        author = $STR_A3_A_BranFlakes;
        scope = public;
        displayName = "Radiobag (M81)";
        picture = "\a3\supplies_f_enoch\Bags\Data\UI\icon_B_RadioBag_01_wdl_F_ca.paa";
        hiddenSelectionsTextures[] = {"\A3_revolucion\Supplies_F_revolucion\Bags\Data\B_RadioBag_01_m81_CO.paa"};

        /* TFAR */
        tf_dialog = bussole_radio_dialog;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = tf_east_radio_code;
        tf_hasLRradio = true;
        tf_range = 20000;
        tf_subtype = digital_lr;
    };

    /* Factions */
    #include "cfgCartels.hpp"   // Cartel De Baracas
    #include "cfgFASR.hpp"      // FASR
    #include "cfgBDF.hpp"       // BDF
    #include "cfgFRR.hpp"       // FRR

};