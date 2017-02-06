// Sides definitions
#define WEST 1
#define RESISTANCE 2

// Macro definitions
#define MACRO_BLUFOR \
    scope = 0; \
    faction = "BLU_F"; \
    side = WEST; \
    crew = "B_HeliPilot_F"; \
    typicalCargo[] = {"B_Soldier_lite_F"};

#define MACRO_INDEP \
    scope = 0; \
    faction = "IND_F"; \
    side = RESISTANCE; \
    crew = "I_HeliPilot_F"; \
    typicalCargo[] = {"I_Soldier_lite_F"};


class CfgVehicles {
    // Helicopters
    class O_Heli_Transport_04_F; // Mi-290 Taru
    class CLASS(BLU_Base): O_Heli_Transport_04_F {
        MACRO_BLUFOR
        textureList[] = {};
    };
    class CLASS(IND_Base): O_Heli_Transport_04_F {
        textureList[] = {};
        MACRO_INDEP
    };

    class O_Heli_Transport_04_ammo_F; // Mi-290 Taru (Ammo)
    class CLASS(Ammo_BLU_Base): O_Heli_Transport_04_ammo_F {
        textureList[] = {};
        MACRO_BLUFOR
    };
    class CLASS(Ammo_IND_Base): O_Heli_Transport_04_ammo_F {
        textureList[] = {};
        MACRO_INDEP
    };

    class O_Heli_Transport_04_bench_F; // Mi-290 Taru (Bench)
    class CLASS(Bench_BLU_Base): O_Heli_Transport_04_bench_F {
        textureList[] = {};
        MACRO_BLUFOR
    };
    class CLASS(Bench_IND_Base): O_Heli_Transport_04_bench_F {
        textureList[] = {};
        MACRO_INDEP
    };

    class O_Heli_Transport_04_box_F; // Mi-290 Taru (Cargo)
    class CLASS(Cargo_BLU_Base): O_Heli_Transport_04_box_F {
        textureList[] = {};
        MACRO_BLUFOR
        #include "inventory_heli_blu.hpp"
    };
    class CLASS(Cargo_IND_Base): O_Heli_Transport_04_box_F {
        textureList[] = {};
        MACRO_INDEP
        #include "inventory_heli_ind.hpp"
    };

    class O_Heli_Transport_04_covered_F; // Mi-290 Taru (Transport)
    class CLASS(Transport_BLU_Base): O_Heli_Transport_04_covered_F {
        textureList[] = {};
        MACRO_BLUFOR
    };
    class CLASS(Transport_IND_Base): O_Heli_Transport_04_covered_F {
        textureList[] = {};
        MACRO_INDEP
    };

    class O_Heli_Transport_04_fuel_F; // Mi-290 Taru (Fuel)
    class CLASS(Fuel_BLU_Base): O_Heli_Transport_04_fuel_F {
        textureList[] = {};
        MACRO_BLUFOR
    };
    class CLASS(Fuel_IND_Base): O_Heli_Transport_04_fuel_F {
        textureList[] = {};
        MACRO_INDEP
    };

    class O_Heli_Transport_04_medevac_F; // Mi-290 Taru (Medical)
    class CLASS(Medical_BLU_Base): O_Heli_Transport_04_medevac_F {
        textureList[] = {};
        MACRO_BLUFOR
    };
    class CLASS(Medical_IND_Base): O_Heli_Transport_04_medevac_F {
        textureList[] = {};
        MACRO_INDEP
    };

    class O_Heli_Transport_04_repair_F; // Mi-290 Taru (Repair)
    class CLASS(Repair_BLU_Base): O_Heli_Transport_04_repair_F {
        textureList[] = {};
        MACRO_BLUFOR
    };
    class CLASS(Repair_IND_Base): O_Heli_Transport_04_repair_F {
        textureList[] = {};
        MACRO_INDEP
    };


    // Pods
    class Land_Pod_Heli_Transport_04_ammo_F; // Taru Ammo Pod
    class CLASS(Pod_Ammo_BLU_Base): Land_Pod_Heli_Transport_04_ammo_F {
        MACRO_BLUFOR
    };
    class CLASS(Pod_Ammo_IND_Base): Land_Pod_Heli_Transport_04_ammo_F {
        MACRO_INDEP
    };

    class Land_Pod_Heli_Transport_04_bench_F; // Taru Bench Pod
    class CLASS(Pod_Bench_BLU_Base): Land_Pod_Heli_Transport_04_bench_F {
        MACRO_BLUFOR
    };
    class CLASS(Pod_Bench_IND_Base): Land_Pod_Heli_Transport_04_bench_F {
        MACRO_INDEP
    };

    class Land_Pod_Heli_Transport_04_box_F; // Taru Cargo Pod
    class CLASS(Pod_Cargo_BLU_Base): Land_Pod_Heli_Transport_04_box_F {
        MACRO_BLUFOR
        #include "inventory_pod_blu.hpp"
    };
    class CLASS(Pod_Cargo_IND_Base): Land_Pod_Heli_Transport_04_box_F {
        MACRO_INDEP
        #include "inventory_pod_ind.hpp"
    };

    class Land_Pod_Heli_Transport_04_covered_F; // Taru Transport Pod
    class CLASS(Pod_Transport_BLU_Base): Land_Pod_Heli_Transport_04_covered_F {
        MACRO_BLUFOR
    };
    class CLASS(Pod_Transport_IND_Base): Land_Pod_Heli_Transport_04_covered_F {
        MACRO_INDEP
    };

    class Land_Pod_Heli_Transport_04_fuel_F; // Taru Fuel Pod
    class CLASS(Pod_Fuel_BLU_Base): Land_Pod_Heli_Transport_04_fuel_F {
        MACRO_BLUFOR
    };
    class CLASS(Pod_Fuel_IND_Base): Land_Pod_Heli_Transport_04_fuel_F {
        MACRO_INDEP
    };

    class Land_Pod_Heli_Transport_04_medevac_F; // Taru Medical Pod
    class CLASS(Pod_Medical_BLU_Base): Land_Pod_Heli_Transport_04_medevac_F {
        MACRO_BLUFOR
    };
    class CLASS(Pod_Medical_IND_Base): Land_Pod_Heli_Transport_04_medevac_F {
        MACRO_INDEP
    };

    class Land_Pod_Heli_Transport_04_repair_F; // Taru Repair Pod
    class CLASS(Pod_Repair_BLU_Base): Land_Pod_Heli_Transport_04_repair_F {
        MACRO_BLUFOR
    };
    class CLASS(Pod_Repair_IND_Base): Land_Pod_Heli_Transport_04_repair_F {
        MACRO_INDEP
    };
};
