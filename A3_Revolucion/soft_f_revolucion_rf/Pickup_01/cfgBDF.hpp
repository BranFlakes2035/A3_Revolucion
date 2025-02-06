class Rev_B_BDF_Pickup_F: B_Pickup_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	//editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_T_Pickup_rf.jpg";
	faction = "Revolucion_BLU_BDF_F";
	crew = "Rev_B_BDF_Soldier_F";
	typicalCargo[] = {"Rev_B_BDF_Soldier_F"};
	textureList[] = {"BDF_01",1};
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
class Rev_B_BDF_Pickup_Comms_F: B_Pickup_Comms_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	//editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_T_Pickup_rf.jpg";
	faction = "Revolucion_BLU_BDF_F";
	crew = "Rev_B_BDF_Soldier_F";
	typicalCargo[] = {"Rev_B_BDF_Soldier_F"};
	textureList[] = {"BDF_01",1};
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
class Rev_B_BDF_Pickup_Comms_mmg_F: B_Pickup_mmg_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	//editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_T_Pickup_rf.jpg";
	faction = "Revolucion_BLU_BDF_F";
	crew = "Rev_B_BDF_Soldier_F";
	typicalCargo[] = {"Rev_B_BDF_Soldier_F"};
	textureList[] = {"BDF_01",1};
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
class Rev_B_BDF_Pickup_Comms_aat_F: B_Pickup_aat_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	//editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_T_Pickup_rf.jpg";
	faction = "Revolucion_BLU_BDF_F";
	crew = "Rev_B_BDF_Soldier_F";
	typicalCargo[] = {"Rev_B_BDF_Soldier_F"};
	textureList[] = {"BDF_01",1};
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
class O_Pickup_rcws_rf: Pickup_01_rcws_base_rf
{
	class Turrets: Turrets
	{
		class MainTurret;
	};
};
class Rev_B_BDF_Pickup_rcws_F: O_Pickup_rcws_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	//editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_T_Pickup_rf.jpg";
	faction = "Revolucion_BLU_BDF_F";
	crew = "Rev_B_BDF_Soldier_F";
	typicalCargo[] = {"Rev_B_BDF_Soldier_F"};
	textureList[] = {"BDF_RCWS",1};
	hiddenSelectionsTextures[] = 
	{
		"\A3_revolucion\Soft_F_revolucion_RF\pickup_01\Data\rev_pickup_01_ext_fdb_co.paa",
		"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_nato_pacific_co.paa",
		"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
		"lxrf\vehicles_rf\pickup_01\Data\RCWS\rcws_black_co.paa",
		"\A3_revolucion\Soft_F_revolucion_RF\pickup_01\Data\rev_pickup_01_service_fdb_co.paa"
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {"1000Rnd_65x39_Belt_Tracer_Red", "1000Rnd_65x39_Belt_Tracer_Red", "1000Rnd_65x39_Belt_Tracer_Red", "1000Rnd_65x39_Belt_Tracer_Red", "SmokeLauncherMag"};
		};
	};
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