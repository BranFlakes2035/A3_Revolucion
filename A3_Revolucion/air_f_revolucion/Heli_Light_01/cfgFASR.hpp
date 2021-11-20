/* FASR */
class Rev_O_FASR_Heli_Light_01_F: I_Heli_Light_01_F
{
	side = TEast;
	faction = Revolucion_OPF_FASR_F;
	crew = Rev_O_FASR_Helipilot_F;
	typicalCargo[] = {Rev_O_FASR_Helipilot_F};
    textureList[]=
	{
		Blu,1,
	};
	hiddenSelectionsTextures[]={"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_BLUFOR_co.paa"};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_NCAR15B_F,2);
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
class Rev_O_FASR_Heli_Light_01_dynamicLoadout_F: I_Heli_Light_01_dynamicLoadout_F
{
    side = TEast;
	faction = Revolucion_OPF_FASR_F;
	crew = Rev_O_FASR_Helipilot_F;
	typicalCargo[] = {Rev_O_FASR_Helipilot_F};
    textureList[]=
	{
		Blu,1,
	};
	hiddenSelectionsTextures[]={"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_BLUFOR_co.paa"};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_NCAR15B_F,2);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(ItemGPS,1);
		item_xx(FirstAidKit,4);
	};
};
