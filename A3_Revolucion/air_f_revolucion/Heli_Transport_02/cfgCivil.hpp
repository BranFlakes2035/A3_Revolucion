/* Baracan Civs */
class Rev_C_Heli_Transport_02_civil_F: C_Heli_Transport_02_civil_F
{
	faction = Revolucion_CIV_F;
	side = TCivilian;
	crew = Rev_C_Man_Pilot_F;
	typicalCargo[] = {Rev_C_Man_Pilot_F};
};
class Rev_C_Heli_Transport_02_VIP_F: Aegis_C_Heli_Transport_02_VIP_F
{
	faction = Revolucion_CIV_F;
	side = TCivilian;
	crew = Rev_C_Man_Pilot_F;
	typicalCargo[] = {Rev_C_Man_Pilot_F};
    textureList[] = 
    {
        Grey,1,
        Vrana,1,
        Blue,1,
        White,1,
        Black,0,
        ION,0,
        Daltgreen,1
    };
};