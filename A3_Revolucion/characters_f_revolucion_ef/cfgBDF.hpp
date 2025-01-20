/* Baracan Marines */
class Rev_B_BDF_Soldier_base_F;
class Rev_B_BDF_Marine_base_F: Rev_B_BDF_Soldier_base_F
{
	scope = private;
	uniformClass = rev_U_UniformBDU_03_fdbmarines_F;
	headgearList[]={};
	editorSubcategory = EdSubcat_Personnel_Marines;
    weapons[] =
	{
		Aegis_arifle_M4A1_Holo_IR_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_M4A1_Holo_IR_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_Stanag_red),
		mag_2(16rnd_9x21_mag_v2),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_Stanag_red),
		mag_2(16rnd_9x21_mag_v2),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_alt_oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_alt_oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Marine_A_F: Rev_B_BDF_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Marine_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	backpack = B_Carryall_oli_BDF_Marine_Ammo_F;
};
class Rev_B_BDF_Marine_AR_F: Rev_B_BDF_Marine_base_F
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
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Marine_AR_F.jpg";
    scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
	uniformClass = rev_U_UniformBDU_04_fdbmarines_F;
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
		LMG_S77_Compact_lxWS_LRCO_FL_F,
		hgun_P07_blk_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_S77_Compact_lxWS_LRCO_FL_F,
		hgun_P07_blk_F,
        DefaultManWeapons
	};
	magazines[] =
    {
        mag_5(100Rnd_762x51_s77_yellow_lxws),
        mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_5(100Rnd_762x51_s77_yellow_lxws),
        mag_2(16rnd_9x21_mag_v2),
        HandGrenade,
        mag_2(SmokeShell)
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_alt_oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_alt_oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Marine_Medic_F: Rev_B_BDF_Marine_base_F
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
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Marine_Medic_F.jpg";
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
		Aegis_arifle_M4A1_Holo_IR_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_M4A1_Holo_IR_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_Alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_Alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Marine_Engineer_F: Rev_B_BDF_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Marine_Engineer_F.jpg";
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
		Aegis_arifle_M4A1_Short_Holo_IR_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_M4A1_Short_Holo_IR_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_alt_oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_alt_oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Marine_Exp_F: Rev_B_BDF_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Marine_Exp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
	uniformClass = rev_U_UniformBDU_04_fdbmarines_F;
    canDeactivateMines = true;
	detectSkill = 38;
	cost = 93000;
	camouflage = 1.6;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
	backpack = B_Carryall_oli_BDF_Exp_F;
	weapons[] =
	{
		Aegis_arifle_M4A1_Short_Holo_IR_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_M4A1_Short_Holo_IR_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Marine_GL_F: Rev_B_BDF_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Marine_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	weapons[] =
    {
        Aegis_arifle_M4A1_GL_Holo_IR_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_M4A1_GL_Holo_IR_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Marine_M_F: Rev_B_BDF_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Marine_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
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
		mag_8(20rnd_762x51_slr_lxWS),
		mag_2(16rnd_9x21_mag_v2),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(20rnd_762x51_slr_lxWS),
		mag_2(16rnd_9x21_mag_v2),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_Alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_Alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Marine_F: Rev_B_BDF_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Marine_F.jpg";
    scope = public;
    scopeCurator = public;
};
class Rev_B_BDF_Marine_AA_F: Rev_B_BDF_Marine_base_F
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
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Marine_AA_F.jpg";
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
       	Aegis_arifle_M4A1_Grip_Holo_IR_F,
		launch_B_Titan_Olive_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_M4A1_Grip_Holo_IR_F,
		launch_B_Titan_Olive_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_Alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_Alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Marine_AT_F: Rev_B_BDF_Marine_base_F
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
	displayName = $STR_B_Soldier_AT_F0;
	uniformClass = rev_U_UniformBDU_04_fdbmarines_F;
	backpack = B_AssaultPack_khk_BDF_ReconAT_F;
	cost = 200000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
	weapons[] =
    {
        Aegis_arifle_M4A1_Grip_Holo_IR_F,
		launch_NLAW_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_M4A1_Grip_Holo_IR_F,
		launch_NLAW_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_Alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_Alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Marine_LAT_F: Rev_B_BDF_Marine_base_F
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
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Marine_LAT_F.jpg";
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
	weapons[] =
    {
        Aegis_arifle_M4A1_Grip_Holo_IR_F,
		launch_MRAWS_Green_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_M4A1_Grip_Holo_IR_F,
		launch_MRAWS_Green_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        MRAWS_HEAT55_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        MRAWS_HEAT55_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_Alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_Alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLinkedItems
	};
};
class Rev_B_BDF_Marine_SL_F: Rev_B_BDF_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Marine_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	weapons[] =
    {
        Aegis_arifle_M4A1_Grip_ACOG_IR_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        Aegis_arifle_M4A1_Grip_ACOG_IR_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_cqb_Alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_Alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLeaderLinkedItems
	};
};
class Rev_B_BDF_Marine_TL_F: Rev_B_BDF_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Marine_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	uniformClass = rev_U_UniformBDU_04_fdbmarines_F;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	weapons[] =
    {
        Aegis_arifle_M4A1_GL_ACOG_IR_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        Aegis_arifle_M4A1_GL_ACOG_IR_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        mag_6(1Rnd_HE_Grenade_shell),
        HandGrenade,
        mag_2(SmokeShell),
		SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16rnd_9x21_mag_v2),
        mag_6(1Rnd_HE_Grenade_shell),
        HandGrenade,
        mag_2(SmokeShell),
		SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_alt_oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_alt_oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		DefaultManLeaderLinkedItems
	};
};
class Rev_B_BDF_Marine_RadioOp_F: Rev_B_BDF_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Marine_RadioOp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_B_W_RadioOperator_F0;
	backpack = B_RadioBag_01_green_F;
};
class Rev_B_BDF_Marine_UAV_F: Rev_B_BDF_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Marine_UAV_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_SOLDIER_UAV_F0;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
	backpack = B_UAV_01_backpack_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_Alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		B_UAVTerminal,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_Alt_Oli_F,
		Rev_H_MCH_BasicNet_FDB_Marine_EF,
		NVGoggles_INDEP,
		B_UAVTerminal,
		DefaultManinkedItems
	};
};
