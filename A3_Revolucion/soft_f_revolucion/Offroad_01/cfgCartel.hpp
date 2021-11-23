/*Cartel*/
class Rev_I_CDB_Offroad_01_F: Offroad_01_military_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Offroad_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerilla;
	faction = Revolucion_IND_CDB_F;
	crew = Rev_I_CDB_Soldier_Para_F;
	typicalCargo[] = {Rev_I_CDB_Soldier_Para_F};
	textureList[] = {Cartel,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa"
	};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_NCAR15_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class Rev_I_CDB_Offroad_01_armed_F: Offroad_01_armed_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Offroad_armed_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Revolucion_IND_CDB_F;
	crew = Rev_I_CDB_Soldier_Para_F;
	typicalCargo[] = {Rev_I_CDB_Soldier_Para_F};
	textureList[] = {Cartel,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa"
	};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_NCAR15_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class Rev_I_CDB_Offroad_01_AT_F: Offroad_01_AT_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Offroad_AT_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Revolucion_IND_CDB_F;
	crew = Rev_I_CDB_Soldier_Para_F;
	typicalCargo[] = {Rev_I_CDB_Soldier_Para_F};
	textureList[] = {Cartel,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa"
	};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_NCAR15_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};