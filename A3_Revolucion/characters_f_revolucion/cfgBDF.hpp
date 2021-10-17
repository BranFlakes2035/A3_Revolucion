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
class rev_B_BDF_Soldier_F: Rev_B_BDF_Soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	cost = 100000;
	weapons[] =
	{
		rev_arifle_SCAR_L_black_ACO_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		rev_arifle_SCAR_L_black_ACO_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_10(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_camo,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_camo,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class rev_B_BDF_Soldier_A_F: Rev_B_BDF_Soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	uniformClass = Rev_B_BDF_Uniform_01_tanktop_F;
	cost = 100000;
	backpack = B_Carryall_oli_BDF_Ammo_F;	
	weapons[] =
	{
		rev_arifle_SCAR_L_black_ACO_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		rev_arifle_SCAR_L_black_ACO_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_camo,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_camo,
		H_MK7_atacsfg_F,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};