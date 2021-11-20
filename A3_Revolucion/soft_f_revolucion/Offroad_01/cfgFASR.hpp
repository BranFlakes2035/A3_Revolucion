/* FASR */
class Rev_O_FASR_Offroad_01_F: Offroad_01_military_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Offroad_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Revolucion_OPF_FASR_F;
	crew = Rev_O_FASR_Soldier_F;
	typicalCargo[] = {Rev_O_FASR_Soldier_F};
	textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
	{
		"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
        "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa"
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
class Rev_O_FASR_Offroad_01_armed_F: Offroad_01_armed_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Offroad_armed_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Revolucion_OPF_FASR_F;
	crew = Rev_O_FASR_Soldier_F;
	typicalCargo[] = {Rev_O_FASR_Soldier_F};
	textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
	{
		"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
        "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa"
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
class Rev_O_FASR_Offroad_01_AT_F: Offroad_01_AT_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Offroad_AT_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Revolucion_OPF_FASR_F;
	crew = Rev_O_FASR_Soldier_F;
	typicalCargo[] = {Rev_O_FASR_Soldier_F};
	textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
	{
		"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
        "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa"
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
class Rev_O_FASR_Offroad_01_covered_F: Offroad_01_military_covered_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Offroad_covered_01_F.jpg";
	scope = public;
	scopeCurator = public;
	accuracy = 1.25;
	side = TEast;
	faction = Revolucion_OPF_FASR_F;
	crew = Rev_O_FASR_Soldier_F;
	typicalCargo[] = {Rev_O_FASR_Soldier_F};
	animationList[] =
	{
		HideRoofRack,1,
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
	};
	textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
	{
		"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
        "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
		"a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_grn_co.paa"
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

	/* Scripts */
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};
};
class Rev_O_FASR_Offroad_01_comms_F: Offroad_01_military_comms_base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_FASR_Offroad_comms_01_F.jpg";
	scope = public;
	scopeCurator = public;
	accuracy = 1.25;
	side = TEast;
	faction = Revolucion_OPF_FASR_F;
	crew = Rev_O_FASR_Soldier_F;
	typicalCargo[] = {Rev_O_FASR_Soldier_F};
    textureList[] = {Green,1};
	animationList[] =
	{
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
	};
	hiddenSelectionsTextures[] =
	{
		"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
        "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
		"a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_grn_co.paa"
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