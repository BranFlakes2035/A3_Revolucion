class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Revolucion_Characters_F_Revolucion
	{
		author = $STR_A3_A_BranFlakes;
		name = "Arma 3 Revolución - Characters and Clothing";
		url = linkRevolucion;
		requiredAddons[] =
		{
			A3_Aegis_Characters_F_Aegis,
			A3_Atlas_Characters_F_Atlas,
            A3_Revolucion_Data_F_Revolucion
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBDF.hpp" */


            /* From "cfgFRR.hpp" */


            /* From "cfgCartels.hpp" */
			Rev_I_CDB_Soldier_Bandit_1_F,
			Rev_I_CDB_Soldier_Bandit_2_F,
			Rev_I_CDB_Soldier_Bandit_3_F,
			Rev_I_CDB_Soldier_Bandit_4_F,
			Rev_I_CDB_Soldier_Bandit_5_F,
			Rev_I_CDB_Soldier_Bandit_6_F,
			Rev_I_CDB_Soldier_Bandit_7_F,
			Rev_I_CDB_Soldier_Bandit_8_F,
			Rev_I_CDB_Soldier_Bandit_SG_F,
			Rev_I_CDB_Soldier_Bandit_M_F,
			Rev_I_CDB_Soldier_Bandit_SMG_F,
			Rev_I_CDB_Soldier_Bandit_lite_F,
			Rev_I_CDB_Soldier_Pilot_F,
			Rev_I_CDB_Soldier_Bandit_Officer_F

            /* From "cfgFASR.hpp" */


        };
		weapons[] = {/* Automated */};
	};
};