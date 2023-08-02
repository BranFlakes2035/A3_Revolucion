/* BDF */
class Rev_B_BDF_Heli_Light_01_F: I_Heli_Light_01_F
{
	side = TWest;
	faction = Revolucion_BLU_BDF_F;
	crew = Rev_B_BDF_Helipilot_F;
	typicalCargo[] = {Rev_B_BDF_Helipilot_F};
	editorPreview = "\A3_revolucion\EditorPreviews_F_revolucion\Data\CfgVehicles\Rev_B_BDF_Heli_Light_01_F.jpg";
    textureList[]=
	{
		FDB,1,
	};
	hiddenSelectionsTextures[]={"A3_Revolucion\Air_F_Revolucion\Heli_Light_01\Data\Heli_Light_01_ext_FDB_CO.paa"};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(35Rnd_556x45_velko_lxWS,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Velko_lxWS,2);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(ItemGPS,1);
		item_xx(FirstAidKit,4);
	};
	class TransportBackpacks
	{
		bag_xx(B_Parachute,4);
	};
};
class Rev_B_BDF_Heli_Light_01_dynamicLoadout_F: I_Heli_Light_01_dynamicLoadout_F
{
    side = TWest;
	faction = Revolucion_BLU_BDF_F;
	crew = Rev_B_BDF_Helipilot_F;
	typicalCargo[] = {Rev_B_BDF_Helipilot_F};
	editorPreview = "\A3_revolucion\EditorPreviews_F_revolucion\Data\CfgVehicles\Rev_B_BDF_Heli_Light_01_dynamicLoadout_F.jpg";
    textureList[]=
	{
		FDB,1,
	};
	hiddenSelectionsTextures[]={"A3_Revolucion\Air_F_Revolucion\Heli_Light_01\Data\Heli_Light_01_ext_FDB_CO.paa"};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(35Rnd_556x45_velko_lxWS,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Velko_lxWS,2);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(ItemGPS,1);
		item_xx(FirstAidKit,4);
	};
};
