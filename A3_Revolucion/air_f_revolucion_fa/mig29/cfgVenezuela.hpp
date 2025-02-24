class FA_Mig29_CSAT;
class rev_FA_Mig29_VZ_F: FA_Mig29_CSAT
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_O_VZ_Plane_CAS_02_dynamicLoadout_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
    displayName = "MiG-35 Halcón";
	faction = Revolucion_OPF_VZ_F;
	crew = Rev_O_VZ_Fighter_Pilot_F;
	textureList[] =
	{
		VZHex,1
	};
	hiddenselectionstextures[]          = 
    {
        "\A3_Revolucion\air_f_revolucion_fa\mig29\data\mig29_vz_co.paa",
        "FA_Mig29\data\textures\cockpit_co.paa"
    };
};