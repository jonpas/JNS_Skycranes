#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            // Helicopters
            QCLASS(BLU_Green),
            QCLASS(Ammo_BLU_Green),
            QCLASS(Bench_BLU_Green),
            QCLASS(Cargo_BLU_Green),
            QCLASS(Transport_BLU_Green),
            QCLASS(Fuel_BLU_Green),
            QCLASS(Medical_BLU_Green),
            QCLASS(Repair_BLU_Green),
            // Pods
            QCLASS(Pod_Bench_BLU_Green),
            QCLASS(Pod_Transport_BLU_Green),
            QCLASS(Pod_Medical_BLU_Green)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"JNS_Skycranes_Textures_Green"};
        authors[] = {"Takelmeifter", "Jonpas"};
        url = "https://github.com/jonpas/JNS_Skycranes";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
