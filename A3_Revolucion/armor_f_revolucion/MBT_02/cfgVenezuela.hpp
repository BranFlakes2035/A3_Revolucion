class O_MBT_02_cannon_F;
class Rev_O_VZ_MBT_02_cannon_ghex_F: O_MBT_02_cannon_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_MBT_02_cannon_ghex_F.jpg";
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
	textureList[] = {GreenHex,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa",
		"\A3\Armor_F_Exp\MBT_02\Data\MBT_02_turret_ghex_CO.paa",
		"\A3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa",
		"\A3\Armor_F\Data\camonet_CSAT_Hex_Green_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_580x42_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_NCAR15B_F,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_owcamo,2);
	};
};