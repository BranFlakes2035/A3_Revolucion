/* Policia Sharpshooters */
class Rev_B_PNB_Soldier_M_F;
class Rev_B_PNB_Sharpshooter_F: Rev_B_PNB_Soldier_M_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_PNB_Sharpshooter_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_B_PNB_Sharpshooter_F0;
	role = Marksman;
	cost = 250000;
	weapons[] =
	{
		Rev_srifle_h6_blk_DMS_BI_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Rev_srifle_h6_blk_DMS_BI_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(10rnd_556x45_ap_stanag_rf),
        mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(10rnd_556x45_ap_stanag_rf),
        mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
		SmokeShell
	};
	linkedItems[] =
	{
		rev_V_Press_bnp_F,
		Aegis_H_Milcap_tachs_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		rev_V_Press_bnp_F,
		Aegis_H_Milcap_tachs_blk_F,
		DefaultManLinkedItems
	};
};
class Rev_O_PNB_Sharpshooter_F: Rev_B_PNB_Sharpshooter_F
{
    faction = Revolucion_OPF_PNB_F;
	side = TEast;
};