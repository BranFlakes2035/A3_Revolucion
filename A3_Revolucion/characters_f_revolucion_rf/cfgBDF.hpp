/* Baracan Army */
class Rev_B_BDF_Soldier_Base_F;
class Rev_B_BDF_Soldier_PSRL_F: Rev_B_BDF_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_AT_s};
			speechPlural[] = {veh_infantry_AT_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_AT_s;
	textPlural = $STR_A3_nameSound_veh_infantry_AT_p;
	nameSound = veh_infantry_AT_s;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_AT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_LXRF_B_soldier_Launcher;
	role = MissileSpecialist;
	icon = iconManAT;
	cost = 130000;
	threat[] =
    {
        0.8,    // Soft
        0.8,    // Armor
        0.3     // Air
    };
	secondaryAmmoCoef = 0.5;
    backpack = B_Kitbag_ssg_BDF_PSRL_F;
	uniform = rev_U_UniformBDU_04_fdb_F;
	weapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		launch_PSRL1_PWS_olive_RF,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		launch_PSRL1_PWS_olive_RF,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(35Rnd_556x45_Velko_reload_tracer_red_lxWS),
		PSRL1_AT_RF,
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(35Rnd_556x45_Velko_reload_tracer_red_lxWS),
		PSRL1_AT_RF,
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_oli_F,
		H_PASGT_basic_olive_F,
		Aegis_Goggles_Cover_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_oli_F,
		H_PASGT_basic_olive_F,
		Aegis_Goggles_Cover_grn_F,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Support_CMort_F: B_Support_Mort_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
    scopeCurator = public;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_lite_F.jpg";
	displayName = $STR_LXRF_Soldier_Mortar;
	faction = Revolucion_BLU_BDF_F;
	side = TWest;
	genericNames = VenezuelanMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		Head_Latino,
		G_HAF_default
	};
	headgearList[]={};
	uniformClass = rev_U_UniformBDU_04_fdb_F;
	backpack = B_CommandoMortar_weapon_RF;
	weapons[] =
	{
		arifle_Velko_lxWS,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_Velko_lxWS,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(35Rnd_556x45_Velko_reload_tracer_red_lxWS),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(35Rnd_556x45_Velko_reload_tracer_red_lxWS),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_camo,
		H_Booniehat_mgrn,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_camo,
		H_Booniehat_mgrn,
		DefaultManLinkedItems
	};
};
/* Baracan Marines */
class Rev_B_BDF_Marine_base_F;
class Rev_B_BDF_Marine_PSRL_F: Rev_B_BDF_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_AT_s};
			speechPlural[] = {veh_infantry_AT_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_AT_s;
	textPlural = $STR_A3_nameSound_veh_infantry_AT_p;
	nameSound = veh_infantry_AT_s;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Marine_AT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_LXRF_B_soldier_Launcher;
	uniformClass = rev_U_UniformBDU_04_fdbmarines_F;
	backpack = B_Kitbag_ssg_BDF_PSRL_F;
	cost = 200000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
	weapons[] =
    {
        Aegis_arifle_M4A1_Grip_Holo_IR_F,
		launch_PSRL1_PWS_olive_RF,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_M4A1_Grip_Holo_IR_F,
		launch_PSRL1_PWS_olive_RF,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        PSRL1_AT_RF,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        PSRL1_AT_RF,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_Alt_Oli_F,
		Rev_H_O_Helmet_canvas_FDB,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_Alt_Oli_F,
		Rev_H_O_Helmet_canvas_FDB,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
};