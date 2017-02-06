#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QCLASS(Pod_Ammo_Black),
            QCLASS(Pod_Cargo_Black),
            QCLASS(Pod_Fuel_Black),
            QCLASS(Pod_Repair_Black)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"JNS_Skycranes_Core"};
        authors[] = {"Jonpas"};
        url = "https://github.com/jonpas/JNS_Skycranes";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
