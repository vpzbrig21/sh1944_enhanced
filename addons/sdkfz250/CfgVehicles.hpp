class CfgVehicles {
    class SPE_WheeledTracked_APC_base;
    class SPE_SdKfz250_base: SPE_WheeledTracked_APC_base {
        ace_refuel_fuelCapacity = 140;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        fuelCapacity = "350 * 0.165";
        #include "CfgACRE_Axis_base.hpp"
    };
};