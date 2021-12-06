class CfgPatches
{
	class A3_Revolucion_Supplies_F_Revolucion_Ammoboxes
	{
		addonRootClass = A3_Revolucion_Supplies_F_Revolucion;
		requiredAddons[] = {A3_Revolucion_Supplies_F_Revolucion};
		requiredVersion = 0.1;
		units[] =
        {
            // FASR
            Rev_Box_FASR_Wps_F,
            Rev_Box_FASR_Ammo_F,
            Rev_Box_FASR_WpsLaunch_F,
            Rev_O_FASR_supplyCrate_F,

            // BDF
            Rev_Box_BDF_Wps_F,
            Rev_Box_BDF_Ammo_F,
            Rev_Box_BDF_WpsLaunch_F,
            Rev_B_BDF_supplyCrate_F,

            // FRR
            Rev_Box_FRR_Wps_F,
            Rev_Box_FRR_Ammo_F,
            Rev_Box_FRR_WpsLaunch_F,
            Rev_B_FRR_supplyCrate_F,

            // Venezuela
            Rev_Box_VZ_Wps_F,
            Rev_Box_VZ_Ammo_F,
            Rev_Box_VZ_WpsLaunch_F,
            Rev_O_VZ_supplyCrate_F

        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};