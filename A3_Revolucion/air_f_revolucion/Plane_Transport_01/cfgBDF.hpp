/* BDF */
class Rev_B_BDF_Plane_Transport_01_infantry_F: Plane_Transport_01_infantry_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_revolucion\EditorPreviews_F_revolucion\Data\CfgVehicles\Rev_B_BDF_Plane_Transport_01_infantry_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Plane_Transport_01_infantry_base_F0;
	radarTargetSize = 1.8;
	side = TWest;
	faction = Revolucion_BLU_BDF_F;
	crew = Rev_B_BDF_Pilot_F;
	typicalCargo[] = {Rev_B_BDF_Pilot_F};
	textureList[] = {BDF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_revolucion\Air_F_revolucion\Plane_Transport_01\Data\Plane_Transport_01_body_BDF_CO.paa",
		"\A3_revolucion\Air_F_revolucion\Plane_Transport_01\Data\Plane_Transport_01_wings_BDF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa",
		"\A3_revolucion\Air_F_revolucion\Plane_Transport_01\Data\Plane_Transport_01_decal_BDF_CO.paa"
	};
};
class Rev_B_BDF_Plane_Transport_01_vehicle_F: Plane_Transport_01_vehicle_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_revolucion\EditorPreviews_F_revolucion\Data\CfgVehicles\Rev_B_BDF_Plane_Transport_01_infantry_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Plane_Transport_01_vehicle_base_F0;
	radarTargetSize = 2;
	side = TWest;
	faction = Revolucion_BLU_BDF_F;
	crew = Rev_B_BDF_Pilot_F;
	typicalCargo[] = {Rev_B_BDF_Pilot_F};
	textureList[] = {BDF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_revolucion\Air_F_revolucion\Plane_Transport_01\Data\Plane_Transport_01_body_BDF_CO.paa",
		"\A3_revolucion\Air_F_revolucion\Plane_Transport_01\Data\Plane_Transport_01_wings_BDF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa",
		"\A3_revolucion\Air_F_revolucion\Plane_Transport_01\Data\Plane_Transport_01_decal_BDF_CO.paa"
	};
};
