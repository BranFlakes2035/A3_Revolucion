/* Policia Nacional de Baracas - BLUFOR */
class Rev_B_PNB_Man_base_F: I_Soldier_F
{
    scope = private;
	faction = Revolucion_BLU_PNB_F;
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
};
class Rev_B_PNB_Soldier_base_F: Rev_B_PNB_Man_base_F
{
	uniformClass = Rev_U_Policia_CombatUniform_F;
};
class Rev_B_PNB_Soldier_AR_F: Rev_B_PNB_Soldier_base_F
{
     author = $STR_A3_A_Ravenholme;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_MG_s};
			speechPlural[] = {veh_infantry_MG_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_MG_s;
	textPlural = $STR_A3_nameSound_veh_infantry_MG_p;
	nameSound = veh_infantry_MG_s;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_PNB_Soldier_AR_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_B_PNB_Soldier_AR_F0;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.3     // Air
    };
	uniformClass = Rev_U_Policia_CombatUniform_shortsleeve_F;
    weapons[] =
	{
		LMG_03_F,
		hgun_P07_blk_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_03_F,
		hgun_P07_blk_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(200Rnd_556x45_Box_F),
		mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_2(200Rnd_556x45_Box_F),
		mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		rev_V_Press_bnp_F,
		H_Milcap_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		rev_V_Press_bnp_F,
		H_Milcap_blk,
		DefaultManLinkedItems
	};
};
class Rev_B_PNB_Soldier_Exp_F: Rev_B_PNB_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_PNB_Soldier_Exp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_B_PNB_Soldier_Exp_F0;
    canDeactivateMines = true;
	detectSkill = 38;
	cost = 93000;
	camouflage = 1.6;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
    backpack = B_AssaultPack_blk_PNB_EOD_F;
	weapons[] =
	{
		SMG_05_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_05_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30rnd_9x21_mag_SMG_02),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30rnd_9x21_mag_SMG_02),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_EOD_blue_F,
		H_PASGT_neckprot_black_F,
        G_EyeProtectors_earpiece_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_EOD_blue_F,
		H_PASGT_neckprot_black_F,
        G_EyeProtectors_earpiece_F,
		DefaultManLinkedItems
	};
};
class Rev_B_PNB_Soldier_M_F: Rev_B_PNB_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_PNB_Soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_B_PNB_Soldier_M_F0;
	role = Marksman;
	cost = 250000;
	//uniformClass = Rev_U_B_BDF_Uniform_01_shortsleeve_F;
	weapons[] =
	{
		rev_arifle_SLR_V_lxWS_DMS_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		rev_arifle_SLR_V_lxWS_DMS_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_5(20rnd_762x51_slr_lxWS),
        mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_5(20rnd_762x51_slr_lxWS),
        mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
		SmokeShell
	};
	linkedItems[] =
	{
		rev_V_Press_bnp_F,
		H_Booniehat_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		rev_V_Press_bnp_F,
		H_Booniehat_blk,
		DefaultManLinkedItems
	};
};
class Rev_B_PNB_Commander_F: Rev_B_PNB_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_officer_s};
			speechPlural[] = {veh_infantry_officer_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_officer_s;
	textPlural = $STR_A3_nameSound_veh_infantry_officer_p;
	nameSound = veh_infantry_officer_s;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_PNB_Commander_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_R_cfgVehicles_B_PNB_Commander_F0;
    role = Rifleman;
	icon = iconManOfficer;
    cost = 600000;
	camouflage = 1.6;
	weapons[] =
	{
		arifle_VelkoR5_lxWS,
		hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_VelkoR5_lxWS,
		hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
		mag_2(16rnd_9x21_mag_v2),
        mag_2(SmokeShell),
        SmokeShellBlue
	};
	respawnMagazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
		mag_2(16rnd_9x21_mag_v2),
        mag_2(SmokeShell),
        SmokeShellBlue
	};
	linkedItems[] =
	{
		rev_V_Press_bnp_F,
		H_Beret_Gen_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		rev_V_Press_bnp_F,
		H_Beret_Gen_F,
		DefaultManLinkedItems
	};
};
class Rev_B_PNB_Soldier_F: Rev_B_PNB_Soldier_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_PNB_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_B_PNB_Soldier_F0;
	cost = 100000;
	weapons[] =
	{
		SMG_05_F,
		hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		SMG_05_F,
		hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30rnd_9x21_mag_SMG_02),
		mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30rnd_9x21_mag_SMG_02),
		mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		rev_V_Press_bnp_F,
		H_Milcap_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		rev_V_Press_bnp_F,
		H_Milcap_blk,
		DefaultManLinkedItems
	};
};
class Rev_B_PNB_Soldier_LAT_F: Rev_B_PNB_Soldier_Base_F
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
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_PNB_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_B_PNB_Soldier_LAT_F0;
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
    backpack = B_AssaultPack_blk_PNB_AT_F;
	weapons[] =
	{
		arifle_VelkoR5_lxWS,
		launch_RPG7_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_VelkoR5_lxWS,
		launch_RPG7_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
		RPG7_F,
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
		RPG7_F,
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		rev_V_Press_bnp_F,
		H_Milcap_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		rev_V_Press_bnp_F,
		H_Milcap_blk,
		DefaultManLinkedItems
	};
};
class Rev_B_PNB_Soldier_Rifle_F: Rev_B_PNB_Soldier_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_PNB_Soldier_Rifle_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_B_PNB_Soldier_Rifle_F0;
	cost = 100000;
	weapons[] =
	{
		arifle_VelkoR5_lxWS,
        hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_VelkoR5_lxWS,
        hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
        mag_2(16rnd_9x21_mag_v2),
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
        mag_2(16rnd_9x21_mag_v2),
        SmokeShell
	};
	linkedItems[] =
	{
		rev_V_Press_bnp_F,
		H_Milcap_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		rev_V_Press_bnp_F,
		H_Milcap_blk,
		DefaultManLinkedItems
	};
};
class Rev_B_PNB_Soldier_SG_F: Rev_B_PNB_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_PNB_Soldier_SG_F.jpg";
    scope = public;
    scopeCurator = public;
	cost = 100000;
    displayName = $STR_A3_R_cfgVehicles_B_PNB_Soldier_SG_F0;
	uniform = Rev_U_Policia_CombatUniform_shortsleeve_F;
    weapons[] =
	{
		sgun_Mp153_black_F,
        hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_Mp153_black_F,
        hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(4Rnd_12Gauge_Pellets),
        mag_6(4Rnd_12Gauge_Slug),
        mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_8(4Rnd_12Gauge_Pellets),
        mag_6(4Rnd_12Gauge_Slug),
        mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
        SmokeShell
    };
	linkedItems[] =
	{
		rev_V_Press_bnp_F,
		H_Milcap_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		rev_V_Press_bnp_F,
		H_Milcap_blk,
		DefaultManLinkedItems
	};
};

/* Policia Nacional de Baracas - OPFOR */

class Rev_O_PNB_Soldier_AR_F: Rev_B_PNB_Soldier_AR_F
{
    faction = Revolucion_OPF_PNB_F;
	side = TEast;
};
class Rev_O_PNB_Soldier_Exp_F: Rev_B_PNB_Soldier_Exp_F
{
    faction = Revolucion_OPF_PNB_F;
	side = TEast;
};
class Rev_O_PNB_Soldier_M_F: Rev_B_PNB_Soldier_M_F
{
    faction = Revolucion_OPF_PNB_F;
	side = TEast;
};
class Rev_O_PNB_Commander_F: Rev_B_PNB_Commander_F
{
    faction = Revolucion_OPF_PNB_F;
	side = TEast;
};
class Rev_O_PNB_Soldier_F: Rev_B_PNB_Soldier_F
{
    faction = Revolucion_OPF_PNB_F;
	side = TEast;
};
class Rev_O_PNB_Soldier_LAT_F: Rev_B_PNB_Soldier_LAT_F
{
    faction = Revolucion_OPF_PNB_F;
	side = TEast;
};
class Rev_O_PNB_Soldier_Rifle_F: Rev_B_PNB_Soldier_Rifle_F
{
    faction = Revolucion_OPF_PNB_F;
	side = TEast;
};
class Rev_O_PNB_Soldier_SG_F: Rev_B_PNB_Soldier_SG_F
{
    faction = Revolucion_OPF_PNB_F;
	side = TEast;
};