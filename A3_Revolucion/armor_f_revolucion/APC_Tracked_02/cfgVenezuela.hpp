class O_T_APC_Tracked_02_30mm_lxWS;
class Rev_O_VZ_APC_Tracked_02_30mm_lxWS: O_T_APC_Tracked_02_30mm_lxWS
{
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_AR_APC_Tracked_02_30mm_lxWS.jpg";
    displayName = $STR_A3_A_CfgVehicles_O_R_APC_Tracked_02_30mm_lxWS0;
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Revolucion_OPF_VZ_F;
	crew = REV_O_VZ_Crew_F;
	typicalCargo[] = {REV_O_VZ_Crew_F};
	textureList[] = {VZHex,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_revolucion\Armor_F_revolucion\APC_Tracked_02\Data\APC_Tracked_02_ext_01_vhex_CO.paa",
		"\A3_revolucion\Armor_F_revolucion\APC_Tracked_02\Data\APC_Tracked_02_ext_02_vhex_CO.paa",
        "\A3_revolucion\Armor_F_revolucion\APC_Tracked_02\Data\apc_tracked_02_ext_03_vhex_co.paa",
        "\A3_revolucion\Armor_F_revolucion\APC_Tracked_02\data\APC_Wheeled_04_tow_VZ_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
	};

    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
		weap_xx(launch_RPG7_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_ak12_Mag_F,12);
		mag_xx(200Rnd_556x45_Box_F,12);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokePurple_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellPurple,8);
		mag_xx(RPG7_F,8);
		mag_xx(Titan_AA,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_vhex_F,2);
	};
};