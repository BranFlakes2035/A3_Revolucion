class Rev_B_FDB_JH_UH1X_armed_F: jj_uh1h_doorgunner_base
{
	author = "JohnHansen";
    //editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FDB_JH_UH1X_armed_F.jpg";
	scope = Public;
	scopeCurator = Public;
    displayName = "UH-1X Super Huey (Armed)";
	side = TWest;
	faction = Revolucion_BLU_BDF_F;
	crew = Rev_B_BDF_Helipilot_F;
	typicalCargo[] = {Rev_B_BDF_Helipilot_F};
    textureList[] =
    {
        FDB,1
    };
    hiddenSelectionsTextures[] = 
    {
        "\A3_Revolucion\air_f_revolucion_jh\UH1X\data\uh1_ext_01_fdb_co.paa",
        "JH_UH1X\data\uh1_int_01_co.paa",
        "JH_UH1X\data\uh1_int_02_co.paa",
        "JH_UH1X\data\uh1_ext_02_co.paa",
        "JH_UH1X\data\uh1_int_03_co.paa",
        "JH_UH1X\data\uh1_int_04_co.paa",
        "\A3_Revolucion\air_f_revolucion_jh\UH1X\data\Nose_fdb_co.paa",
        "JH_UH1X\data\uh1_ext_03_ca.paa"
    };
    /* Turrets Inheritance - For Doorgunners*/
    class Turrets: Turrets
    {
        class uh1_LeftDoorGun: uh1_LeftDoorGun
        {
            gunnerType = Rev_B_BDF_HeliCrew_F;
        };
        class uh1_RightDoorGun: uh1_RightDoorGun
        {
            gunnerType = Rev_B_BDF_HeliCrew_F;
        };
        class uh1_CopilotTurret: uh1_CopilotTurret{};
        class uh1_CargoTurret_01: uh1_CargoTurret_01{};
        class uh1_CargoTurret_02: uh1_CargoTurret_02{};
        class uh1_CargoTurret_Right: uh1_CargoTurret_Right{};
        class uh1_CargoTurret_Left: uh1_CargoTurret_Left{};
    };
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(35Rnd_556x45_velko_lxWS,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Velko_lxWS,2);
	};
};

class Rev_B_FDB_JH_UH1X_unarmed_F: jj_uh1h_unarmed_base
{
    author = "JohnHansen";
   // editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FDB_JH_UH1X_unarmed_F.jpg";
    scope = Public;
    scopeCurator = Public;
    displayName = "UH-1X Super Huey";
    side = TWest;
    faction = Revolucion_BLU_BDF_F;
    crew = Rev_B_BDF_Helipilot_F;
    typicalCargo[] = {Rev_B_BDF_Helipilot_F};
    textureList[] =
    {
        FDB,1
    };
    hiddenSelectionsTextures[] = 
    {
        "\A3_Revolucion\air_f_revolucion_jh\UH1X\data\uh1_ext_01_fdb_co.paa",
        "JH_UH1X\data\uh1_int_01_co.paa",
        "JH_UH1X\data\uh1_int_02_co.paa",
        "JH_UH1X\data\uh1_ext_02_co.paa",
        "JH_UH1X\data\uh1_int_03_co.paa",
        "JH_UH1X\data\uh1_int_04_co.paa",
        "\A3_Revolucion\air_f_revolucion_jh\UH1X\data\Nose_fdb_co.paa",
        "JH_UH1X\data\uh1_ext_03_ca.paa"
    };
    class TransportMagazines
    {
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellRed,2);
        mag_xx(35Rnd_556x45_velko_lxWS,4);
    };
    class TransportWeapons
    {
        weap_xx(arifle_Velko_lxWS,2);
    };
};
class Rev_B_FDB_JH_UH1X_medical_F: jj_uh1h_unarmed_base
{
    author = "JohnHansen";
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Heli_Attack_02_dynamicLoadout_F.jpg";
    //editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Heli_Attack_02_dynamicLoadout_F.jpg";
    scope = Public;
    scopeCurator = Public;
    displayName = "UH-1X Super Huey (Medevac)";
    side = TWest;
    faction = Revolucion_BLU_BDF_F;
    crew = Rev_B_BDF_Helipilot_F;
    typicalCargo[] = {Rev_B_BDF_Helipilot_F};
    textureList[] =
    {
        FDB,1
    };
    hiddenSelectionsTextures[] = 
    {
        "\A3_Revolucion\air_f_revolucion_jh\UH1X\data\uh1_ext_01_fdb_co.paa",
        "JH_UH1X\data\uh1_int_01_co.paa",
        "JH_UH1X\data\uh1_int_02_co.paa",
        "JH_UH1X\data\uh1_ext_02_co.paa",
        "JH_UH1X\data\uh1_int_03_co.paa",
        "JH_UH1X\data\uh1_int_04_co.paa",
        "\A3_Revolucion\air_f_revolucion_jh\UH1X\data\Nose_fdb_co.paa",
        "JH_UH1X\data\uh1_ext_03_ca.paa"
    };
    class TransportMagazines
    {
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellRed,2);
        mag_xx(35Rnd_556x45_velko_lxWS,4);
    };
    class TransportWeapons
    {
        weap_xx(arifle_Velko_lxWS,2);
    };
};