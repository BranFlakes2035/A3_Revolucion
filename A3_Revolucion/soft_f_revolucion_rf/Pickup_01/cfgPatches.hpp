class CfgPatches
{
	class A3_Revolucion_Soft_F_Revolucion_RF_Pickup_01
	{
		addonRootClass = A3_Revolucion_Soft_F_Revolucion_RF;
		requiredAddons[] = 
		{
			A3_Revolucion_Soft_F_Revolucion_RF,
			RF_Vehicles_Pickup_01
		};
		skipWhenMissingDependencies = 1;
		requiredVersion = 0.1;
		units[] = 
		{
			/* From "cfgBDF.hpp" */
			Rev_B_BDF_Pickup_F,
			Rev_B_BDF_Pickup_Comms_F,
			Rev_B_BDF_Pickup_mmg_F,
			Rev_B_BDF_Pickup_aat_F,
			Rev_B_BDF_Pickup_rcws_F,

			/* From "cfgPolicia.hpp" */
			Rev_B_PNB_Pickup_F,
			Rev_O_PNB_Pickup_F,

			/* From "cfgCartel.hpp" */
			Rev_I_Cartel_Pickup_F,
			Rev_I_Cartel_Pickup_Comms_F,
			Rev_I_Cartel_Pickup_HMG_F,

			/* From "cfgCivil.hpp" */
			Rev_C_Pickup_RF,
			Rev_C_Pickup_Covered_RF,
			Rev_C_Pickup_Repair_RF
		};
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};