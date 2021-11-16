/* FRR - BLUFOR */
class Rev_B_FRR_Man_base_F: I_G_Soldier_base_F
{
    scope = private;
	faction = Revolucion_BLU_FRR_F;
	side = TWest;
	genericNames = VenezuelanMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		G_HAF_default
	};
	allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Booniehat_m81_F,
        H_Booniehat_atacs_F,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_m81_F,1,
        H_Booniehat_atacs_F,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class Rev_B_FRR_Soldier_base_F: Rev_B_FRR_Man_base_F
{
	uniformClass = U_I_C_Soldier_Para_1_F;  // Placeholder
};
class Rev_B_FRR_Soldier_A_F: Rev_B_FRR_Soldier_base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	cost = 100000;
	backpack = B_Carryall_oli_BDF_Ammo_F;	
	weapons[] =
	{
		arifle_SPAR_01_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacChestRig_grn_F,
        H_Booniehat_m81_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestRig_grn_F,
        H_Booniehat_m81_F,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_B_FRR_Soldier_AR_F: Rev_B_FRR_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Soldier_AR_F.jpg";
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
	//uniformClass =
    weapons[] =
	{
		LMG_03_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_03_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200Rnd_556x45_Box_F),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_3(200Rnd_556x45_Box_F),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_blk,
        H_Bandanna_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
        H_Bandanna_khk,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_B_FRR_Medic_F: Rev_B_FRR_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
    uniformClass = U_BG_Guerilla2_1;
	backpack = B_FieldPack_green_FRR_Medic_F;
    weapons[] =
	{
		arifle_SPAR_01_blk_F,
		DefaultManWeapons,
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_F,
		DefaultManWeapons,
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        HandGrenade,
        mag_2(SmokeShell),
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        HandGrenade,
        mag_2(SmokeShell),
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_TacVest_camo,
		H_cap_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_camo,
		H_cap_oli,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_B_FRR_Crew_F: Rev_B_FRR_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	role = Crewman;
	cost = 90000;
	camouflage = 1.6;
    engineer = true;
	uniformClass = U_I_C_Soldier_Para_4_F;
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
		V_BandollierB_cbr,
		H_HelmetCrew_I,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_cbr,
		H_HelmetCrew_I,
		DefaultManGuerillaLinkedItems
	};
    allowedHeadgear[] = {H_HelmetCrew_I};
    headgearList[] = {H_HelmetCrew_I,1};
};
class Rev_B_FRR_Engineer_F: Rev_B_FRR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Engineer_F.jpg";
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
	uniformClass = U_BG_Guerilla1_2_F;
	backpack = B_Carryall_oli_FRR_Eng_F;
	weapons[] =
	{
		arifle_AKS_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AKS_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Mag_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Mag_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_Booniehat_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_Booniehat_khk,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_B_FRR_Soldier_Exp_F: Rev_B_FRR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Soldier_Exp_F.jpg";
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
	uniform = U_I_L_Uniform_01_camo_F;
    backpack = B_Carryall_oli_FRR_Exp_F;
	weapons[] =
	{
		rev_arifle_SPAR_01_blk_ACO_grn_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		rev_arifle_SPAR_01_blk_ACO_grn_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_ChestrigF_oli,
		H_PASGT_basic_olive_F,
		G_Combat,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		H_PASGT_basic_olive_F,
		G_Combat,
		DefaultManGuerillaLinkedItems
	};
	allowedHeadgear[] = 
	{
		H_PASGT_basic_olive_F,
		H_PASGT_basic_green_F,
		H_PASGT_basic_sand_F
	};
    headgearList[] = 
	{
		H_PASGT_basic_olive_F,1,
		H_PASGT_basic_green_F,1,
		H_PASGT_basic_sand_F,1
	};
};
class Rev_B_FRR_Soldier_GL_F: Rev_B_FRR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	uniformClass = U_I_C_Soldier_Para_2_F;
	weapons[] =
	{
		arifle_SPAR_01_GL_blk_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_GL_blk_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        mag_3(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        mag_3(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_atacs_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_atacs_F,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_B_FRR_Soldier_M_F: Rev_B_FRR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
	uniformClass = U_I_C_Soldier_Para_3_F;
	weapons[] =
	{
		srifle_DMR_06_hunter_F, // Should be a Galil with an MRCO
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		srifle_DMR_06_hunter_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(20rnd_762x51_Mag),
        HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(20rnd_762x51_Mag),
        HandGrenade,
		SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_camo,
		H_cap_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_camo,
		H_cap_oli,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_B_FRR_Officer_F: Rev_B_FRR_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    role = Rifleman;
	icon = iconManOfficer;
    cost = 600000;
	camouflage = 1.6;
	uniformClass = U_BG_Leader;	// This one with Police-Blue Pants and a BDF ATACS Jacket?
	weapons[] =
	{
		rev_arifle_SPAR_01_blk_ACO_grn_F,
		hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		rev_arifle_SPAR_01_blk_ACO_grn_F,
		hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
		mag_2(16rnd_9x21_mag_v2),
        mag_2(SmokeShell),
        SmokeShellGreen
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_580x42_Mag_F),
		mag_2(16rnd_9x21_mag_v2),
        mag_2(SmokeShell),
        SmokeShellGreen
	};
	linkedItems[] =
	{
		V_TacChestRig_grn_F,
		H_Beret_brn,
		G_headset_light,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestRig_grn_F,
		H_Beret_brn,
		G_headset_light,
		DefaultManLinkedItems
	};
	allowedHeadgear[] = 
	{
		H_Beret_gry,
		H_Beret_blk,
		H_Beret_blk_POLICE,
		H_Beret_brn
	};
    headgearList[] = 
	{
		H_Beret_gry,1,
		H_Beret_blk,1,
		H_Beret_blk_POLICE,1,
		H_Beret_brn,1
	};
};
class Rev_B_FRR_Soldier_F: Rev_B_FRR_Soldier_base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	cost = 100000;
	weapons[] =
	{
		rev_arifle_SPAR_01_blk_ACO_grn_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		rev_arifle_SPAR_01_blk_ACO_grn_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_Bandanna_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_Bandanna_khk,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_B_FRR_Soldier_AT_F: Rev_B_FRR_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Soldier_AT_F.jpg";
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
    backpack = B_FieldPack_green_F_FRR_AT_F;
	uniform = U_I_C_Soldier_Para_2_F;
	weapons[] =
	{
		arifle_SPAR_01_blk_F,
		launch_MRAWS_Green_rail_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_F,
		launch_MRAWS_Green_rail_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		MRAWS_HEAT55_F,
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		MRAWS_HEAT55_F,
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_blk,
		H_Booniehat_atacs_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		H_Booniehat_atacs_F,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_B_FRR_Soldier_LAT_F: Rev_B_FRR_Soldier_Base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_soldier_LAT2_F0;
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
    backpack = B_FieldPack_green_F_FRR_LAT_F;
	uniformClass = U_BG_Guerilla1_2_F;
	weapons[] =
	{
		arifle_SPAR_01_blk_F,	// Change this out for a Galat post WS
		launch_RPG7_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_F,
		launch_RPG7_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		RPG7_F,
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		RPG7_F,
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_camo,
		H_Cap_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_camo,
		H_Cap_oli,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_B_FRR_Soldier_SL_F: Rev_B_FRR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	uniform = U_I_C_Soldier_Para_2_F;
	weapons[] =
	{
		rev_arifle_SPAR_01_blk_MRCO_F,
		hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		rev_arifle_SPAR_01_blk_MRCO_F,
		hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(16rnd_9x21_mag_v2),
        mag_2(HandGrenade),
		SmokeShell,
		SMOKESHELLS_DEFAULT
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(16rnd_9x21_mag_v2),
        mag_2(HandGrenade),
        SmokeShell,
		SMOKESHELLS_DEFAULT
	};
	linkedItems[] =
	{
		V_Chestrig_rgr,
		H_milcap_m81_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_rgr,
		H_milcap_m81_F,
		DefaultManGuerillaLinkedItems
	};
	allowedHeadgear[] = 
	{
		H_milcap_atacs_F,
		H_milcap_m81_F,
		H_milcap_grn_F
	};
    headgearList[] = 
	{
		H_milcap_atacs_F,1,
		H_milcap_m81_F,1,
		H_milcap_grn_F,1
	};
};
class Rev_B_FRR_Soldier_TL_F: Rev_B_FRR_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 250000;
	camouflage = 1.4;
	uniform = U_I_C_Soldier_Para_3_F;
	weapons[] =
	{
		rev_arifle_SPAR_01_GL_blk_ACO_grn_F,
		hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		rev_arifle_SPAR_01_GL_blk_ACO_grn_F,
		hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
        mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(16rnd_9x21_mag_v2),
        mag_2(HandGrenade),
        mag_3(1Rnd_HE_Grenade_shell),
        SmokeShell,
        SMOKESHELLS_DEFAULT,
        1Rnd_Smoke_Grenade_shell,
        SMOKEGRENADES_DEFAULT
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
        mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(16rnd_9x21_mag_v2),
		mag_2(HandGrenade),
        mag_3(1Rnd_HE_Grenade_shell),
        SmokeShell,
        SMOKESHELLS_DEFAULT,
        1Rnd_Smoke_Grenade_shell,
        SMOKEGRENADES_DEFAULT
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_m81_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_m81_F,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_B_FRR_Soldier_lite_F: Rev_B_FRR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Soldier_lite_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	cost = 100000;
	uniform = U_I_C_Soldier_Para_4_F;
	weapons[] =
	{
		arifle_SPAR_01_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_BandollierB_rgr,
		H_Bandanna_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_rgr,
		H_Bandanna_khk,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_B_FRR_Soldier_CQ_F: Rev_B_FRR_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Soldier_CQ_F.jpg";
    scope = public;
    scopeCurator = public;
	cost = 100000;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
	uniform = U_I_C_Soldier_Para_1_F;
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
        mag_2(8Rnd_12Gauge_Pellets),
        mag_2(8Rnd_12Gauge_Slug),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_2(8Rnd_12Gauge_Pellets),
        mag_2(8Rnd_12Gauge_Slug),
        HandGrenade,
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_BandollierB_rgr,
		H_PASGT_basic_olive_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_rgr,
		H_PASGT_basic_olive_F,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_B_FRR_Sharpshooter_F: Rev_B_FRR_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
    scopeCurator = public;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[]={veh_infantry_sniper_s};
			speechPlural[]={veh_infantry_sniper_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
	textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
	nameSound = veh_infantry_sniper_s;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Sharpshooter_F.jpg";
	displayName = $STR_A3_cfgVehicles_B_Sharpshooter_F0;
	uniformClass = U_BG_Guerilla1_2_F;
	weapons[] =
	{
		srifle_DMR_06_hunter_F, // Should be an SLR with Kahlia
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		srifle_DMR_06_hunter_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(20rnd_762x51_Mag),
        HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(20rnd_762x51_Mag),
        HandGrenade,
		SmokeShell
	};
	linkedItems[] =
	{
		V_ChestrigF_oli,
		H_Booniehat_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		H_Booniehat_oli,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_B_FRR_Soldier_universal_F: Rev_B_FRR_Soldier_F
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
class Rev_B_FRR_Soldier_unarmed_F: Rev_B_FRR_Soldier_F
{
	author = $STR_A3_A_Ravenholme;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_Bandanna_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_Bandanna_khk,
		DefaultManGuerillaLinkedItems
	};
	role = Unarmed;
	threat[] =
    {
        0.1,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
};
class Rev_B_FRR_Soldier_TechSpec_F: Rev_B_FRR_engineer_F
{
    author = $STR_A3_A_Ravenholme;
    //editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Soldier_TechSpec_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_I_G_Soldier_TechSpec_F0;
    uavHacker = true;
    canDeactivateMines = false;
    cost = 150000;
	role = SpecialOperative;
    uniformClass = U_I_C_Soldier_Para_3_F;
    backpack = B_Kitbag_rgr_G_TechSpec;
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
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(30rnd_9x21_mag_SMG_02),
        HandGrenade,
        SmokeShell
    };
    linkedItems[] =
    {
        H_Bandanna_sgg,
        G_Shemag_shades,
        V_TacVest_camo,
        B_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Bandanna_sgg,
        G_Shemag_shades,
        V_TacVest_camo,
        B_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
};

// Men (Story)


// FRR INDEP
class Rev_I_FRR_Soldier_A_F: Rev_B_FRR_Soldier_A_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Soldier_AR_F: Rev_B_FRR_Soldier_AR_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Medic_F: Rev_B_FRR_Medic_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Crew_F: Rev_B_FRR_Crew_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Engineer_F: Rev_B_FRR_Engineer_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Soldier_Exp_F: Rev_B_FRR_Soldier_Exp_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Soldier_GL_F: Rev_B_FRR_Soldier_GL_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Soldier_M_F: Rev_B_FRR_Soldier_M_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Officer_F: Rev_B_FRR_Officer_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Soldier_F: Rev_B_FRR_Soldier_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Soldier_AT_F: Rev_B_FRR_Soldier_AT_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Soldier_LAT_F: Rev_B_FRR_Soldier_LAT_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Soldier_SL_F: Rev_B_FRR_Soldier_SL_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Soldier_TL_F: Rev_B_FRR_Soldier_TL_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Soldier_lite_F: Rev_B_FRR_Soldier_lite_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Soldier_CQ_F: Rev_B_FRR_Soldier_CQ_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Sharpshooter_F: Rev_B_FRR_Sharpshooter_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Soldier_universal_F: Rev_B_FRR_Soldier_universal_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Soldier_unarmed_F: Rev_B_FRR_Soldier_unarmed_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Soldier_TechSpec_F: Rev_B_FRR_Soldier_TechSpec_F
{
	faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
	linkedItems[] =
    {
        H_Bandanna_sgg,
        G_Shemag_shades,
        V_TacVest_camo,
        I_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Bandanna_sgg,
        G_Shemag_shades,
        V_TacVest_camo,
        I_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
};

// FRR OPFOR
class Rev_O_FRR_Soldier_A_F: Rev_B_FRR_Soldier_A_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Soldier_AR_F: Rev_B_FRR_Soldier_AR_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Medic_F: Rev_B_FRR_Medic_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Crew_F: Rev_B_FRR_Crew_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Engineer_F: Rev_B_FRR_Engineer_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Soldier_Exp_F: Rev_B_FRR_Soldier_Exp_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Soldier_GL_F: Rev_B_FRR_Soldier_GL_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Soldier_M_F: Rev_B_FRR_Soldier_M_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Officer_F: Rev_B_FRR_Officer_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Soldier_F: Rev_B_FRR_Soldier_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Soldier_AT_F: Rev_B_FRR_Soldier_AT_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Soldier_LAT_F: Rev_B_FRR_Soldier_LAT_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Soldier_SL_F: Rev_B_FRR_Soldier_SL_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Soldier_TL_F: Rev_B_FRR_Soldier_TL_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Soldier_lite_F: Rev_B_FRR_Soldier_lite_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Soldier_CQ_F: Rev_B_FRR_Soldier_CQ_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Sharpshooter_F: Rev_B_FRR_Sharpshooter_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Soldier_universal_F: Rev_B_FRR_Soldier_universal_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Soldier_unarmed_F: Rev_B_FRR_Soldier_unarmed_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Soldier_TechSpec_F: Rev_B_FRR_Soldier_TechSpec_F
{
	faction = Revolucion_OPF_FRR_F;
	side = TEast;
	linkedItems[] =
    {
        H_Bandanna_sgg,
        G_Shemag_shades,
        V_TacVest_camo,
        O_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Bandanna_sgg,
        G_Shemag_shades,
        V_TacVest_camo,
        O_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
};