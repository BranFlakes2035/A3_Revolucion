class CfgGroups
{
    /* Definitions */
    #include "\A3_Aegis\macros_groups.hpp"

	class West
	{
		name = $STR_A3_CfgGroups_West0;
		side = TWest;
		class Revolucion_BLU_BDF_F
		{
			name = $STR_A3_R_CfgFactionClasses_BLU_BDF_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Rev_B_BDF_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Revolucion_BLU_BDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_BDF_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_BDF_RadioOperator_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_BDF_soldier_AT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_BDF_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Rev_B_BDF_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,Rev_B_BDF_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,Rev_B_BDF_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Rev_B_BDF_medic_F,PRIVATE,20,-20);
				};
				class Rev_B_BDF_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = Revolucion_BLU_BDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_BDF_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_BDF_soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_BDF_soldier_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_BDF_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Rev_B_BDF_soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Rev_B_BDF_soldier_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,Rev_B_BDF_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Rev_B_BDF_medic_F,PRIVATE,20,-20);
				};
				class Rev_B_BDF_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Revolucion_BLU_BDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_BDF_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_BDF_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_BDF_soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_BDF_soldier_AT_F,PRIVATE,10,-10);
				};
				class Rev_B_BDF_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = Revolucion_BLU_BDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_BDF_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_BDF_soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_BDF_soldier_AT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_BDF_soldier_A_F,PRIVATE,10,-10);
				};
				class Rev_B_BDF_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TWest;
					faction = Revolucion_BLU_BDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_BDF_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_BDF_soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_BDF_soldier_AA_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_BDF_soldier_AAA_F,PRIVATE,10,-10);
				};
				class Rev_B_BDF_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Revolucion_BLU_BDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_BDF_soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Rev_B_BDF_soldier_F,PRIVATE,5,-5);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class Rev_B_BDF_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TWest;
					faction = Revolucion_BLU_BDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_BDF_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_BDF_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_BDF_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_BDF_medic_F,PRIVATE,10,-10);
				};
				class Rev_B_BDF_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TWest;
					faction = Revolucion_BLU_BDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_BDF_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_BDF_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_BDF_soldier_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_BDF_soldier_exp_F,PRIVATE,10,-10);
				};
				class Rev_B_BDF_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TWest;
					faction = Revolucion_BLU_BDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_BDF_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_BDF_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_BDF_engineer_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_BDF_soldier_F,PRIVATE,10,-10);
				};
			};
			/*class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_N_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = Theseus_BLU_N_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_N_MRAP_03_gmg_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_N_soldier_LAT_F,PRIVATE,5,-5);
				};
				class B_N_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TWest;
					faction = Theseus_BLU_N_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_N_Truck_02_transport_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_N_soldier_SL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,Theseus_B_N_RadioOperator_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,Theseus_B_N_soldier_LAT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,Theseus_B_N_soldier_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TWest,Theseus_B_N_soldier_TL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TWest,Theseus_B_N_soldier_AR_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TWest,Theseus_B_N_soldier_A_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TWest,Theseus_B_N_medic_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TWest,Theseus_B_N_soldier_SL_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TWest,Theseus_B_N_RadioOperator_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TWest,Theseus_B_N_soldier_LAT_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TWest,Theseus_B_N_soldier_M_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TWest,Theseus_B_N_soldier_TL_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TWest,Theseus_B_N_soldier_AR_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TWest,Theseus_B_N_soldier_A_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TWest,Theseus_B_N_medic_F,PRIVATE,-5,-14);
				};
			};*/
		};
	}; 
	class East
	{
		class Revolucion_OPF_FASR_F
		{
			name = $STR_A3_R_CfgFactionClasses_OPF_FASR_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Rev_OPF_FASR_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = Revolucion_OPF_FASR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FASR_soldier_SL_F,SERGEANT,0,0);
					//GROUP_UNIT(1,TEast,Rev_O_FASR_RadioOperator_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FASR_soldier_AT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FASR_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_FASR_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_FASR_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,Rev_O_FASR_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Rev_O_FASR_medic_F,PRIVATE,20,-20);
				};
				class Rev_OPF_FASR_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = Revolucion_OPF_FASR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FASR_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FASR_soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FASR_soldier_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FASR_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_FASR_soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_FASR_soldier_AT_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TEast,Rev_O_FASR_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Rev_O_FASR_medic_F,PRIVATE,20,-20);
				};
				class Rev_OPF_FASR_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = Revolucion_OPF_FASR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FASR_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FASR_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FASR_soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FASR_soldier_AT_F,PRIVATE,10,-10);
				};
				class Rev_OPF_FASR_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = Revolucion_OPF_FASR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FASR_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FASR_soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FASR_soldier_AT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FASR_soldier_A_F,PRIVATE,10,-10);
				};
				class Rev_OPF_FASR_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = Revolucion_OPF_FASR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FASR_soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FASR_soldier_F,PRIVATE,5,-5);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class Rev_OPF_FASR_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TEast;
					faction = Revolucion_OPF_FASR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FASR_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FASR_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FASR_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FASR_medic_F,PRIVATE,10,-10);
				};
				class Rev_OPF_FASR_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TEast;
					faction = Revolucion_OPF_FASR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FASR_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FASR_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FASR_soldier_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FASR_soldier_exp_F,PRIVATE,10,-10);
				};
				class Rev_OPF_FASR_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TEast;
					faction = Revolucion_OPF_FASR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FASR_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FASR_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FASR_engineer_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FASR_soldier_F,PRIVATE,10,-10);
				};
			};
		};
		/*class Theseus_OPF_R_F
		{
		  	name = $STR_A3_T_CfgFactionClasses_OPF_R_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class RemnantsFireTeam
				{
					name = "Remnants Fire Team";
					side = TEast;
					faction = Theseus_OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Theseus_O_R_Soldier_2_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Theseus_O_R_Soldier_4_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Theseus_O_R_Soldier_1_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Theseus_O_R_Soldier_3_F,PRIVATE,10,-10);
				};
				class RemnantsShockTeam
				{
					name = "Remnants Shock Team";
					side = TEast;
					faction = Theseus_OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Theseus_O_R_Soldier_6_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Theseus_O_R_Soldier_5_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Theseus_O_R_Soldier_7_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Theseus_O_R_Soldier_8_F,PRIVATE,10,-10);
				};
				class RemnantsCombatGroup
				{
					name = "Remnants Combat Group";
					side = TEast;
					faction = Theseus_OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Theseus_O_R_Soldier_2_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Theseus_O_R_Soldier_4_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Theseus_O_R_Soldier_6_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Theseus_O_R_Soldier_1_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Theseus_O_R_Soldier_7_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Theseus_O_R_Soldier_5_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,Theseus_O_R_Soldier_8_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Theseus_O_R_Soldier_3_F,PRIVATE,20,-20);
				};
            };
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP0;
				class Theseus_O_R_MotInf_Team
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_MotInfTeam0;
					side = TEast;
					faction = Theseus_OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Theseus_O_R_Offroad_01_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Theseus_O_R_Soldier_2_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,Theseus_O_R_Soldier_4_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Theseus_O_R_Soldier_5_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,Theseus_O_R_Soldier_3_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TEast,Theseus_O_R_Soldier_1_F,CORPORAL,15,-15);
				};
				class Theseus_O_R_Technicals
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0;
					side = TEast;
					faction = Theseus_OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Theseus_O_R_Offroad_01_armed_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Theseus_O_R_Offroad_01_armed_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TEast,Theseus_O_R_Offroad_01_AT_F,CORPORAL,-10,-10);
				};
			};
		};*/
	};
	class Indep
	{
		class Revolucion_IND_CDB_F
		{
			name = $STR_A3_R_CfgFactionClasses_IND_CDB_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class I_CDB_BanditGang
				{
					name = $STR_A3_R_CfgGroups_Indep_IND_B_F_Infantry_I_CDB_BanditGang0;
					side = TGuerrila;
					faction = Revolucion_IND_CDB_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_CDB_Soldier_Bandit_6_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_CDB_Soldier_Bandit_SG_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TGuerrila,Rev_I_CDB_Soldier_Bandit_7_F,CORPORAL,-5,-5);
				};
				class I_CDB_CriminalGang
				{
					name = $STR_A3_R_CfgGroups_Indep_IND_B_F_Infantry_I_CDB_CriminalGang0;
					side = TGuerrila;
					faction = Revolucion_IND_CDB_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_CDB_Soldier_Bandit_4_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_CDB_Soldier_Bandit_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,Rev_I_CDB_Soldier_Bandit_SG_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Rev_I_CDB_Soldier_Bandit_1_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,Rev_I_CDB_Soldier_Bandit_5_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TGuerrila,Rev_I_CDB_Soldier_Bandit_2_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TGuerrila,Rev_I_CDB_Soldier_Bandit_3_F,PRIVATE,-15,-15);
				};
				class I_CDB_EnforcerTeam
				{
					name = $STR_A3_R_CfgGroups_Indep_IND_B_F_Infantry_I_CDB_EnfTeam0;
					side = TGuerrila;
					faction = Revolucion_IND_CDB_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_CDB_Soldier_Para_GL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_CDB_Soldier_Para_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TGuerrila,Rev_I_CDB_Soldier_Para_M_F,CORPORAL,-5,-5);
				};
				class I_CDB_EnforcerSquad
				{
					name = $STR_A3_R_CfgGroups_Indep_IND_B_F_Infantry_I_CDB_EnfSquad0;
					side = TGuerrila;
					faction = Revolucion_IND_CDB_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_CDB_Soldier_Para_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_CDB_Soldier_Para_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,Rev_I_CDB_Soldier_Para_AT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Rev_I_CDB_Soldier_Para_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,Rev_I_CDB_Soldier_Para_GL_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TGuerrila,Rev_I_CDB_Soldier_Para_AR_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TGuerrila,Rev_I_CDB_Soldier_Para_Medic_F,PRIVATE,-15,-15);
				};
			};
		};
	}; 
};