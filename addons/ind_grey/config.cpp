#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            // Helicopters
            QCLASS(ind_grey),
            QCLASS(ammo_ind_grey),
            QCLASS(bench_ind_grey),
            QCLASS(cargo_ind_grey),
            QCLASS(transport_ind_grey),
            QCLASS(fuel_ind_grey),
            QCLASS(medical_ind_grey),
            QCLASS(repair_ind_grey),
            // Pods
            QCLASS(pod_ammo_ind_grey),
            QCLASS(pod_bench_ind_grey),
            QCLASS(pod_cargo_ind_grey),
            QCLASS(pod_transport_ind_grey),
            QCLASS(pod_fuel_ind_grey),
            QCLASS(pod_medical_ind_grey),
            QCLASS(pod_repair_ind_grey)
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
