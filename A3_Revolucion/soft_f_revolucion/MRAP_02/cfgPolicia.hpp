/* BLUFOR */
class rev_P_B_MRAP_02_F: O_MRAP_02_F
{
    author = $STR_A3_A_BranFlakes;
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_MRAP_02_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = "Tortuga";
    side = TWest;
    faction =  Revolucion_BLU_PNB_F;
    crew = Rev_B_PNB_Soldier_F;
    typicalCargo[] =
    {
        Rev_B_PNB_Soldier_F,
        Rev_B_PNB_Soldier_F
    };
	textureList[] =
    {
        Policia,1,
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Revolucion\Soft_F_Revolucion\MRAP_02\Data\MRAP_02_ext_01_Policia_CO.paa",
        "\A3_Revolucion\Soft_F_Revolucion\MRAP_02\Data\MRAP_02_ext_02_Policia_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa"
    };

    /* Inventory */
    class TransportWeapons
    {
        weap_xx(arifle_Velko_lxWS,2);
    };
    class TransportMagazines
    {
        mag_xx(35Rnd_556x45_velko_lxWS,16);
        mag_xx(HandGrenade_East,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellRed,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellYellow,4);
        mag_xx(17Rnd_9x21_Mag,12);
    };
};
/* OPFOR */
/* Russia */
class rev_P_O_MRAP_02_F: O_MRAP_02_F
{
    author = $STR_A3_A_BranFlakes;
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_MRAP_02_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = "Tortuga";
    side = TEast;
    faction =  Revolucion_OPF_PNB_F;
    crew = Rev_O_PNB_Soldier_F;
    typicalCargo[] =
    {
        Rev_O_PNB_Soldier_F,
        Rev_O_PNB_Soldier_F
    };
    textureList[] =
    {
        Policia,1,
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Revolucion\Soft_F_Revolucion\MRAP_02\Data\MRAP_02_ext_01_Policia_CO.paa",
        "\A3_Revolucion\Soft_F_Revolucion\MRAP_02\Data\MRAP_02_ext_02_Policia_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa"
    };

    /* Inventory */
    class TransportWeapons
    {
        weap_xx(arifle_Velko_lxWS,2);
    };
    class TransportMagazines
    {
        mag_xx(35Rnd_556x45_velko_lxWS,16);
        mag_xx(HandGrenade_East,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellRed,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellYellow,4);
        mag_xx(17Rnd_9x21_Mag,12);
    };
};