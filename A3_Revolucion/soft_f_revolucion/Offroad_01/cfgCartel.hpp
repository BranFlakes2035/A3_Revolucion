/*Cartel*/
class Rev_I_CDB_Offroad_01_F: Offroad_01_military_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Offroad_01_F.jpg";
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
		mag_xx(30Rnd_762x39_AK12_Mag_F,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class Rev_I_CDB_Offroad_01_armed_F: Offroad_01_armed_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Offroad_01_armed_F.jpg";
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
		mag_xx(30Rnd_762x39_AK12_Mag_F,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class Rev_I_CDB_Offroad_01_AT_F: Offroad_01_AT_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Offroad_01_AT_F.jpg";
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
		mag_xx(30Rnd_762x39_AK12_Mag_F,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class Rev_I_CDB_Offroad_01_covered_F: Offroad_01_military_covered_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Offroad_01_covered_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Revolucion_IND_CDB_F;
	crew = Rev_I_CDB_Soldier_Para_F;
	typicalCargo[] = {Rev_I_CDB_Soldier_Para_F};
	animationList[] =
	{
		HideRoofRack,1,
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
	};
	textureList[] = {Cartel,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"
	};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_AK12_Mag_F,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
	/* Scripts */
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};
};
class Rev_I_CDB_Offroad_01_armor_base_F: Offroad_01_armor_base_lxWS
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Offroad_01_F.jpg";
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
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
    	"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_black_co.paa"
	};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_AK12_Mag_F,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class Rev_I_CDB_Offroad_01_armor_armed_F: Offroad_01_armor_armed_lxWS
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Offroad_01_armed_F.jpg";
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
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
    	"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_black_co.paa"
	};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_AK12_Mag_F,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class Rev_I_CDB_Offroad_01_armor_AT_F: Offroad_01_armor_AT_lxWS
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Offroad_01_AT_F.jpg";
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
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_Cartel_CO.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
    	"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_black_co.paa"
	};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_AK12_Mag_F,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};