/* Baracan Defence Force */
class Rev_B_BDF_Quadbike_01_F: B_Quadbike_01_F
{
    author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Quadbike_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Revolucion_BLU_BDF_F;
	crew = Rev_B_BDF_Soldier_F;
	typicalCargo[] = {Rev_B_BDF_Soldier_F};
    textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_wheel_RUkhk_CO.paa"
	};
};