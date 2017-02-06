class CfgPatches {
    class ADDON {
        units[] = {
            // Helicopters
            QCLASS(blu_grey),
            QCLASS(ammo_blu_grey),
            QCLASS(bench_blu_grey),
            QCLASS(cargo_blu_grey),
            QCLASS(transport_blu_grey),
            QCLASS(fuel_blu_grey),
            QCLASS(medical_blu_grey),
            QCLASS(repair_blu_grey),
            // Pods
            QCLASS(pod_ammo_blu_grey),
            QCLASS(pod_bench_blu_grey),
            QCLASS(pod_cargo_blu_grey),
            QCLASS(pod_transport_blu_grey),
            QCLASS(pod_fuel_blu_grey),
            QCLASS(pod_medical_blu_grey),
            QCLASS(pod_repair_blu_grey)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jns_skycranes_textures_grey"};
        authors[] = {"Takelmeifter", "Jonpas"};
        url = "https://github.com/jonpas/JNS_Skycranes";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
