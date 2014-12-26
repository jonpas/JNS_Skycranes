class CfgPatches {
  class JNS_SkycranePods {
    units[] = {
      // Base Skycrane Pods (pods_base.h)
      "JNS_SkycranePod_Ammo",
      "JNS_SkycranePod_Bench",
      "JNS_SkycranePod_Cargo",
      "JNS_SkycranePod_Transport",
      "JNS_SkycranePod_Fuel",
      "JNS_SkycranePod_Medical",
      "JNS_SkycranePod_Repair"
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
  class JNS_SkycranePods {
    displayName = "Supports (Skycrane Pods)";
  };
};


class CfgVehicles {
  #include "pods_base.h"  // Base BLUFOR Skycrane Pods from OPFOR Taru Pods with Black texture
  #include "pods_colour.h" // <Colour> Variant
};
