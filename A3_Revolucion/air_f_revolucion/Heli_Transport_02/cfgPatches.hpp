class CfgPatches
{
	class A3_Revolucion_Air_F_Revolucion_Heli_Transport_02
	{
		addonRootClass = A3_Revolucion_Air_F_Revolucion;
		requiredAddons[] = {A3_Revolucion_Air_F_Revolucion};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgGER.hpp" */
            Rev_C_Heli_Transport_02_civil_F,
    	    Rev_C_Heli_Transport_02_VIP_F
		};
		weapons[] = {/* Automated */};
	};
};