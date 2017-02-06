#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            // Helicopters
            QCLASS(IND_Green),
            QCLASS(Ammo_IND_Green),
            QCLASS(Bench_IND_Green),
            QCLASS(Cargo_IND_Green),
            QCLASS(Transport_IND_Green),
            QCLASS(Fuel_IND_Green),
            QCLASS(Medical_IND_Green),
            QCLASS(Repair_IND_Green),
            // Pods
            QCLASS(Pod_Ammo_IND_Green),
            QCLASS(Pod_Bench_IND_Green),
            QCLASS(Pod_Cargo_IND_Green),
            QCLASS(Pod_Transport_IND_Green),
            QCLASS(Pod_Fuel_IND_Green),
            QCLASS(Pod_Medical_IND_Green),
            QCLASS(Pod_Repair_IND_Green)
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
