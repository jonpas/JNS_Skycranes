#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            // Helicopters
            QCLASS(IND_Black),
            QCLASS(Ammo_IND_Black),
            QCLASS(Bench_IND_Black),
            QCLASS(Cargo_IND_Black),
            QCLASS(Transport_IND_Black),
            QCLASS(Fuel_IND_Black),
            QCLASS(Medical_IND_Black),
            QCLASS(Repair_IND_Black),
            // Pods
            QCLASS(Pod_Ammo_IND_Black),
            QCLASS(Pod_Bench_IND_Black),
            QCLASS(Pod_Cargo_IND_Black),
            QCLASS(Pod_Transport_IND_Black),
            QCLASS(Pod_Fuel_IND_Black),
            QCLASS(Pod_Medical_IND_Black),
            QCLASS(Pod_Repair_IND_Black)
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
