class CfgVehicles
{
    /* Definitions */
    #include "\A3_Aegis\macros_smokeShells.hpp"

    /* Bases */
    class SoldierGB;

    /* Factions */
    class I_Soldier_base_F: SoldierGB
    {
        class EventHandlers;
    };
    class B_Soldier_F;
    class B_CTRG_Soldier_base_F;
    class B_Soldier_SL_F;
    class I_soldier_F: I_Soldier_base_F{};
    class I_L_Soldier_Base_F: I_Soldier_base_F{};
    class O_G_Soldier_F;
    class I_Soldier_lite_F;
    class I_officer_F: I_Soldier_base_F{};
    class I_G_Soldier_base_F: SoldierGB
    {
        class EventHandlers;
    };

    class B_CTRG_Soldier_F: B_CTRG_Soldier_base_F
    {
        class EventHandlers;
    };
    class B_Support_Mort_F;
    class O_Support_Mort_F;
    
    #include "cfgBDF.hpp"      // Baracan Defence Force
    #include "cfgCivil.hpp"    // Baracan Civs
    #include "cfgPolicia.hpp"   // Policia
    #include "cfgFRR.hpp"       // FRR
    #include "cfgFASR.hpp"      // FASR
    #include "cfgVenezuela.hpp" // Venezuela
    //#include "cfgCartels.hpp"   // Cartels
};