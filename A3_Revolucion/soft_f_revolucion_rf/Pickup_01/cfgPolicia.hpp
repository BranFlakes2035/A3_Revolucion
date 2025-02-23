class B_GEN_Pickup_covered_rf;
class Rev_B_PNB_Pickup_F: B_GEN_Pickup_covered_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Revolucion\editorpreviews_f_revolucion\Data\CfgVehicles\Rev_B_PNB_Pickup_F.jpg";
	weapons[] = {PoliceHorn};
	faction = "Revolucion_BLU_PNB_F";
	crew = "Rev_B_PNB_Soldier_F";
	typicalCargo[] = {"Rev_B_PNB_Soldier_F"};
	textureList[] = {"Policia_01",1};
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
class Rev_O_PNB_Pickup_F: B_GEN_Pickup_covered_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TEast;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Revolucion\editorpreviews_f_revolucion\Data\CfgVehicles\Rev_B_PNB_Pickup_F.jpg";
	weapons[] = {PoliceHorn};
	faction = "Revolucion_OPF_PNB_F";
	crew = "Rev_B_PNB_Soldier_F";
	typicalCargo[] = {"Rev_B_PNB_Soldier_F"};
	textureList[] = {"Policia_01",1};
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