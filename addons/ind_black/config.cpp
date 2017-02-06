#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            // Helicopters
            QCLASS(ind_black),
            QCLASS(ammo_ind_black),
            QCLASS(bench_ind_black),
            QCLASS(cargo_ind_black),
            QCLASS(transport_ind_black),
            QCLASS(fuel_ind_black),
            QCLASS(medical_ind_black),
            QCLASS(repair_ind_black),
            // Pods
            QCLASS(pod_ammo_ind_black),
            QCLASS(pod_bench_ind_black),
            QCLASS(pod_cargo_ind_black),
            QCLASS(pod_transport_ind_black),
            QCLASS(pod_fuel_ind_black),
            QCLASS(pod_medical_ind_black),
            QCLASS(pod_repair_ind_black)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jns_skycranes_main"};
        authors[] = {"Jonpas"};
        url = "https://github.com/jonpas/JNS_Skycranes";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
