/* Cartels De Baracas */
class Rev_I_CDB_Plane_Civil_01_F: I_C_Plane_Civil_01_F
{
	author = $STR_A3_A_Ravenholme;
	side = TGuerrila;
	faction = Revolucion_IND_CDB_F;
	crew = Rev_I_CDB_Soldier_Pilot_F;
	typicalCargo[] = {Rev_I_CDB_Soldier_Pilot_F};
	textureList[]=
	{
		RedLine_1,1,
		RedLine_2,1,
		Wave_1,1,
		Wave_2,1,
		Tribal_1,1,
		Tribal_2,1
	};
	hiddenSelectionsTextures[]=
	{
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
	};
};