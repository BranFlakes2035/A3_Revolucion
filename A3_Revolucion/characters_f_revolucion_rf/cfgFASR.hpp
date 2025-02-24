/* FASR */
class Rev_O_FASR_Support_CMort_F: O_Support_Mort_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
    scopeCurator = public;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Soldier_lite_F.jpg";
    displayName = $STR_LXRF_Soldier_Mortar;
	faction = Revolucion_OPF_FASR_F;
	genericNames = VenezuelanMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		Head_Latino,
		G_HAF_default
	};
	side = TEast;
	headgearList[]={};
	uniformClass = rev_U_UniformBDU_02_fasr_F;
	backpack = B_CommandoMortar_weapon_RF;
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