class Rev_Box_BDF_Wps_F: Box_NATO_Wps_F
{
	author = $STR_A3_A_Ravenholme;
	mapSize = 1.23;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_Box_BDF_Wps_F.jpg";
	scope = public;
	displayName = $STR_A3_R_CfgVehicles_Box_BDF_Wps_F0;
	icon = iconCrateWpns;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_BDF;
	class TransportMagazines
	{
		mag_xx(35Rnd_556x45_velko_lxWS,8);
		mag_xx(150rnd_762x51_box_yellow,2);
		mag_xx(20rnd_762x51_slr_lxWS,6);
        mag_xx(6Rnd_HE_Grenade_shell,1);
	};
	class TransportWeapons
	{
        weap_xx(arifle_Velko_lxWS,4);
        weap_xx(GL_M32_F,1);
		weap_xx(LMG_Zafir_black_F,2);
		weap_xx(arifle_SLR_V_lxWS,2);
	};
	class TransportItems{};
};
class Rev_Box_BDF_Ammo_F: Box_NATO_Ammo_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_Box_BDF_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_R_CfgVehicles_Box_BDF_Ammo_F0;
	icon = iconCrateAmmo;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_BDF;
	maximumLoad = 1000;
	class TransportMagazines
	{
		mag_xx(35Rnd_556x45_velko_lxWS,48);
		mag_xx(150rnd_762x51_box_yellow,8);
		mag_xx(20rnd_762x51_slr_lxWS,6);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Rev_Box_BDF_WpsLaunch_F: Box_NATO_WpsLaunch_F
{
	author = $STR_A3_A_Ravenholme;
	mapSize = 1.76;
	//editorPreview = "\A3_RevolucionRevolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_Box_BDF_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_R_CfgVehicles_Box_BDF_WpsLaunch_F0;
	icon = iconCrateLong;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_BDF;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(APERSMine_Range_Mag,3);
		mag_xx(MiniGrenade,5);
		mag_xx(HandGrenade,5);
		mag_xx(MRAWS_HEAT55_F,3);
		mag_xx(MRAWS_HE_F,3);
		mag_xx(Titan_AA,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_MRAWS_green_F,2);
		weap_xx(launch_B_Titan_olive_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_khk,4);
	};
};
class Rev_B_BDF_supplyCrate_F: O_supplyCrate_F
{
	author = $STR_A3_A_Ravenholme;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.892;
		verticalOffsetWorld = 0;
		init = "''";
	};
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_supplyCrate_F.jpg";
	displayName = $STR_A3_R_CfgVehicles_B_BDF_supplyCrate_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_CO.paa"};
    editorSubcategory = EdSubcat_Ammo_BDF;
	class TransportMagazines
	{
		mag_xx(30Rnd_9x21_Mag_smg_02,6);
		mag_xx(6Rnd_HE_Grenade_shell,1);
		mag_xx(35Rnd_556x45_velko_lxWS,32);
        mag_xx(150rnd_762x51_box_yellow,6);
		mag_xx(20rnd_762x51_slr_lxWS,6);
		mag_xx(16Rnd_9x21_Mag_v2,2);
		mag_xx(chemlight_green,2);
		mag_xx(B_IR_Grenade,2);
		mag_xx(Laserbatteries,1);
		mag_xx(6rnd_UGL_FlareWhite_F,1);
		mag_xx(6rnd_UGL_FlareGreen_F,1);
		mag_xx(MRAWS_HEAT55_F,3);
		mag_xx(MRAWS_HE_F,3);
		mag_xx(MiniGrenade,6);
		mag_xx(HandGrenade,6);
		mag_xx(SmokeShellGreen,2);
		mag_xx(SmokeShell,2);
		mag_xx(6Rnd_SmokeGreen_Grenade_shell,1);
		mag_xx(6Rnd_Smoke_Grenade_shell,1);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Velko_lxWS,2);
		weap_xx(GL_M32_F,1);
		weap_xx(LMG_Zafir_black_F,1);
		weap_xx(arifle_SLR_V_lxWS,1);
		weap_xx(launch_MRAWS_green_F,1);
	};
	class TransportItems
	{
		item_xx(bipod_01_F_blk,2);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
		item_xx(Laserdesignator_03,1);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_ACO,2);
		item_xx(optic_LRCO_blk_F,2);
		item_xx(optic_DMS,2);
		item_xx(Rangefinder,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_khk,2);
	};
};