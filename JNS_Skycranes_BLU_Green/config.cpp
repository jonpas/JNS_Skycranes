class CfgPatches {
  class JNS_Skycranes_BLU_Green {
    units[] = {
      // Helicopters
      "JNS_Skycrane_BLU_Green",
      "JNS_Skycrane_Ammo_BLU_Green",
      "JNS_Skycrane_Bench_BLU_Green",
      "JNS_Skycrane_Cargo_BLU_Green",
      "JNS_Skycrane_Transport_BLU_Green",
      "JNS_Skycrane_Fuel_BLU_Green",
      "JNS_Skycrane_Medical_BLU_Green",
      "JNS_Skycrane_Repair_BLU_Green",
      // Pods
      "JNS_Skycrane_Pod_Ammo_BLU_Green",
      "JNS_Skycrane_Pod_Bench_BLU_Green",
      "JNS_Skycrane_Pod_Cargo_BLU_Green",
      "JNS_Skycrane_Pod_Transport_BLU_Green",
      "JNS_Skycrane_Pod_Fuel_BLU_Green",
      "JNS_Skycrane_Pod_Medical_BLU_Green",
      "JNS_Skycrane_Pod_Repair_BLU_Green"
    };
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {JNS_Skycranes_Core, JNS_Skycranes_Textures_Green};
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
  vehicleClass = JNS_Skycranes_Green; \
  author = "Takelmeifter";


class CfgVehicles {
// Helicopters
  class JNS_Skycrane_BLU;
  class JNS_Skycrane_BLU_Green: JNS_Skycrane_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane Green";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\base_02_co.paa"
    };
  };

  class JNS_Skycrane_Ammo_BLU;
  class JNS_Skycrane_Ammo_BLU_Green: JNS_Skycrane_Ammo_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Ammo) Green";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext02_co.paa",
    };
  };

  class JNS_Skycrane_Bench_BLU;
  class JNS_Skycrane_Bench_BLU_Green: JNS_Skycrane_Bench_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Bench) Green";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\base_02_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_black_CO.paa"
    };
  };

  class JNS_Skycrane_Cargo_BLU;
  class JNS_Skycrane_Cargo_BLU_Green: JNS_Skycrane_Cargo_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Cargo) Green";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Transport_BLU;
  class JNS_Skycrane_Transport_BLU_Green: JNS_Skycrane_Transport_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Transport) Green";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Fuel_BLU;
  class JNS_Skycrane_Fuel_BLU_Green: JNS_Skycrane_Fuel_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Fuel) Green";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\base_02_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
    };
  };

  class JNS_Skycrane_Medical_BLU;
  class JNS_Skycrane_Medical_BLU_Green: JNS_Skycrane_Medical_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Medical) Green";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Repair_BLU;
  class JNS_Skycrane_Repair_BLU_Green: JNS_Skycrane_Repair_BLU {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Repair) Green";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext02_co.paa"
    };
  };

// Pods
  class JNS_Skycrane_Pod_Ammo_BLU;
  class JNS_Skycrane_Pod_Ammo_BLU_Green: JNS_Skycrane_Pod_Ammo_BLU {
    MACRO_CONFIG
    displayName = "Skycrane Ammo Pod (Green)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Bench_BLU;
  class JNS_Skycrane_Pod_Bench_BLU_Green: JNS_Skycrane_Pod_Bench_BLU {
    MACRO_CONFIG
    displayName = "Skycrane Bench Pod (Green)";
    hiddenSelections[] = {"Camo_1"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Cargo_BLU;
  class JNS_Skycrane_Pod_Cargo_BLU_Green: JNS_Skycrane_Pod_Cargo_BLU {
    MACRO_CONFIG
    displayName = "Skycrane Cargo Pod (Green)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Transport_BLU;
  class JNS_Skycrane_Pod_Transport_BLU_Green: JNS_Skycrane_Pod_Transport_BLU {
    MACRO_CONFIG
    displayName = "Skycrane Transport Pod (Green)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Fuel_BLU;
  class JNS_Skycrane_Pod_Fuel_BLU_Green: JNS_Skycrane_Pod_Fuel_BLU {
    MACRO_CONFIG
    displayName = "Skycrane Fuel Pod (Green)";
    hiddenSelections[] = {"Camo_1"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Medical_BLU;
  class JNS_Skycrane_Pod_Medical_BLU_Green: JNS_Skycrane_Pod_Medical_BLU {
    MACRO_CONFIG
    displayName = "Skycrane Medical Pod (Green)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Repair_BLU;
  class JNS_Skycrane_Pod_Repair_BLU_Green: JNS_Skycrane_Pod_Repair_BLU {
    MACRO_CONFIG
    displayName = "Skycrane Repair Pod (Green)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext02_co.paa"
    };
  };
};
