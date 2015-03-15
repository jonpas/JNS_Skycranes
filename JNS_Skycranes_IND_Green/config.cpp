class CfgPatches {
  class JNS_Skycranes_IND_Green {
    units[] = {
      // Helicopters
      "JNS_Skycrane_IND_Green",
      "JNS_Skycrane_Ammo_IND_Green",
      "JNS_Skycrane_Bench_IND_Green",
      "JNS_Skycrane_Cargo_IND_Green",
      "JNS_Skycrane_Transport_IND_Green",
      "JNS_Skycrane_Fuel_IND_Green",
      "JNS_Skycrane_Medical_IND_Green",
      "JNS_Skycrane_Repair_IND_Green",
      // Pods
      "JNS_Skycrane_Pod_Ammo_IND_Green",
      "JNS_Skycrane_Pod_Bench_IND_Green",
      "JNS_Skycrane_Pod_Cargo_IND_Green",
      "JNS_Skycrane_Pod_Transport_IND_Green",
      "JNS_Skycrane_Pod_Fuel_IND_Green",
      "JNS_Skycrane_Pod_Medical_IND_Green",
      "JNS_Skycrane_Pod_Repair_IND_Green"
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
  class JNS_Skycrane_IND;
  class JNS_Skycrane_IND_Green: JNS_Skycrane_IND {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane Green";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\base_02_co.paa"
    };
  };

  class JNS_Skycrane_Ammo_IND;
  class JNS_Skycrane_Ammo_IND_Green: JNS_Skycrane_Ammo_IND {
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

  class JNS_Skycrane_Bench_IND;
  class JNS_Skycrane_Bench_IND_Green: JNS_Skycrane_Bench_IND {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Bench) Green";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_bench_co.paa"
    };
  };

  class JNS_Skycrane_Cargo_IND;
  class JNS_Skycrane_Cargo_IND_Green: JNS_Skycrane_Cargo_IND {
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

  class JNS_Skycrane_Transport_IND;
  class JNS_Skycrane_Transport_IND_Green: JNS_Skycrane_Transport_IND {
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

  class JNS_Skycrane_Fuel_IND;
  class JNS_Skycrane_Fuel_IND_Green: JNS_Skycrane_Fuel_IND {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Fuel) Green";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_fuel_co.paa"
    };
  };

  class JNS_Skycrane_Medical_IND;
  class JNS_Skycrane_Medical_IND_Green: JNS_Skycrane_Medical_IND {
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

  class JNS_Skycrane_Repair_IND;
  class JNS_Skycrane_Repair_IND_Green: JNS_Skycrane_Repair_IND {
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
  class JNS_Skycrane_Pod_Ammo_IND;
  class JNS_Skycrane_Pod_Ammo_IND_Green: JNS_Skycrane_Pod_Ammo_IND {
    MACRO_CONFIG
    displayName = "Skycrane Ammo Pod (Green)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Bench_IND;
  class JNS_Skycrane_Pod_Bench_IND_Green: JNS_Skycrane_Pod_Bench_IND {
    MACRO_CONFIG
    displayName = "Skycrane Bench Pod (Green)";
    hiddenSelections[] = {"Camo_1"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\pod_bench_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Cargo_IND;
  class JNS_Skycrane_Pod_Cargo_IND_Green: JNS_Skycrane_Pod_Cargo_IND {
    MACRO_CONFIG
    displayName = "Skycrane Cargo Pod (Green)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Transport_IND;
  class JNS_Skycrane_Pod_Transport_IND_Green: JNS_Skycrane_Pod_Transport_IND {
    MACRO_CONFIG
    displayName = "Skycrane Transport Pod (Green)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Fuel_IND;
  class JNS_Skycrane_Pod_Fuel_IND_Green: JNS_Skycrane_Pod_Fuel_IND {
    MACRO_CONFIG
    displayName = "Skycrane Fuel Pod (Green)";
    hiddenSelections[] = {"Camo_1"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\pod_fuel_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Medical_IND;
  class JNS_Skycrane_Pod_Medical_IND_Green: JNS_Skycrane_Pod_Medical_IND {
    MACRO_CONFIG
    displayName = "Skycrane Medical Pod (Green)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Repair_IND;
  class JNS_Skycrane_Pod_Repair_IND_Green: JNS_Skycrane_Pod_Repair_IND {
    MACRO_CONFIG
    displayName = "Skycrane Repair Pod (Green)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Green\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Green\textures\pod_ext02_co.paa"
    };
  };
};
