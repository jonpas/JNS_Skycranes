class CfgPatches {
  class JNS_Skycranes_BLU_Black {
    units[] = {
      // Helicopters
      "JNS_Skycrane_BLU_Black",
      "JNS_Skycrane_Ammo_BLU_Black",
      "JNS_Skycrane_Bench_BLU_Black",
      "JNS_Skycrane_Cargo_BLU_Black",
      "JNS_Skycrane_Transport_BLU_Black",
      "JNS_Skycrane_Fuel_BLU_Black",
      "JNS_Skycrane_Medical_BLU_Black",
      "JNS_Skycrane_Repair_BLU_Black",
      // Pods
      "JNS_Skycrane_Pod_Ammo_BLU_Black",
      "JNS_Skycrane_Pod_Bench_BLU_Black",
      "JNS_Skycrane_Pod_Cargo_BLU_Black",
      "JNS_Skycrane_Pod_Transport_BLU_Black",
      "JNS_Skycrane_Pod_Fuel_BLU_Black",
      "JNS_Skycrane_Pod_Medical_BLU_Black",
      "JNS_Skycrane_Pod_Repair_BLU_Black"
    };
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"JNS_Skycranes_Core"};
    version = "2.0.1";
    versionStr = "2.0.1";
    versionAr[] = {2,0,1};
    author[] = {"Jonpas"};
    authorUrl = "https://github.com/jonpas";
  };
};


// Macro definitions
#define MACRO_CONFIG \
  scope = 2; \
  vehicleClass = "JNS_Skycranes_Black"; \
  author = "Bohemia Interactive";


class CfgVehicles {
// Helicopters
  class JNS_Skycrane_BLU_Base;
  class JNS_Skycrane_BLU_Black: JNS_Skycrane_BLU_Base {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane Black";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa"
    };
  };

  class JNS_Skycrane_Ammo_BLU_Base;
  class JNS_Skycrane_Ammo_BLU_Black: JNS_Skycrane_Ammo_BLU_Base {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Ammo) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Bench_BLU_Base;
  class JNS_Skycrane_Bench_BLU_Black: JNS_Skycrane_Bench_BLU_Base {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Bench) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_black_CO.paa"
    };
  };

  class JNS_Skycrane_Cargo_BLU_Base;
  class JNS_Skycrane_Cargo_BLU_Black: JNS_Skycrane_Cargo_BLU_Base {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Cargo) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Transport_BLU_Base;
  class JNS_Skycrane_Transport_BLU_Black: JNS_Skycrane_Transport_BLU_Base {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Transport) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Fuel_BLU_Base;
  class JNS_Skycrane_Fuel_BLU_Black: JNS_Skycrane_Fuel_BLU_Base {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Fuel) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
    };
  };

  class JNS_Skycrane_Medical_BLU_Base;
  class JNS_Skycrane_Medical_BLU_Black: JNS_Skycrane_Medical_BLU_Base {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Medical) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Repair_BLU_Base;
  class JNS_Skycrane_Repair_BLU_Black: JNS_Skycrane_Repair_BLU_Base {
    MACRO_CONFIG
    displayName = "CH-54 Skycrane (Repair) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

// Pods
  class JNS_Skycrane_Pod_Ammo_BLU_Base;
  class JNS_Skycrane_Pod_Ammo_BLU_Black: JNS_Skycrane_Pod_Ammo_BLU_Base {
    MACRO_CONFIG
    displayName = "Skycrane Ammo Pod (Black)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Bench_BLU_Base;
  class JNS_Skycrane_Pod_Bench_BLU_Black: JNS_Skycrane_Pod_Bench_BLU_Base {
    MACRO_CONFIG
    displayName = "Skycrane Bench Pod (Black)";
    hiddenSelections[] = {"Camo_1"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Cargo_BLU_Base;
  class JNS_Skycrane_Pod_Cargo_BLU_Black: JNS_Skycrane_Pod_Cargo_BLU_Base {
    MACRO_CONFIG
    displayName = "Skycrane Cargo Pod (Black)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Transport_BLU_Base;
  class JNS_Skycrane_Pod_Transport_BLU_Black: JNS_Skycrane_Pod_Transport_BLU_Base {
    MACRO_CONFIG
    displayName = "Skycrane Transport Pod (Black)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Fuel_BLU_Base;
  class JNS_Skycrane_Pod_Fuel_BLU_Black: JNS_Skycrane_Pod_Fuel_BLU_Base {
    MACRO_CONFIG
    displayName = "Skycrane Fuel Pod (Black)";
    hiddenSelections[] = {"Camo_1"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Medical_BLU_Base;
  class JNS_Skycrane_Pod_Medical_BLU_Black: JNS_Skycrane_Pod_Medical_BLU_Base {
    MACRO_CONFIG
    displayName = "Skycrane Medical Pod (Black)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Repair_BLU_Base;
  class JNS_Skycrane_Pod_Repair_BLU_Black: JNS_Skycrane_Pod_Repair_BLU_Base {
    MACRO_CONFIG
    displayName = "Skycrane Repair Pod (Black)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };
};
