class Rev_O_VZ_LSV_02_armed_F: LSV_02_armed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {damagehidevez,0},
            {damagehidehlaven,0},
            {wheel_1_1_destruct,0},
            {wheel_1_2_destruct,0},
            {wheel_1_3_destruct,0},
            {wheel_1_4_destruct,0},
            {wheel_2_1_destruct,0},
            {wheel_2_2_destruct,0},
            {wheel_2_3_destruct,0},
            {wheel_2_4_destruct,0},
            {wheel_1_1_destruct_unhide,0},
            {wheel_1_2_destruct_unhide,0},
            {wheel_1_3_destruct_unhide,0},
            {wheel_1_4_destruct_unhide,0},
            {wheel_2_1_destruct_unhide,0},
            {wheel_2_2_destruct_unhide,0},
            {wheel_2_3_destruct_unhide,0},
            {wheel_2_4_destruct_unhide,0},
            {wheel_1_3_damage,0},
            {wheel_1_4_damage,0},
            {wheel_2_3_damage,0},
            {wheel_2_4_damage,0},
            {wheel_1_3_damper_damage_backanim,0},
            {wheel_1_4_damper_damage_backanim,0},
            {wheel_2_3_damper_damage_backanim,0},
            {wheel_2_4_damper_damage_backanim,0},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_2_2,0},
            {daylights,0},
            {reverse_light,1},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {wheel_1_1_damper,0},
            {wheel_2_1_damper,0},
            {wheel_1_2_damper,0},
            {wheel_2_2_damper,0},
            {drivingwheel,0},
            {indicatorspeed,0},
            {fuel,1},
            {steering_1_1,0},
            {steering_2_1,0},
            {hidegunner,0},
            {mainturret,0},
            {maingun,0},
            {minigun,0.33},
            {zasleh_rot,498},
            {zasleh_hide,0},
            {opticsfix,0},
            {wheel_1_1_damper_land_hack,0},
            {wheel_1_2_damper_land_hack,0},
            {wheel_2_1_damper_land_hack,0},
            {wheel_2_2_damper_land_hack,0},
            {magazine_reload_hide_1,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1,
            light_2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.599;
		verticalOffsetWorld = -0.131;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_LSV_02_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Quimera (Minigun)";
	side = TEast;
	faction = revolucion_OPF_VZ_F;
	crew = Rev_O_VZ_Soldier_F;
	typicalCargo[] = {Rev_O_VZ_Soldier_F};
	textureList[] =
	{
		Black,0,
		VZHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Soft_F_Revolucion\LSV_02\Data\CSAT_LSV_01_VZ_CO.paa",
        "\A3_Revolucion\Soft_F_Revolucion\LSV_02\Data\CSAT_LSV_02_VZ_CO.paa",
        "\A3_Revolucion\Soft_F_Revolucion\LSV_02\Data\CSAT_LSV_03_VZ_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_ak12_Mag_F,12);
		mag_xx(200Rnd_556x45_Box_Red_F,2);
		mag_xx(HandGrenade_East,8);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellRed,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellYellow,4);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeYellow_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(RPG7_F,4);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
	};
};
class Rev_O_VZ_LSV_02_unarmed_F: LSV_02_unarmed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {damagehidevez,0},
            {damagehidehlaven,0},
            {wheel_1_1_destruct,0},
            {wheel_1_2_destruct,0},
            {wheel_1_3_destruct,0},
            {wheel_1_4_destruct,0},
            {wheel_2_1_destruct,0},
            {wheel_2_2_destruct,0},
            {wheel_2_3_destruct,0},
            {wheel_2_4_destruct,0},
            {wheel_1_1_destruct_unhide,0},
            {wheel_1_2_destruct_unhide,0},
            {wheel_1_3_destruct_unhide,0},
            {wheel_1_4_destruct_unhide,0},
            {wheel_2_1_destruct_unhide,0},
            {wheel_2_2_destruct_unhide,0},
            {wheel_2_3_destruct_unhide,0},
            {wheel_2_4_destruct_unhide,0},
            {wheel_1_3_damage,0},
            {wheel_1_4_damage,0},
            {wheel_2_3_damage,0},
            {wheel_2_4_damage,0},
            {wheel_1_3_damper_damage_backanim,0},
            {wheel_1_4_damper_damage_backanim,0},
            {wheel_2_3_damper_damage_backanim,0},
            {wheel_2_4_damper_damage_backanim,0},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_2_2,0},
            {daylights,0},
            {reverse_light,1},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {wheel_1_1_damper,0},
            {wheel_2_1_damper,0},
            {wheel_1_2_damper,0},
            {wheel_2_2_damper,0},
            {drivingwheel,0},
            {indicatorspeed,0},
            {fuel,1},
            {steering_1_1,0},
            {steering_2_1,0},
            {hidegunner,0},
            {mainturret,0},
            {maingun,0},
            {minigun,0},
            {zasleh_rot,0},
            {zasleh_hide,0},
            {opticsfix,0},
            {wheel_1_1_damper_land_hack,0},
            {wheel_1_2_damper_land_hack,0},
            {wheel_2_1_damper_land_hack,0},
            {wheel_2_2_damper_land_hack,0},
            {magazine_reload_hide_1,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1,
            light_2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.598;
		verticalOffsetWorld = -0.132;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_LSV_02_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
    displayName = "Quimera";
    side = TEast;
    faction = revolucion_OPF_VZ_F;
    crew = Rev_O_VZ_Soldier_F;
    typicalCargo[] = {Rev_O_VZ_Soldier_F};
	textureList[] =
	{
		VZHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Soft_F_Revolucion\LSV_02\Data\CSAT_LSV_01_VZ_CO.paa",
        "\A3_Revolucion\Soft_F_Revolucion\LSV_02\Data\CSAT_LSV_02_VZ_CO.paa",
        "\A3_Revolucion\Soft_F_Revolucion\LSV_02\Data\CSAT_LSV_03_VZ_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_ak12_Mag_F,12);
		mag_xx(200Rnd_556x45_Box_Red_F,2);
		mag_xx(HandGrenade_East,8);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellRed,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellYellow,4);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeYellow_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(RPG7_F,4);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
	};
};
class Rev_O_VZ_LSV_02_AT_F: LSV_02_AT_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {damagehidevez,0},
            {damagehidehlaven,0},
            {wheel_1_1_destruct,0},
            {wheel_1_2_destruct,0},
            {wheel_1_3_destruct,0},
            {wheel_1_4_destruct,0},
            {wheel_2_1_destruct,0},
            {wheel_2_2_destruct,0},
            {wheel_2_3_destruct,0},
            {wheel_2_4_destruct,0},
            {wheel_1_1_destruct_unhide,0},
            {wheel_1_2_destruct_unhide,0},
            {wheel_1_3_destruct_unhide,0},
            {wheel_1_4_destruct_unhide,0},
            {wheel_2_1_destruct_unhide,0},
            {wheel_2_2_destruct_unhide,0},
            {wheel_2_3_destruct_unhide,0},
            {wheel_2_4_destruct_unhide,0},
            {wheel_1_3_damage,0},
            {wheel_1_4_damage,0},
            {wheel_2_3_damage,0},
            {wheel_2_4_damage,0},
            {wheel_1_3_damper_damage_backanim,0},
            {wheel_1_4_damper_damage_backanim,0},
            {wheel_2_3_damper_damage_backanim,0},
            {wheel_2_4_damper_damage_backanim,0},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_2_2,0},
            {daylights,0},
            {reverse_light,1},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {wheel_1_1_damper,0},
            {wheel_2_1_damper,0},
            {wheel_1_2_damper,0},
            {wheel_2_2_damper,0},
            {drivingwheel,0},
            {indicatorspeed,0},
            {fuel,1},
            {steering_1_1,0},
            {steering_2_1,0},
            {hidegunner,0},
            {mainturret,0},
            {maingun,0},
            {zasleh_hide,0},
            {opticsfix,0},
            {wheel_1_1_damper_land_hack,0},
            {wheel_1_2_damper_land_hack,0},
            {wheel_2_1_damper_land_hack,0},
            {wheel_2_2_damper_land_hack,0},
            {magazine_reload_hide_1,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1,
            light_2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.598;
		verticalOffsetWorld = -0.132;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_LSV_02_AT_F.jpg";
	scope = public;
	scopeCurator = public;
    displayName = "Quimera (AT)";
    side = TEast;
    faction = revolucion_OPF_VZ_F;
    crew = Rev_O_VZ_Soldier_F;
    typicalCargo[] = {Rev_O_VZ_Soldier_F};
	textureList[] =
	{
		VZHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Soft_F_Revolucion\LSV_02\Data\CSAT_LSV_01_VZ_CO.paa",
        "\A3_Revolucion\Soft_F_Revolucion\LSV_02\Data\CSAT_LSV_02_VZ_CO.paa",
        "\A3_Revolucion\Soft_F_Revolucion\LSV_02\Data\CSAT_LSV_03_VZ_CO.paa"
		"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
		"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_ak12_Mag_F,12);
		mag_xx(200Rnd_556x45_Box_Red_F,2);
		mag_xx(HandGrenade_East,8);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellRed,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellYellow,4);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeYellow_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(RPG7_F,4);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
	};
};