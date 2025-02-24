class Rev_I_CDB_Soldier_base_F;
class Rev_I_CDB_Soldier_Para_PSRL_F: Rev_I_CDB_Soldier_base_F
{
	author = $STR_A3_A_Ravenholme;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_AT_s};
			speechPlural[] = {veh_infantry_AT_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_AT_s;
	textPlural = $STR_A3_nameSound_veh_infantry_AT_p;
	nameSound = veh_infantry_AT_s;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_I_CDB_Soldier_Para_AT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_LXRF_B_soldier_Launcher;
	role = MissileSpecialist;
	icon = iconManAT;
	cost = 130000;
	threat[] =
    {
        0.8,    // Soft
        0.8,    // Armor
        0.3     // Air
    };
	secondaryAmmoCoef = 0.5;
	uniformClass = Rev_U_I_CDB_CombatUniform_shortsleeve_F;
	backpack = B_DuffleBag_Black_NoLogo_cartel_PSRL_RF;
    weapons[] =
	{
		Rev_arifle_AK103_ACO_AK_FL_F,
		launch_PSRL1_black_RF,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Rev_arifle_AK103_ACO_AK_FL_F,
		launch_PSRL1_black_RF,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_5(30Rnd_762x39_AK12_Mag_F),
		PSRL1_AT_RF
	};
	respawnMagazines[] =
	{
		mag_5(30Rnd_762x39_AK12_Mag_F),
		PSRL1_AT_RF
	};
	linkedItems[] =
	{
		Rev_V_PlateCarrier2_alt_Cartel,
		lxWS_H_bmask_yellow,
		G_Balaclava_blk_lxWS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Rev_V_PlateCarrier2_alt_Cartel,
		lxWS_H_bmask_yellow,
		G_Balaclava_blk_lxWS,
		DefaultManLinkedItems
	};
	allowedHeadgear[] = 
	{
		lxWS_H_bmask_base,
		lxWS_H_bmask_yellow,
		lxWS_H_bmask_white
	};
    headgearList[] = 
	{
		lxWS_H_bmask_base,
		lxWS_H_bmask_yellow,
		lxWS_H_bmask_white
	};
};