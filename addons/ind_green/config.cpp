class CfgPatches {
    class ADDON {
        units[] = {
            // Helicopters
            QCLASS(ind_green),
            QCLASS(ammo_ind_green),
            QCLASS(bench_ind_green),
            QCLASS(cargo_ind_green),
            QCLASS(transport_ind_green),
            QCLASS(fuel_ind_green),
            QCLASS(medical_ind_green),
            QCLASS(repair_ind_green),
            // Pods
            QCLASS(pod_ammo_ind_green),
            QCLASS(pod_bench_ind_green),
            QCLASS(pod_cargo_ind_green),
            QCLASS(pod_transport_ind_green),
            QCLASS(pod_fuel_ind_green),
            QCLASS(pod_medical_ind_green),
            QCLASS(pod_repair_ind_green)
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
