/* FRR BLUFOR */
class Rev_B_FRR_ZU23_lxWS_F: zu23_base_lxWS
{
	author = $STR_A3_A_Ravenholme;
    //editorPreview = "\A3_Revolucion\editorpreviews_f_Revolucion\Data\CfgVehicles\Rev_B_FRR_ZU23_lxWS_F.jpg";
    DLC = lxWS;
	scope = public;
	scopeCurator = public;
    side = TWest;
	faction = Revolucion_BLU_FRR_F;
    crew = Rev_B_FRR_Soldier_F;
    typicalCargo[] = {Rev_B_FRR_Soldier_F};
    hiddenSelectionsTextures[] = 
    {
        "lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
        "lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
        "lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
        "lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa"
    };
};

/* FRR INDEP */
class Rev_I_FRR_ZU23_lxWS_F: Rev_B_FRR_ZU23_lxWS_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\editorpreviews_f_Revolucion\Data\CfgVehicles\Rev_B_FRR_ZU23_lxWS_F.jpg";
    DLC = lxWS;
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Revolucion_IND_FRR_F;
	crew = Rev_I_FRR_Soldier_F;
    typicalCargo[] = {Rev_I_FRR_Soldier_F};
};

/* FRR OPFOR */
class Rev_O_FRR_ZU23_lxWS_F: Rev_B_FRR_ZU23_lxWS_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Revolucion\editorpreviews_f_Revolucion\Data\CfgVehicles\Rev_B_FRR_ZU23_lxWS_F.jpg";
    DLC = lxWS;
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Revolucion_OPF_FRR_F;
	crew = Rev_O_FRR_Soldier_F;
    typicalCargo[] = {Rev_O_FRR_Soldier_F};
};