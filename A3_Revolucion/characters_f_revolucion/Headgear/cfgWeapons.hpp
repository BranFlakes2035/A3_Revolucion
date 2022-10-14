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
        picture = "\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\UI\H_MK7_atacsfg_F_CA.paa";
        model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Mk7_F";
        hiddenSelections[] = { "Camo","Camo2","Camo3" };
        hiddenSelectionsTextures[] =
        {
         	"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\MK7_atacsfg.tga",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip_d_co.paa"
        };
    };
    class H_HelmetB;
    class H_HelmetB_plain_atacsix_F: H_HelmetB
    {
      author = $STR_A3_A_AveryTheKitty;
      displayName = "Combat Helmet [FDB Marines] (Covered)";
      //picture = "\A3_coldfront\Characters_F_coldfront\Headgear\Data\UI\icon_H_HelmetB_plain_white_CA.paa";
      hiddenSelectionsMaterials[] = {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\MICH.rvmat"};
      hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\H_Helmet_ECH_Marines_CO.paa"};
    };
    class H_HelmetSpecB;
    class H_HelmetSpecB_plain_atacsix_F: H_HelmetSpecB
    {
      author = $STR_A3_A_AveryTheKitty;
      displayName = "Combat Helmet [FDB Marines] (Covered, Enhanced)";
      //picture = "\A3_coldfront\Characters_F_coldfront\Headgear\Data\UI\icon_H_HelmetSpecB_white_CA.paa";
      hiddenSelectionsMaterials[] = {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\MICH.rvmat"};
      hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\H_Helmet_ECH_Marines_CO.paa"};
    };
    class H_Booniehat_atacs_F: H_Booniehat_khk
    {
        author = "Bran Flakes";
        displayName = "Booniehat [BDF]";
        picture = "\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\UI\H_Booniehat_atacs_F_CA.paa";
        hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\booniehat_atacs_CO.paa"};
    };
    class H_Booniehat_m81_F: H_Booniehat_khk
    {
        author = "Bran Flakes";
        displayName = "Booniehat (M81)";
        picture = "\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\UI\H_Booniehat_m81_F_CA.paa";
        hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\booniehat_m81_CO.paa"};
    };
    class H_milcap_atacs_F: H_MilCap_ocamo
    {
        author = "Bran Flakes";
        displayName = "Military Cap [BDF]";
        picture = "\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\UI\H_milcap_atacs_F_CA.paa";
        hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\cappatrol_atacs_CO.paa"};
    };
    class H_milcap_m81_F: H_MilCap_ocamo
    {
        author = "Bran Flakes";
        displayName = "Military Cap (M81)";
        picture = "\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\UI\H_milcap_m81_F_CA.paa";
        hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\cappatrol_m81_CO.paa"};
    };
    class H_HelmetSpecter_cover_base_F;
    class rev_H_HelmetSpecter_cover_whex_CO: H_HelmetSpecter_cover_base_F
    {
        author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_rev_H_HelmetSpecter_cover_whex_F0;
        picture = "\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\UI\rev_H_HelmetSpecter_cover_whex_CO_CA.paa";
        hiddenSelectionsTextures[] =
        {
            "\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_CO.paa",
            "\A3_revolucion\Characters_F_Revolucion\Headgear\Data\H_HelmetSpecter_cover_whex_CO.paa"
        };
    };



	////////////////////////////////////////////////////////
	/// CTRG OPSCOREs
	////////////////////////////////////////////////////////
	class H_HelmetB_light;
	class H_HelmetSpecB_light;

	//// Dazzle #1 ////
    class Rev_H_OPSCORE_01_dazzle_01: H_HelmetB_light
    {
        author						= $STR_A3_A_AveryTheKitty;
        scope						= public;
        displayName					= $STR_A3_A_CfgWeapons_Rev_H_OPSCORE_01_dazzle_01_F0;
        picture						= /*"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\UI\Rev_H_OPSCORE_01_dazzle_01_CA.paa"*/ "\A3\Weapons_F\Data\Placeholder_CO.paa";
        hiddenSelectionsTextures[]	= {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\H_OPSCORE_dazzle_01_CO.paa"};
        hiddenSelectionsMaterials[]	= {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\H_OPSCORE.rvmat"};
    };
    class Rev_H_OPSCORE_02_dazzle_01: H_HelmetSpecB_light
    {
        author						= $STR_A3_A_AveryTheKitty;
        scope						= public;
        displayName					= $STR_A3_A_CfgWeapons_Rev_H_OPSCORE_02_dazzle_01_F0;
        picture						= /*"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\UI\Rev_H_OPSCORE_02_dazzle_01_CA.paa"*/ "\A3\Weapons_F\Data\Placeholder_CO.paa";
        hiddenSelectionsTextures[]	= {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\H_OPSCORE_dazzle_01_CO.paa"};
        hiddenSelectionsMaterials[]	= {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\H_OPSCORE.rvmat"};
    };

	//// Dazzle #2 ////
    class Rev_H_OPSCORE_01_dazzle_02: Rev_H_OPSCORE_01_dazzle_01
    {
        displayName					= $STR_A3_A_CfgWeapons_Rev_H_OPSCORE_01_dazzle_02_F0;
        picture						= /*"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\UI\Rev_H_OPSCORE_01_dazzle_02_CA.paa"*/ "\A3\Weapons_F\Data\Placeholder_CO.paa";
        hiddenSelectionsTextures[]	= {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\H_OPSCORE_dazzle_02_CO.paa"};
    };
    class Rev_H_OPSCORE_02_dazzle_02: Rev_H_OPSCORE_02_dazzle_01
    {
        displayName					= $STR_A3_A_CfgWeapons_Rev_H_OPSCORE_02_dazzle_02_F0;
        picture						= /*"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\UI\Rev_H_OPSCORE_02_dazzle_02_CA.paa"*/ "\A3\Weapons_F\Data\Placeholder_CO.paa";
        hiddenSelectionsTextures[]	= {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\H_OPSCORE_dazzle_02_CO.paa"};
    };

	//// Dazzle #3 ////
    class Rev_H_OPSCORE_01_dazzle_03: Rev_H_OPSCORE_01_dazzle_01
    {
        displayName					= $STR_A3_A_CfgWeapons_Rev_H_OPSCORE_01_dazzle_03_F0;
        picture						= /*"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\UI\Rev_H_OPSCORE_01_dazzle_03_CA.paa"*/ "\A3\Weapons_F\Data\Placeholder_CO.paa";
        hiddenSelectionsTextures[]	= {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\H_OPSCORE_dazzle_03_CO.paa"};
    };
    class Rev_H_OPSCORE_02_dazzle_03: Rev_H_OPSCORE_02_dazzle_01
    {
        displayName					= $STR_A3_A_CfgWeapons_Rev_H_OPSCORE_02_dazzle_03_F0;
        picture						= /*"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\UI\Rev_H_OPSCORE_02_dazzle_03_CA.paa"*/ "\A3\Weapons_F\Data\Placeholder_CO.paa";
        hiddenSelectionsTextures[]	= {"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\H_OPSCORE_dazzle_03_CO.paa"};
    };
};