/* FRR - BLUFOR */
class Rev_B_FRR_APC_Wheeled_04_cannon_F: O_R_APC_Wheeled_04_cannon_F
{
    author = $STR_A3_A_AveryTheKitty_and_Lakarak;
	//editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_FRR_APC_Wheeled_04_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
    forceInGarage = false;
	side = TWest;
	faction = Revolucion_BLU_FRR_F;
	crew = Rev_B_FRR_Crew_F;
	typicalCargo[] = {Rev_B_FRR_Crew_F};
    textureList[] = {Guerrila_FRR,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_revolucion\Armor_F_revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_body_FRR_CO.paa",
        "\A3_revolucion\Armor_F_revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_body2_FRR_CO.paa",
        "\A3_revolucion\Armor_F_revolucion\APC_Wheeled_04\Data\APC_Wheeled_04_tow_FRR_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
    };
    /* Inventory */
    class TransportWeapons
    {
         weap_xx(arifle_SPAR_01_blk_F,2);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_556x45_Stanag,10);
        mag_xx(200Rnd_556x45_Box_F,6);
        mag_xx(HandGrenade,6);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellBlue,8);
        mag_xx(SmokeShellGreen,8);
        mag_xx(SmokeShellOrange,8);
        mag_xx(MRAWS_HEAT55_F,8);
    };
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_green_F,2);
    };
};

/* FRR - INDEP */
class Rev_I_FRR_APC_Wheeled_04_cannon_F: Rev_B_FRR_APC_Wheeled_04_cannon_F
{
    side = TGuerrila;
	faction = Revolucion_IND_FRR_F;
	crew = Rev_I_FRR_Crew_F;
	typicalCargo[] = {Rev_I_FRR_Crew_F};
};

/* FRR - OPFOR */
class Rev_O_FRR_APC_Wheeled_04_cannon_F: Rev_B_FRR_APC_Wheeled_04_cannon_F
{
    side = TEast;
	faction = Revolucion_OPF_FRR_F;
	crew = Rev_O_FRR_Crew_F;
	typicalCargo[] = {Rev_O_FRR_Crew_F};
};