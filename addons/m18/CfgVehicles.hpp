class CfgVehicles {
    class SPE_Tank_base;
    class SPE_Sherman_base: SPE_Tank_base {
        fuelCapacity = "240 * 0.165";
        ace_refuel_fuelCapacity = 650;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        #include "CfgACRE_Allies_base.hpp"
    };
};