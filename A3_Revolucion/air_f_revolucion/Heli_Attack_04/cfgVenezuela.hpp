/* Venezuelan CSAT */
class Rev_O_VZ_Heli_Attack_04_F: Aegis_Heli_Attack_04_base_F
{
	author = $STR_A3_A_Grave;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Heli_Attack_04_F.jpg";
	displayName = "Mi-35 Orinoco";
	scope = public;
	scopeCurator = public;
	scopeArsenal = 0;
	forceInGarage = 0;
    side = TEast;
	faction = Revolucion_OPF_VZ_F;
	crew = Rev_O_VZ_Helipilot_F;
	typicalCargo[] = {Rev_O_VZ_Helipilot_F};
	textureList[] =
	{
		Black,0,
		GreenHex,0,
		VZHex,1
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[]=
			{
				"Aegis_150Rnd_Autocannon_Heli_Attack_04_HE_Green_F",
				"Aegis_150Rnd_Autocannon_Heli_Attack_04_AP_Green_F",
				"Laserbatteries"
			};
		};
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Revolucion\air_f_revolucion\Heli_Attack_04\Data\Heli_Attack_04_ext_01_VZ_CO.paa",
		"\A3_Revolucion\air_f_revolucion\Heli_Attack_04\Data\Heli_Attack_04_ext_02_VZ_CO.paa",
		"\A3_Revolucion\air_f_revolucion\Heli_Attack_04\Data\Heli_Attack_04_ext_03_VZ_CO.paa"
	};	
    /* Inventory */
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
};