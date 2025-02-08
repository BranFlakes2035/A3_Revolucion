/* Policia */
class Rev_B_PNB_Boat_Transport_02_F: B_GEN_Boat_Transport_02_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Revolucion_BLU_PNB_F;
	crew = Rev_B_PNB_Soldier_F;
	typicalCargo[] =
	{
		Rev_B_PNB_Soldier_F,
		Rev_B_PNB_Soldier_F
	};
};
class Rev_O_PNB_Boat_Transport_02_F: Rev_B_PNB_Boat_Transport_02_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Revolucion_OPF_PNB_F;
	crew = Rev_O_PNB_Soldier_F;
	typicalCargo[] =
	{
		Rev_O_PNB_Soldier_F,
		Rev_O_PNB_Soldier_F
	};
};
