class Rev_U_VZ_CombatUniform_F: Uniform_Base
{
	author = $STR_A3_A_Branflakes;
	scope = public;
	displayName = $STR_A3_R_CfgWeapons_U_VZ_CombatUniform_F0;
	picture = "\A3_revolucion\Characters_F_revolucion\uniforms\data\UI\Rev_U_Policia_CombatUniform_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_indep_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Rev_VZ_CombatUniform_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class Rev_U_VZ_CombatUniform_shortsleeve_F: Uniform_Base
{
	author = $STR_A3_A_Branflakes;
	scope = public;
	displayName = $STR_A3_R_CfgWeapons_U_VZ_CombatUniform_shortsleeve_F0;
	picture = "\A3_revolucion\Characters_F_revolucion\uniforms\data\UI\Rev_U_Policia_CombatUniform_shortsleeve_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_indep_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Rev_VZ_CombatUniform_shortsleeve_F;
		containerClass = Supply40;
		mass = 40;
	};
};