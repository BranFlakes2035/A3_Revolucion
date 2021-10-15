/*Baracas Defense Forces*/
class I_Soldier_F;
class Rev_B_BDF_Man_base_F: I_Soldier_F
{
    scope = private;
	faction = Revolucion_IND_CDB_F;
	genericNames = VenezuelanMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		G_HAF_default
	};
	headgearList[]={};
};
class Rev_B_BDF_Soldier_base_F: Rev_B_BDF_Man_base_F
{
	uniformClass = Rev_U_B_BDF_Uniform_01_F;
};