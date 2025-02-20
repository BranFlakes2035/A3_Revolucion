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
    class B_FieldPack_Base;
    class B_Carryall_Base;
    class B_AssaultPack_blk;
    class B_AssaultPackSpec_blk;

    class B_RadioBag_01_m81_F: B_RadioBag_01_base_F
    {
        author = $STR_A3_A_BranFlakes;
        scope = public;
        displayName = "Radiobag (M81)";
        picture = "\a3\supplies_f_enoch\Bags\Data\UI\icon_B_RadioBag_01_wdl_F_ca.paa";
        hiddenSelectionsTextures[] = {"\A3_revolucion\Supplies_F_revolucion\Bags\Data\B_RadioBag_01_m81_CO.paa"};

        /* TFAR */
        tf_dialog = bussole_radio_dialog;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = tf_west_radio_code;
        tf_hasLRradio = true;
        tf_range = 20000;
        tf_subtype = digital_lr;
    };
    class B_RadioBag_01_vhex_F: B_RadioBag_01_base_F
    {
        author = $STR_A3_A_BranFlakes;
        scope = public;
        displayName = "Radiobag (Dark Hex)";
        picture = "\a3\supplies_f_enoch\Bags\Data\UI\icon_B_RadioBag_01_wdl_F_ca.paa";
        hiddenSelectionsTextures[] = {"\A3_revolucion\Supplies_F_revolucion\Bags\Data\b_radiobag_01_vhex_co.paa"};

        /* TFAR */
        tf_dialog = bussole_radio_dialog;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = tf_east_radio_code;
        tf_hasLRradio = true;
        tf_range = 20000;
        tf_subtype = digital_lr;
    };
    class B_FieldPack_vhex_F: B_FieldPack_Base
    {
        author = $STR_A3_A_BranFlakes;
        scope = public;
        displayName = "Field Pack (Dark Hex)";
        picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_FieldPack_owcamo_CA.paa";
        hiddenSelectionsTextures[] = {"\A3_revolucion\Supplies_F_revolucion\Bags\Data\backpack_gorod_vhex_co.paa"};
    };
    class B_Carryall_vhex_F: B_Carryall_Base
    {
        author = $STR_A3_A_BranFlakes;
        scope = public;
        displayName = "Carryall Pack (Dark Hex)";
        picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_Atlas_B_Carryall_kzg_F_CA.paa";
        hiddenSelectionsTextures[] = {"\A3_revolucion\Supplies_F_revolucion\Bags\Data\backpack_tortila_vhex_co.paa"};
    };

    /* Factions */
    #include "cfgCartels.hpp"   // Cartel De Baracas
    #include "cfgFASR.hpp"      // FASR
    #include "cfgBDF.hpp"       // BDF
    #include "cfgFRR.hpp"       // FRR
    #include "cfgVenezuela.hpp" // CSAT Venezuela
    #include "cfgPNB.hpp"       // Baracan National Police

};