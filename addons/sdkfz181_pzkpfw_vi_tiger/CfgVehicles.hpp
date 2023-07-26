class CfgVehicles {
    class SPE_Tank_base;
    class SPE_PzKpfwVI_H1_base: SPE_Tank_base {
        ace_refuel_fuelCapacity = 540;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        fuelCapacity = "195 * 0.165";
        #include "CfgACRE_Axis_base.hpp"
    };
};