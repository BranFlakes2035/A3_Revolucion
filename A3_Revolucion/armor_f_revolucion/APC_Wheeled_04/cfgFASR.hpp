/* FASR */
class Rev_O_FASR_APC_Wheeled_04_export_F: APC_Wheeled_04_export_base_F
{
    author = $STR_A3_A_AveryTheKitty_Lukin_Lakarak;
    displayName = $STR_A3_A_CfgVehicles_B_FRR_APC_Wheeled_04_export_F0;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_Raven_APC_Wheeled_04_export_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Revolucion_OPF_FASR_F;
	crew = Rev_O_FASR_Crew_F;
	typicalCargo[] = {Rev_O_FASR_Crew_F};
    textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\APC_Wheeled_04_export_body_RUkhk_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_RUkhk_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_co.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,12);
		mag_xx(100Rnd_580x42_Mag_F,5);
		mag_xx(HandGrenade_Guer,12);
		mag_xx(1Rnd_HE_Grenade_shell,8);
		mag_xx(1Rnd_Smoke_Grenade_shell,6);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,6);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,6);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,6);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellRed,8);
		mag_xx(RPG32_F,4);
        mag_xx(RPG32_HE_F,2);
		mag_xx(Titan_AA,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_NCAR15_F,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_rgr,2);
	};

    #include "SimpleObject.hpp"
};