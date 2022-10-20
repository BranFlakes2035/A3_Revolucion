/* Venezuela */
class O_A_soldier_base_F;
class Rev_O_VZ_Man_Base_F: O_A_soldier_base_F
{
    scope = private;
	faction = Revolucion_OPF_VZ_F;
	genericNames = VenezuelanMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		Head_Latino,
		G_HAF_default
	};
};
class Rev_O_VZ_Soldier_Base_F: Rev_O_VZ_Man_Base_F
{
	uniformClass = Rev_U_VZ_CombatUniform_F;
};
class Rev_O_VZ_Soldier_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
    {
        Rev_arifle_AK12_Holo_LP_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12_Holo_LP_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_10(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_10(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 100000;
    role = Rifleman;
};
class Rev_O_VZ_TL_F: Rev_O_VZ_Soldier_Base_F
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_TL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_TL_F0;
	uniformClass = Rev_U_VZ_CombatUniform_shortsleeve_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        Rev_arifle_AK12_GL_ARCO_LP_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12_GL_ARCO_LP_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_762x39_ak12_Mag_F),
        mag_2(30Rnd_762x39_ak12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_762x39_ak12_Mag_F),
        mag_2(30Rnd_762x39_ak12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    cost = 450000;
    icon = iconManLeader;
	role = Grenadier;

};
class Rev_O_VZ_GL_F: Rev_O_VZ_Soldier_Base_F
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        Rev_arifle_AK12_GL_Holo_LP_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12_GL_Holo_LP_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_762x39_ak12_Mag_F),
        mag_2(30Rnd_762x39_ak12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_762x39_ak12_Mag_F),
        mag_2(30Rnd_762x39_ak12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    cost = 430000;
	role = Grenadier;
};
class Rev_O_VZ_AR_F: Rev_O_VZ_Soldier_Base_F
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_AR_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_AR_F0;
	uniformClass = Rev_U_VZ_CombatUniform_shortsleeve_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_WHex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_WHex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        LMG_03_Pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_03_Pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
    };
	cost = 125000;
	icon = iconManMG;
	role = MachineGunner;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Rev_O_VZ_exp_F: Rev_O_VZ_Soldier_Base_F
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_exp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
	uniformClass = Rev_U_VZ_CombatUniform_shortsleeve_F;
	backpack = B_Carryall_owcamo_OWExp_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        Rev_arifle_AK12U_Holo_LP_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12U_Holo_LP_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 115000;
	icon = iconManExplosive;
	role = Sapper;
	threat[] =
    {
        1.0,    // Soft
        0.5,    // Armor
        0.1     // Air
    };
};
class Rev_O_VZ_M_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_M_F0;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
    {
        srifle_dmr_06_blk_kh_bp_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        srifle_dmr_06_blk_kh_bp_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_8(20rnd_762x51_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_8(20rnd_762x51_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 100000;
    role = Marksman;
};
class Rev_O_VZ_medic_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_medic_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_medic_F0;
	backpack = B_FieldPack_owcamo_OWMedic_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_WHex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_WHex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        Rev_arifle_AK12_Holo_LP_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12_Holo_LP_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
	cost = 300000;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Rev_O_VZ_Soldier_LAT_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lat_F0;
	backpack = B_FieldPack_owcamo_OVZLAT_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        Rev_arifle_AK12_Holo_LP_F,
        launch_RPG7_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12_Holo_LP_F,
        launch_RPG7_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG7_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG7_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    icon = iconManAT;
	role = MissileSpecialist;
};
class Rev_O_VZ_A_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_A_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	backpack = B_Carryall_owcamo_OVZAmmo_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		Rev_arifle_AK12_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Rev_arifle_AK12_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_762x39_ak12_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
		mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_762x39_ak12_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
		mag_2(SmokeShell)
	};
	cost = 110000;
};
class Rev_O_VZ_Soldier_AAR_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Soldier_AAR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_AAR_F0;
	uniformClass = Rev_U_VZ_CombatUniform_shortsleeve_F;
	backpack = B_FieldPack_owcamo_OVZAAR_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		Rev_arifle_AK12_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Rev_arifle_AK12_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_762x39_ak12_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
		mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_762x39_ak12_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
		mag_2(SmokeShell)
	};
	cost = 110000;
	role = Assistant;
};
class Rev_O_VZ_support_MG_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_support_MG_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_support_MG_F0;
	backpack = O_R_HMG_01_Weapon_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Rev_O_VZ_support_AMG_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_support_AMG_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_support_AMG_F0;
	backpack = O_R_HMG_01_support_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Rev_O_VZ_support_Mort_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_support_Mort_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_support_Mort_F0;
	uniformClass = Rev_U_VZ_CombatUniform_shortsleeve_F;
	backpack = O_R_Mortar_01_Weapon_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Rev_O_VZ_support_AMort_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_support_AMort_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_support_AMort_F0;
	backpack = O_R_Mortar_01_support_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Rev_O_VZ_support_AHAT_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_support_AHAT_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_O_Soldier_AHAT_F0;
	Backpack = B_FieldPack_owcamo_OWHAT_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Rev_O_VZ_support_AAA_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_support_AAA_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AAA_F0;
	Backpack = B_Carryall_owcamo_OWAAA_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Rev_O_VZ_support_AAT_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_support_AAT_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AAT_F0;
	Backpack = B_Carryall_owcamo_OWAAT_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Rev_O_VZ_Crew_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Crew_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = Rev_U_VZ_CombatUniform_shortsleeve_F;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Tank_black_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_Tank_black_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_4(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
    engineer = true;
	cost = 90000;
	role = Crewman;
	camouflage = 1.6;
};
class Rev_O_VZ_engineer_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_engineer_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_engineer_F0;
	Backpack = B_Carryall_owcamo_OWEng_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	canDeactivateMines = true;
	detectSkill = 31;
    icon = iconManEngineer;
    picture = pictureRepair;
	cost = 220000;
    role = Sapper;
	engineer = true;
	camouflage = 1.6;
	threat[] =
    {
        1.0,    // Soft
        0.5,    // Armor
        0.1     // Air
    };
};
class Rev_O_VZ_soldier_mine_F: Rev_O_VZ_engineer_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_soldier_mine_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_owcamo_Mine;
};
class Rev_O_VZ_Helipilot_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Helipilot_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_PilotHelmetHeli_O,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_PilotHelmetHeli_O,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		smg_05_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		smg_05_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_4(30Rnd_9x21_Mag_SMG_02),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_9x21_Mag_SMG_02),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
	camouflage = 2;
	cost = 160000;
	role = Crewman;
};
class Rev_O_VZ_Helicrew_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Helicrew_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_CrewHelmetHeli_O,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_CrewHelmetHeli_O,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Rev_arifle_AK12U_Holo_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_4(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
	camouflage = 2;
	cost = 160000;
	role = Crewman;
};
class Rev_O_VZ_Soldier_AA_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Soldier_AA_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_AA_F0;
	backpack = B_FieldPack_owcamo_OWAA_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        Rev_arifle_AK12_Holo_LP_F,
        launch_O_Titan_camo_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12_Holo_LP_F,
        launch_O_Titan_camo_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    icon = iconManAT;
	role = MissileSpecialist;
};
class Rev_O_VZ_Soldier_AT_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Soldier_AT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_AT_F0;
	backpack = B_FieldPack_owcamo_OWAT_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        Rev_arifle_AK12_Holo_LP_F,
        launch_O_Titan_short_camo_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12_Holo_LP_F,
        launch_O_Titan_short_camo_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    icon = iconManAT;
	role = MissileSpecialist;
};
class Rev_O_VZ_Officer_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_officer_F0;
	linkedItems[] =
	{
		V_Rangemaster_belt,
		H_Beret_CSAT_01_F,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt,
		H_Beret_CSAT_01_F,
		DefaultManLeaderLinkedItems
	};
	weapons[] =
    {
      	arifle_AK12_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
	camouflage = 1.6;
    cost = 600000;
	icon = iconManOfficer;
    role = Rifleman;
};
class Rev_O_VZ_Soldier_lite_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Soldier_lite_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	linkedItems[] =
	{
		V_BandollierB_rgr,
		H_MilCap_grn,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_rgr,
		H_MilCap_grn,
		DefaultManLinkedItems
	};
	weapons[] =
    {
        arifle_AK12_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_4(30Rnd_762x39_ak12_Mag_F),
        HandGrenade_East,
        SmokeShell
    };
    respawnMagazines[] =
    {
		mag_4(30Rnd_762x39_ak12_Mag_F),
        HandGrenade_East,
        SmokeShell
    };
	cost = 90000;
	camouflage = 1.2;
    role = Rifleman;
};
class Rev_O_VZ_SL_F: Rev_O_VZ_Soldier_Base_F
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_SL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_SL_F0;
	uniformClass = Rev_U_VZ_CombatUniform_shortsleeve_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        Rev_arifle_AK12_ARCO_LP_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12_ARCO_LP_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_762x39_ak12_Mag_F),
        mag_2(30Rnd_762x39_ak12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_762x39_ak12_Mag_F),
        mag_2(30Rnd_762x39_ak12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    cost = 500000;
	camouflage = 1.4;
	icon = iconManLeader;
	role = Rifleman;
};
class Rev_O_VZ_RadioOperator_F: Rev_O_VZ_Soldier_F
{
	author = $STR_A3_A_Bran STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	backpack = B_RadioBag_01_whex_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
    {
        Rev_arifle_AK12_Holo_LP_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12_Holo_LP_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class Rev_O_VZ_Soldier_unarmed_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Soldier_unarmed_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	role = Unarmed;
	threat[] =
    {
        0.1,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
};
class Rev_O_VZ_survivor_F: Rev_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_survivor_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_b_survivor_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	items[] = {};
	respawnItems[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {};
	respawnLinkedItems[] = {};
	role = Unarmed;
};
//Recon Loadouts
class Rev_O_VZ_Soldier_recon_base: Rev_O_VZ_Soldier_Base_F
{
    scope = protected;
    scopeCurator = protected;
    textSingular = $STR_A3_nameSound_veh_infantry_SF_s;
    textPlural = $STR_A3_nameSound_veh_infantry_SF_p;
    nameSound = veh_infantry_SF_s;
    uniformClass = Rev_U_VZ_CombatUniform_shortsleeve_F;
    editorsubcategory = EdSubcat_Personnel_SpecialForces;
	items[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
    icon = iconManRecon;
	role = Rifleman;
};
class Rev_O_VZ_Recon_F: Rev_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_recon_TL_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_recon_F0;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_black_f,
		lxWS_h_bmask_base,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_black_f,
		lxWS_h_bmask_base,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_arifle_AK12_ARCO_LP_Snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12_ARCO_LP_Snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
		mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
  		mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class Rev_O_VZ_recon_TL_F: Rev_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_recon_TL_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Recon_TL_F0;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_black_f,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_black_f,
		H_MilCap_grn,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_arifle_AK12_GL_ARCO_LP_snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12_GL_ARCO_LP_snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR,
        mag_2(Chemlight_red)
	};
    respawnMagazines[] =
    {
       	mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR,
        mag_2(Chemlight_red)
    };
	icon = iconManLeader;
	role = Rifleman;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Rev_O_VZ_recon_exp_F: Rev_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_recon_exp_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Recon_exp_F0;
	backpack = B_Carryall_owcamo_OWExp_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_black_f,
		H_HelmetSpecter_black_headset_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_black_f,
		H_HelmetSpecter_black_headset_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_arifle_AK12U_ARCO_LP_Snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12U_ARCO_LP_Snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	role = Rifleman;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
	icon = iconManExplosive;
	picture = pictureExplosive;
};
class Rev_O_VZ_recon_AR_F: Rev_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_recon_AR_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_O_R_recon_AR_F0;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_black_f,
		lxWS_h_bmask_base,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_black_f,
		lxWS_h_bmask_base,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_arifle_RPK12_F_ARCO_blk_snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        Rev_arifle_RPK12_F_ARCO_blk_snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(75Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(75Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	icon = iconManMG;
	role = MachineGunner;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Rev_O_VZ_recon_M_F: Rev_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_recon_M_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_recon_M_F0;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_black_f,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_black_f,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_arifle_RPK12_DMS_LP_snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        Rev_arifle_RPK12_DMS_LP_snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_8(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	role = Marksman;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Rev_O_VZ_recon_medic_F: Rev_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_recon_medic_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_recon_medic_F0;
	backpack = B_FieldPack_owcamo_OWMedic_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_black_f,
		H_HelmetSpecter_black_headset_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_black_f,
		H_HelmetSpecter_black_headset_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_arifle_AK12U_ARCO_LP_Snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12U_ARCO_LP_Snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Rev_O_VZ_recon_GL_F: Rev_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_recon_GL_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_O_R_recon_GL_F0;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_black_f,
		lxWS_h_bmask_base,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_black_f,
		lxWS_h_bmask_base,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_arifle_AK12_GL_ARCO_LP_snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12_GL_ARCO_LP_snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	role = Grenadier;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Rev_O_VZ_recon_LAT_F: Rev_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_recon_LAT_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_recon_LAT_F0;
	backpack = B_FieldPack_owcamo_OVZLAT_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_black_f,
		lxWS_h_bmask_base,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_black_f,
		lxWS_h_bmask_base,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_arifle_AK12U_ARCO_LP_Snds_F,
        Aegis_launch_RPG7M_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12U_ARCO_LP_Snds_F,
        Aegis_launch_RPG7M_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG7_F,
		mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG7_F,
  		mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Rev_O_VZ_recon_JTAC_F: Rev_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_recon_JTAC_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_recon_JTAC_F0;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_black_f,
		H_HelmetSpecter_black_headset_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_black_f,
		H_HelmetSpecter_black_headset_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_arifle_AK12U_ARCO_LP_Snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Laserdesignator_03
    };
    respawnWeapons[] =
    {
        Rev_arifle_AK12U_ARCO_LP_Snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Laserdesignator_03
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_762x39_ak12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	role = SpecialOperative;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Rev_O_VZ_Fighter_Pilot_F: Rev_O_VZ_Helipilot_F
{
    author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Fighter_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_Fighter_Pilot_name;
	uniformClass = Atlas_U_O_W_PilotCoveralls;
    linkedItems[] =
    {
        H_PilotHelmetFighter_O,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_O,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_2(10Rnd_9x21_Mag),
		SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_2(10Rnd_9x21_Mag),
		SMOKESHELLS_OPFOR
    };
	camouflage = 2;
    cost = 165000;
    role = Crewman;
};

/* Venezuelan Panther Teams */
class Rev_O_VZ_Soldier_Panther_base: Rev_O_VZ_Soldier_recon_base
{
    scope = protected;
    scopeCurator = protected;
    textSingular = $STR_A3_nameSound_veh_infantry_SF_s;
    textPlural = $STR_A3_nameSound_veh_infantry_SF_p;
    nameSound = veh_infantry_SF_s;
    uniformClass = Rev_U_O_Panther_Uniform_03_F;
    editorsubcategory = EdSubcat_Personnel_Panther;
	items[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
    icon = iconManRecon;
	role = Rifleman;
};
class Rev_O_VZ_Panther_F: Rev_O_VZ_Soldier_Panther_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Panther_F.jpg";
	author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_O_VZ_Panther_F0;
	uniformClass = Rev_U_O_Panther_Uniform_01_F;
	linkedItems[] =
	{
		V_HarnessOSpec_Blk,
		H_HeadSet_Black_F,
		G_Bandanna_blk,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_Blk,
		H_HeadSet_Black_F,
		G_Bandanna_blk,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_arifle_ARX_ARCO_Laser_Snds_blk_F,
        rev_hgun_G17_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        Rev_arifle_ARX_ARCO_Laser_Snds_blk_F,
        rev_hgun_G17_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
		mag_2(10rnd_50bw_mag_F),
        mag_2(17Rnd_9x21_Mag),
		mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_8(30Rnd_65x39_caseless_green),
		mag_2(10rnd_50bw_mag_F),
        mag_2(17Rnd_9x21_Mag),
  		mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class Rev_O_VZ_Panther_TL_F: Rev_O_VZ_Soldier_Panther_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Panther_TL_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_O_VZ_Panther_TL_F0;
	linkedItems[] =
	{
		V_HarnessOSpec_Blk,
		H_HeadSet_Black_F,
		G_Shemag_khk,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_Blk,
		H_HeadSet_Black_F,
		G_Shemag_khk,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_arifle_ARX_ARCO_Laser_Snds_blk_F,
        rev_hgun_G17_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        Rev_arifle_ARX_ARCO_Laser_Snds_blk_F,
        rev_hgun_G17_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
		mag_2(10rnd_50bw_mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_8(30Rnd_65x39_caseless_green),
		mag_2(10rnd_50bw_mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	icon = iconManLeader;
	role = Rifleman;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Rev_O_VZ_Panther_exp_F: Rev_O_VZ_Soldier_Panther_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Panther_exp_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_O_VZ_Panther_exp_F0;
	backpack = B_AssaultPackSpec_blk_PantherExp_F;
	linkedItems[] =
	{
		V_HarnessOSpec_Blk,
		H_Watchcap_blk,
		G_Shemag_khk,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_Blk,
		H_Watchcap_blk,
		G_Shemag_khk,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_arifle_ARX_ARCO_Laser_Snds_blk_F,
        rev_hgun_G17_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        Rev_arifle_ARX_ARCO_Laser_Snds_blk_F,
        rev_hgun_G17_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
		mag_2(10rnd_50bw_mag_F),
		mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_65x39_caseless_green),
		mag_2(10rnd_50bw_mag_F),
		mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	role = Rifleman;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
	icon = iconManExplosive;
	picture = pictureExplosive;
};
class Rev_O_VZ_Panther_M_F: Rev_O_VZ_Soldier_Panther_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Panther_M_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_O_VZ_Panther_M_F0;
	uniformClass = Rev_U_O_Panther_Uniform_02_F;
	linkedItems[] =
	{
		V_HarnessO_Blk,
		G_Shemag_khk,
		H_Booniehat_blk,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_HarnessOS_Blk,
		G_Shemag_khk,
		H_Booniehat_blk,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_srifle_DMR_05_Kahlia_IR_Snds_BI_F,
        rev_hgun_G17_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        Rev_srifle_DMR_05_Kahlia_IR_Snds_BI_F,
        rev_hgun_G17_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(10rnd_93x64_dmr_05_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(10rnd_93x64_dmr_05_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	role = Marksman;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Rev_O_VZ_Panther_JTAC_F: Rev_O_VZ_Soldier_Panther_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Panther_JTAC_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_O_VZ_Panther_JTAC_F0;
	backpack = B_RadioBag_01_black_F;
	linkedItems[] =
	{
		V_HarnessO_Blk,
		lxWS_H_headset,
		G_Shades_red,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_Blk,
		lxWS_H_headset,
		G_Shades_red,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_arifle_Katiba_GL_ARCO_Laser_Snds_blk_F,
        rev_hgun_G17_blk_snds_F,
        DefaultManWeapons,
		Laserdesignator_03
    };
    respawnWeapons[] =
    {
        Rev_arifle_Katiba_GL_ARCO_Laser_Snds_blk_F,
        rev_hgun_G17_blk_snds_F,
        DefaultManWeapons,
		Laserdesignator_03
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
		mag_4(1Rnd_HE_Grenade_shell),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR,
        Laserbatteries,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        mag_4(1Rnd_HE_Grenade_shell),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR,
        Laserbatteries,
        mag_2(Chemlight_red)
    };
	role = SpecialOperative;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Rev_O_VZ_Panther_LAT_F: Rev_O_VZ_Soldier_Panther_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Panther_LAT_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_O_VZ_Panther_LAT_F0;
	uniformClass = Rev_U_O_Panther_Uniform_01_F;
	backpack = B_AssaultPackSpec_blk_PantherLAT_F;
	linkedItems[] =
	{
		V_HarnessOSpec_Blk,
		H_Watchcap_blk_hs,
		G_Bandanna_blk,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_Blk,
		H_Watchcap_blk_hs,
		G_Bandanna_blk,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_arifle_ARX_ARCO_Laser_Snds_blk_F,
        rev_hgun_G17_blk_snds_F,
        launch_RPG32_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        Rev_arifle_ARX_ARCO_Laser_Snds_blk_F,
        rev_hgun_G17_blk_snds_F,
        launch_RPG32_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
		mag_2(10rnd_50bw_mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
		mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_65x39_caseless_green),
		mag_2(10rnd_50bw_mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
  		mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Rev_O_VZ_Panther_medic_F: Rev_O_VZ_Soldier_Panther_base
{
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Panther_medic_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_O_VZ_Panther_medic_F0;
	uniformClass = Rev_U_O_Panther_Uniform_02_F;
	backpack = B_AssaultPackSpec_blk_PantherMedic_F;
	linkedItems[] =
	{
		V_HarnessOSpec_Blk,
		H_Cap_Headphones_blk,
		G_Shemag_khk,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_Blk,
		H_Cap_Headphones_blk,
		G_Shemag_khk,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        Rev_arifle_ARX_ARCO_Laser_Snds_blk_F,
        rev_hgun_G17_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        Rev_arifle_ARX_ARCO_Laser_Snds_blk_F,
        rev_hgun_G17_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
		mag_2(10rnd_50bw_mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_65x39_caseless_green),
		mag_2(10rnd_50bw_mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};