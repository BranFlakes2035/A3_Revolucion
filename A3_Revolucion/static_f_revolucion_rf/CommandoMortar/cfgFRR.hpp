/* FRR */
class Rev_B_FRR_CommandoMortar_RF: B_CommandoMortar_RF
{
    author = $STR_A3_A_Ravenholme;
	dlc = "rf";
	scope = public;
	scopeCurator = public;
	side = TWest;
    faction = Revolucion_BLU_FRR_F;
	crew = Rev_B_FRR_Soldier_F;
};

/* FRR (INDEP) */
class Rev_I_FRR_CommandoMortar_RF: B_CommandoMortar_RF
{
    author = $STR_A3_A_Ravenholme;
	dlc = "rf";
	scope = public;
	side = TGuerrila;
	scopeCurator = public;
    faction = Revolucion_IND_FRR_F;
	crew = Rev_I_FRR_Soldier_F;
};

/* FRR (OPFOR) */
class Rev_O_FRR_CommandoMortar_RF: B_CommandoMortar_RF
{
    author = $STR_A3_A_Ravenholme;
	dlc = "rf";
	scope = public;
	scopeCurator = public;
	side = TEast;
    faction = Revolucion_OPF_FRR_F;
    crew = Rev_O_FRR_Soldier_F;
};