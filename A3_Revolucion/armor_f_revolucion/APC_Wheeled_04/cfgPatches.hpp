class CfgPatches
{
	class A3_revolucion_Armor_F_revolucion_APC_Wheeled_04
	{
		addonRootClass = A3_revolucion_Armor_F_revolucion;
		requiredAddons[] = {A3_revolucion_Armor_F_revolucion};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgFRR.hpp" */
            Rev_B_FRR_APC_Wheeled_04_cannon_F,
			Rev_I_FRR_APC_Wheeled_04_cannon_F,
			Rev_O_FRR_APC_Wheeled_04_cannon_F

			/* From "cfgVenezuela.hpp" */
			Rev_O_VZ_APC_Wheeled_04_Cannon_F
        };
		weapons[] = {/* Automated */};
	};
};