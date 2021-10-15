class CfgPatches
{
	class A3_Revolucion_Soft_F_Revolucion_Van_01
	{
		addonRootClass = A3_Revolucion_Soft_F_Revolucion;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis_Van_01,
			A3_Revolucion_Soft_F_Revolucion,
			A3_Soft_F_Bootcamp_Van_01
		};
		requiredVersion = 0.1;
		units[] = 
		{
			// Cartel De Baracas
			Rev_I_CDB_Van_01_transport_F,
			Rev_I_CDB_Van_01_box_F
		};
		weapons[] = {/* Automated */};
	};
};