﻿class CfgPatches
{
	class A3_revolucion_Armor_F_revolucion_APC_Wheeled_03
	{
		addonRootClass = A3_revolucion_Armor_F_revolucion;
		requiredAddons[] = {A3_revolucion_Armor_F_revolucion};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBDF.hpp" */
            rev_B_APC_Wheeled_03_cannon_F,
        };
		weapons[] = {/* Automated */};
	};
};