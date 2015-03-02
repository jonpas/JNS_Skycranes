class CfgPatches {
  class JNS_Skycranes_IND_Black {
    units[] = {
      "JNS_Skycrane_IND_Black",
      "JNS_Skycrane_Ammo_IND_Black",
      "JNS_Skycrane_Bench_IND_Black",
      "JNS_Skycrane_Cargo_IND_Black",
      "JNS_Skycrane_Transport_IND_Black",
      "JNS_Skycrane_Fuel_IND_Black",
      "JNS_Skycrane_Medical_IND_Black",
      "JNS_Skycrane_Repair_IND_Black"
    };
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {JNS_Skycranes_Core};
    version = "2.0.0";
    versionStr = "2.0.0";
    versionAr[] = {2,0,0};
    author[] = {"Jonpas"};
    authorUrl = "https://github.com/jonpas";
  };
};


// Scope definitions
#define public 2

// Macro definitions
#define MACRO_BLACK \
  scope = public; \
  vehicleClass = JNS_Skycranes_Black; \
  author = "Jonpas";


class CfgVehicles {
  class JNS_Skycrane_IND;
  class JNS_Skycrane_IND_Black: JNS_Skycrane_IND {
    MACRO_BLACK
    displayName = "CH-54 Skycrane Black";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa"
    };
  };

  class JNS_Skycrane_Ammo_IND;
  class JNS_Skycrane_Ammo_IND_Black: JNS_Skycrane_Ammo_IND {
    MACRO_BLACK
    displayName = "CH-54 Skycrane (Ammo) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Bench_IND;
  class JNS_Skycrane_Bench_IND_Black: JNS_Skycrane_Bench_IND {
    MACRO_BLACK
    displayName = "CH-54 Skycrane (Bench) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_black_CO.paa"
    };
  };

  class JNS_Skycrane_Cargo_IND;
  class JNS_Skycrane_Cargo_IND_Black: JNS_Skycrane_Cargo_IND {
    MACRO_BLACK
    displayName = "CH-54 Skycrane (Cargo) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Transport_IND;
  class JNS_Skycrane_Transport_IND_Black: JNS_Skycrane_Transport_IND {
    MACRO_BLACK
    displayName = "CH-54 Skycrane (Transport) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Fuel_IND;
  class JNS_Skycrane_Fuel_IND_Black: JNS_Skycrane_Fuel_IND {
    MACRO_BLACK
    displayName = "CH-54 Skycrane (Fuel) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
    };
  };

  class JNS_Skycrane_Medical_IND;
  class JNS_Skycrane_Medical_IND_Black: JNS_Skycrane_Medical_IND {
    MACRO_BLACK
    displayName = "CH-54 Skycrane (Medical) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Repair_IND;
  class JNS_Skycrane_Repair_IND_Black: JNS_Skycrane_Repair_IND {
    MACRO_BLACK
    displayName = "CH-54 Skycrane (Repair) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };
};
