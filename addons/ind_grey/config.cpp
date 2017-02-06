#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            // Helicopters
            QCLASS(IND_Grey),
            QCLASS(Ammo_IND_Grey),
            QCLASS(Bench_IND_Grey),
            QCLASS(Cargo_IND_Grey),
            QCLASS(Transport_IND_Grey),
            QCLASS(Fuel_IND_Grey),
            QCLASS(Medical_IND_Grey),
            QCLASS(Repair_IND_Grey),
            // Pods
            QCLASS(Pod_Bench_IND_Grey),
            QCLASS(Pod_Transport_IND_Grey),
            QCLASS(Pod_Medical_IND_Grey)
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
