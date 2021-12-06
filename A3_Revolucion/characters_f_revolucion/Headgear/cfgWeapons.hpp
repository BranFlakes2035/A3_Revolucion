class CfgWeapons
{
    // Arma 3

    // Arma 3 Aegis + Atlas
	class H_MK7_Base_F;
    class H_Booniehat_khk;
    class H_MilCap_ocamo;
	
    // Arma 3 Revolucion
	class H_MK7_atacsfg_F: H_MK7_Base_F
    {
        author = "Bran Flakes and TacticalDruid";
        scope = public;
        displayName = $STR_A3_R_CfgWeapons_H_mk7_atacsfg0;
        //picture = "Picture path";
        model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Mk7_F";
        hiddenSelections[] = { "Camo","Camo2","Camo3" };
        hiddenSelectionsTextures[] =
        {
         	"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\MK7_atacsfg.tga",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip_d_co.paa"
        };
    };
    class H_Booniehat_atacs_F: H_Booniehat_khk
    {
        author = "Bran Flakes";
        displayName = "Booniehat [BDF]";
        //picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
        hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\booniehat_atacs_CO.paa"};
    };
    class H_Booniehat_m81_F: H_Booniehat_khk
    {
        author = "Bran Flakes";
        displayName = "Booniehat (M81)";
        //picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
        hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\booniehat_m81_CO.paa"};
    };
    class H_milcap_atacs_F: H_MilCap_ocamo
    {
        author = "Bran Flakes";
        displayName = "Military Cap [BDF]";
        //picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
        hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\cappatrol_atacs_CO.paa"};
    };
    class H_milcap_m81_F: H_MilCap_ocamo
    {
        author = "Bran Flakes";
        displayName = "Military Cap (M81)";
        //picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
        hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\cappatrol_m81_CO.paa"};
    };
    class H_HelmetSpecter_cover_base_F;
    class rev_H_HelmetSpecter_cover_whex_CO: H_HelmetSpecter_cover_base_F
    {
        author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_rev_H_HelmetSpecter_cover_whex_F0;
        //picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecter_cover_whex_F_CA.paa";
        hiddenSelectionsTextures[] =
        {
            "\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_CO.paa",
            "\A3_revolucion\Characters_F_Revolucion\Headgear\Data\H_HelmetSpecter_cover_whex_CO.paa"
        };
    };
};
