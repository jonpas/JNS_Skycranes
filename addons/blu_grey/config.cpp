#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            // Helicopters
            QCLASS(BLU_Grey),
            QCLASS(Ammo_BLU_Grey),
            QCLASS(Bench_BLU_Grey),
            QCLASS(Cargo_BLU_Grey),
            QCLASS(Transport_BLU_Grey),
            QCLASS(Fuel_BLU_Grey),
            QCLASS(Medical_BLU_Grey),
            QCLASS(Repair_BLU_Grey),
            // Pods
            QCLASS(Pod_Bench_BLU_Grey),
            QCLASS(Pod_Transport_BLU_Grey),
            QCLASS(Pod_Medical_BLU_Grey)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"JNS_Skycranes_Textures_Grey"};
        authors[] = {"Takelmeifter", "Jonpas"};
        url = "https://github.com/jonpas/JNS_Skycranes";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
