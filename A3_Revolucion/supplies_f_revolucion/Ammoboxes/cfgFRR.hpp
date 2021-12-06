class Rev_Box_FRR_Wps_F: ReammoBox_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_Box_FRR_Wps_F.jpg";
	scope = public;
	displayName = $STR_A3_R_CfgVehicles_Box_FRR_Wps_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsBasicWeaponBox.p3d";
	icon = iconCrateWpns;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_FRR;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,8);
		mag_xx(30Rnd_762x39_Mag_F,4);
		mag_xx(200Rnd_556x45_box_F,2);
		mag_xx(20Rnd_762x51_SLR_lxWS,2);
	};
	class TransportWeapons
	{
        weap_xx(arifle_SPAR_01_blk_F,4);
        weap_xx(arifle_SPAR_01_GL_blk_F,2);
        weap_xx(arifle_Galat_lxWS,2);
		weap_xx(LMG_03_F,2);
		weap_xx(arifle_SLR_lxWS,2);
	};
	class TransportItems{};
};
class Rev_Box_FRR_Ammo_F: ReammoBox_F
{
	author = $STR_A3_A_Ravenholme;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.21;
		verticalOffsetWorld = 0;
	};
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_Box_FRR_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_R_CfgVehicles_Box_FRR_Ammo_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsBasicAmmoBox.p3d";
	icon = iconCrateAmmo;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_FRR;
	maximumLoad = 1000;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_AUG_Mag_Green_F,32);
		mag_xx(30Rnd_762x39_Mag_F,16);
		mag_xx(200Rnd_556x45_box_F,8);
		mag_xx(20Rnd_762x51_SLR_lxWS,6);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Rev_Box_FRR_WpsLaunch_F: ReammoBox_F
{
	author = $STR_A3_A_Ravenholme;
	mapSize = 1.76;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.18;
		verticalOffsetWorld = 0;
	};
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_Box_FRR_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_R_CfgVehicles_Box_FRR_WpsLaunch_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsLouncherBox.p3d";
	icon = iconCrateLong;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_FRR;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(APERSMine_Range_Mag,3);
		mag_xx(HandGrenade,5);
		mag_xx(MRAWS_HEAT55_F,3);
		mag_xx(MRAWS_HE_F,3);
		mag_xx(RPG7_F,6);
	};
	class TransportWeapons
	{
		weap_xx(launch_RPG7_F,2);
		weap_xx(launch_MRAWS_green_rail_F,2);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_Green_F,4);
	};
};
class Rev_B_FRR_supplyCrate_F: B_supplyCrate_F
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
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_supplyCrate_F.jpg";
	displayName = $STR_A3_R_CfgVehicles_B_FRR_supplyCrate_F0;
    editorSubcategory = EdSubcat_Ammo_FRR;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_IG_CO.paa"};
	class TransportMagazines
	{
		mag_xx(16Rnd_9x21_Mag_v2,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(200Rnd_556x45_Box_F,3);
		mag_xx(30Rnd_556x45_Stanag,24);
		mag_xx(30Rnd_762x39_Mag_F,8);
		mag_xx(20Rnd_762x51_SLR_lxWS,6);
		mag_xx(chemlight_blue,2);
		mag_xx(UGL_FlareGreen_F,2);
		mag_xx(UGL_FlareYellow_F,2);
		mag_xx(MRAWS_HEAT55_F,3);
		mag_xx(MRAWS_HE_F,3);
		mag_xx(HandGrenade,6);
		mag_xx(SmokeShellGreen,2);
		mag_xx(SmokeShell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SPAR_01_blk_F,2);
        weap_xx(arifle_SPAR_01_GL_blk_F,1);
        weap_xx(arifle_Galat_lxWS,1);
		weap_xx(LMG_03_F,1);
		weap_xx(arifle_SLR_lxWS,1);
		weap_xx(launch_MRAWS_green_rail_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(acc_flashlight,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_Green_F,2);
	};
};