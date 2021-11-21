/* FASR */
class Rev_O_FASR_Man_Base_F: I_Soldier_base_F
{
    scope = private;
	faction = Revolucion_OPF_FASR_F;
	genericNames = VenezuelanMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		G_HAF_default
	};
	side = TEast;
};
class Rev_O_FASR_Soldier_Base_F: Rev_O_FASR_Man_Base_F
{
	uniformClass = Rev_U_O_FASR_FieldJacket_F;
};
class Rev_O_FASR_Soldier_A_F: Rev_O_FASR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
    //editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	cost = 110000;
	backpack = B_Carryall_oli_FASR_Ammo_F;
    weapons[] =
	{
		arifle_NCAR15B_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_Booniehat_m81_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_Booniehat_m81_F,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Soldier_AAA_F: Rev_O_FASR_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Soldier_AAA_F.jpg";
	scope = public;
	scopeCurator = public;
	cost = 220000;
	role = Assistant;
	displayName = $STR_B_soldier_AAA_F0;
	backpack = B_Carryall_oli_FASR_AAA_F;
	uniformClass = Rev_U_O_FASR_FieldJacket_tshirt_F;
	weapons[] =
	{
		arifle_NCAR15B_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_Booniehat_m81_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_Booniehat_m81_F,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Soldier_AR_F: Rev_O_FASR_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Soldier_AR_F.jpg";
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
    weapons[] =
	{
		arifle_CTARS_blk_ACO_grn_FL_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_CTARS_blk_ACO_grn_FL_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(100Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(100Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_Booniehat_m81_F,
		G_Shemag_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_Booniehat_m81_F,
		G_Shemag_oli,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Medic_F: Rev_O_FASR_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
    uniformClass = Rev_U_O_FASR_FieldJacket_tshirt_F;
	backpack = B_Kitbag_rgr_FASR_Medic_F;
    weapons[] =
	{
		arifle_NCAR15B_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_3(SmokeShell),
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_3(SmokeShell),
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_lxWS_TacVestIR_Oli,
		H_PASGT_Basic_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_TacVestIR_Oli,
		H_PASGT_Basic_Olive_F,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Crew_F: Rev_O_FASR_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Crew_F.jpg";
    scope = public;
  	scopeCurator = public;
	displayName = $STR_B_crew_F0;
	role = Crewman;
	cost = 90000;
	camouflage = 1.6;
    engineer = true;
	uniformClass = Rev_U_O_FASR_Sweater_01_F;
	weapons[] =
	{
		SMG_02_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_02_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30rnd_9x21_mag_SMG_02),
        HandGrenade_Guer,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_4(30rnd_9x21_mag_SMG_02),
        HandGrenade_Guer,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_BandollierB_rgr,
		H_Tank_Black_F,     // Could use a new helmet in green or brown
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_rgr,
		H_Tank_Black_F,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Engineer_F: Rev_O_FASR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Engineer_F.jpg";
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
	backpack = B_Carryall_oli_FASR_Eng_F;
	weapons[] =
	{
		arifle_NCAR15B_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
        mag_3(SmokeShell),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShellYellow)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
        mag_3(SmokeShell),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShellYellow)
	};
	linkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_PASGT_Basic_Olive_F,
        G_Combat_Goggles_tna_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_PASGT_Basic_Olive_F,
        G_Combat_Goggles_tna_F,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Soldier_Exp_F: Rev_O_FASR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Soldier_Exp_F.jpg";
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
    backpack = B_Carryall_oli_FASR_Exp_F;
	weapons[] =
	{
		arifle_NCAR15B_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_PASGT_Basic_Olive_F,
        G_Shemag_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_PASGT_Basic_Olive_F,
        G_Shemag_oli,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Soldier_GL_F: Rev_O_FASR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	weapons[] =
	{
		arifle_NCAR15_GL_ACO_grn_FL_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15_GL_ACO_grn_FL_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_580x42_Mag_F),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_580x42_Mag_F),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		V_HarnessOGL_brn,
		H_Booniehat_m81_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_HarnessOGL_brn,
		H_Booniehat_m81_F,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Helipilot_F: Rev_O_FASR_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
	uniformClass = Rev_U_O_FASR_FieldJacket_tanktop_F;
	weapons[] =
	{
		SMG_02_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_02_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30rnd_9x21_mag_SMG_02),
		mag_2(SmokeShell),
        SmokeShellRed
	};
	respawnMagazines[] =
	{
		mag_4(30rnd_9x21_mag_SMG_02),
		mag_2(SmokeShell),
        SmokeShellRed
	};
    linkedItems[] =
    {
		V_TacChestRig_oli_F,
        H_HelmetCrew_I,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_TacChestRig_oli_F,
        H_HelmetCrew_I,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class Rev_O_FASR_Soldier_M_F: Rev_O_FASR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
	weapons[] =
	{
		arifle_NCAR15_MG_DMS_Old_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_NCAR15_MG_DMS_Old_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_8(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_lxWS_TacVestIR_Oli,
		H_Shemag_olive_hs,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_TacVestIR_Oli,
		H_Shemag_olive_hs,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Officer_F: Rev_O_FASR_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    role = Rifleman;
	icon = iconManOfficer;
    cost = 600000;
	camouflage = 1.6;
	//uniformClass = ;
	weapons[] =
	{
		arifle_CTAR_blk_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_CTAR_blk_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_580x42_Mag_F),
		mag_2(10rnd_9x21_mag),
        mag_2(SmokeShell),
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_580x42_Mag_F),
		mag_2(10rnd_9x21_mag),
        mag_2(SmokeShell),
        SmokeShellYellow
	};
	linkedItems[] =
	{
		V_Rangemaster_belt_oli,
		H_milcap_m81_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt_oli,
		H_milcap_m81_F,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Soldier_F: Rev_O_FASR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	cost = 100000;
	weapons[] =
	{
		arifle_NCAR15_ACO_grn_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15_ACO_grn_FL_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_lxWS_TacVestIR_Oli,
		H_PASGT_Basic_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_TacVestIR_Oli,
		H_PASGT_Basic_Olive_F,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_soldier_AA_F: Rev_O_FASR_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Soldier_AA_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	backpack = B_Kitbag_rgr_FASR_AA_F;
	cost = 200000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
	weapons[] =
	{
		arifle_NCAR15B_F,
		launch_B_Titan_olive_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_F,
		launch_B_Titan_olive_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
		Titan_AA,
        HandGrenade_Guer,
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
		Titan_AA,
        HandGrenade_Guer,
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_PASGT_Basic_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_PASGT_Basic_Olive_F,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Soldier_AT_F: Rev_O_FASR_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Soldier_AT_F.jpg";
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
    backpack = B_Kitbag_rgr_FASR_AT_F;
	weapons[] =
	{
		arifle_NCAR15_ACO_grn_F,
		launch_RPG32_Green_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15_ACO_grn_F,
		launch_RPG32_Green_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
		RPG32_F,
        HandGrenade_Guer,
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
		RPG32_F,
        HandGrenade_Guer,
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_PASGT_Basic_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_PASGT_Basic_Olive_F,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Soldier_HAT_F: Rev_O_FASR_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Soldier_HAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_O_Soldier_HAT_F0;
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
	uniformClass = Rev_U_O_FASR_FieldJacket_tanktop_F;
    backpack = B_Kitbag_rgr_FASR_HAT_F;
	weapons[] =
	{
		arifle_NCAR15B_ACO_grn_F,
		launch_O_Vorona_green_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_ACO_grn_F,
		launch_O_Vorona_green_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
		Vorona_HEAT,
        HandGrenade_Guer,
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
		Vorona_HEAT,
        HandGrenade_Guer,
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_PASGT_Basic_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_PASGT_Basic_Olive_F,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Soldier_SL_F: Rev_O_FASR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	weapons[] =
	{
		arifle_NCAR15_MRCO_FL_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_NCAR15_MRCO_FL_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
		mag_2(30Rnd_580x42_Mag_tracer_F),
		mag_2(10rnd_9x21_mag),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_4(SmokeShell),
        mag_2(SmokeShellYellow)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
		mag_2(30Rnd_580x42_Mag_tracer_F),
		mag_2(10rnd_9x21_mag),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_4(SmokeShell),
        mag_2(SmokeShellYellow)
	};
	linkedItems[] =
	{
		V_lxWS_TacVestIR_Oli,
		H_Booniehat_m81_F,
        NVGoggles_INDEP,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_TacVestIR_Oli,
		H_Booniehat_m81_F,
        NVGoggles_INDEP,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Soldier_TL_F: Rev_O_FASR_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 250000;
	camouflage = 1.4;
	weapons[] =
	{
		arifle_CTAR_GL_blk_MRCO_grn_FL_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_CTAR_GL_blk_MRCO_grn_FL_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_8(30Rnd_580x42_Mag_F),
		mag_2(10rnd_9x21_mag),
		mag_5(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell),
        SmokeShellYellow,
        mag_2(1Rnd_Smoke_Grenade_shell),
		mag_2(1Rnd_SmokeYellow_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_580x42_Mag_F),
		mag_2(10rnd_9x21_mag),
		mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell),
        SmokeShellYellow,
        mag_2(1Rnd_Smoke_Grenade_shell),
		mag_2(1Rnd_SmokeYellow_Grenade_shell)
	};
	linkedItems[] =
	{
		V_HarnessOGL_brn,
		H_PASGT_Basic_Olive_F,
        NVGoggles_INDEP,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_HarnessOGL_brn,
		H_PASGT_Basic_Olive_F,
        NVGoggles_INDEP,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_RadioOperator_F: Rev_O_FASR_Soldier_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	backpack = ;    // Requires Radio Bag
	weapons[] =
    {
        arifle_NCAR15_ACO_grn_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_NCAR15_ACO_grn_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_PASGT_Basic_Olive_F,
        G_Headset_Light,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_PASGT_Basic_Olive_F,
        G_Headset_Light,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Soldier_lite_F: Rev_O_FASR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Soldier_lite_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	uniformClass = Rev_U_O_FASR_FieldJacket_tshirt_F;
	cost = 100000;
	weapons[] =
	{
		arifle_NCAR15B_ACO_grn_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_ACO_grn_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_Booniehat_m81_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_Booniehat_m81_F,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Soldier_CQ_F: Rev_O_FASR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Soldier_CQ_F.jpg";
    scope = public;
    scopeCurator = public;
	cost = 100000;
	uniformClass = Rev_U_O_FASR_FieldJacket_tanktop_F;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
    weapons[] =
	{
		sgun_Mp153_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_Mp153_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(4Rnd_12Gauge_Pellets),
        mag_6(4Rnd_12Gauge_Slug),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(4Rnd_12Gauge_Pellets),
        mag_6(4Rnd_12Gauge_Slug),
        mag_2(HandGrenade_Guer),
		mag_2(Chemlight_Yellow),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_lxWS_TacVestIR_Oli,
		H_PASGT_Basic_Olive_F,
        G_Balaclava_combat,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_TacVestIR_Oli,
		H_PASGT_Basic_Olive_F,
        G_Balaclava_combat,
		DefaultManLinkedItems
	};
};
class Rev_O_FASR_Soldier_universal_F: Rev_O_FASR_Soldier_F
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
class Rev_O_FASR_unarmed_F: Rev_O_FASR_Soldier_F
{
	author = $STR_A3_A_Ravenholme;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	// uniformClass = ;
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_PASGT_Basic_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_lxWS_HarnessO_oli,
		H_PASGT_Basic_Olive_F,
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