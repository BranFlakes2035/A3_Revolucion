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
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
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
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
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
		DefaultGuerillaManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestRig_grn_F,
        H_Booniehat_m81_F,
		DefaultGuerillaManLinkedItems
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
		DefaultGuerillaManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
        H_Bandanna_khk,
		DefaultGuerillaManLinkedItems
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
	backpack = B_AssaultPack_khk_BDF_Medic_F;
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
		mag_6(30Rnd_580x42_Mag_F),
        HandGrenade,
        mag_2(SmokeShell),
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
        HandGrenade,
        mag_2(SmokeShell),
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_TacVest_camo,
		H_cap_oli,
		DefaultGuerillaManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_camo,
		H_cap_oli,
		DefaultGuerillaManLinkedItems
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
		DefaultGuerillaManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_cbr,
		H_HelmetCrew_I,
		DefaultGuerillaManLinkedItems
	};
    allowedHeadgear[] = {H_HelmetCrew_I};
    headgearList[] = {H_HelmetCrew_I,1};
};