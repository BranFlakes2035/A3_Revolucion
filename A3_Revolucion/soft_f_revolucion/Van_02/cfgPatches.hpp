class CfgPatches
{
	class A3_Revolucion_Soft_F_Revolucion_Van_02
	{
		addonRootClass = A3_Revolucion_Soft_F_Revolucion;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis_Van_02,
			A3_Revolucion_Soft_F_Revolucion,
			A3_Soft_F_Orange_Van_02
		};
		requiredVersion = 0.1;
		units[] = 
		{
			// Cartel De Baracas
			Rev_I_CDB_Van_02_transport_F,
			Rev_I_CDB_Van_02_Vehicle_F,

			// FRR
			Rev_B_FRR_Van_02_transport_F,
			Rev_B_FRR_Van_02_Vehicle_F,
			Rev_I_FRR_Van_02_transport_F,
			Rev_I_FRR_Van_02_Vehicle_F,
			Rev_O_FRR_Van_02_transport_F,
			Rev_O_FRR_Van_02_Vehicle_F
		};
		weapons[] = {/* Automated */};
	};
};