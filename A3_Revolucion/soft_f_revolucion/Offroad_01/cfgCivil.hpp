/* Base Classes */
class C_Offroad_01_F;
class C_Offroad_01_comms_F;
class C_Offroad_01_covered_F;
class C_Offroad_01_repair_F;
class C_Offroad_lxws;

/* Baracas */
class Rev_C_Offroad_01_F: C_Offroad_01_F
{
    author = $STR_A3_A_Ravenholme;
    faction = Revolucion_CIV_F;
    crew = Rev_C_Man_casual_2_F;
	typicalCargo[] = {Rev_C_Man_casual_2_F};
};
class Rev_C_Offroad_01_covered_F: C_Offroad_01_covered_F
{
    author = $STR_A3_A_Ravenholme;
    faction = Revolucion_CIV_F;
    crew = Rev_C_Man_casual_4_F;
	typicalCargo[] = {Rev_C_Man_casual_4_F};
};
class Rev_C_Offroad_01_comms_F: C_Offroad_01_comms_F
{
    author = $STR_A3_A_Ravenholme;
    faction = Revolucion_CIV_F;
    crew = Rev_C_Man_casual_3_F;
	typicalCargo[] = {Rev_C_Man_casual_3_F};
};
class Rev_C_Offroad_01_repair_F: C_Offroad_01_repair_F
{
    author = $STR_A3_A_Ravenholme;
    faction = Revolucion_CIV_F;
    crew = Rev_C_Man_UtilityWorker_01_F;
	typicalCargo[] = {Rev_C_Man_UtilityWorker_01_F};
};