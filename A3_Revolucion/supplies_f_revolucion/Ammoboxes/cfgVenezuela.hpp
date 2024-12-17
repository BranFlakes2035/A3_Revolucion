class Rev_Box_VZ_Wps_F: Box_T_East_Wps_F
{
	author = $STR_A3_A_Ravenholme;
	mapSize = 1.23;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.07;
		verticalOffsetWorld = 0;
	};
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_Box_VZ_Wps_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_VZ_Wps_F0;
	icon = iconCrateWpns;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_VZ;
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_ak12_Mag_F,8);
		mag_xx(200Rnd_556x45_Box_F,2);
		mag_xx(Aegis_10Rnd_762x54_SVD_Green_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,4);
		weap_xx(arifle_AK12_GL_F,2);
		weap_xx(arifle_AK12U_F,2);
		weap_xx(LMG_03_F,2);
		weap_xx(Aegis_srifle_SVD_blk_f,2);
	};
	class TransportItems{};
};
class Rev_Box_VZ_Ammo_F: Box_T_East_Ammo_F
{
	author = $STR_A3_A_Ravenholme;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.21;
		verticalOffsetWorld = 0;
	};
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_Box_VZ_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_VZ_Ammo_F0;
	icon = iconCrateAmmo;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_VZ;
	maximumLoad = 1000;
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_ak12_Mag_F,48);
		mag_xx(200Rnd_556x45_Box_F,6);
		mag_xx(Aegis_10Rnd_762x54_SVD_Green_Mag_F,12);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Rev_Box_VZ_WpsLaunch_F: Box_T_East_WpsLaunch_F
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 1.76;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.18;
		verticalOffsetWorld = 0;
	};
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_Box_VZ_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_VZ_WpsLaunch_F0;
	icon = iconCrateLong;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_VZ;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(APERSMine_Range_Mag,3);
		mag_xx(MiniGrenade,5);
		mag_xx(HandGrenade_East,5);
		mag_xx(RPG7_F,8);
		mag_xx(Titan_AA,3);
		mag_xx(Titan_AT,3);
		mag_xx(Titan_AP,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_RPG7_F,2);
		weap_xx(launch_O_Titan_camo_F,1);
		weap_xx(launch_O_Titan_short_camo_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_owcamo,3);
	};
};
class Rev_O_VZ_supplyCrate_F: ReammoBox_F
{
	author = $STR_A3_A_Ravenholme;
	mapSize = 1.58;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.892;
		verticalOffsetWorld = 0;
		init = "''";
	};
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_supplyCrate_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_O_VZ_supplyCrate_F0;
	model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
	maximumLoad = 4000;
	transportMaxWeapons = 12;
	transportMaxMagazines = 96;
	supplyRadius = -1;
	memoryPointSupply = doplnovani;
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_CO.paa"};
	slingLoadCargoMemoryPoints[] =
	{
		SlingLoadCargo1,
		SlingLoadCargo2,
		SlingLoadCargo3,
		SlingLoadCargo4
	};
    editorSubcategory = EdSubcat_Ammo_VZ;
	class TransportMagazines
	{
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_762x39_ak12_Mag_F,24);
		mag_xx(200Rnd_556x45_Box_F,3);
		mag_xx(Aegis_10Rnd_762x54_SVD_Green_Mag_F,4);
		mag_xx(17rnd_9x21_Mag,2);
		mag_xx(chemlight_red,2);
		mag_xx(UGL_FlareRed_F,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(RPG7_F,6);
		mag_xx(MiniGrenade,6);
		mag_xx(HandGrenade_East,6);
		mag_xx(SmokeShellRed,2);
		mag_xx(SmokeShell,2);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
		weap_xx(arifle_AK12_GL_F,1);
		weap_xx(arifle_AK12U_F,1);
		weap_xx(LMG_03_F,1);
		weap_xx(Aegis_srifle_SVD_blk_f,1);
		weap_xx(launch_RPG7_F,1);
	};
	class TransportItems
	{
		item_xx(bipod_02_F_blk,2);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_ARCO_blk_F,2);
		item_xx(optic_KHS_blk,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_owcamo,2);
	};
};