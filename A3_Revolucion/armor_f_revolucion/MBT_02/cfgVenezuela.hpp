class Rev_O_VZ_MBT_02_cannon_ghex_F: O_MBT_02_cannon_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_MBT_02_cannon_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
    displayName = "T-100 Tejón";
	side = TEast;
	faction = Revolucion_OPF_VZ_F;
	crew = REV_O_VZ_Crew_F;
	typicalCargo[] =
	{
		REV_O_VZ_Crew_F,
		REV_O_VZ_Crew_F,
		REV_O_VZ_Crew_F
	};
	textureList[] = {VZHex,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Armor_F_Revolucion\MBT_02\Data\rev_MBT_02_body_VZ_CO.paa",
		"\A3_Revolucion\Armor_F_Revolucion\MBT_02\Data\rev_MBT_02_turret_VZ_CO.paa",
		"\A3_Revolucion\Armor_F_Revolucion\MBT_02\Data\rev_MBT_02_VZ_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_762x39_ak12_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12U_F,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_owcamo,2);
	};
};