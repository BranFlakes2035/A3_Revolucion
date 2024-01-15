class Rev_O_VZ_APC_Wheeled_04_cannon_F: O_R_APC_Wheeled_04_cannon_F
{
    author = $STR_A3_A_AveryTheKitty_and_Lakarak;
	editorPreview = "\A3_revolucion\EditorPreviews_F_revolucion\Data\CfgVehicles\Rev_O_VZ_APC_Wheeled_04_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
    displayName = "BTR-100 Cazador";
	side = TEast;
	faction = Revolucion_OPF_VZ_F;
	crew = REV_O_VZ_Crew_F;
	typicalCargo[] = {REV_O_VZ_Crew_F};
    textureList[] = {VZHex,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_revolucion\Armor_F_revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_body_VZ_CO.paa",
        "\A3_revolucion\Armor_F_revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_body2_VZ_CO.paa",
        "\A3_revolucion\Armor_F_revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_tow_VZ_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
    };
     /* Inventory */
    class TransportWeapons
    {
        weap_xx(arifle_AK12_F,2);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_762x39_ak12_Mag_F,10);
        mag_xx(200Rnd_556x45_Box_Red_F,4);
        mag_xx(HandGrenade_East,8);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellRed,8);
        mag_xx(SmokeShellOrange,8);
        mag_xx(SmokeShellYellow,8);
        mag_xx(RPG7_F,8);
        mag_xx(Titan_AT,2);
        mag_xx(Titan_AP,2);
        mag_xx(Titan_AA,2);
    };
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_owcamo,2);
    };
};
