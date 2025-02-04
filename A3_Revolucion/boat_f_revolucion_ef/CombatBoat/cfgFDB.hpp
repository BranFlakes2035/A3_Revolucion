class EF_B_CombatBoat_HMG_MJTF_Des;
class Rev_B_CombatBoat_HMG_FDB: EF_CombatBoat_HMG_West_Base
{
    author = "Tiny Gecko Studios";
    DLC = "ef";
    //editorPreview = "\ef\ef_data\editorpreviews\cfgvehicles\EF_B_CombatBoat_HMG_MJTF_Des.jpg";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction = "Revolucion_BLU_BDF_F";
    crew = "Rev_B_BDF_Marine_F";
    typicalCargo[] = {"Rev_B_BDF_Marine_F"};
    textureList[] = {"fdb", 1};
    hiddenSelectionsTextures[] = 
    {
        "\A3_Revolucion\boat_f_revolucion_ef\CombatBoat\data\combatboat_hull_1_fdb_co.paa",
        "\A3_Revolucion\boat_f_revolucion_ef\CombatBoat\data\combatboat_hull_2_fdb_co.paa",
        "ef\ef_combatboat_t\data\combatboat_hull_3_MJTF_co.paa",
        "\A3_Revolucion\boat_f_revolucion_ef\CombatBoat\data\combatboat_armor_1_fdb_co.paa",
        "\A3_Revolucion\boat_f_revolucion_ef\CombatBoat\data\combatboat_hmg_1_fdb_co.paa",
        "\A3_Revolucion\boat_f_revolucion_ef\CombatBoat\data\combatboat_atgm_1_fdb_co.paa",
        "#(rgb,1024,1024,1)ui(EF_GPSScreen,EF_GPSScreen)"
    };
    class TransportMagazines
    {
        mag_xx(35Rnd_556x45_velko_lxWS,24);
        mag_xx(Atlas_150rnd_762x51_box_yellow,12);
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
        mag_xx(MRAWS_HEAT55_F,5);
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
};