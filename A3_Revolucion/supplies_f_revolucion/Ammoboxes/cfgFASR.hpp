class Rev_Box_FASR_Wps_F: Box_T_East_Wps_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_Box_FASR_Wps_F.jpg";
	scope = public;
	displayName = $STR_A3_R_CfgVehicles_Box_FASR_Wps_F0;
	icon = iconCrateWpns;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_FASR;
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_mag_F,10);
		mag_xx(100Rnd_580x42_mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_NCAR15_F,4);
		weap_xx(arifle_NCAR15_GL_F,2);
		weap_xx(arifle_NCAR15B_F,2);
		weap_xx(arifle_CTARS_blk_F,2);
		weap_xx(arifle_NCAR15_MG_F,2);
	};
	class TransportItems{};
};
class Rev_Box_FASR_Ammo_F: Box_T_East_Ammo_F
{
	author = $STR_A3_A_Ravenholme;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.21;
		verticalOffsetWorld = 0;
	};
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_Box_FASR_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_R_CfgVehicles_Box_FASR_Ammo_F0;
	icon = iconCrateAmmo;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_FASR;
	maximumLoad = 1000;
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_mag_F,54);
		mag_xx(100Rnd_580x42_mag_F,12);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Rev_Box_FASR_WpsLaunch_F: Box_T_East_WpsLaunch_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_Box_FASR_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_R_CfgVehicles_Box_FASR_WpsLaunch_F0;
	icon = iconCrateLong;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_FASR;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(APERSMine_Range_Mag,3);
		mag_xx(HandGrenade_Guer,10);
		mag_xx(RPG32_F,4);
		mag_xx(RPG32_HE_F,4);
		mag_xx(Titan_AA,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_RPG32_green_F,2);
		weap_xx(launch_B_Titan_olive_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_rgr,3);
	};
};
class Rev_O_FASR_supplyCrate_F: ReammoBox_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_supplyCrate_F.jpg";
	scope = public;
	displayName = $STR_A3_R_CfgVehicles_O_FASR_supplyCrate_F0;
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
    editorSubcategory = EdSubcat_Ammo_FASR;
	class TransportMagazines
	{
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_580x42_mag_F,30);
		mag_xx(100Rnd_580x42_mag_F,6);
		mag_xx(10rnd_9x21_Mag,2);
		mag_xx(chemlight_red,2);
		mag_xx(UGL_FlareRed_F,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(RPG32_F,3);
		mag_xx(RPG32_HE_F,3);
		mag_xx(HandGrenade_Guer,12);
		mag_xx(SmokeShellRed,2);
		mag_xx(SmokeShell,2);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_NCAR15_F,2);
		weap_xx(arifle_NCAR15_GL_F,1);
		weap_xx(arifle_NCAR15B_F,1);
		weap_xx(arifle_CTARS_blk_F,1);
		weap_xx(arifle_NCAR15_MG_F,1);
		weap_xx(launch_RPG32_green_F,1);
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
		item_xx(optic_ACO_grn,2);
		item_xx(optic_MRCO,2);
		item_xx(optic_DMS_weathered_F,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_rgr,2);
	};
};