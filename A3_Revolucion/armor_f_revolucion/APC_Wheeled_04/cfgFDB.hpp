class Rev_B_FDB_APC_Wheeled_04_export_F: Aegis_I_APC_Wheeled_04_export_F
{
    author = $STR_A3_A_AveryTheKitty_Lukin_Lakarak;
    displayName = $STR_A3_A_CfgVehicles_B_FRR_APC_Wheeled_04_export_F0;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_G_APC_Wheeled_04_export_F.jpg";
    scope = public;
    scopeCurator = public;
    sside = TWest;
    faction = Revolucion_BLU_BDF_F;
    crew = Rev_B_BDF_Crew_F;
    typicalCargo[] = {Rev_B_BDF_Crew_F};
    textureList[] = {BDF,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_revolucion\Armor_F_Revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_body_FDB_CO.paa",
        "\A3_revolucion\Armor_F_Revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_body2_FDB_CO.paa",
        "\A3_revolucion\Armor_F_Revolucion\APC_Wheeled_04\data\btr100a_turret_FDB_co.paa"
    };
    /* Inventory */
    class TransportMagazines
    {
        mag_xx(35Rnd_556x45_velko_lxWS,12);
        mag_xx(150rnd_762x51_box_yellow,3);
        mag_xx(HandGrenade,6);
        mag_xx(MiniGrenade,6);
        mag_xx(6Rnd_HE_Grenade_shell,2);
        mag_xx(6Rnd_Smoke_Grenade_shell,1);
        mag_xx(6Rnd_SmokeGreen_Grenade_shell,1);
        mag_xx(6Rnd_SmokeOrange_Grenade_shell,1);
        mag_xx(6Rnd_SmokeBlue_Grenade_shell,1);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellGreen,8);
        mag_xx(SmokeShellOrange,8);
        mag_xx(SmokeShellBlue,8);
        mag_xx(MRAWS_HEAT55_F,6);
        mag_xx(Titan_AA,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_Velko_lxWS,2);
    };
    class TransportBackpacks
    {
        bag_xx(B_AssaultPack_khk,2);
    };
    class TextureSources
    {
        class BDF
        {
            displayName = "FDB";
            author = $STR_A3_A_BranFlakes;
            textures[] =
            {
                "\A3_revolucion\Armor_F_Revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_body_FDB_CO.paa",
                "\A3_revolucion\Armor_F_Revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_body2_FDB_CO.paa",
                "\A3_revolucion\Armor_F_Revolucion\APC_Wheeled_04\data\btr100a_turret_FDB_co.paa"
            };
        };
    };
};