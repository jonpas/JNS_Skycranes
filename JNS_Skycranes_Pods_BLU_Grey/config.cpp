class CfgPatches {
  class JNS_Skycranes_Pods_BLU_Grey {
    units[] = {
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

#define MACRO_GREY \
  scope = public; \
  vehicleClass = JNS_Skycranes_Grey; \
  author = "Takelmeifter";


class CfgVehicles {
  class JNS_Skycrane_Pod_Ammo_BLU;
  class JNS_Skycrane_Pod_Ammo_BLU_Grey: JNS_Skycrane_Pod_Ammo_BLU {
    MACRO_GREY
    displayName = "Skycrane Ammo Pod (Grey)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Bench_BLU;
  class JNS_Skycrane_Pod_Bench_BLU_Grey: JNS_Skycrane_Pod_Bench_BLU {
    MACRO_GREY
    displayName = "Skycrane Bench Pod (Grey)";
    hiddenSelections[] = {"Camo_1"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Cargo_BLU;
  class JNS_Skycrane_Pod_Cargo_BLU_Grey: JNS_Skycrane_Pod_Cargo_BLU {
    MACRO_GREY
    displayName = "Skycrane Cargo Pod (Grey)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Transport_BLU;
  class JNS_Skycrane_Pod_Transport_BLU_Grey: JNS_Skycrane_Pod_Transport_BLU {
    MACRO_GREY
    displayName = "Skycrane Transport Pod (Grey)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Fuel_BLU;
  class JNS_Skycrane_Pod_Fuel_BLU_Grey: JNS_Skycrane_Pod_Fuel_BLU {
    MACRO_GREY
    displayName = "Skycrane Fuel Pod (Grey)";
    hiddenSelections[] = {"Camo_1"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Medical_BLU;
  class JNS_Skycrane_Pod_Medical_BLU_Grey: JNS_Skycrane_Pod_Medical_BLU {
    MACRO_GREY
    displayName = "Skycrane Medical Pod (Grey)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Pod_Repair_BLU;
  class JNS_Skycrane_Pod_Repair_BLU_Grey: JNS_Skycrane_Pod_Repair_BLU {
    MACRO_GREY
    displayName = "Skycrane Repair Pod (Grey)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };
};
