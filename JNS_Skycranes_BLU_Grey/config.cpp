class CfgPatches {
  class JNS_Skycranes_BLU_Grey {
    units[] = {
      // Helicopters
      "JNS_Skycrane_BLU_Grey",
      "JNS_Skycrane_Ammo_BLU_Grey",
      "JNS_Skycrane_Bench_BLU_Grey",
      "JNS_Skycrane_Cargo_BLU_Grey",
      "JNS_Skycrane_Transport_BLU_Grey",
      "JNS_Skycrane_Fuel_BLU_Grey",
      "JNS_Skycrane_Medical_BLU_Grey",
      "JNS_Skycrane_Repair_BLU_Grey",
      // Pods
      "JNS_Skycrane_Pod_Ammo_BLU_Grey",
      "JNS_Skycrane_Pod_Bench_BLU_Grey",
      "JNS_Skycrane_Pod_Cargo_BLU_Grey",
      "JNS_Skycrane_Pod_Transport_BLU_Grey",
      "JNS_Skycrane_Pod_Fuel_BLU_Grey",
      "JNS_Skycrane_Pod_Medical_BLU_Grey",
      "JNS_Skycrane_Pod_Repair_BLU_Grey"
    };
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {JNS_Skycranes_Core, JNS_Skycranes_Textures_Grey};
    version = "2.0.0";
    versionStr = "2.0.0";
    versionAr[] = {2,0,0};
    author[] = {"Takelmeifter", "Jonpas"};
    authorUrl = "https://github.com/jonpas";
  };
};


// Scope definitions
#define public 2

// Macro definitions
#define MACRO_CONFIG \
  scope = public; \
  vehicleClass = JNS_Skycranes_Grey; \
  author = "Takelmeifter";


class CfgVehicles {
// Helicopters
  class JNS_Skycrane_BLU;
  class JNS_Skycrane_BLU_Grey: JNS_Skycrane_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa"
    };
  };

  class JNS_Skycrane_Ammo_BLU;
  class JNS_Skycrane_Ammo_BLU_Grey: JNS_Skycrane_Ammo_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Ammo) Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa",
    };
  };

  class JNS_Skycrane_Bench_BLU;
  class JNS_Skycrane_Bench_BLU_Grey: JNS_Skycrane_Bench_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Bench) Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_black_CO.paa"
    };
  };

  class JNS_Skycrane_Cargo_BLU;
  class JNS_Skycrane_Cargo_BLU_Grey: JNS_Skycrane_Cargo_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Cargo) Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Transport_BLU;
  class JNS_Skycrane_Transport_BLU_Grey: JNS_Skycrane_Transport_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Transport) Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Fuel_BLU;
  class JNS_Skycrane_Fuel_BLU_Grey: JNS_Skycrane_Fuel_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Fuel) Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
    };
  };

  class JNS_Skycrane_Medical_BLU;
  class JNS_Skycrane_Medical_BLU_Grey: JNS_Skycrane_Medical_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Medical) Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Repair_BLU;
  class JNS_Skycrane_Repair_BLU_Grey: JNS_Skycrane_Repair_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Repair) Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };

// Pods
  class JNS_Skycrane_Pod_Ammo_BLU;
  class JNS_Skycrane_Pod_Ammo_BLU_Grey: JNS_Skycrane_Pod_Ammo_BLU {
    MACRO_CONFIG
    displayName = "Skycrane Ammo Pod (Grey)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Bench_BLU;
  class JNS_Skycrane_Pod_Bench_BLU_Grey: JNS_Skycrane_Pod_Bench_BLU {
    MACRO_CONFIG
    displayName = "Skycrane Bench Pod (Grey)";
    hiddenSelections[] = {"Camo_1"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Cargo_BLU;
  class JNS_Skycrane_Pod_Cargo_BLU_Grey: JNS_Skycrane_Pod_Cargo_BLU {
    MACRO_CONFIG
    displayName = "Skycrane Cargo Pod (Grey)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Transport_BLU;
  class JNS_Skycrane_Pod_Transport_BLU_Grey: JNS_Skycrane_Pod_Transport_BLU {
    MACRO_CONFIG
    displayName = "Skycrane Transport Pod (Grey)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Fuel_BLU;
  class JNS_Skycrane_Pod_Fuel_BLU_Grey: JNS_Skycrane_Pod_Fuel_BLU {
    MACRO_CONFIG
    displayName = "Skycrane Fuel Pod (Grey)";
    hiddenSelections[] = {"Camo_1"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Medical_BLU;
  class JNS_Skycrane_Pod_Medical_BLU_Grey: JNS_Skycrane_Pod_Medical_BLU {
    MACRO_CONFIG
    displayName = "Skycrane Medical Pod (Grey)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Repair_BLU;
  class JNS_Skycrane_Pod_Repair_BLU_Grey: JNS_Skycrane_Pod_Repair_BLU {
    MACRO_CONFIG
    displayName = "Skycrane Repair Pod (Grey)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };
};
