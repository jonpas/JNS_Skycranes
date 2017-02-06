// Macro definitions
#define MACRO_CONFIG \
    scope = 2; \
    vehicleClass = QCLASS(Green); \
    author = "Takelmeifter";


class CfgVehicles {
    // Helicopters
    class CLASS(BLU_Base);
    class CLASS(BLU_Green): CLASS(BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane Green";
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa)
        };
    };

    class CLASS(Ammo_BLU_Base);
    class CLASS(Ammo_BLU_Green): CLASS(Ammo_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Ammo) Green";
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Bench_BLU_Base);
    class CLASS(Bench_BLU_Green): CLASS(Bench_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Bench) Green";
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa),
            QPATHTOEF(textures_green,textures\pod_bench_co.paa)
        };
    };

    class CLASS(Cargo_BLU_Base);
    class CLASS(Cargo_BLU_Green): CLASS(Cargo_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Cargo) Green";
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Transport_BLU_Base);
    class CLASS(Transport_BLU_Green): CLASS(Transport_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Transport) Green";
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Fuel_BLU_Base);
    class CLASS(Fuel_BLU_Green): CLASS(Fuel_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Fuel) Green";
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa),
            QPATHTOEF(textures_green,textures\pod_fuel_co.paa)
        };
    };

    class CLASS(Medical_BLU_Base);
    class CLASS(Medical_BLU_Green): CLASS(Medical_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Medical) Green";
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Repair_BLU_Base);
    class CLASS(Repair_BLU_Green): CLASS(Repair_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Repair) Green";
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    // Pods
    class CLASS(Pod_Ammo_BLU_Base);
    class CLASS(Pod_Ammo_BLU_Green): CLASS(Pod_Ammo_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Ammo Pod (Green)";
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Pod_Bench_BLU_Base);
    class CLASS(Pod_Bench_BLU_Green): CLASS(Pod_Bench_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Bench Pod (Green)";
        hiddenSelections[] = {"Camo_1"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\pod_bench_co.paa)
        };
    };

    class CLASS(Pod_Cargo_BLU_Base);
    class CLASS(Pod_Cargo_BLU_Green): CLASS(Pod_Cargo_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Cargo Pod (Green)";
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Pod_Transport_BLU_Base);
    class CLASS(Pod_Transport_BLU_Green): CLASS(Pod_Transport_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Transport Pod (Green)";
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Pod_Fuel_BLU_Base);
    class CLASS(Pod_Fuel_BLU_Green): CLASS(Pod_Fuel_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Fuel Pod (Green)";
        hiddenSelections[] = {"Camo_1"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\pod_fuel_co.paa)
        };
    };

    class CLASS(Pod_Medical_BLU_Base);
    class CLASS(Pod_Medical_BLU_Green): CLASS(Pod_Medical_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Medical Pod (Green)";
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Pod_Repair_BLU_Base);
    class CLASS(Pod_Repair_BLU_Green): CLASS(Pod_Repair_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Repair Pod (Green)";
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };
};
