class CfgPatches {
  class JNS_Skycranes_Core {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {};
    version = "1.1.0";
    versionStr = "1.1.0";
    versionAr[] = {1,1,0};
    author[] = {"Jonpas"};
    authorUrl = "https://github.com/jonpas";
  };
};


// Scope definitions
#define private 0

// Sides definitions
#define WEST 1
#define RESISTANCE 2

// Macro definitions
#define MACRO_BLUFOR \
  scope = private; \
  faction = BLU_F; \
  side = WEST; \
  crew = "B_HeliPilot_F"; \
  typicalCargo[] = {"B_Soldier_lite_F"};

#define MACRO_INDEP \
  scope = private; \
  faction = IND_F; \
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
  class JNS_Skycrane_BLU: O_Heli_Transport_04_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_IND: O_Heli_Transport_04_F {
    MACRO_INDEP
  };

  class O_Heli_Transport_04_ammo_F; // Mi-290 Taru (Ammo)
  class JNS_Skycrane_Ammo_BLU: O_Heli_Transport_04_ammo_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Ammo_IND: O_Heli_Transport_04_ammo_F {
    MACRO_INDEP
  };

  class O_Heli_Transport_04_bench_F; // Mi-290 Taru (Bench)
  class JNS_Skycrane_Bench_BLU: O_Heli_Transport_04_bench_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Bench_IND: O_Heli_Transport_04_bench_F {
    MACRO_INDEP
  };

  class O_Heli_Transport_04_box_F; // Mi-290 Taru (Cargo)
  class JNS_Skycrane_Cargo_BLU: O_Heli_Transport_04_box_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Cargo_IND: O_Heli_Transport_04_box_F {
    MACRO_INDEP
  };

  class O_Heli_Transport_04_covered_F; // Mi-290 Taru (Transport)
  class JNS_Skycrane_Transport_BLU: O_Heli_Transport_04_covered_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Transport_IND: O_Heli_Transport_04_covered_F {
    MACRO_INDEP
  };

  class O_Heli_Transport_04_fuel_F; //Mi-290 Taru (Fuel)
  class JNS_Skycrane_Fuel_BLU: O_Heli_Transport_04_fuel_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Fuel_IND: O_Heli_Transport_04_fuel_F {
    MACRO_INDEP
  };

  class O_Heli_Transport_04_medevac_F; // Mi-290 Taru (Medical)
  class JNS_Skycrane_Medical_BLU: O_Heli_Transport_04_medevac_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Medical_IND: O_Heli_Transport_04_medevac_F {
    MACRO_INDEP
  };

  class O_Heli_Transport_04_repair_F; // Mi-290 Taru (Repair)
  class JNS_Skycrane_Repair_BLU: O_Heli_Transport_04_repair_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Repair_IND: O_Heli_Transport_04_repair_F {
    MACRO_INDEP
  };


// Pods
  class Land_Pod_Heli_Transport_04_ammo_F;
  class JNS_Skycrane_Pod_Ammo_BLU: Land_Pod_Heli_Transport_04_ammo_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Pod_Ammo_IND: Land_Pod_Heli_Transport_04_ammo_F {
    MACRO_INDEP
  };

  class Land_Pod_Heli_Transport_04_bench_F;
  class JNS_Skycrane_Pod_Bench_BLU: Land_Pod_Heli_Transport_04_bench_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Pod_Bench_IND: Land_Pod_Heli_Transport_04_bench_F {
    MACRO_INDEP
  };

  class Land_Pod_Heli_Transport_04_box_F;
  class JNS_Skycrane_Pod_Cargo_BLU: Land_Pod_Heli_Transport_04_box_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Pod_Cargo_IND: Land_Pod_Heli_Transport_04_box_F {
    MACRO_INDEP
  };

  class Land_Pod_Heli_Transport_04_covered_F;
  class JNS_Skycrane_Pod_Transport_BLU: Land_Pod_Heli_Transport_04_covered_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Pod_Transport_IND: Land_Pod_Heli_Transport_04_covered_F {
    MACRO_INDEP
  };

  class Land_Pod_Heli_Transport_04_fuel_F;
  class JNS_Skycrane_Pod_Fuel_BLU: Land_Pod_Heli_Transport_04_fuel_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Pod_Fuel_IND: Land_Pod_Heli_Transport_04_fuel_F {
    MACRO_INDEP
  };

  class Land_Pod_Heli_Transport_04_medevac_F;
  class JNS_Skycrane_Pod_Medical_BLU: Land_Pod_Heli_Transport_04_medevac_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Pod_Medical_IND: Land_Pod_Heli_Transport_04_medevac_F {
    MACRO_INDEP
  };

  class Land_Pod_Heli_Transport_04_repair_F;
  class JNS_Skycrane_Pod_Repair_BLU: Land_Pod_Heli_Transport_04_repair_F {
    MACRO_BLUFOR
  };
  class JNS_Skycrane_Pod_Repair_IND: Land_Pod_Heli_Transport_04_repair_F {
    MACRO_INDEP
  };
};
