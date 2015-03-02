class CfgPatches {
  class JNS_Skycranes_IND_Grey {
    units[] = {
      "JNS_Skycrane_IND_Grey",
      "JNS_Skycrane_Ammo_IND_Grey",
      "JNS_Skycrane_Bench_IND_Grey",
      "JNS_Skycrane_Cargo_IND_Grey",
      "JNS_Skycrane_Transport_IND_Grey",
      "JNS_Skycrane_Fuel_IND_Grey",
      "JNS_Skycrane_Medical_IND_Grey",
      "JNS_Skycrane_Repair_IND_Grey"
    };
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {JNS_Skycranes_Core, JNS_Skycranes_Textures_Grey};
    version = "1.1.0";
    versionStr = "1.1.0";
    versionAr[] = {1,1,0};
    author[] = {"Takelmeifter", "Jonpas"};
    authorUrl = "https://github.com/jonpas";
  };
};


// Scope definitions
#define public 2

// Macro definitions
#define MACRO_GREY \
  scope = public; \
  vehicleClass = JNS_Skycranes_Grey; \
  author = "Takelmeifter";


class CfgVehicles {
  class JNS_Skycrane_IND;
  class JNS_Skycrane_IND_Grey: JNS_Skycrane_IND {
    MACRO_GREY
    displayName = "CH-54 Skycrane Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa"
    };
  };

  class JNS_Skycrane_Ammo_IND;
  class JNS_Skycrane_Ammo_IND_Grey: JNS_Skycrane_Ammo_IND {
    MACRO_GREY
    displayName = "CH-54 Skycrane (Ammo) Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa",
    };
  };

  class JNS_Skycrane_Bench_IND;
  class JNS_Skycrane_Bench_IND_Grey: JNS_Skycrane_Bench_IND {
    MACRO_GREY
    displayName = "CH-54 Skycrane (Bench) Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_black_CO.paa"
    };
  };

  class JNS_Skycrane_Cargo_IND;
  class JNS_Skycrane_Cargo_IND_Grey: JNS_Skycrane_Cargo_IND {
    MACRO_GREY
    displayName = "CH-54 Skycrane (Cargo) Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Transport_IND;
  class JNS_Skycrane_Transport_IND_Grey: JNS_Skycrane_Transport_IND {
    MACRO_GREY
    displayName = "CH-54 Skycrane (Transport) Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Fuel_IND;
  class JNS_Skycrane_Fuel_IND_Grey: JNS_Skycrane_Fuel_IND {
    MACRO_GREY
    displayName = "CH-54 Skycrane (Fuel) Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
    };
  };

  class JNS_Skycrane_Medical_IND;
  class JNS_Skycrane_Medical_IND_Grey: JNS_Skycrane_Medical_IND {
    MACRO_GREY
    displayName = "CH-54 Skycrane (Medical) Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };

  class JNS_Skycrane_Repair_IND;
  class JNS_Skycrane_Repair_IND_Grey: JNS_Skycrane_Repair_IND {
    MACRO_GREY
    displayName = "CH-54 Skycrane (Repair) Grey";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\JNS_Skycranes_Textures_Grey\textures\base_01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\base_02_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext01_co.paa",
      "\JNS_Skycranes_Textures_Grey\textures\pod_ext02_co.paa"
    };
  };
};
