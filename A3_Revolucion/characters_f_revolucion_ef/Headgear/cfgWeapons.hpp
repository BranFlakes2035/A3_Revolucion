class CfgWeapons
{
    // Arma 3

    // Arma 3 Aegis + Atlas
	class H_MK7_Base_F;
    class H_Booniehat_khk;
    class H_MilCap_ocamo;
    class EF_H_MCH_BasicNet_Des;
    class EF_H_MCH_BasicNet_Olive;
	
    // Arma 3 Revolucion
    class Rev_H_MCH_BasicNet_FDB_Marine_EF: EF_H_MCH_BasicNet_Olive
    {
        author = "Tiny Gecko Studios";
        scope = public;
        displayName = $STR_A3_R_CfgWeapons_rev_Headgear_EF_H_MCH_BasicNet_fdbmarine0;
        picture = "\A3_Revolucion\characters_f_revolucion\Headgear\Data\UI\Rev_H_MCH_BasicNet_FDB_Marine_EF_ca.paa";
        hiddenSelectionsTextures[] = 
        {
            "\A3_Revolucion\Characters_F_Revolucion_ef\headgear\data\mch_base_od_co.paa", 
            "\A3_Revolucion\Characters_F_Revolucion_ef\headgear\data\mch_cover_fdb_co.paa"
        };
    };
};