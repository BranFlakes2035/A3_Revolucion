/* Cartel De Baracas */
class I_C_Soldier_base_F;
class Rev_I_CDB_Soldier_base_F: I_C_Soldier_base_F
{
    scope = private;
	faction = Revolucion_IND_CDB_F;
	genericNames = VenezuelanMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		G_HAF_default
	};
};
class Rev_I_CDB_Soldier_Bandit_base_F: Rev_I_CDB_Soldier_base_F
{
    editorSubcategory = EdSubcat_Personnel_Bandits;
};

/* Men (Bandits) */

class Rev_I_CDB_Soldier_Bandit_1_F: Rev_I_CDB_Soldier_Bandit_base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Soldier_Bandit_1_F.jpg";
  	scope = public;
  	scopeCurator = public;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
    displayName = $STR_A3_I_C_Soldier_Bandit_1_F0;
    uniformClass = U_I_C_Soldier_Bandit_1_F;
    backpack = B_FieldPack_green_Bandit_1_F;
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
		mag_4(30Rnd_545x39_Mag_F)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_545x39_Mag_F)
	};
	linkedItems[] =
	{
		V_BandollierB_rgr,
		H_Booniehat_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_rgr,
		H_Booniehat_oli,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_I_CDB_Soldier_Bandit_2_F: Rev_I_CDB_Soldier_Bandit_base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Soldier_Bandit_2_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_I_C_Soldier_Bandit_2_F0;
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
	uniformClass = U_BG_Guerilla2_1;
	backpack = B_Kitbag_rgr_Bandit_2_F;
    weapons[] =
	{
		arifle_AKS_F,
		launch_RPG7_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AKS_F,
		launch_RPG7_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_545x39_Mag_F),
		RPG7_F
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_545x39_Mag_F),
		RPG7_F
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_I_CDB_Soldier_Bandit_3_F: Rev_I_CDB_Soldier_Bandit_base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Soldier_Bandit_3_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_A3_I_C_Soldier_Bandit_3_F0;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.3     // Air
    };
    uniformClass = U_I_L_Uniform_01_tshirt_skull_f;
	weapons[] =
	{
		arifle_RPK_F,
        hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_RPK_F,
        hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(75rnd_762x39_Mag_F),
        mag_3(10Rnd_9x21_Mag)
	};
	respawnMagazines[] =
	{
		mag_3(75rnd_762x39_Mag_F),
        mag_3(10Rnd_9x21_Mag)
	};
	linkedItems[] =
	{
		V_Chestrig_blk,
		H_Bandanna_tna_F,
		G_Bandanna_CandySkull,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_blk,
		H_Bandanna_tna_F,
		G_Bandanna_CandySkull,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_I_CDB_Soldier_Bandit_4_F: Rev_I_CDB_Soldier_Bandit_base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Soldier_Bandit_4_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_I_C_Soldier_Bandit_4_F0;
	cost = 100000;
    role = Rifleman;
	icon = iconManLeader;
    camouflage = 2;
    uniformClass = U_I_L_Uniform_01_tshirt_olive_f;
    weapons[] =
	{
		arifle_AK12U_545_ACO_AK_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_ACO_AK_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Mag_F),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Mag_F),
        mag_2(HandGrenade_Guer)
	};
	linkedItems[] =
	{
		V_TacVest_blk,
		H_Cap_headphones,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		H_Cap_headphones,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_I_CDB_Soldier_Bandit_5_F: Rev_I_CDB_Soldier_Bandit_base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Soldier_Bandit_5_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_I_C_Soldier_Bandit_5_F0;
	cost = 100000;
    role = Rifleman;
    camouflage = 2;
    uniformClass = U_I_L_Uniform_01_Deserter_F;
	weapons[] =
	{
		arifle_AK12_545_ACO_AK_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_ACO_AK_FL_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Mag_F),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Mag_F),
        mag_2(HandGrenade_Guer)
	};
	linkedItems[] =
	{
		V_ChestrigF_blk,
		H_Watchcap_blk_hs,
		G_Bandanna_blk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_blk,
		H_Watchcap_blk_hs,
		G_Bandanna_blk,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_I_CDB_Soldier_Bandit_6_F: Rev_I_CDB_Soldier_Bandit_base_F
{    
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Soldier_Bandit_6_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_I_C_Soldier_Bandit_6_F0;
    role = Grenadier;
	cost = 200000;
    uniformClass = U_BG_Guerilla2_3;
	weapons[] =
	{
		arifle_AK12_GL_545_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_GL_545_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Mag_F),
        mag_6(1Rnd_HE_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Mag_F),
        mag_6(1Rnd_HE_Grenade_shell)
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Cap_blk,
		G_Cigarette,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_Cap_blk,
		G_Cigarette,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_I_CDB_Soldier_Bandit_7_F: Rev_I_CDB_Soldier_Bandit_base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Soldier_Bandit_7_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_I_C_Soldier_Bandit_7_F0;
	cost = 100000;
    role = Rifleman;
    camouflage = 2;
    uniformClass = U_I_C_Soldier_Bandit_3_F;
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
		mag_6(30Rnd_556x45_Stanag),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        mag_2(HandGrenade_Guer)
	};
	linkedItems[] =
	{
		V_TacVest_blk,
		G_Balaclava_blk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		G_Balaclava_blk,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_I_CDB_Soldier_Bandit_8_F: Rev_I_CDB_Soldier_Bandit_base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Soldier_Bandit_8_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_I_C_Soldier_Bandit_8_F0;
	cost = 100000;
    role = Sapper;
    picture= pictureExplosive;
	icon = iconManExplosive;
	camouflage=2;
	backpack = B_FieldPack_blk_Bandit_8_F;
    uniformClass = U_BG_Guerilla2_2;
    weapons[] =
	{
		arifle_AK12U_545_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_545x39_Mag_F),
        mag_2(HandGrenade_Guer)    
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_545x39_Mag_F),
        mag_2(HandGrenade_Guer)  
	};
	linkedItems[] =
	{
		V_LegStrapBag_coyote_F,
        H_Construction_basic_black_F,
		G_EyeProtectors_Earpiece_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_rgr,
        H_Construction_basic_black_F,
		G_EyeProtectors_Earpiece_F,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_I_CDB_Soldier_Bandit_SG_F: Rev_I_CDB_Soldier_Bandit_base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Soldier_Bandit_SG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_I_CDB_Soldier_Bandit_SG_F0;
	cost = 100000;
    role = Rifleman;
    camouflage = 2;
    uniformClass = U_I_C_Soldier_Bandit_5_F;
	weapons[] =
	{
		sgun_MP153_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_MP153_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(4rnd_12Gauge_Pellets),
        mag_2(4rnd_12Gauge_Slug),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] =
	{
		mag_4(4rnd_12Gauge_Pellets),
        mag_2(4rnd_12Gauge_Slug),
        mag_2(HandGrenade_Guer)
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HeadSet_black_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HeadSet_black_F,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_I_CDB_Soldier_Bandit_M_F: Rev_I_CDB_Soldier_Bandit_base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Soldier_Bandit_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_R_cfgVehicles_I_CDB_Soldier_Bandit_M_F0;
	role = Marksman;
	cost = 250000;
    camouflage = 2;
    uniformClass = U_C_E_LooterJacket_01_F;
    weapons[] =
	{
		srifle_dmr_06_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		srifle_dmr_06_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(10Rnd_Mk14_762x51_Mag),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] =
	{
		mag_6(10Rnd_Mk14_762x51_Mag),
        mag_2(HandGrenade_Guer)
	};
	linkedItems[] =
	{
		V_BandollierB_blk,
		H_WirelessEarpiece_F,
        G_Balaclava_Skull1,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_blk,
		H_WirelessEarpiece_F,
        G_Balaclava_Skull1,
		DefaultManGuerillaLinkedItems
	};
};
class Rev_I_CDB_Soldier_Pilot_F: Rev_I_CDB_Soldier_Bandit_base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Soldier_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Pilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
	uniformClass = U_I_C_Soldier_Bandit_4_F;
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
		mag_4(30Rnd_9x21_Mag_SMG_02)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02)
	};
    linkedItems[] =
    {
		V_ChestRigF_rgr,
        H_Cap_marshal,
        DefaultManGuerillaLinkedItems
    };
    respawnLinkedItems[] =
    {
		V_ChestRigF_rgr,
        H_Cap_marshal,
        DefaultManGuerillaLinkedItems
    };
};
class Rev_I_CDB_Soldier_Bandit_Officer_F: Rev_I_CDB_Soldier_Bandit_base_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Soldier_Bandit_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_R_cfgVehicles_I_CDB_Soldier_Bandit_Officer_F0;
    role = Rifleman;
	icon = iconManOfficer;
    cost = 600000;
	camouflage = 1.6;
	uniformClass = U_C_Commoner1_3;
	weapons[] =
	{
		arifle_AK12_GL_F,
		hgun_Mk26_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AK12_GL_F,
		hgun_Mk26_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_762x39_AK12_Mag_F),
		mag_2(7Rnd_127x33_Mag),
        mag_4(1Rnd_HE_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_762x39_AK12_Mag_F),
		mag_2(7Rnd_127x33_Mag),
        mag_4(1Rnd_HE_Grenade_shell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_blk,
		H_PASGT_Basic_Black_F,
        G_Headset_Light,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_blk,
		H_PASGT_Basic_Black_F,
        G_Headset_Light,
		DefaultManLinkedItems
	};
};

// Men (Paramilitary)