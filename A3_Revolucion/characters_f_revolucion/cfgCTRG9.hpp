class Rev_B_CTRG_Soldier_TL_G9_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Soldier_TL_G9_F.jpg";
	author = $STR_A3_A_BranFlakes;
	faction = Revolucion_BLU_CTRG_F;
	editorsubcategory = "EdSubcat_Personnel";
	scope = public;
    scopeCurator = public;
	icon = iconManLeader;
	uniformClass = Rev_U_B_CTRG_Uniform_01_F;
	displayName = $STR_B_SOLDIER_TL_F0;
	weapons[] =
    {
        rev_arifle_scar_L_grip_hamr_black_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        rev_arifle_scar_L_grip_hamr_black_F,
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
		V_carrierrigKBT_01_light_CTRG_F,
		lxWS_H_Headset,
		G_Shemag_Tactical,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		lxWS_H_Headset,
		G_Shemag_Tactical,
        DefaultManLeaderLinkedItems,
	};
};
class Rev_B_CTRG_Soldier_G9_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Soldier_G9_F.jpg";
	faction = Revolucion_BLU_CTRG_F;
	author = $STR_A3_A_BranFlakes;
	editorsubcategory = "EdSubcat_Personnel";
	scope = public;
    scopeCurator = public;
    displayName = "Scout";
	uniformClass = U_lxWS_ION_Casual4;
	weapons[] =
    {
        rev_arifle_scar_L_grip_hamr_black_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        rev_arifle_scar_L_grip_hamr_black_F,
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
		V_carrierrigKBT_01_light_CTRG_F,
		H_Booniehat_M81_F,
		G_Shemag_Shades,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Booniehat_M81_F,
		G_Shemag_Shades,
        DefaultManLeaderLinkedItems,
	};
};
class B_CTRG_Soldier_Exp_tna_F;
class Rev_B_CTRG_Soldier_Exp_G9_F: B_CTRG_Soldier_Exp_tna_F
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Soldier_Exp_G9_F.jpg";
	faction = Revolucion_BLU_CTRG_F;
	author = $STR_A3_A_BranFlakes;
	editorsubcategory = "EdSubcat_Personnel";
	scope = public;
    scopeCurator = public;
	icon = iconManExplosive;
	displayName = $STR_A3_B_CTRG_Soldier_Exp_tna_F0;
	picture = pictureExplosive;
	backpack = B_Kitbag_rgr_CTRGExp_F;
	uniformClass = U_B_ION_uniform_01_poloshirt_blue_F;
	weapons[] =
    {
        rev_arifle_scar_L_grip_hamr_black_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        rev_arifle_scar_L_grip_hamr_black_F,
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
		V_carrierrigKBT_01_light_CTRG_F,
		H_Cap_headphones,
		G_Sport_blackred,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Cap_headphones,
		G_Sport_blackred,
        DefaultManLeaderLinkedItems,
	};
};
class B_CTRG_Soldier_Medic_tna_F;
class Rev_B_CTRG_Soldier_Medic_G9_F: B_CTRG_Soldier_Medic_tna_F
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Soldier_Medic_G9_F.jpg";
	faction = Revolucion_BLU_CTRG_F;
	author = $STR_A3_A_BranFlakes;
	editorsubcategory = "EdSubcat_Personnel";
	displayName = $STR_A3_B_CTRG_Soldier_Medic_tna_F0;
	scope = public;
    scopeCurator = public;
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
	uniformClass = U_lxWS_ION_Casual2;
	weapons[] =
    {
        rev_arifle_scar_L_grip_hamr_black_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        rev_arifle_scar_L_grip_hamr_black_F,
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
		V_carrierrigKBT_01_light_CTRG_F,
		lxWS_H_capB_rvs_blk_ION,
		G_Shemag_tactical,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		lxWS_H_capB_rvs_blk_ION,
		G_Shemag_tactical,
        DefaultManLeaderLinkedItems,
	};
};
class B_CTRG_Soldier_M_tna_F;
class Rev_B_CTRG_Soldier_M_G9_F: B_CTRG_Soldier_M_tna_F
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Soldier_M_G9_F.jpg";
	faction = Revolucion_BLU_CTRG_F;
	author = $STR_A3_A_BranFlakes;
	editorsubcategory = "EdSubcat_Personnel";
	displayName = $STR_B_SOLDIER_M_F0;
	scope = public;
    scopeCurator = public;
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
	uniformClass = U_lxWS_ION_Casual5;
	weapons[] =
    {
        Rev_arifle_SPAR_03_blk_MOS_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
    };
	respawnWeapons[] =
    {
        Rev_arifle_SPAR_03_blk_MOS_F,
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
		V_carrierrigKBT_01_light_CTRG_F,
		lxWS_H_Headset,
		G_Bandanna_Shades,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		lxWS_H_Headset,
		G_Bandanna_Shades,
        DefaultManLeaderLinkedItems,
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
class B_CTRG_Soldier_LAT_tna_F;
class Rev_B_CTRG_Soldier_LAT_G9_F: B_CTRG_Soldier_LAT_tna_F
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Soldier_LAT_G9_F.jpg";
	faction = Revolucion_BLU_CTRG_F;
	author = $STR_A3_A_BranFlakes;
	editorsubcategory = "EdSubcat_Personnel";
	scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_CTRG_Soldier_LAT_tna_F0;
	icon = iconManAT;
	uniformClass = U_BG_Guerilla2_2;
	weapons[] =
    {
        arifle_SPAR_01_blk_rco_F,
        hgun_P07_blk_Snds_F,
		launch_NLAW_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_rco_F,
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
		V_carrierrigKBT_01_light_CTRG_F,
		H_Cap_blk,
		G_Shades_Red,
        DefaultManLeaderLinkedItems,Items,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Cap_blk,
		G_Shades_Red,
        DefaultManLeaderLinkedItems,
	};
};
class B_CTRG_Soldier_AR_tna_F;
class Rev_B_CTRG_Soldier_AR_G9_F: B_CTRG_Soldier_AR_tna_F
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Soldier_AR_G9_F.jpg";
	faction = Revolucion_BLU_CTRG_F;
	author = $STR_A3_A_BranFlakes;
	displayName = $STR_B_SOLDIER_AR_F0;
	editorsubcategory = "EdSubcat_Personnel";
	scope = public;
    scopeCurator = public;
	uniformClass = atlas_U_C_Uniform_01_tshirt_white_F;
	weapons[] =
    {
        arifle_spar_02_HAMR_blk_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_spar_02_HAMR_blk_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_8(75Rnd_556x45_Stanag_lxWS),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_8(75Rnd_556x45_Stanag_lxWS),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Cap_oli_HS,
		G_Shemag_Shades,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Cap_oli_HS,
		G_Shemag_Shades,
        DefaultManLeaderLinkedItems,
	};
	items[] =
	{
		FirstAidKit,
	};
	respawnItems[] =
	{
		FirstAidKit,
	};
};
class Rev_B_CTRG_Soldier_JTAC_G9_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Soldier_JTAC_G9_F.jpg";
	faction = Revolucion_BLU_CTRG_F;
	author = $STR_A3_A_BranFlakes;
	editorsubcategory = "EdSubcat_Personnel";
	displayName = "Grenadier";
	scope = public;
    scopeCurator = public;
	uniformClass = U_B_ION_uniform_01_tshirt_black_F;
	weapons[] =
    {
        rev_arifle_scar_GL_hamr_black_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
	respawnWeapons[] =
    {
        rev_arifle_scar_GL_hamr_black_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
	magazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
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
        mag_6(20Rnd_762x51_Mag),
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
		V_carrierrigKBT_01_light_CTRG_F,
		H_Bandanna_khk_hs,
		G_Shemag_Shades,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Bandanna_khk_hs,
		G_Shemag_Shades,
        DefaultManLeaderLinkedItems,
	};
};

/* Revolucion - Story Characters */
class Rev_B_N_Story_Rafael_Austin: Rev_B_CTRG_Soldier_TL_G9_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_N_Story_Rafael_Austin.jpg";
    scope = public;
    faction = Revolucion_BLU_CTRG_F;
    scopeCurator = public;
    displayName = "Rafael Austin";
	editorSubcategory = EdSubcat_Personnel_Story;
	uniformClass = Rev_U_B_CTRG_Uniform_01_F;
	backpack = B_RadioBag_01_green_F;
	identityTypes[] =
	{
		LanguageENG_F,
		Revolucion_CTRG_Rafael_Austin
	};
	weapons[] =
	{
		rev_arifle_scar_L_GL_hamr_black_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	respawnWeapons[] =
	{
		rev_arifle_scar_L_GL_hamr_black_F,
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
		V_carrierrigKBT_01_light_CTRG_F,
		H_Booniehat_M81_F,
		NVgoggles_INDEP,
		G_Squares,
		ItemGPS,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Booniehat_M81_F,
		NVgoggles_INDEP,
		G_Squares,
		ItemGPS,
		DefaultManLeaderLinkedItems
	};
	allowedHeadgear[] = {};
    headgearList[] = {};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setIdentity ""Revolucion_CTRG_Rafael_Austin"";";
	};
};
class Rev_B_CTRG_Story_Patrick_Barker: Rev_B_CTRG_Soldier_G9_F
{
	author = $STR_A3_A_BranFlakes;
	identityTypes[] =
	{
		LanguageENG_F,
		Revolucion_CTRG_Patrick_Barker
	};
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Story_Patrick_Barker.jpg";
    scope = public;
    scopeCurator = public;
    displayName = "Patrick Barker";
	editorSubcategory = EdSubcat_Personnel_Story;
	backpack = B_AssaultPack_rgr;
	uniformClass = U_B_ION_Uniform_01_poloshirt_wdl_F;
	weapons[] =
    {
        SMG_03C_TR_black_ACO_snds,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        SMG_03C_TR_black_ACO_snds,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_6(50Rnd_570x28_SMG_03),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(50Rnd_570x28_SMG_03),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Cap_oli_hs,
		G_Tactical_Clear,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Cap_oli_hs,
		G_Tactical_Clear,
        DefaultManLeaderLinkedItems,
	};
	allowedHeadgear[] = {};
    headgearList[] = {};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setIdentity ""Revolucion_CTRG_Patrick_Barker"";";
	};
};
class Rev_B_CTRG_Story_Garret_Jordan: Rev_B_CTRG_Soldier_G9_F
{
	author = $STR_A3_A_BranFlakes;
	identityTypes[] =
	{
		LanguageENG_F,
		Revolucion_CTRG_Garret_Jordan
	};
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Story_Garret_Jordan.jpg";
    scope = public;
    scopeCurator = public;
    displayName = "Garret Jordan";
	editorSubcategory = EdSubcat_Personnel_Story;
	backpack = B_AssaultPack_wdl_F;
	uniformClass = U_I_C_Soldier_Para_4_F;
	weapons[] =
    {
        Rev_arifle_SCAR_blk_arco_snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        Rev_arifle_SCAR_blk_arco_snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Milcap_M81_F,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Milcap_M81_F,
        DefaultManLeaderLinkedItems,
	};
	allowedHeadgear[] = {};
    headgearList[] = {};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setIdentity ""Revolucion_CTRG_Garret_Jordan"";";
	};
};
class Rev_B_CTRG_Story_James_Brown: Rev_B_CTRG_Soldier_G9_F
{
	author = $STR_A3_A_BranFlakes;
	identityTypes[] =
	{
		LanguageENG_F,
		Revolucion_CTRG_James_Brown
	};
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Story_James_Brown.jpg";
    scope = public;
    scopeCurator = public;
    displayName = "James R. Brown";
	editorSubcategory = EdSubcat_Personnel_Story;
	backpack = B_AssaultPackSpec_rgr;
	uniformClass = U_BG_Guerilla2_3;
	weapons[] =
    {
        Rev_arifle_SPAR_03_blk_RCO_bpd_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        Rev_arifle_SPAR_03_blk_RCO_bpd_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Booniehat_oli,
		G_Headset_Light,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Booniehat_oli,
		G_Headset_Light,
        DefaultManLeaderLinkedItems,
	};
	allowedHeadgear[] = {};
    headgearList[] = {};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setIdentity ""Revolucion_CTRG_James_Brown"";";
	};
};
class Rev_B_CTRG_Story_Frank_Hefford: Rev_B_CTRG_Soldier_G9_F
{
	author = $STR_A3_A_BranFlakes;
	identityTypes[] =
	{
		LanguageENG_F,
		Revolucion_CTRG_Frank_Hefford
	};
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Story_Frank_Hefford.jpg";
    scope = public;
    scopeCurator = public;
    displayName = "Frank Hefford";
	editorSubcategory = EdSubcat_Personnel_Story;
	backpack = ION_UAV_02_backpack_lxWS;
	uniformClass = Atlas_U_C_CommonerJacket_01_grey_F;
	weapons[] =
    {
        Rev_arifle_SPAR_03_blk_RCO_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        Rev_arifle_SPAR_03_blk_RCO_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Watchcap_blk_hs,
		G_Tactical_Clear,
		B_UavTerminal,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Watchcap_blk_hs,
		G_Tactical_Clear,
		B_UavTerminal,
        DefaultManLeaderLinkedItems,
	};
	allowedHeadgear[] = {};
    headgearList[] = {};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setIdentity ""Revolucion_CTRG_Frank_Hefford"";";
	};
};
class Rev_B_CTRG_Story_Peter_Stern: Rev_B_CTRG_Soldier_G9_F
{
	author = $STR_A3_A_BranFlakes;
	identityTypes[] =
	{
		LanguageENG_F,
		Revolucion_CTRG_Peter_Stern
	};
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Story_Peter_Stern.jpg";
    scope = public;
    scopeCurator = public;
    displayName = "Peter Stern";
	editorSubcategory = EdSubcat_Personnel_Story;
	backpack = B_TacticalPack_eaf_F;
	uniformClass = U_B_ION_uniform_01_tshirt_black_F;
	weapons[] =
    {
        arifle_SPAR_01_blk_holo_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_holo_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_8(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_8(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Booniehat_eaf,
		G_Shemag_oli,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Booniehat_eaf,
		G_Shemag_oli,
        DefaultManLeaderLinkedItems,
	};
	allowedHeadgear[] = {};
    headgearList[] = {};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setIdentity ""Revolucion_CTRG_Peter_Stern"";";
	};
};
class Rev_B_CTRG_Story_Tyler_Bannon: Rev_B_CTRG_Soldier_G9_F
{
	author = $STR_A3_A_BranFlakes;
	identityTypes[] =
	{
		LanguageENG_F,
		Revolucion_CTRG_Tyler_Bannon
	};
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Story_Tyler_Bannon.jpg";
    scope = public;
    scopeCurator = public;
    displayName = "Tyler Bannon";
	editorSubcategory = EdSubcat_Personnel_Story;
	backpack = B_CivilianBackpack_01_EveryDay_Black_F;
	uniformClass = U_I_C_Soldier_Para_4_F;
	weapons[] =
    {
        rev_arifle_Velko_lxWS_mrco_snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        rev_arifle_Velko_lxWS_mrco_snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_8(35Rnd_556x45_velko_lxWS),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_8(35Rnd_556x45_velko_lxWS),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Cap_Headphones,
		G_Combat_lxWS,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Cap_Headphones,
		G_Combat_lxWS,
        DefaultManLeaderLinkedItems,
	};
	allowedHeadgear[] = {};
    headgearList[] = {};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setIdentity ""Revolucion_CTRG_Tyler_Bannon"";";
	};
};
class Rev_B_CTRG_Story_Marshall_Lacroix: Rev_B_CTRG_Soldier_G9_F
{
	author = $STR_A3_A_BranFlakes;
	identityTypes[] =
	{
		LanguageENG_F,
		Revolucion_CTRG_Marshall_Lacroix
	};
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Story_Marshall_Lacroix.jpg";
    scope = public;
    scopeCurator = public;
    displayName = "Marshall Lacroix";
	editorSubcategory = EdSubcat_Personnel_Story;
	backpack = B_TacticalPack_eaf_F;
	uniformClass = Rev_U_B_FRR_Uniform_03_F;
	weapons[] =
    {
        arifle_NCAR15B_ARCO_snds_F,
        hgun_P07_blk_Snds_F,
        launch_RPG7_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_NCAR15B_ARCO_snds_F,
        hgun_P07_blk_Snds_F,
        launch_RPG7_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        RPG7_F,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        RPG7_F,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		lxWS_H_bmask_camo02,
		G_Shemag_Tactical,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		lxWS_H_bmask_camo02,
		G_Shemag_Tactical,
        DefaultManLeaderLinkedItems,
	};
	allowedHeadgear[] = {};
    headgearList[] = {};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setIdentity ""Revolucion_CTRG_Marshall_Lacroix"";";
	};
};
class Rev_B_CTRG_Story_Howard_King: Rev_B_CTRG_Soldier_G9_F
{
	author = $STR_A3_A_BranFlakes;
	identityTypes[] =
	{
		LanguageENG_F,
		Revolucion_CTRG_Howard_King
	};
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Story_Marshall_Lacroix.jpg";
    scope = public;
    scopeCurator = public;
    displayName = "Howard King";
	editorSubcategory = EdSubcat_Personnel_Story;
	backpack = B_Kitbag_rgr_CTRGExp_F;
	role = Sapper;
    icon = iconManEngineer;
    picture = pictureRepair;
	cost = 220000;
	canDeactivateMines = true;
	engineer = true;
	uniformClass = U_I_C_Soldier_Para_3_F;
	weapons[] =
    {
        arifle_SPAR_01_khk_RCO_snds_F,
        hgun_ACPC2_black_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_khk_RCO_snds_F,
        hgun_ACPC2_black_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_8(30Rnd_556x45_Stanag_red),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_8(30Rnd_556x45_Stanag_red),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Bandanna_tna_hs_F,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Bandanna_tna_hs_F,
        DefaultManLeaderLinkedItems,
	};
	allowedHeadgear[] = {};
    headgearList[] = {};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setIdentity ""Revolucion_CTRG_Howard_King"";";
	};
};
class Rev_B_CTRG_Story_Martin_Kennedy: Rev_B_CTRG_Soldier_G9_F
{
	author = $STR_A3_A_BranFlakes;
	identityTypes[] =
	{
		LanguageENG_F,
		Revolucion_CTRG_Martin_Kennedy
	};
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_CTRG_Story_Marshall_Lacroix.jpg";
    scope = public;
    scopeCurator = public;
    displayName = "Martin Kennedy";
	editorSubcategory = EdSubcat_Personnel_Story;
	icon = iconManMedic;
	picture = pictureHeal;
	backpack = B_Kitbag_EAF_F;
	uniformClass = Rev_U_B_FRR_Uniform_06_F;
	weapons[] =
    {
        Rev_arifle_SCAR_blk_erco_snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        Rev_arifle_SCAR_blk_erco_snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		lxWS_H_PASGT_goggles_olive_F,
		G_Headset_lxWS,
        DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		lxWS_H_PASGT_goggles_olive_F,
		G_Headset_lxWS,
        DefaultManLeaderLinkedItems,
	};
	allowedHeadgear[] = {};
    headgearList[] = {};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setIdentity ""Revolucion_CTRG_Martin_Kennedy"";";
	};
};
class Rev_B_N_Story_Luca_Woods: Rev_B_CTRG_Soldier_TL_G9_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_N_Story_Luca_Woods.jpg";
    scope = public;
    faction = Revolucion_BLU_CTRG_F;
    scopeCurator = public;
    displayName = "Luca Woods";
	editorSubcategory = EdSubcat_Personnel_Story;
	uniformClass = Rev_U_B_CTRG_Uniform_01_F;
	backpack = B_RadioBag_01_M81_F;
	identityTypes[] =
	{
		LanguageENG_F,
		Revolucion_CTRG_Luca_Woods
	};
	weapons[] =
	{
		rev_arifle_SCAR_L_short_hamr_black_F,
		rev_hgun_G17_blk_snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	respawnWeapons[] =
	{
		rev_arifle_SCAR_L_short_hamr_black_F,
		rev_hgun_G17_blk_snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
		magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(Chemlight_green),
		SMOKEGRENADES_BLUFOR
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(Chemlight_green),
		SMOKEGRENADES_BLUFOR
    };
	linkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Booniehat_M81_F,
		NVgoggles_INDEP,
		ItemGPS,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_carrierrigKBT_01_light_CTRG_F,
		H_Booniehat_M81_F,
		NVgoggles_INDEP,
		ItemGPS,
		DefaultManLeaderLinkedItems
	};
	allowedHeadgear[] = {};
    headgearList[] = {};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setIdentity ""Revolucion_CTRG_Luca_Woods"";";
	};
};