/* Civilian Base Classes */
class C_Pickup_RF;
class C_Pickup_Covered_RF;
class C_Pickup_Repair_RF;

/* Baracas */
class Rev_C_Pickup_RF: C_Pickup_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Revolucion_CIV_F;
    crew = Rev_C_man_polo_5_F;
	typicalCargo[] = {Rev_C_man_polo_5_F};
};
class Rev_C_Pickup_Covered_RF: C_Pickup_Covered_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Revolucion_CIV_F;
    crew = Rev_C_Man_casual_1_F;
	typicalCargo[] = {Rev_C_Man_casual_1_F};
    scopeArsenal = protected;
    forceInGarage = 0;
};
class Rev_C_Pickup_Repair_RF: C_Pickup_Repair_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Revolucion_CIV_F;
    editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_C_Pickup_Repair_RF_Enoch.jpg";
    crew = Rev_C_Man_UtilityWorker_01_F;
	typicalCargo[] = {Rev_C_Man_UtilityWorker_01_F};
	textureList[] = {RescueTeam, 1};
};
