/* BDF */
class I_E_Uniform_01_F;
class I_E_Uniform_01_shortsleeve_F;
class I_E_Uniform_01_tanktop_F;
class I_E_Uniform_01_officer_F;
class I_E_Uniform_01_sweater_F;
class B_Soldier_04_f;
class Rev_B_BDF_Uniform_01_F: I_E_Uniform_01_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Rev_U_B_BDF_Uniform_01_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\rev_U_B_CombatFatigues_CO.paa",
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\rev_U_B_CombatFatigues_Pants_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class Rev_B_BDF_Uniform_01_shortsleeve_F: I_E_Uniform_01_shortsleeve_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Rev_U_B_BDF_Uniform_01_shortsleeve_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\rev_U_B_CombatFatigues_CO.paa",
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\rev_U_B_CombatFatigues_Pants_CO.paa"
	};
};
class Rev_B_BDF_Uniform_01_tanktop_F: I_E_Uniform_01_tanktop_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Rev_U_B_BDF_Uniform_01_tanktop_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_G_Soldier_01_TankTop_CO.paa",
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\rev_U_B_CombatFatigues_Pants_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class Rev_B_BDF_Officer_01_F: I_E_Uniform_01_officer_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Rev_U_B_BDF_Uniform_01_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\rev_U_B_Officer_CO.paa",
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\rev_U_B_CombatFatigues_Pants_CO.paa",
	};
};
class Rev_B_BDF_Sweater_01_F: I_E_Uniform_01_sweater_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Rev_U_B_BDF_Sweater_01_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\rev_U_B_Sweater_CO.paa",
	};
};
class Rev_B_BDF_Coveralls_01_F: B_Soldier_04_f
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Rev_U_B_BDF_Coveralls_01_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\coveralls_BDF_CO.paa",
	};
};
/* Cartels */
class Rev_I_CDB_CombatUniform_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Rev_U_I_CDB_CombatUniform_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\Rev_I_CDB_CombatFatigues_black_CO.paa"
	};
};
class Rev_I_CDB_CombatUniform_shortsleeve_F: I_soldier_lite_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Rev_U_I_CDB_CombatUniform_shortsleeve_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\Rev_I_CDB_CombatFatigues_black_CO.paa"
	};
};
/*FASR*/
class I_C_Soldier_Camo_F;
class I_Support_MG_F;
class Rev_O_FASR_FieldJacket_F: I_C_Soldier_Camo_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Rev_U_O_FASR_FieldJacket_F;
	identityTypes[] = {};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"insignia"
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\Uniform_FASR_FieldJacket_CO.paa",
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\Uniform_FASR_FieldJacket_02_CO.paa",
	};
};
class Rev_O_FASR_Sweater_01_F: I_E_Uniform_01_sweater_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Rev_U_O_FASR_Sweater_01_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\rev_U_O_Sweater_CO.paa",
	};
};
class Rev_O_FASR_FieldJacket_tshirt_F: I_Support_MG_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Rev_U_O_FASR_FieldJacket_tshirt_F;
	hiddenSelections[] = 
	{
		camo1,
		camo2,
		camo3
	};
	hiddenSelectionsTextures[] = 
	{
		"\A3\Characters_F_Orange\Uniforms\Data\c_cloth1_olive_co.paa",
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\Uniform_FASR_FieldJacket_02_CO.paa"
	};
};
class Rev_O_FASR_FieldJacket_tanktop_F: I_E_Uniform_01_tanktop_F
{
	author = $STR_A3_A_Ravenholme;
    scope = protected;
	model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";
	uniformClass = Rev_U_O_FASR_FieldJacket_tanktop_F;
	hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_TankTop_CO.paa",
        "\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\Uniform_FASR_FieldJacket_02_CO.paa"
    };
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1.rvmat",
			"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
			"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing_injury.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing_injury.rvmat",
			INJURY_PERSONALITY_MATERIALS
		};
	};
};
/*FRR*/
class Rev_FRR_Soldier_1_F: I_C_Soldier_base_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Rev_U_B_FRR_Uniform_01_F;
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa",
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\Uniform_FASR_FieldJacket_02_CO.paa"
	};
};
class Rev_FRR_Soldier_2_F: I_C_Soldier_base_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Rev_U_B_FRR_Uniform_02_F;
	hiddenSelectionsTextures[] =
	{
		"\a3\Characters_F_Orange\Uniforms\Data\c_cloth1_olive_co.paa",
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\rev_U_B_CombatFatigues_Pants_CO.paa"
	};
};
class I_G_Soldier_SL_F;
class Rev_FRR_Soldier_3_F: I_G_Soldier_SL_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Rev_U_B_FRR_Uniform_03_F;
	hiddenSelections[] =
	{
		camo1,
		camo2
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\M81_Deserter_CO.paa",
		"\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_CO.paa"
	};
};
class Rev_FRR_Soldier_4_F: I_E_Uniform_01_tanktop_F
{
	author = $STR_A3_A_Ravenholme;
    scope = protected;
	model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";
	uniformClass = Rev_U_B_FRR_Uniform_04_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_TankTop_arid_CO.paa",
        "\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\rev_U_B_CombatFatigues_Pants_CO.paa"
    };
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1.rvmat",
			"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
			"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing_injury.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing_injury.rvmat",
			INJURY_PERSONALITY_MATERIALS
		};
	};
};
class Rev_FRR_Soldier_5_F: I_C_Soldier_Camo_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Rev_U_B_FRR_Uniform_05_F;
	identityTypes[] = {};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"insignia"
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\Uniform_FASR_FieldJacket_CO.paa",
		"\A3_Revolucion\Characters_F_revolucion\Uniforms\Data\rev_U_B_CombatFatigues_Pants_CO.paa",
	};
};