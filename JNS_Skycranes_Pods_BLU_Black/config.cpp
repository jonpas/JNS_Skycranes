class CfgPatches {
  class JNS_Skycranes_Pods_BLU_Black {
    units[] = {
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
    requiredAddons[] = {JNS_Skycranes_Core};
    version = "1.1.0";
    versionStr = "1.1.0";
    versionAr[] = {1,1,0};
    author[] = {"Jonpas"};
    authorUrl = "https://github.com/jonpas";
  };
};


// Scope definitions
#define public 2

#define MACRO_BLACK \
  scope = public; \
  vehicleClass = JNS_Skycranes_Black; \
  author = "Jonpas";


class CfgVehicles {
  class JNS_Skycrane_Pod_Ammo_BLU;
  class JNS_Skycrane_Pod_Ammo_BLU_Black: JNS_Skycrane_Pod_Ammo_BLU {
    MACRO_BLACK
    displayName = "Skycrane Ammo Pod (Black)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Bench_BLU;
  class JNS_Skycrane_Pod_Bench_BLU_Black: JNS_Skycrane_Pod_Bench_BLU {
    MACRO_BLACK
    displayName = "Skycrane Bench Pod (Black)";
    hiddenSelections[] = {"Camo_1"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Cargo_BLU;
  class JNS_Skycrane_Pod_Cargo_BLU_Black: JNS_Skycrane_Pod_Cargo_BLU {
    MACRO_BLACK
    displayName = "Skycrane Cargo Pod (Black)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Transport_BLU;
  class JNS_Skycrane_Pod_Transport_BLU_Black: JNS_Skycrane_Pod_Transport_BLU {
    MACRO_BLACK
    displayName = "Skycrane Transport Pod (Black)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Fuel_BLU;
  class JNS_Skycrane_Pod_Fuel_BLU_Black: JNS_Skycrane_Pod_Fuel_BLU {
    MACRO_BLACK
    displayName = "Skycrane Fuel Pod (Black)";
    hiddenSelections[] = {"Camo_1"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Medical_BLU;
  class JNS_Skycrane_Pod_Medical_BLU_Black: JNS_Skycrane_Pod_Medical_BLU {
    MACRO_BLACK
    displayName = "Skycrane Medical Pod (Black)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Pod_Repair_BLU;
  class JNS_Skycrane_Pod_Repair_BLU_Black: JNS_Skycrane_Pod_Repair_BLU {
    MACRO_BLACK
    displayName = "Skycrane Repair Pod (Black)";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };
};
