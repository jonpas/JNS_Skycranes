#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QCLASS(Pod_Ammo_Grey),
            QCLASS(Pod_Cargo_Grey),
            QCLASS(Pod_Fuel_Grey),
            QCLASS(Pod_Repair_Grey)
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
