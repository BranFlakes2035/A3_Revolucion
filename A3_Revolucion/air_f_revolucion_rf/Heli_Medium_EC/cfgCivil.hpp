/* Civilian Base Classes */
class C_Heli_EC_04_Rescue_RF;
class C_Heli_EC_01_civ_RF;
class C_Heli_EC_01A_civ_RF;

/* Baracas */
class Rev_C_Heli_EC_01_civ_RF : C_Heli_EC_01_civ_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Revolucion_CIV_F;
    crew = Rev_C_Pilot_RF;
	typicalCargo[] = {Rev_C_Pilot_RF};
};
class Rev_C_Heli_EC_01A_civ_RF : C_Heli_EC_01A_civ_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Revolucion_CIV_F;
    crew = Rev_C_Pilot_RF;
	typicalCargo[] = {Rev_C_Pilot_RF};
};
class Rev_C_Heli_EC_04_Rescue_RF : C_Heli_EC_04_Rescue_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Revolucion_CIV_F;
    crew = Rev_C_Pilot_Rescue_RF;
	typicalCargo[] = {Rev_C_Pilot_Rescue_RF};
};