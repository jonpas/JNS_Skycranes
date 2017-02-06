#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            // Helicopters
            QCLASS(blu_black),
            QCLASS(ammo_blu_black),
            QCLASS(bench_blu_black),
            QCLASS(cargo_blu_black),
            QCLASS(transport_blu_black),
            QCLASS(fuel_blu_black),
            QCLASS(medical_blu_black),
            QCLASS(repair_blu_black),
            // Pods
            QCLASS(pod_ammo_blu_black),
            QCLASS(pod_bench_blu_black),
            QCLASS(pod_cargo_blu_black),
            QCLASS(pod_transport_blu_black),
            QCLASS(pod_fuel_blu_black),
            QCLASS(pod_medical_blu_black),
            QCLASS(pod_repair_blu_black)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jns_sycranes_main"};
        authors[] = {"Jonpas"};
        url = "https://github.com/jonpas/JNS_Skycranes";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
