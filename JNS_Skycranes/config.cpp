class CfgPatches {
  class JNS_Skycranes {
    units[] = {
      // Base Skycranes (skycranes_base.h)
      "JNS_Skycrane",
      "JNS_Skycrane_Ammo",
      "JNS_Skycrane_Bench",
      "JNS_Skycrane_Cargo",
      "JNS_Skycrane_Transport",
      "JNS_Skycrane_Fuel",
      "JNS_Skycrane_Medical",
      "JNS_Skycrane_Repair",
      // Texture Variants
      
    };
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {};
    version = "1.0.0";
    versionStr = "1.0.0";
    versionAr[] = {1,0,0};
    author[] = {"Jonpas"};
    authorUrl = "https://github.com/jonpas";
  };
};

// New entry in Editor and Zeus so it doesn't clog up the default BLUFOR section
class CfgVehicleClasses {
  class JNS_Skycranes {
    displayName = "Air (Skycranes)";
  };
};


class CfgVehicles {
  #include "skycranes_base.h" // Base BLUFOR Skycrane Helicopters from OPFOR Taru Helicopters with Black texture
  #include "skycranes_colour.h" // <Colour> Variant
};