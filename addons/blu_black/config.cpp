#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            // Helicopters
            QCLASS(BLU_Black),
            QCLASS(Ammo_BLU_Black),
            QCLASS(Bench_BLU_Black),
            QCLASS(Cargo_BLU_Black),
            QCLASS(TransportBLU__Black),
            QCLASS(Fuel_BLU_Black),
            QCLASS(Medical_BLU_Black),
            QCLASS(Repair_BLU_Black),
            // Pods
            QCLASS(Pod_Bench_BLU_Black),
            QCLASS(Pod_Transport_BLU_Black),
            QCLASS(Pod_Medical_BLU_Black)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"JNS_Skycranes_Textures_Black"};
        authors[] = {"Jonpas"};
        url = "https://github.com/jonpas/JNS_Skycranes";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
