class rev_B_B_Offroad_01_F: I_G_Offroad_01_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_M_Offroad_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Revolucion_BLU_BDF_F;
	crew = Rev_B_BDF_Soldier_F;
	typicalCargo[] = {Rev_B_BDF_Soldier_F};
	textureList[] = {BDF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa",
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa"
	};
};
class rev_B_B_Offroad_01_armed_F: I_G_Offroad_01_armed_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_M_Offroad_01_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Revolucion_BLU_BDF_F;
	crew = Rev_B_BDF_Soldier_F;
	typicalCargo[] = {Rev_B_BDF_Soldier_F};
	textureList[] = {BDF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa",
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa"
	};
	class AnimationSources: AnimationSources
	{
		class Hide_Shield: Hide_Shield
		{
			initPhase = false;
		};
		class Hide_Rail: Hide_Rail
		{
			initPhase = false;
		};
	};
};
class rev_B_B_Offroad_01_covered_F: Offroad_01_military_covered_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_M_Offroad_01_covered_F.jpg";
	scope = public;
	scopeCurator = public;
	accuracy = 1.25;
	side = TWest;
	faction = Revolucion_BLU_BDF_F;
	crew = Rev_B_BDF_Soldier_F;
	typicalCargo[] = {Rev_B_BDF_Soldier_F};
	animationList[] =
	{
		HideRoofRack,1,
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
	};
	textureList[] = {BDF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa",
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_ext_BDF_CO.paa",
		"\A3_revolucion\Soft_F_revolucion\Offroad_01\Data\Offroad_01_cover_BDF_CO.paa"
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};
};