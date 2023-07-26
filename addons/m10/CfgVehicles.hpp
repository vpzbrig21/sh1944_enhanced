class CfgVehicles {
    class SPE_Tank_base;
    class SPE_M10: SPE_Tank_base {
        fuelCapacity = "320 * 0.165";
        ace_refuel_fuelCapacity = 620;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        #include "CfgACRE_Allies_base.hpp"

    };
};