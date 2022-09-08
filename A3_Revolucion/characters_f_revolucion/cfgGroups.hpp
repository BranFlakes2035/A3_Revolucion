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
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class Rev_B_BDF_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = Revolucion_BLU_BDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Rev_B_BDF_Recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_BDF_Recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_BDF_Recon_Medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_BDF_Recon_AT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,Rev_B_BDF_Recon_JTAC_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Rev_B_BDF_Recon_Exp_F,PRIVATE,15,-15);
				};
				class Rev_B_BDF_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = Revolucion_BLU_BDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Rev_B_BDF_Recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_BDF_Recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_BDF_Recon_Medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_BDF_Recon_F,PRIVATE,10,-10);
				};
				class Rev_B_BDF_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = Revolucion_BLU_BDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Rev_B_BDF_Recon_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Rev_B_BDF_Recon_F,PRIVATE,5,-5);
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class Rev_B_BDF_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = Revolucion_BLU_BDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_BDF_Offroad_01_armed_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_BDF_soldier_AT_F,PRIVATE,5,-5);
				};
				class Rev_B_BDF_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TWest;
					faction = Revolucion_BLU_BDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_BDF_Truck_02_transport_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_BDF_soldier_SL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,Rev_B_BDF_RadioOperator_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,Rev_B_BDF_soldier_AT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,Rev_B_BDF_soldier_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TWest,Rev_B_BDF_soldier_TL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TWest,Rev_B_BDF_soldier_AR_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TWest,Rev_B_BDF_soldier_A_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TWest,Rev_B_BDF_medic_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TWest,Rev_B_BDF_soldier_SL_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TWest,Rev_B_BDF_RadioOperator_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TWest,Rev_B_BDF_soldier_AT_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TWest,Rev_B_BDF_soldier_M_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TWest,Rev_B_BDF_soldier_TL_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TWest,Rev_B_BDF_soldier_AR_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TWest,Rev_B_BDF_soldier_A_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TWest,Rev_B_BDF_medic_F,PRIVATE,-5,-14);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Rev_B_BDF_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = Revolucion_BLU_BDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_BDF_APC_Wheeled_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_BDF_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_BDF_RadioOperator_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_BDF_soldier_AT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,Rev_B_BDF_soldier_M_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Rev_B_BDF_soldier_TL_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TWest,Rev_B_BDF_soldier_AR_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,Rev_B_BDF_soldier_A_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TWest,Rev_B_BDF_medic_F,PRIVATE,-20,-20);
				};
			};
		};
		class Revolucion_BLU_CTRG_F
		{
			name = $STR_A3_R_CfgFactionClasses_BLU_CTRG_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Rev_B_CTRG_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Revolucion_BLU_CTRG_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_CTRG_Soldier_TL_G9_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_CTRG_Soldier_JTAC_G9_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_CTRG_Soldier_LAT_G9_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_CTRG_Soldier_M_G9_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Rev_B_CTRG_Soldier_G9_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,Rev_B_CTRG_Soldier_AR_G9_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,Rev_B_CTRG_Soldier_Exp_G9_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Rev_B_CTRG_Soldier_Medic_G9_F,PRIVATE,20,-20);
				};
				class Rev_B_CTRG_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Revolucion_BLU_CTRG_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_CTRG_Soldier_TL_G9_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_CTRG_Soldier_AR_G9_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_CTRG_Soldier_JTAC_G9_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_CTRG_Soldier_LAT_G9_F,PRIVATE,10,-10);
				};
				class Rev_B_CTRG_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Revolucion_BLU_CTRG_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_CTRG_Soldier_JTAC_G9_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Rev_B_CTRG_Soldier_G9_F,PRIVATE,5,-5);
				};
			};
		};
		class Revolucion_BLU_FRR_F
		{
			name = $STR_A3_R_CfgFactionClasses_BLU_FRR_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Rev_B_FRR_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Revolucion_BLU_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_FRR_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_FRR_soldier_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_FRR_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_FRR_Soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Rev_B_FRR_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,Rev_B_FRR_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,Rev_B_FRR_Soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Rev_B_FRR_medic_F,PRIVATE,20,-20);
				};
				class Rev_B_FRR_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = Revolucion_BLU_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_FRR_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_FRR_soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_FRR_Soldier_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_FRR_Soldier_M_F,SERGEANT,10,-10);
					GROUP_UNIT(4,TWest,Rev_B_FRR_soldier_AT_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TWest,Rev_B_FRR_soldier_LAT_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,Rev_B_FRR_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Rev_B_FRR_medic_F,PRIVATE,20,-20);
				};
				class Rev_B_FRR_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Revolucion_BLU_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_FRR_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_FRR_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_FRR_Soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_FRR_Soldier_LAT_F,PRIVATE,10,-10);
				};
				class Rev_B_FRR_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = Revolucion_BLU_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_FRR_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_FRR_Soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_FRR_Soldier_LAT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_FRR_Soldier_LAT_F,PRIVATE,10,-10);
				};
				class Rev_B_FRR_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Revolucion_BLU_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_FRR_Soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Rev_B_FRR_Soldier_F,PRIVATE,5,-5);
				};
				class Rev_B_FRR_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = Revolucion_BLU_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TWest,Rev_B_FRR_Soldier_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Rev_B_FRR_Soldier_F,PRIVATE,5,-5);
				};
				class Rev_B_FRR_SniperTeam_M
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0;
					side = TWest;
					faction = Revolucion_BLU_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TWest,Rev_B_FRR_Sharpshooter_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_FRR_Soldier_M_F,CORPORAL,5,-5);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class Rev_B_FRR_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TWest;
					faction = Revolucion_BLU_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_FRR_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_FRR_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_FRR_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_FRR_medic_F,PRIVATE,10,-10);
				};
				class Rev_B_FRR_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TWest;
					faction = Revolucion_BLU_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_FRR_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_FRR_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_FRR_Soldier_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_FRR_Soldier_exp_F,PRIVATE,10,-10);
				};
				class Rev_B_FRR_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TWest;
					faction = Revolucion_BLU_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_FRR_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_FRR_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_FRR_engineer_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_FRR_engineer_F,PRIVATE,10,-10);
				};
			};
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP0;
				class Rev_B_FRR_MotInf_Team
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_MotInfTeam0;
					side = TWest;
					faction = Revolucion_BLU_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_FRR_Offroad_01_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_FRR_Soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_FRR_Soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_FRR_Soldier_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,Rev_B_FRR_medic_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TWest,Rev_B_FRR_Soldier_F,CORPORAL,15,-15);
				};
				class Rev_B_FRR_Technicals
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0;
					side = TWest;
					faction = Revolucion_BLU_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_FRR_Offroad_01_armed_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_FRR_Offroad_01_armed_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TWest,Rev_B_FRR_Offroad_01_AT_F,CORPORAL,-10,-10);
				};
			};
		};
		class Revolucion_BLU_PNB_F
		{
			name = $STR_A3_R_CfgFactionClasses_BLU_PNB_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Rev_B_PNB_InfSquad
				{
					name = $STR_A3_R_CfgGroups_BLU_Infantry_B_PNB_InfSquad0;
					side = TWest;
					faction = Revolucion_BLU_PNB_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_PNB_Commander_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_PNB_Soldier_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_PNB_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_PNB_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Rev_B_PNB_soldier_Rifle_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,Rev_B_PNB_soldier_AR_F,CORPORAL,15,-15);
				};
				class Rev_B_PNB_InfTeam
				{
					name = $STR_A3_R_CfgGroups_BLU_Infantry_B_PNB_InfTeam0;
					side = TWest;
					faction = Revolucion_BLU_PNB_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_PNB_Commander_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Rev_B_PNB_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Rev_B_PNB_soldier_Rifle_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Rev_B_PNB_soldier_LAT_F,PRIVATE,10,-10);
				};
				class Rev_B_PNB_InfSentry
				{
					name = $STR_A3_R_CfgGroups_BLU_Infantry_B_PNB_InfPatrol0;
					side = TWest;
					faction = Revolucion_BLU_PNB_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Rev_B_PNB_Soldier_Rifle_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Rev_B_PNB_soldier_F,PRIVATE,5,-5);
				};
			};
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
				class Rev_O_FASR_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = Revolucion_OPF_FASR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FASR_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FASR_RadioOperator_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FASR_soldier_AT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FASR_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_FASR_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_FASR_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,Rev_O_FASR_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Rev_O_FASR_medic_F,PRIVATE,20,-20);
				};
				class Rev_O_FASR_InfSquad_Weapons
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
				class Rev_O_FASR_InfTeam
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
				class Rev_O_FASR_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TEast;
					faction = Revolucion_OPF_FASR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FASR_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FASR_soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FASR_soldier_AA_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FASR_soldier_AAA_F,PRIVATE,10,-10);
				};
				class Rev_O_FASR_InfTeam_AT
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
				class Rev_O_FASR_InfSentry
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
				class Rev_O_FASR_Support_CLS
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
				class Rev_O_FASR_Support_EOD
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
				class Rev_O_FASR_Support_ENG
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
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class Rev_O_FASR_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TEast;
					faction = Revolucion_OPF_FASR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FASR_Offroad_01_armed_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FASR_soldier_AT_F,PRIVATE,5,-5);
				};
				class Rev_O_FASR_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TEast;
					faction = Revolucion_OPF_FASR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FASR_Truck_02_transport_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FASR_soldier_SL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TEast,Rev_O_FASR_RadioOperator_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TEast,Rev_O_FASR_soldier_AT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TEast,Rev_O_FASR_soldier_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TEast,Rev_O_FASR_soldier_TL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TEast,Rev_O_FASR_soldier_AR_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TEast,Rev_O_FASR_soldier_A_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TEast,Rev_O_FASR_medic_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TEast,Rev_O_FASR_soldier_SL_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TEast,Rev_O_FASR_RadioOperator_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TEast,Rev_O_FASR_soldier_AT_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TEast,Rev_O_FASR_soldier_M_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TEast,Rev_O_FASR_soldier_TL_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TEast,Rev_O_FASR_soldier_AR_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TEast,Rev_O_FASR_soldier_A_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TEast,Rev_O_FASR_medic_F,PRIVATE,-5,-14);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Rev_O_FASR_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TEast;
					faction = Revolucion_OPF_FASR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FASR_APC_Wheeled_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FASR_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FASR_RadioOperator_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FASR_soldier_AT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_FASR_soldier_M_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_FASR_soldier_TL_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TEast,Rev_O_FASR_soldier_AR_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TEast,Rev_O_FASR_soldier_A_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TEast,Rev_O_FASR_medic_F,PRIVATE,-20,-20);
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class O_FASR_DeathSquad
				{
					name = $STR_A3_R_CfgGroups_OPF_SpecOps_O_FASR_DeathSquad0;
					side = TEast;
					faction = Revolucion_OPF_FASR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,Rev_O_FASR_Soldier_TL_DS_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FASR_Soldier_M_DS_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FASR_Soldier_Medic_DS_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FASR_Soldier_LAT_DS_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_FASR_Soldier_JTAC_DS_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_FASR_Soldier_Exp_DS_F,PRIVATE,15,-15);
				};
				class O_FASR_KillTeam
				{
					name = $STR_A3_R_CfgGroups_OPF_SpecOps_O_FASR_KillTeam0;
					side = TEast;
					faction = Revolucion_OPF_FASR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,Rev_O_FASR_Soldier_TL_DS_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FASR_Soldier_M_DS_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FASR_Soldier_Medic_DS_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FASR_Soldier_DS_F,PRIVATE,10,-10);
				};
			};
		};
		class Revolucion_OPF_FRR_F
		{
			name = $STR_A3_R_CfgFactionClasses_BLU_FRR_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Rev_O_FRR_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = Revolucion_OPF_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FRR_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FRR_soldier_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FRR_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FRR_Soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_FRR_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_FRR_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,Rev_O_FRR_Soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Rev_O_FRR_medic_F,PRIVATE,20,-20);
				};
				class Rev_O_FRR_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = Revolucion_OPF_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FRR_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FRR_soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FRR_Soldier_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FRR_Soldier_M_F,SERGEANT,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_FRR_soldier_AT_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_FRR_soldier_LAT_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TEast,Rev_O_FRR_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Rev_O_FRR_medic_F,PRIVATE,20,-20);
				};
				class Rev_O_FRR_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = Revolucion_OPF_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FRR_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FRR_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FRR_Soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FRR_Soldier_LAT_F,PRIVATE,10,-10);
				};
				class Rev_O_FRR_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = Revolucion_OPF_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FRR_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FRR_Soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FRR_Soldier_LAT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FRR_Soldier_LAT_F,PRIVATE,10,-10);
				};
				class Rev_O_FRR_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = Revolucion_OPF_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FRR_Soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FRR_Soldier_F,PRIVATE,5,-5);
				};
				class Rev_O_FRR_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TEast;
					faction = Revolucion_OPF_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,Rev_O_FRR_Soldier_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FRR_Soldier_F,PRIVATE,5,-5);
				};
				class Rev_O_FRR_SniperTeam_M
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0;
					side = TEast;
					faction = Revolucion_OPF_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,Rev_O_FRR_Sharpshooter_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FRR_Soldier_M_F,CORPORAL,5,-5);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class Rev_O_FRR_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TEast;
					faction = Revolucion_OPF_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FRR_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FRR_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FRR_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FRR_medic_F,PRIVATE,10,-10);
				};
				class Rev_O_FRR_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TEast;
					faction = Revolucion_OPF_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FRR_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FRR_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FRR_Soldier_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FRR_Soldier_exp_F,PRIVATE,10,-10);
				};
				class Rev_O_FRR_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TEast;
					faction = Revolucion_OPF_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FRR_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FRR_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FRR_engineer_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FRR_engineer_F,PRIVATE,10,-10);
				};
			};
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP0;
				class Rev_O_FRR_MotInf_Team
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_MotInfTeam0;
					side = TEast;
					faction = Revolucion_OPF_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FRR_Offroad_01_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FRR_Soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_FRR_Soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_FRR_Soldier_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_FRR_medic_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_FRR_Soldier_F,CORPORAL,15,-15);
				};
				class Rev_O_FRR_Technicals
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0;
					side = TEast;
					faction = Revolucion_OPF_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_FRR_Offroad_01_armed_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_FRR_Offroad_01_armed_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TEast,Rev_O_FRR_Offroad_01_AT_F,CORPORAL,-10,-10);
				};
			};
		};
		class Revolucion_OPF_VZ_F
		{
		  	name = $STR_A3_A_CfgFactionClasses_OPF_V_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class O_VZ_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_RadioOperator_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_VZ_Soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_VZ_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_VZ_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_VZ_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,Rev_O_VZ_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Rev_O_VZ_medic_F,PRIVATE,20,-20);
				};
				class O_VZ_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_VZ_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_VZ_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_VZ_Soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_VZ_soldier_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TEast,Rev_O_VZ_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Rev_O_VZ_medic_F,PRIVATE,20,-20);
				};
				class O_VZ_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_VZ_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_VZ_Soldier_LAT_F,PRIVATE,10,-10);
				};
				class O_VZ_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_Soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_VZ_Soldier_AT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_VZ_soldier_F,PRIVATE,10,-10);
				};
				class O_VZ_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_Soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_VZ_Soldier_AA_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_VZ_Soldier_F,PRIVATE,10,-10);
				};
				class O_VZ_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_soldier_F,PRIVATE,5,-5);
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class O_VZ_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_VZ_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_VZ_recon_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_VZ_recon_JTAC_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_VZ_recon_exp_F,PRIVATE,15,-15);
				};
				class O_VZ_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_VZ_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_VZ_recon_F,PRIVATE,10,-10);
				};
				class O_VZ_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_recon_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_recon_F,PRIVATE,5,-5);
				};
				class O_VZ_PantherTeam
				{
					name = $STR_A3_R_CfgGroups_OPF_SpecOps_O_VZ_PantherTeam0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_Panther_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_Panther_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_VZ_Panther_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_VZ_Panther_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_VZ_Panther_JTAC_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_VZ_Panther_exp_F,PRIVATE,15,-15);
				};
				class O_VZ_PantherPatrol
				{
					name = $STR_A3_R_CfgGroups_OPF_SpecOps_O_VZ_PantherPatrol0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_Panther_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_Panther_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_VZ_Panther_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_VZ_Panther_F,PRIVATE,10,-10);
				};
				class O_VZ_PantherSentry
				{
					name = $STR_A3_R_CfgGroups_OPF_SpecOps_O_VZ_PantherSentry0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_Panther_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_Panther_F,PRIVATE,5,-5);
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class O_VZ_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_LSV_02_armed_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_VZ_Soldier_LAT_F,PRIVATE,-5,-5);
				};
				class O_VZ_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_LSV_02_armed_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_Soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_VZ_Soldier_AT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_VZ_soldier_F,PRIVATE,0,-10);
				};
				class O_VZ_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_LSV_02_armed_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_Soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_VZ_Soldier_AA_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_VZ_soldier_F,PRIVATE,0,-10);
				};
				class O_VZ_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_Truck_02_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_SL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TEast,Rev_O_VZ_soldier_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TEast,Rev_O_VZ_Soldier_LAT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TEast,Rev_O_VZ_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TEast,Rev_O_VZ_TL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TEast,Rev_O_VZ_AR_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TEast,Rev_O_VZ_A_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TEast,Rev_O_VZ_medic_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TEast,Rev_O_VZ_SL_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TEast,Rev_O_VZ_RadioOperator_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TEast,Rev_O_VZ_Soldier_LAT_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TEast,Rev_O_VZ_M_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TEast,Rev_O_VZ_TL_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TEast,Rev_O_VZ_AR_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TEast,Rev_O_VZ_A_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TEast,Rev_O_VZ_medic_F,PRIVATE,-5,-14);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class O_VZ_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_APC_Wheeled_04_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_VZ_RadioOperator_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_VZ_Soldier_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_VZ_M_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_VZ_TL_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TEast,Rev_O_VZ_AR_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TEast,Rev_O_VZ_A_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TEast,Rev_O_VZ_medic_F,PRIVATE,-20,-20);
				};
				class O_VZ_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_APC_Wheeled_04_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_VZ_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_VZ_Soldier_AT_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_VZ_Soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_VZ_Soldier_AT_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TEast,Rev_O_VZ_soldier_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TEast,Rev_O_VZ_soldier_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TEast,Rev_O_VZ_soldier_F,PRIVATE,-20,-20);
				};
				class O_VZ_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_APC_Wheeled_04_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_VZ_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_VZ_Soldier_AA_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_VZ_Soldier_AA_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_VZ_Soldier_AA_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TEast,Rev_O_VZ_soldier_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TEast,Rev_O_VZ_soldier_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TEast,Rev_O_VZ_soldier_F,PRIVATE,-20,-20);
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class O_VZ_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_MBT_02_cannon_ghex_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_MBT_02_cannon_ghex_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TEast,Rev_O_VZ_MBT_02_cannon_ghex_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TEast,Rev_O_VZ_MBT_02_cannon_ghex_F,CORPORAL,20,-20);
				};
				class O_VZ_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TEast;
					faction = Revolucion_OPF_VZ_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,Rev_O_VZ_MBT_02_cannon_ghex_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_VZ_MBT_02_cannon_ghex_F,SERGEANT,10,-10);
				};
			};
		};
		class Revolucion_OPF_PNB_F
		{
			name = $STR_A3_R_CfgFactionClasses_BLU_PNB_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Rev_O_PNB_InfSquad
				{
					name = $STR_A3_R_CfgGroups_BLU_Infantry_B_PNB_InfSquad0;
					side = TEast;
					faction = Revolucion_OPF_PNB_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_PNB_Commander_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_PNB_Soldier_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_PNB_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_PNB_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Rev_O_PNB_soldier_Rifle_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Rev_O_PNB_soldier_AR_F,CORPORAL,15,-15);
				};
				class Rev_O_PNB_InfTeam
				{
					name = $STR_A3_R_CfgGroups_BLU_Infantry_B_PNB_InfTeam0;
					side = TEast;
					faction = Revolucion_OPF_PNB_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_PNB_Commander_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Rev_O_PNB_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Rev_O_PNB_soldier_Rifle_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Rev_O_PNB_soldier_LAT_F,PRIVATE,10,-10);
				};
				class Rev_O_PNB_InfSentry
				{
					name = $STR_A3_R_CfgGroups_BLU_Infantry_B_PNB_InfPatrol0;
					side = TEast;
					faction = Revolucion_OPF_PNB_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,Rev_O_PNB_Soldier_Rifle_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,Rev_O_PNB_soldier_F,PRIVATE,5,-5);
				};
			};
		};
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
					name = $STR_A3_R_CfgGroups_Indep_IND_Infantry_I_CDB_BanditGang0;
					side = TGuerrila;
					faction = Revolucion_IND_CDB_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_CDB_Soldier_Bandit_6_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_CDB_Soldier_Bandit_SG_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TGuerrila,Rev_I_CDB_Soldier_Bandit_7_F,CORPORAL,-5,-5);
				};
				class I_CDB_CriminalGang
				{
					name = $STR_A3_R_CfgGroups_Indep_IND_Infantry_I_CDB_CriminalGang0;
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
					name = $STR_A3_R_CfgGroups_Indep_IND_Infantry_I_CDB_EnfTeam0;
					side = TGuerrila;
					faction = Revolucion_IND_CDB_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_CDB_Soldier_Para_GL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_CDB_Soldier_Para_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TGuerrila,Rev_I_CDB_Soldier_Para_M_F,CORPORAL,-5,-5);
				};
				class I_CDB_EnforcerSquad
				{
					name = $STR_A3_R_CfgGroups_Indep_IND_Infantry_I_CDB_EnfSquad0;
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
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP0;
				class Rev_I_CDB_MotInf_Team
				{
					name = $STR_A3_R_CfgGroups_Indep_IND_Motorized_MTP_I_CDB_MotInfTeam0;
					side = TGuerrila;
					faction = Revolucion_IND_CDB_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_CDB_Van_02_Transport_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_CDB_Soldier_Bandit_7_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,Rev_I_CDB_Soldier_Bandit_3_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,Rev_I_CDB_Soldier_Bandit_2_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TGuerrila,Rev_I_CDB_Soldier_Bandit_1_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TGuerrila,Rev_I_CDB_Soldier_Bandit_5_F,CORPORAL,15,-15);
				};
				class Rev_I_CDB_Technicals
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0;
					side = TGuerrila;
					faction = Revolucion_IND_CDB_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_CDB_Offroad_02_LMG_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_CDB_Offroad_02_LMG_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TGuerrila,Rev_I_CDB_Offroad_02_AT_F,CORPORAL,-10,-10);
				};
			};
		};
		class Revolucion_IND_FRR_F
		{
			name = $STR_A3_R_CfgFactionClasses_BLU_FRR_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Rev_I_FRR_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TGuerrila;
					faction = Revolucion_IND_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_FRR_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_FRR_soldier_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TGuerrila,Rev_I_FRR_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,Rev_I_FRR_Soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,Rev_I_FRR_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TGuerrila,Rev_I_FRR_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TGuerrila,Rev_I_FRR_Soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,Rev_I_FRR_medic_F,PRIVATE,20,-20);
				};
				class Rev_I_FRR_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TGuerrila;
					faction = Revolucion_IND_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_FRR_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_FRR_soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TGuerrila,Rev_I_FRR_Soldier_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,Rev_I_FRR_Soldier_M_F,SERGEANT,10,-10);
					GROUP_UNIT(4,TGuerrila,Rev_I_FRR_soldier_AT_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TGuerrila,Rev_I_FRR_soldier_LAT_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TGuerrila,Rev_I_FRR_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,Rev_I_FRR_medic_F,PRIVATE,20,-20);
				};
				class Rev_I_FRR_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TGuerrila;
					faction = Revolucion_IND_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_FRR_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_FRR_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,Rev_I_FRR_Soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Rev_I_FRR_Soldier_LAT_F,PRIVATE,10,-10);
				};
				class Rev_I_FRR_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TGuerrila;
					faction = Revolucion_IND_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_FRR_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_FRR_Soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,Rev_I_FRR_Soldier_LAT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Rev_I_FRR_Soldier_LAT_F,PRIVATE,10,-10);
				};
				class Rev_I_FRR_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TGuerrila;
					faction = Revolucion_IND_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_FRR_Soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_FRR_Soldier_F,PRIVATE,5,-5);
				};
				class Rev_I_FRR_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TGuerrila;
					faction = Revolucion_IND_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_FRR_Soldier_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_FRR_Soldier_F,PRIVATE,5,-5);
				};
				class Rev_I_FRR_SniperTeam_M
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0;
					side = TGuerrila;
					faction = Revolucion_IND_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_FRR_Sharpshooter_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_FRR_Soldier_M_F,CORPORAL,5,-5);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class Rev_I_FRR_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TGuerrila;
					faction = Revolucion_IND_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_FRR_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_FRR_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,Rev_I_FRR_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Rev_I_FRR_medic_F,PRIVATE,10,-10);
				};
				class Rev_I_FRR_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TGuerrila;
					faction = Revolucion_IND_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_FRR_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_FRR_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,Rev_I_FRR_Soldier_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Rev_I_FRR_Soldier_exp_F,PRIVATE,10,-10);
				};
				class Rev_I_FRR_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TGuerrila;
					faction = Revolucion_IND_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_FRR_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_FRR_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,Rev_I_FRR_engineer_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Rev_I_FRR_engineer_F,PRIVATE,10,-10);
				};
			};
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP0;
				class Rev_I_FRR_MotInf_Team
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_MotInfTeam0;
					side = TGuerrila;
					faction = Revolucion_IND_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_FRR_Offroad_01_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_FRR_Soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,Rev_I_FRR_Soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,Rev_I_FRR_Soldier_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TGuerrila,Rev_I_FRR_medic_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TGuerrila,Rev_I_FRR_Soldier_F,CORPORAL,15,-15);
				};
				class Rev_I_FRR_Technicals
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0;
					side = TGuerrila;
					faction = Revolucion_IND_FRR_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Rev_I_FRR_Offroad_01_armed_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,Rev_I_FRR_Offroad_01_armed_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TGuerrila,Rev_I_FRR_Offroad_01_AT_F,CORPORAL,-10,-10);
				};
			};
		};
	}; 
};