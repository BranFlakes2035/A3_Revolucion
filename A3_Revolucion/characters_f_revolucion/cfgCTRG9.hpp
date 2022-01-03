class B_CTRG_Soldier_TL_tna_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_TL_tna_F.jpg";
	icon = iconManLeader;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_red),
        mag_2(30Rnd_556x45_Stanag_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_red),
        mag_2(30Rnd_556x45_Stanag_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Soldier_Exp_tna_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_Exp_tna_F.jpg";
	icon = iconManExplosive;
	picture = pictureExplosive;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_3(APERSMine_Range_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_3(APERSMine_Range_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Soldier_Medic_tna_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_Medic_tna_F.jpg";
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_SF_s};
			speechPlural[] = {veh_infantry_SF_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_SF_s;
	textPlural = $STR_A3_nameSound_veh_infantry_SF_p;
	nameSound = veh_infantry_SF_s;
	icon = iconManMedic;
	picture = pictureHeal;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Soldier_M_tna_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_M_tna_F.jpg";
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_SF_s};
			speechPlural[] = {veh_infantry_SF_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_SF_s;
	textPlural = $STR_A3_nameSound_veh_infantry_SF_p;
	nameSound = veh_infantry_SF_s;
	weapons[] =
    {
        arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
    };
	magazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	items[] =
	{
		FirstAidKit,
		optic_tws_sniper
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_sniper
	};
};
class B_CTRG_Soldier_LAT_tna_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_LAT_tna_F.jpg";
	icon = iconManAT;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_NLAW_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_NLAW_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
		NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
		NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Soldier_AR_tna_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_AR_tna_F.jpg";
	weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	items[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
};
class B_CTRG_Soldier_JTAC_tna_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_JTAC_tna_F.jpg";
	backpack = B_RadioBag_01_green_F;
	weapons[] =
    {
        arifle_SPAR_01_GL_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_GL_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_2(B_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green),
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_2(B_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green),
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	linkedItems[] =
	{
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};