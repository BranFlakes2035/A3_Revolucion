class CfgPatches
{
	class A3_Revolucion_Soft_F_Revolucion_Truck_02
	{
		addonRootClass = A3_Revolucion_Soft_F_Revolucion;
		requiredAddons[] =
		{
			A3_Revolucion_Soft_F_Revolucion,
			A3_Soft_F_Beta_Truck_02,
			A3_Soft_F_Enoch_Truck_02,
			A3_Soft_F_Exp_Truck_02,
			A3_Soft_F_Gamma_Truck_02,
			A3_Soft_F_Orange_Truck_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBDF.hpp" */
            Rev_B_BDF_Truck_02_F,
            Rev_B_BDF_Truck_02_transport_F,
            Rev_B_BDF_Truck_02_box_F,
            Rev_B_BDF_Truck_02_medical_F,
            Rev_B_BDF_Truck_02_Ammo_F,
            Rev_B_BDF_Truck_02_fuel_F,
            Rev_B_BDF_Truck_02_cargo_F,
            Rev_B_BDF_Truck_02_flatbed_F,

			/* From "cfgFASR.hpp" */
            Rev_O_FASR_Truck_02_F,
            Rev_O_FASR_Truck_02_transport_F,
            Rev_O_FASR_Truck_02_box_F,
            Rev_O_FASR_Truck_02_medical_F,
            Rev_O_FASR_Truck_02_Ammo_F,
            Rev_O_FASR_Truck_02_fuel_F,
            Rev_O_FASR_Truck_02_cargo_F,
            Rev_O_FASR_Truck_02_flatbed_F,
			Rev_O_FASR_Truck_02_MRL_F,
			Rev_O_FASR_Truck_02_AA_F,

			/*From "cfgVenezuela.hpp" */
			Rev_O_VZ_Truck_02_F,
			Atlas_O_VZ_Truck_02_transport_F,
			Rev_O_VZ_Truck_02_box_F,
			Rev_O_VZ_Truck_02_medical_F,
			Rev_O_VZ_Truck_02_Ammo_F,
			Rev_O_VZ_Truck_02_fuel_F,
			Rev_O_VZ_Truck_02_cargo_F,
			Rev_O_VZ_Truck_02_flatbed_F
        };
		weapons[] = {/* Automated */};
	};
};