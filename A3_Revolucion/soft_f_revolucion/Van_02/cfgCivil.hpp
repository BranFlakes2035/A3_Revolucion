/* Baracan Civilian Vans */
class Rev_C_Van_02_transport_F: C_Van_02_transport_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	faction = Revolucion_CIV_F;
	crew = Rev_C_man_polo_1_F;
	typicalCargo[] = {Rev_C_man_polo_1_F};
};
class Rev_C_Van_02_vehicle_F: C_Van_02_vehicle_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	faction = Revolucion_CIV_F;
	crew = Rev_C_Man_Messenger_01_F;
	typicalCargo[] = {Rev_C_Man_Messenger_01_F};
};
class Rev_C_Van_02_service_F: C_Van_02_service_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	forceinGarage = 0;
	faction = Revolucion_CIV_F;
	crew = Rev_C_Man_UtilityWorker_01_F;
	typicalCargo[] = {Rev_C_Man_UtilityWorker_01_F};
	textureList[] = {White,1};
    hiddenSelectionsTextures[] = 
	{
		"\a3\Soft_F_Orange\Van_02\Data\van_body_White_CO.paa",
		"\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
		"\a3\soft_f_orange\van_02\data\van_glass_utility_CA.paa",
		"\a3\Soft_F_Orange\Van_02\Data\van_body_White_CO.paa"
	};
};
class C_Van_02_medevac_F;
class Rev_C_Van_02_medevac_F: C_Van_02_medevac_F
{
	author = $STR_A3_A_BranFlakes;
	scope = public;
	displayName = $STR_A3_CfgVehicles_Van_02_medevac_base_F0;
	faction = Revolucion_CIV_F;
	crew = Rev_C_Man_Paramedic_01_F;
	typicalCargo[] = {Rev_C_Man_Paramedic_01_F};
	hiddenSelectionsTextures[] = 
	{
		"A3_Revolucion\soft_f_Revolucion\van_02\Data\Van_Medevac_body_baracas_co.paa",
		"\a3\soft_f_orange\van_02\data\van_wheel_transport_CO.paa",
		"\A3_Revolucion\soft_f_Revolucion\van_02\data\Van_Medevac_glass_baracas_co.paa",
		"\a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
		"A3_Revolucion\soft_f_Revolucion\van_02\Data\Van_Medevac_body_baracas_co.paa",
	};
	textureList[] = {Baracas_Ambulance,1};
};