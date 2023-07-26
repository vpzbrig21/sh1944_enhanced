class CfgVehicles {
    class SPE_Tank_base;
    class SPE_PzKpfwIII_Base: SPE_Tank_base {
        ace_refuel_fuelCapacity = 320;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        fuelCapacity = "175 * 0.165";
        #include "CfgACRE_Axis_base.hpp"
    };
};