class CfgVehicles {
    class SPE_WheeledTracked_APC_base;
    class SPE_Halftrack_base: SPE_WheeledTracked_base {
        fuelCapacity = "320 * 0.165";
        ace_refuel_fuelCapacity = 230;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
		#include "CfgACRE_Allies_base.hpp"

    };
    class SPE_US_M3_Halftrack_Repair: SPE_Halftrack_base {
        ace_repair_canRepair = 1;
        transportRepair = 0;

    };
    class SPE_US_M3_Halftrack_Ammo: SPE_Halftrack_base{
        ace_rearm_defaultSupply = 12000;
        transportAmmo =0;

    };
    class SPE_OpelBlitz_Fuel: SPE_Halftrack_base{
        ace_refuel_fuelCargo = 972;
        transportFuel = 0;

    };
};