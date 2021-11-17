/* FRR BLUFOR */
class Rev_B_FRR_Quadbike_01_F: B_G_Quadbike_01_F
{
    side = TWest;
	faction = Revolucion_BLU_FRR_F;
	crew = Rev_B_FRR_Soldier_F;
	typicalCargo[] = {Rev_B_FRR_Soldier_F};
};

/* FRR INDEP */
class Rev_I_FRR_Quadbike_01_F: B_G_Quadbike_01_F
{
    side = TGuerrila;
	faction = Revolucion_IND_FRR_F;
	crew = Rev_I_FRR_Soldier_F;
	typicalCargo[] = {Rev_I_FRR_Soldier_F};
};

/* FRR OPFOR */
class Rev_O_FRR_Quadbike_01_F: B_G_Quadbike_01_F
{
    side = TEast;
	faction = Revolucion_OPF_FRR_F;
	crew = Rev_O_FRR_Soldier_F;
	typicalCargo[] = {Rev_O_FRR_Soldier_F};
};