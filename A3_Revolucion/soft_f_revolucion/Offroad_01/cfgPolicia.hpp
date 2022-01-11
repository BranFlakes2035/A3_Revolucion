class Rev_B_PNB_Offroad_01_policia_F: Offroad_01_civil_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_Offroad_01_police_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_Offroad_Base0;
	weapons[] = {PoliceHorn};
	icon = "\A3\Soft_F_Exp\Offroad_01\Data\UI\Map_Offroad_01_gen_CA.paa";
	picture = "\A3\Soft_F_Exp\Offroad_01\Data\UI\Offroad_01_gen_CA.paa";
	side = TWest;
	faction = Revolucion_BLU_PNB_F;
	crew = Rev_B_PNB_Soldier_F;
	typicalCargo[] = {Rev_B_PNB_Soldier_F};
	textureList[] = {Policia,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\Offroad_01_ext_policia_CO.paa",
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\Offroad_01_ext_policia_CO.paa"
	};
	animationList[] =
	{
		HidePolice,0,
		HideBumper1,0,
		HideBumper2,0,
		HideConstruction,0,
		HideDoor3,0.33,
		HideBackpacks,1
	};
};
class Rev_B_PNB_Offroad_01_covered_F: Offroad_01_military_covered_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_Offroad_01_covered_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Revolucion_BLU_PNB_F;
	crew = Rev_B_PNB_Soldier_F;
	typicalCargo[] = {Rev_B_PNB_Soldier_F};
	weapons[] = {PoliceHorn};
	textureList[] = {Policia,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\Offroad_01_ext_policia_CO.paa",
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\Offroad_01_ext_policia_CO.paa",
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\offroad_01_cover_Policia_CO.paa"
	};
	animationList[] =
    {
        hidePolice,0,
        HideRoofRack,1,
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
    };
};
class Rev_B_PNB_Offroad_01_comms_F: Offroad_01_military_comms_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_Offroad_01_comms_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Revolucion_BLU_PNB_F;
	crew = Rev_B_PNB_Soldier_F;
	typicalCargo[] = {Rev_B_PNB_Soldier_F};
	weapons[] = {PoliceHorn};
	textureList[] = {Policia,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\Offroad_01_ext_policia_CO.paa",
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\Offroad_01_ext_policia_CO.paa",
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\offroad_01_cover_Policia_CO.paa"
	};
	animationList[] =
    {
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
    };
};

/* OPFOR */
class Rev_O_PNB_Offroad_01_policia_F: Offroad_01_civil_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_Offroad_01_police_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_Offroad_Base0;
	weapons[] = {PoliceHorn};
	icon = "\A3\Soft_F_Exp\Offroad_01\Data\UI\Map_Offroad_01_gen_CA.paa";
	picture = "\A3\Soft_F_Exp\Offroad_01\Data\UI\Offroad_01_gen_CA.paa";
	side = TEast;
	faction = Revolucion_OPF_PNB_F;
	crew = Rev_O_PNB_Soldier_F;
	typicalCargo[] = {Rev_O_PNB_Soldier_F};
	textureList[] = {Policia,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\Offroad_01_ext_policia_CO.paa",
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\Offroad_01_ext_policia_CO.paa"
	};
	animationList[] =
	{
		HidePolice,0,
		HideBumper1,0,
		HideBumper2,0,
		HideConstruction,0,
		HideDoor3,0.33,
		HideBackpacks,1
	};
};
class Rev_O_PNB_Offroad_01_covered_F: Offroad_01_military_covered_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_Offroad_01_covered_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Revolucion_OPF_PNB_F;
	crew = Rev_O_PNB_Soldier_F;
	typicalCargo[] = {Rev_O_PNB_Soldier_F};
	weapons[] = {PoliceHorn};
	textureList[] = {Policia,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\Offroad_01_ext_policia_CO.paa",
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\Offroad_01_ext_policia_CO.paa",
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\offroad_01_cover_Policia_CO.paa"
	};
	animationList[] =
    {
        hidePolice,0,
        HideRoofRack,1,
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
    };
};
class Rev_O_PNB_Offroad_01_comms_F: Offroad_01_military_comms_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_Offroad_01_comms_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Revolucion_OPF_PNB_F;
	crew = Rev_O_PNB_Soldier_F;
	typicalCargo[] = {Rev_O_PNB_Soldier_F};
	weapons[] = {PoliceHorn};
	textureList[] = {Policia,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\Offroad_01_ext_policia_CO.paa",
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\Offroad_01_ext_policia_CO.paa",
		"\A3_Revolucion\Soft_F_Revolucion\Offroad_01\Data\offroad_01_cover_Policia_CO.paa"
	};
	animationList[] =
    {
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
    };
};