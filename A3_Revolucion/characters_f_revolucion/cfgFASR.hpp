/* Remnants */
class Rev_O_FASR_Man_Base_F: I_Soldier_base_F
{
    scope = private;
	faction = Revolucion_OPF_FASR_F;
	genericNames = VenezuelanMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		G_HAF_default
	};
	side = TEast;
};
class Rev_O_FASR_Soldier_Base_F: Rev_O_FASR_Man_Base_F
{
	uniformClass = Rev_U_O_FASR_FieldJacket_F;
};