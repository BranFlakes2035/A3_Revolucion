class Rev_U_B_CTRG_Uniform_01_F: Uniform_Base
{
	author = $STR_A3_A_Branflakes;
	scope = public;
	displayName = "Operator Outfit (Red)";
	picture = "\A3_revolucion\Characters_F_revolucion\uniforms\data\UI\Rev_U_B_CTRG_Uniform_01_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\lxws\characters_f_lxws\data\clothes\B_ION_Soldier_poloRed_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Rev_CTRG_Casual_01;
		containerClass = Supply40;
		mass = 40;
	};
};
class Rev_U_B_CTRG_Uniform_02_F: Uniform_Base
{
	author = $STR_A3_A_Branflakes;
	scope = public;
	displayName = "Operator Outfit (White)";
	picture = "\A3_revolucion\Characters_F_revolucion\uniforms\data\UI\Rev_U_B_CTRG_Uniform_02_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\lxws\characters_f_lxws\data\clothes\B_ION_Soldier_poloWhite_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Rev_CTRG_Casual_02;
		containerClass = Supply40;
		mass = 40;
	};
};