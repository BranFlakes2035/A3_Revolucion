class Rev_B_BDF_Offroad_01_F: I_E_Offroad_01_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Offroad_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Revolucion_BLU_BDF_F;
	crew = Rev_B_BDF_Soldier_F;
	typicalCargo[] = {Rev_B_BDF_Soldier_F};
	textureList[] = {BDF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa",
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa"
	};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(35Rnd_556x45_velko_lxWS,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Velko_lxWS,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class Rev_B_BDF_Offroad_01_armed_F: Offroad_01_armed_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Offroad_01_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Revolucion_BLU_BDF_F;
	crew = Rev_B_BDF_Soldier_F;
	typicalCargo[] = {Rev_B_BDF_Soldier_F};
	textureList[] = {BDF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa",
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa"
	};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(35Rnd_556x45_velko_lxWS,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Velko_lxWS,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class Rev_B_BDF_Offroad_01_covered_F: Offroad_01_military_covered_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Offroad_01_covered_F.jpg";
	scope = public;
	scopeCurator = public;
	accuracy = 1.25;
	side = TWest;
	faction = Revolucion_BLU_BDF_F;
	crew = Rev_B_BDF_Soldier_F;
	typicalCargo[] = {Rev_B_BDF_Soldier_F};
	animationList[] =
	{
		HideRoofRack,1,
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
	};
	textureList[] = {BDF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa",
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa",
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_cover_BDF_CO.paa"
	};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(35Rnd_556x45_velko_lxWS,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Velko_lxWS,2);
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
class Rev_B_BDF_Offroad_01_comms_F: Offroad_01_military_comms_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_BDF_Offroad_01_comms_F.jpg";
	scope = public;
	scopeCurator = public;
	accuracy = 1.25;
	side = TWest;
	faction = Revolucion_BLU_BDF_F;
	crew = Rev_B_BDF_Soldier_F;
	typicalCargo[] = {Rev_B_BDF_Soldier_F};
    textureList[] = {BDF,1};
	animationList[] =
	{
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa",
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa",
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_cover_BDF_CO.paa"
	};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(35Rnd_556x45_velko_lxWS,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Velko_lxWS,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};