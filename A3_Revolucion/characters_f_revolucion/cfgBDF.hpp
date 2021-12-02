/*Baracas Defense Forces*/
class Rev_B_BDF_Man_base_F: I_Soldier_F
{
    scope = private;
	faction = Revolucion_BLU_BDF_F;
	side = TWest;
	genericNames = VenezuelanMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		G_HAF_default
	};
	headgearList[]={};
};
class Rev_B_BDF_Soldier_base_F: Rev_B_BDF_Man_base_F
{
	uniformClass = Rev_U_B_BDF_Uniform_01_F;
};
class Rev_B_BDF_Soldier_A_F: Rev_B_BDF_Soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	uniformClass = Rev_U_B_BDF_Uniform_01_tanktop_F;
	cost = 100000;
	backpack = B_Carryall_oli_BDF_Ammo_F;	
	weapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_soldier_AAA_F: Rev_B_BDF_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_AAA_F.jpg";
	scope = public;
	scopeCurator = public;
	cost = 220000;
	role = Assistant;
	displayName = $STR_B_soldier_AAA_F0;
	backpack = B_Carryall_oli_BDF_AAA_F;
	uniformClass = Rev_U_B_BDF_Uniform_01_shortsleeve_F;
	weapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_soldier_AAR_F: rev_B_BDF_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_AAR_F.jpg";
	scope = public;
	scopeCurator = public;
	role = Assistant;
	displayName = $STR_O_SOLDIERU_AAR_F0;
	backpack = B_AssaultPack_khk_BDF_AAR_F;
	weapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Soldier_AR_F: Rev_B_BDF_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_AR_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.3     // Air
    };
	uniformClass = Rev_U_B_BDF_Uniform_01_shortsleeve_F;
    weapons[] =
	{
		LMG_Zafir_black_FL_F,
		hgun_P07_blk_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Zafir_black_FL_F,
		hgun_P07_blk_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(150rnd_762x51_box_yellow),
		mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_3(150rnd_762x51_box_yellow),
		mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Medic_F: Rev_B_BDF_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_medic_s};
			speechPlural[] = {veh_infantry_medic_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_medic_s;
	textPlural = $STR_A3_nameSound_veh_infantry_medic_p;
	nameSound = veh_infantry_medic_s;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
	backpack = B_AssaultPack_khk_BDF_Medic_F;
    weapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
	};
	respawnWeapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
	};
	magazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
		mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
        mag_2(SmokeShell),
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
		mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
        mag_2(SmokeShell),
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Crew_F: Rev_B_BDF_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	role = Crewman;
	cost = 90000;
	camouflage = 1.6;
    engineer = true;
	uniformClass = Rev_U_B_BDF_Uniform_01_tanktop_F;
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
		mag_4(30rnd_9x21_mag_SMG_02),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_4(30rnd_9x21_mag_SMG_02),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacVest_camo,
		H_HelmetCrew_I,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_camo,
		H_HelmetCrew_I,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Engineer_F: Rev_B_BDF_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Engineer_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_engineer_F0;
    role = Sapper;
    icon = iconManEngineer;
    picture = pictureRepair;
	cost = 220000;
	canDeactivateMines = true;
	engineer = true;
	detectSkill = 31;
	threat[] =
    {
        1,      // Soft
        0.5,    // Armor
        0.1     // Air
    };
	camouflage = 1.6;
	backpack = B_Carryall_oli_BDF_Eng_F;
	weapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_EOD_olive_F,
		H_MK7_atacsfg_F,
		G_Combat,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_EOD_olive_F,
		H_MK7_atacsfg_F,
		G_Combat,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Soldier_Exp_F: Rev_B_BDF_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_Exp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
    canDeactivateMines = true;
	detectSkill = 38;
	cost = 93000;
	camouflage = 1.6;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
	uniform = Rev_U_B_BDF_Uniform_01_shortsleeve_F;
    backpack = B_Carryall_oli_BDF_Exp_F;
	weapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_EOD_olive_F,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_EOD_olive_F,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Soldier_GL_F: Rev_B_BDF_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	weapons[] =
	{
		GL_M32_F,
		hgun_P07_blk_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		GL_M32_F,
		hgun_P07_blk_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(16rnd_9x21_mag_v2),
        mag_3(6Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        6Rnd_Smoke_Grenade_shell
	};
	respawnMagazines[] =
	{
		mag_4(16rnd_9x21_mag_v2),
        mag_3(6Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        6Rnd_Smoke_Grenade_shell
	};
	linkedItems[] =
	{
		V_PlateCarrierIAGL_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIAGL_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Helipilot_F: Rev_B_BDF_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_pilot_s};
			speechPlural[] = {veh_infantry_pilot_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_pilot_s;
	textPlural = $STR_A3_nameSound_veh_infantry_pilot_p;
	nameSound = veh_infantry_pilot_s;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
	uniformClass = Rev_U_B_BDF_Uniform_01_shortsleeve_F;
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
		mag_4(30rnd_9x21_mag_SMG_02),
		mag_2(SmokeShell),
        SmokeShellGreen
	};
	respawnMagazines[] =
	{
		mag_4(30rnd_9x21_mag_SMG_02),
		mag_2(SmokeShell),
        SmokeShellGreen
	};
    linkedItems[] =
    {
		V_TacVest_camo,
        H_PilotHelmetHeli_I_E,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_TacVest_camo,
        H_PilotHelmetHeli_I_E,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class Rev_B_BDF_Soldier_M_F: Rev_B_BDF_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
	uniformClass = Rev_U_B_BDF_Uniform_01_shortsleeve_F;
	weapons[] =
	{
		rev_arifle_SLR_V_lxWS_DMS_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		rev_arifle_SLR_V_lxWS_DMS_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_8(20rnd_762x51_slr_lxWS),
        HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_8(20rnd_762x51_slr_lxWS),
        HandGrenade,
		SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_Booniehat_mgrn_hs,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_Booniehat_mgrn_hs,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Officer_F: Rev_B_BDF_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    role = Rifleman;
	icon = iconManOfficer;
    cost = 600000;
	camouflage = 1.6;
	uniformClass = Rev_U_B_BDF_Officer_01_F;
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
        mag_2(SmokeShell),
        SmokeShellGreen
	};
	respawnMagazines[] =
	{
		mag_4(30rnd_9x21_mag_SMG_02),
		mag_2(16rnd_9x21_mag_v2),
        mag_2(SmokeShell),
        SmokeShellGreen
	};
	linkedItems[] =
	{
		V_Rangemaster_belt,
		H_milcap_atacs_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt,
		H_milcap_atacs_F,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Soldier_F: Rev_B_BDF_Soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	cost = 100000;
	weapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(35Rnd_556x45_velko_lxWS),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_10(35Rnd_556x45_velko_lxWS),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_soldier_AA_F: Rev_B_BDF_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_AA_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	backpack = B_AssaultPack_khk_BDF_AA_F;
	cost = 200000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
	weapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		launch_B_Titan_olive_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		launch_B_Titan_olive_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Soldier_AT_F: Rev_B_BDF_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_AT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
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
    backpack = B_AssaultPack_khk_BDF_AT_F;
	uniform = Rev_U_B_BDF_Uniform_01_tanktop_F;
	weapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		launch_MRAWS_Green_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		launch_MRAWS_Green_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
		MRAWS_HEAT55_F,
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
		MRAWS_HEAT55_F,
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Soldier_SL_F: Rev_B_BDF_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	uniform = Rev_U_B_BDF_Uniform_01_shortsleeve_F;
	weapons[] =
	{
		rev_arifle_Velko_lxWS_LRCO_blk_F,
		hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		rev_arifle_Velko_lxWS_LRCO_blk_F,
		hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_8(35Rnd_556x45_velko_lxWS),
		mag_2(16rnd_9x21_mag_v2),
        mag_2(HandGrenade),
        mag_4(SmokeShell),
        mag_2(SmokeShellGreen)
	};
	respawnMagazines[] =
	{
		mag_8(35Rnd_556x45_velko_lxWS),
		mag_2(16rnd_9x21_mag_v2),
        mag_2(HandGrenade),
        mag_4(SmokeShell),
        mag_2(SmokeShellGreen)
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_MK7_atacsfg_F,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_MK7_atacsfg_F,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Soldier_TL_F: Rev_B_BDF_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 250000;
	camouflage = 1.4;
	weapons[] =
	{
		rev_arifle_SLR_V_GL_lxWS_LRCO_blk_F,
		hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		rev_arifle_SLR_V_GL_lxWS_LRCO_blk_F,
		hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(20rnd_762x51_slr_lxWS),
		mag_2(16rnd_9x21_mag_v2),
		mag_4(1rnd_40mm_HE_lxWS),
		mag_2(1rnd_58mm_AT_lxWS),
		mag_2(1rnd_50mm_smoke_lxWS),
        HandGrenade,
        mag_2(SmokeShell),
        SmokeShellGreen
	};
	respawnMagazines[] =
	{
		mag_6(20rnd_762x51_slr_lxWS),
		mag_2(16rnd_9x21_mag_v2),
		mag_4(1rnd_40mm_HE_lxWS),
		mag_2(1rnd_58mm_AT_lxWS),
		mag_2(1rnd_50mm_smoke_lxWS),
        HandGrenade,
        mag_2(SmokeShell),
        SmokeShellGreen
	};
	linkedItems[] =
	{
		V_PlateCarrierIAGL_oli,
		H_MK7_atacsfg_F,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIAGL_oli,
		H_MK7_atacsfg_F,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_RadioOperator_F: Rev_B_BDF_Soldier_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	backpack = B_RadioBag_01_green_F;
	weapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(35Rnd_556x45_velko_lxWS),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_10(35Rnd_556x45_velko_lxWS),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Soldier_lite_F: Rev_B_BDF_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_lite_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	cost = 100000;
	uniform = Rev_U_B_BDF_Uniform_01_tanktop_F;
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
		mag_6(35Rnd_556x45_velko_lxWS),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(35Rnd_556x45_velko_lxWS),
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
class Rev_B_BDF_Soldier_CQ_F: Rev_B_BDF_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_CQ_F.jpg";
    scope = public;
    scopeCurator = public;
	cost = 100000;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
	uniform = Rev_U_B_BDF_Uniform_01_shortsleeve_F;
    weapons[] =
	{
		sgun_M4_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_M4_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        HandGrenade,
		MiniGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        HandGrenade,
		MiniGrenade,
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Soldier_universal_F: Rev_B_BDF_Soldier_F
{
	author = $STR_A3_A_Ravenholme;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_medic_s};
			speechPlural[] = {veh_infantry_medic_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_medic_s;
	textPlural = $STR_A3_nameSound_veh_infantry_medic_p;
	nameSound = veh_infantry_medic_s;
	scope = protected;
	scopeCurator = private;
	displayName = $STR_A3_CfgVehicles_b_soldier_universal_f_displayName;
	attendant = true;
	engineer = true;
	canDeactivateMines = true;
	role = Rifleman;
};
class Rev_B_BDF_unarmed_F: Rev_B_BDF_Soldier_F
{
	author = $STR_A3_A_Ravenholme;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] =
    {
        0.1,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
};
class Rev_B_BDF_Soldier_UAV_F: Rev_B_BDF_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Soldier_UAV_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_SOLDIER_UAV_F0;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
    uniformClass = Rev_U_B_BDF_Uniform_01_shortsleeve_F;
	backpack = B_UAV_01_backpack_F;
	weapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		rev_arifle_Velko_lxWS_ACO_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(35Rnd_556x45_velko_lxWS),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_10(35Rnd_556x45_velko_lxWS),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		B_UavTerminal,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		B_UavTerminal,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Pilot_F: Rev_B_BDF_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_pilot_s};
			speechPlural[] = {veh_infantry_pilot_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_pilot_s;
	textPlural = $STR_A3_nameSound_veh_infantry_pilot_p;
	nameSound = veh_infantry_pilot_s;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Pilot_F0;
	camouflage = 2;
    cost = 165000;
    role = Crewman;
	uniformClass = Rev_U_B_BDF_Coveralls_01_F;
	backpack = B_Parachute;
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
		mag_4(30rnd_9x21_mag_SMG_02),
        mag_2(SmokeShellGreen)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02),
        mag_2(SmokeShellGreen)
	};
    linkedItems[] =
    {
		V_TacVest_camo,
        H_PilotHelmetHeli_I_E,
        DefaultManLinkedItems,
		NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_TacVest_camo,
        H_PilotHelmetHeli_I_E,
        DefaultManLinkedItems,
		NVGoggles_INDEP
    };
};

/* BDF Special Forces */
class Rev_B_BDF_Soldier_Recon_Base: Rev_B_BDF_Soldier_Base_F
{
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
	items[] =
	{
		FirstAidKit,
		optic_NVS
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_NVS
	};
	vehicleClass = MenRecon;
	editorSubcategory = EdSubcat_Personnel_SpecialForces;
	canHideBodies = false;
    icon = iconManRecon;
	role = Rifleman;
	camouflage = 0.6;
	detectSkill = 18;
	uniformClass = Rev_U_B_BDF_Sweater_01_F;
};
class Rev_B_BDF_Recon_AR_F: Rev_B_BDF_Soldier_Recon_base
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Recon_AR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_AR_F0;
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        LMG_Zafir_black_ARCO_IR_Snds_F,
        Rev_hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_Zafir_black_ARCO_IR_Snds_F,
        Rev_hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(150rnd_762x51_box_yellow),
		mag_2(16rnd_9x21_mag_v2),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_3(150rnd_762x51_box_yellow),
		mag_2(16rnd_9x21_mag_v2),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class Rev_B_BDF_Recon_Exp_F: Rev_B_BDF_Soldier_recon_base
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Recon_Exp_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_B_CTRG_Soldier_Exp_tna_F0;
	backpack = B_Kitbag_rgr_BDF_ReconExp_F;
	canDeactivateMines = true;
	detectSkill = 38;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
	weapons[] =
    {
        arifle_SA80_blk_ARCO_IR_snds_F,
        Rev_hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SA80_blk_ARCO_IR_snds_F,
        Rev_hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16rnd_9x21_mag_v2),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16rnd_9x21_mag_v2),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class Rev_B_BDF_Recon_GL_F: Rev_B_BDF_Soldier_Recon_base
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Recon_GL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_B_BDF_Recon_GL_F0;
	cost = 200000;
	role = Grenadier;
	weapons[] =
    {
        arifle_SA80_GL_blk_ARCO_IR_snds_F,
        Rev_hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SA80_GL_blk_ARCO_IR_snds_F,
        Rev_hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16rnd_9x21_mag_v2),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16rnd_9x21_mag_v2),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	linkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class Rev_B_BDF_Recon_JTAC_F: Rev_B_BDF_Soldier_Recon_Base
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Recon_JTAC_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_B_CTRG_Soldier_JTAC_tna_F0;
	role = SpecialOperative;
	backpack = B_RadioBag_01_green_F;
	weapons[] =
    {
        arifle_SA80_blk_ARCO_IR_snds_F,
        Rev_hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    respawnWeapons[] =
    {
        arifle_SA80_blk_ARCO_IR_snds_F,
        Rev_hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16rnd_9x21_mag_v2),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_INDEP,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16rnd_9x21_mag_v2),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_INDEP,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class Rev_B_BDF_Recon_M_F: Rev_B_BDF_Soldier_Recon_Base
{
	author = $STR_A3_A_Ravenholme;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_sniper_s};
			speechPlural[] = {veh_infantry_sniper_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
	textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
	nameSound = veh_infantry_sniper_s;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Recon_M_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	cost = 250000;
	role = Marksman;
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
	threat[] = 
	{
		1,
		0.1
		,0.3
	};
	weapons[] =
    {
        arifle_SCAR_black_DMS_IR_BI_Snds_F,
        Rev_hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_SCAR_black_DMS_IR_BI_Snds_F,
        Rev_hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_6(20rnd_762x51_Mag),
        mag_2(16rnd_9x21_mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(20rnd_762x51_Mag),
        mag_2(16rnd_9x21_mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		G_Bandanna_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		G_Bandanna_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class Rev_B_BDF_Recon_Medic_F: Rev_B_BDF_Soldier_Recon_Base
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Recon_Medic_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_B_CTRG_Soldier_Medic_tna_F0;
	backpack = B_AssaultPack_khk_BDF_ReconMedic_F;
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        arifle_SA80_blk_ARCO_IR_snds_F,
        Rev_hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SA80_blk_ARCO_IR_snds_F,
        Rev_hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16rnd_9x21_mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16rnd_9x21_mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class Rev_B_BDF_Recon_F: Rev_B_BDF_Soldier_Recon_Base
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Recon_Medic_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_B_CTRG_Soldier_tna_F0;
	weapons[] =
    {
        arifle_SA80_blk_ARCO_IR_snds_F,
        Rev_hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
       	arifle_SA80_blk_ARCO_IR_snds_F,
        Rev_hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16rnd_9x21_mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
    	mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class Rev_B_BDF_Recon_AT_F: Rev_B_BDF_Soldier_Recon_Base
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Recon_AT_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_B_CTRG_Soldier_LAT_tna_F0;
	backpack = B_AssaultPack_khk_BDF_ReconAT_F;
	cost = 130000;
	threat[] = 
	{
		1,
		0.6,
		0.1
	};
	secondaryAmmoCoef = 0.5;
	icon = iconManAT;
	role = MissileSpecialist;
	weapons[] =
    {
        arifle_SA80_blk_ARCO_IR_snds_F,
        rev_hgun_P07_blk_snds_F,
		launch_NLAW_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SA80_blk_ARCO_IR_snds_F,
        rev_hgun_P07_blk_snds_F,
		launch_NLAW_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16rnd_9x21_mag_v2),
		NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16rnd_9x21_mag_v2),
		NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class Rev_B_BDF_Recon_LAT_F: Rev_B_BDF_Soldier_Recon_Base
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Recon_LAT_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_CTRG_Soldier_LAT2_tna_F0;
	backpack = B_AssaultPack_khk_BDF_ReconLAT_F;
	cost = 130000;
	threat[] = 
	{
		1,
		0.6,
		0.1
	};
	secondaryAmmoCoef = 0.5;
	icon = iconManAT;
	role = MissileSpecialist;
	weapons[] =
    {
        arifle_SA80_blk_ARCO_IR_snds_F,
        rev_hgun_P07_blk_snds_F,
		launch_MRAWS_Green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SA80_blk_ARCO_IR_snds_F,
        rev_hgun_P07_blk_snds_F,
		launch_MRAWS_Green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16rnd_9x21_mag_v2),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16rnd_9x21_mag_v2),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class Rev_B_BDF_Recon_TL_F: Rev_B_BDF_Soldier_Recon_Base
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Recon_TL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_TL_F0;
	cost = 250000;
	icon = iconManLeader;
	role = Rifleman;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        arifle_SA80_blk_ARCO_IR_snds_F,
        rev_hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_SA80_blk_ARCO_IR_snds_F,
        rev_hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16rnd_9x21_mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_INDEP,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16rnd_9x21_mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_INDEP,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_rgr,
		H_Booniehat_atacs_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};