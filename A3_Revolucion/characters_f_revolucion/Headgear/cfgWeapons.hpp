class CfgWeapons
{
    // Arma 3

    // Arma 3 Aegis + Atlas
	class H_MK7_Base_F;
	
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
    class H_MK7_atacsau_F: H_MK7_Base_F
    {
        author = "Bran Flakes and TacticalDruid";
        scope = public;
        displayName = $STR_A3_R_CfgWeapons_H_mk7_atacsau0;
        //picture = "Picture path";
        model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Mk7_F";
        hiddenSelections[] = { "Camo","Camo2","Camo3" };
        hiddenSelectionsTextures[] =
        {
         	"\A3_Revolucion\Characters_F_Revolucion\Headgear\Data\MK7_atacsau.tga",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip_d_co.paa"
        };
    };
};