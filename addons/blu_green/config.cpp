#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            // Helicopters
            QCLASS(blu_green),
            QCLASS(ammo_blu_green),
            QCLASS(bench_blu_green),
            QCLASS(cargo_blu_green),
            QCLASS(transport_blu_green),
            QCLASS(fuel_blu_green),
            QCLASS(medical_blu_green),
            QCLASS(repair_blu_green),
            // Pods
            QCLASS(pod_ammo_blu_green),
            QCLASS(pod_bench_blu_green),
            QCLASS(pod_cargo_blu_green),
            QCLASS(pod_transport_blu_green),
            QCLASS(pod_fuel_blu_green),
            QCLASS(pod_medical_blu_green),
            QCLASS(pod_repair_blu_green)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jns_skycranes_textures_green"};
        authors[] = {"Takelmeifter", "Jonpas"};
        url = "https://github.com/jonpas/JNS_Skycranes";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
