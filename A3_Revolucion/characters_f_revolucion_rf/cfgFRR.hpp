/* FRR (BLUFOR) */
class Rev_B_FRR_Support_CMort_F: B_Support_Mort_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
    scopeCurator = public;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Soldier_lite_F.jpg";
    displayName = $STR_LXRF_Soldier_Mortar;
	faction = Revolucion_BLU_FRR_F;
	side = TWest;
	genericNames = VenezuelanMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		Head_Latino,
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
        H_PASGT_basic_olive_F,
		lxWS_H_bmask_base,
		lxWS_H_bmask_camo02,
		lxWS_H_bmask_yellow,
		lxWS_H_ssh40_green,
		lxWS_H_ssh40_sand,
		lxWS_H_ssh40_black
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
		lxWS_H_bmask_base,1,
		lxWS_H_bmask_camo02,1,
		lxWS_H_bmask_yellow,1,
		lxWS_H_ssh40_green,1,
		lxWS_H_ssh40_sand,1,
		lxWS_H_ssh40_black,1,
        H_FakeHeadgear_F,1
    };
    uniformClass = U_I_C_Soldier_Bandit_3_F;;
	backpack = B_CommandoMortar_weapon_RF;
	weapons[] =
	{
		Aegis_arifle_M16A4_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_M16A4_F,
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
class Rev_B_FRR_Sharpshooter_F;
class Rev_B_FRR_Sharpshooter_RF: Rev_B_FRR_Sharpshooter_F
{
    author = $STR_A3_A_Ravenholme;
	scope = public;
    scopeCurator = public;
    //editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_Sharpshooter_RF.jpg";
    displayName = $STR_A3_R_cfgVehicles_B_FRR_Sharpshooter_RF0;
    uniformClass = Rev_U_B_FRR_Uniform_06_F;
    weapons[] =
	{
		Rev_srifle_h6_oli_DMS_BI_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Rev_srifle_h6_oli_DMS_BI_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_5(30rnd_556x45_stanag),
        HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_5(30rnd_556x45_stanag),
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

/* FRR (Indep) */
class Rev_I_FRR_Support_CMort_F: Rev_B_FRR_Support_CMort_F
{
    faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};
class Rev_I_FRR_Sharpshooter_RF: Rev_B_FRR_Sharpshooter_RF
{
    faction = Revolucion_IND_FRR_F;
	side = TGuerrila;
};

/* FRR (OPFOR)*/
class Rev_O_FRR_Support_CMort_F: Rev_B_FRR_Support_CMort_F
{
    faction = Revolucion_OPF_FRR_F;
	side = TEast;
};
class Rev_O_FRR_Sharpshooter_RF: Rev_B_FRR_Sharpshooter_RF
{
    faction = Revolucion_OPF_FRR_F;
	side = TEast;
};