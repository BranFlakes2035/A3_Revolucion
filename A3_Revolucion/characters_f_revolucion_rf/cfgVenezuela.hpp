/* Venezuela */
class Rev_O_VZ_Support_CMort_F: O_Support_Mort_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
    scopeCurator = public;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Soldier_lite_F.jpg";
    displayName = $STR_LXRF_Soldier_Mortar;
	faction = Revolucion_OPF_VZ_F;
	genericNames = VenezuelanMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		Head_Latino,
		G_HAF_default
	};
	headgearList[]={};
    uniformClass = Rev_U_VZ_CombatUniform_F;
    backpack = B_CommandoMortar_weapon_RF;
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
};