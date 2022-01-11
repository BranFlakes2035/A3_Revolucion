class CfgPatches
{
	class A3_revolucion_Soft_F_revolucion_Offroad_01
	{
		addonRootClass = A3_revolucion_Soft_F_revolucion;
		requiredAddons[] = {A3_revolucion_Soft_F_revolucion};
		requiredVersion = 0.1;
		units[] =
        {
			/* From "cfgBDF.hpp" */
            Rev_B_BDF_Offroad_01_F,
            Rev_B_BDF_Offroad_01_armed_F,
            Rev_B_BDF_Offroad_01_covered_F,
			Rev_B_BDF_Offroad_01_Comms_F,

			/* From "cfgCartel.hpp" */
			Rev_I_CDB_Offroad_01_F,
			Rev_I_CDB_Offroad_armed_01_F,
			Rev_I_CDB_Offroad_AT_01_F,
			Rev_I_CDB_Offroad_01_covered_F,

			/* From "cfgFASR.hpp" */
			Rev_O_FASR_Offroad_01_F,
            Rev_O_FASR_Offroad_01_armed_F,
			Rev_O_FASR_Offroad_01_AT_F,
            Rev_O_FASR_Offroad_01_covered_F,
			Rev_O_FASR_Offroad_01_Comms_F,

			/* From "cfgFRR.hpp" */
			Rev_B_FRR_Offroad_01_F,
			Rev_B_FRR_Offroad_01_armed_F,
			Rev_B_FRR_Offroad_01_AT_F,
			Rev_B_FRR_Offroad_01_repair_F,
			Rev_I_FRR_Offroad_01_F,
			Rev_I_FRR_Offroad_01_armed_F,
			Rev_I_FRR_Offroad_01_AT_F,
			Rev_I_FRR_Offroad_01_repair_F,
			Rev_O_FRR_Offroad_01_F,
			Rev_O_FRR_Offroad_01_armed_F,
			Rev_O_FRR_Offroad_01_AT_F,
			Rev_O_FRR_Offroad_01_repair_F,
			Rev_B_FRR_Offroad_01_armor_base_F,
			Rev_B_FRR_Offroad_01_armor_armed_F,
			Rev_B_FRR_Offroad_01_armor_AT_F,
			Rev_I_FRR_Offroad_01_armor_base_F,
			Rev_I_FRR_Offroad_01_armor_armed_F,
			Rev_I_FRR_Offroad_01_armor_AT_F,
			Rev_O_FRR_Offroad_01_armor_base_F,
			Rev_O_FRR_Offroad_01_armor_armed_F,
			Rev_O_FRR_Offroad_01_armor_AT_F,

			/* From "cfgPolicia.hpp" */
			Rev_B_PNB_Offroad_01_policia_F,
			Rev_B_PNB_Offroad_01_covered_F,
			Rev_B_PNB_Offroad_01_comms_F,
			Rev_O_PNB_Offroad_01_policia_F,
			Rev_O_PNB_Offroad_01_covered_F,
			Rev_O_PNB_Offroad_01_comms_F

        };
		weapons[] = {/* Automated */};
	};
};