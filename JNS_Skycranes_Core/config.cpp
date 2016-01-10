class CfgPatches {
  class JNS_Skycranes_Core {
    units[] = {};
    weapons[] = {};
    requiredVersion = 1.42;
    requiredAddons[] = {"a3_air_f_heli_heli_transport_04"};
    version = "2.0.0";
    versionStr = "2.0.0";
    versionAr[] = {2,0,0};
    author[] = {"Jonpas"};
    authorUrl = "https://github.com/jonpas";
  };
};


// Sides definitions
#define WEST 1
#define RESISTANCE 2

// Macro definitions
#define MACRO_BLUFOR \
  scope = 0; \
  faction = "BLU_F"; \
  side = WEST; \
  crew = "B_HeliPilot_F"; \
  typicalCargo[] = {"B_Soldier_lite_F"};

#define MACRO_INDEP \
  scope = 0; \
  faction = "IND_F"; \
  side = RESISTANCE; \
  crew = "I_HeliPilot_F"; \
  typicalCargo[] = {"I_Soldier_lite_F"};


class CfgVehicleClasses {
  class JNS_Skycranes_Black {
    displayName = "Skycranes Black";
  };
  class JNS_Skycranes_Grey {
    displayName = "Skycranes Grey";
  };
  class JNS_Skycranes_Green {
    displayName = "Skycranes Green";
  };
};


class CfgVehicles {
// Helicopters
  class O_Heli_Transport_04_F; // Mi-290 Taru
  class JNS_Skycrane_BLU_Base: O_Heli_Transport_04_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_IND_Base: O_Heli_Transport_04_F {
    MACRO_INDEP
  };

  class O_Heli_Transport_04_ammo_F; // Mi-290 Taru (Ammo)
  class JNS_Skycrane_Ammo_BLU_Base: O_Heli_Transport_04_ammo_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Ammo_IND_Base: O_Heli_Transport_04_ammo_F {
    MACRO_INDEP
  };

  class O_Heli_Transport_04_bench_F; // Mi-290 Taru (Bench)
  class JNS_Skycrane_Bench_BLU_Base: O_Heli_Transport_04_bench_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Bench_IND_Base: O_Heli_Transport_04_bench_F {
    MACRO_INDEP
  };

  class O_Heli_Transport_04_box_F; // Mi-290 Taru (Cargo)
  class JNS_Skycrane_Cargo_BLU_Base: O_Heli_Transport_04_box_F {
    MACRO_BLUFOR
    #include "inventory_Heli_BLU.hpp"
  };
  class JNS_Skycrane_Cargo_IND_Base: O_Heli_Transport_04_box_F {
    MACRO_INDEP
    #include "inventory_Heli_IND.hpp"
  };

  class O_Heli_Transport_04_covered_F; // Mi-290 Taru (Transport)
  class JNS_Skycrane_Transport_BLU_Base: O_Heli_Transport_04_covered_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Transport_IND_Base: O_Heli_Transport_04_covered_F {
    MACRO_INDEP
  };

  class O_Heli_Transport_04_fuel_F; // Mi-290 Taru (Fuel)
  class JNS_Skycrane_Fuel_BLU_Base: O_Heli_Transport_04_fuel_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Fuel_IND_Base: O_Heli_Transport_04_fuel_F {
    MACRO_INDEP
  };

  class O_Heli_Transport_04_medevac_F; // Mi-290 Taru (Medical)
  class JNS_Skycrane_Medical_BLU_Base: O_Heli_Transport_04_medevac_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Medical_IND_Base: O_Heli_Transport_04_medevac_F {
    MACRO_INDEP
  };

  class O_Heli_Transport_04_repair_F; // Mi-290 Taru (Repair)
  class JNS_Skycrane_Repair_BLU_Base: O_Heli_Transport_04_repair_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Repair_IND_Base: O_Heli_Transport_04_repair_F {
    MACRO_INDEP
  };


// Pods
  class Land_Pod_Heli_Transport_04_ammo_F; // Taru Ammo Pod
  class JNS_Skycrane_Pod_Ammo_BLU_Base: Land_Pod_Heli_Transport_04_ammo_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Pod_Ammo_IND_Base: Land_Pod_Heli_Transport_04_ammo_F {
    MACRO_INDEP
  };

  class Land_Pod_Heli_Transport_04_bench_F; // Taru Bench Pod
  class JNS_Skycrane_Pod_Bench_BLU_Base: Land_Pod_Heli_Transport_04_bench_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Pod_Bench_IND_Base: Land_Pod_Heli_Transport_04_bench_F {
    MACRO_INDEP
  };

  class Land_Pod_Heli_Transport_04_box_F; // Taru Cargo Pod
  class JNS_Skycrane_Pod_Cargo_BLU_Base: Land_Pod_Heli_Transport_04_box_F {
    MACRO_BLUFOR
    #include "inventory_Pod_BLU.hpp"
  };
  class JNS_Skycrane_Pod_Cargo_IND_Base: Land_Pod_Heli_Transport_04_box_F {
    MACRO_INDEP
    #include "inventory_Pod_IND.hpp"
  };

  class Land_Pod_Heli_Transport_04_covered_F; // Taru Transport Pod
  class JNS_Skycrane_Pod_Transport_BLU_Base: Land_Pod_Heli_Transport_04_covered_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Pod_Transport_IND_Base: Land_Pod_Heli_Transport_04_covered_F {
    MACRO_INDEP
  };

  class Land_Pod_Heli_Transport_04_fuel_F; // Taru Fuel Pod
  class JNS_Skycrane_Pod_Fuel_BLU_Base: Land_Pod_Heli_Transport_04_fuel_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Pod_Fuel_IND_Base: Land_Pod_Heli_Transport_04_fuel_F {
    MACRO_INDEP
  };

  class Land_Pod_Heli_Transport_04_medevac_F; // Taru Medical Pod
  class JNS_Skycrane_Pod_Medical_BLU_Base: Land_Pod_Heli_Transport_04_medevac_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Pod_Medical_IND_Base: Land_Pod_Heli_Transport_04_medevac_F {
    MACRO_INDEP
  };

  class Land_Pod_Heli_Transport_04_repair_F; // Taru Repair Pod
  class JNS_Skycrane_Pod_Repair_BLU_Base: Land_Pod_Heli_Transport_04_repair_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Pod_Repair_IND_Base: Land_Pod_Heli_Transport_04_repair_F {
    MACRO_INDEP
  };
};
