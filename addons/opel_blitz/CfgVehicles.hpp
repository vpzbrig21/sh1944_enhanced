class CfgVehicles {
    class SPE_Truck_base;
    class SPE_OpelBlitz_base: SPE_Truck_base {
        	fuelCapacity = "320 * 0.165";
        ace_refuel_fuelCapacity = 80;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
		#include "CfgACRE_Axis_base.hpp"

    };
    class SPE_OpelBlitz_Repair: SPE_OpelBlitz_base {
        ace_repair_canRepair = 1;
        transportRepair = 0;

    };
    class SPE_OpelBlitz_Ammo: SPE_OpelBlitz_base{
        ace_rearm_defaultSupply = 12000;
        transportAmmo =0;

    };
    class SPE_OpelBlitz_Fuel: SPE_OpelBlitz_base{
        ace_refuel_fuelCargo = 2800;
        transportFuel = 0;

    };
};