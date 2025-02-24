class CfgPatches
{
	class A3_Revolucion_Static_F_Revolucion_RF_CommandoMortar
	{
		addonRootClass = A3_Revolucion_Static_F_Revolucion_RF;
		requiredAddons[] =
		{
			A3_Revolucion_Static_F_Revolucion_RF,
			RF_Vehicles
		};
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		units[] =
        {
			/* BDF */
			Rev_B_FDB_CommandoMortar_RF,

			/* FASR */
			Rev_O_FASR_CommandoMortar_RF,

			/* FRR */
			Rev_B_FRR_CommandoMortar_RF,
			Rev_I_FRR_CommandoMortar_RF,
			Rev_O_FRR_CommandoMortar_RF,

			/* Venezuela */
			Rev_O_VZ_CommandoMortar_RF,
        };
		weapons[] = {/* Automated */};
	};
};