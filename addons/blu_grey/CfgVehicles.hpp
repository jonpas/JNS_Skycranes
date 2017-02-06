// Macro definitions
#define MACRO_CONFIG \
    scope = 2; \
    vehicleClass = QCLASS(Grey); \
    author = "Takelmeifter";


class CfgVehicles {
    // Helicopters
    class CLASS(BLU_Base);
    class CLASS(BLU_Grey): CLASS(BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane Grey";
        editorPreview = QPATHTOF(UI\BLU_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa)
        };
    };

    class CLASS(Ammo_BLU_Base);
    class CLASS(Ammo_BLU_Grey): CLASS(Ammo_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Ammo) Grey";
        editorPreview = QPATHTOF(UI\Ammo_BLU_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa),
        };
    };

    class CLASS(Bench_BLU_Base);
    class CLASS(Bench_BLU_Grey): CLASS(Bench_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Bench) Grey";
        editorPreview = QPATHTOF(UI\Bench_BLU_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa),
            QPATHTOEF(textures_grey,textures\pod_bench_co.paa)
        };
    };

    class CLASS(Cargo_BLU_Base);
    class CLASS(Cargo_BLU_Grey): CLASS(Cargo_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Cargo) Grey";
        editorPreview = QPATHTOF(UI\Cargo_BLU_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Transport_BLU_Base);
    class CLASS(Transport_BLU_Grey): CLASS(Transport_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Transport) Grey";
        editorPreview = QPATHTOF(UI\Transport_BLU_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Fuel_BLU_Base);
    class CLASS(Fuel_BLU_Grey): CLASS(Fuel_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Fuel) Grey";
        editorPreview = QPATHTOF(UI\Fuel_BLU_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa),
            QPATHTOEF(textures_grey,textures\pod_fuel_co.paa)
        };
    };

    class CLASS(Medical_BLU_Base);
    class CLASS(Medical_BLU_Grey): CLASS(Medical_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Medical) Grey";
        editorPreview = QPATHTOF(UI\Medical_BLU_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Repair_BLU_Base);
    class CLASS(Repair_BLU_Grey): CLASS(Repair_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Repair) Grey";
        editorPreview = QPATHTOF(UI\Repair_BLU_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };

    // Pods
    class CLASS(Pod_Ammo_BLU_Base);
    class CLASS(Pod_Ammo_BLU_Grey): CLASS(Pod_Ammo_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Ammo Pod (Grey)";
        editorPreview = QPATHTOF(UI\Pod_Ammo_BLU_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Pod_Bench_BLU_Base);
    class CLASS(Pod_Bench_BLU_Grey): CLASS(Pod_Bench_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Bench Pod (Grey)";
        editorPreview = QPATHTOF(UI\Pod_Bench_BLU_Grey.jpg);
        hiddenSelections[] = {"Camo_1"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\pod_bench_co.paa)
        };
    };

    class CLASS(Pod_Cargo_BLU_Base);
    class CLASS(Pod_Cargo_BLU_Grey): CLASS(Pod_Cargo_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Cargo Pod (Grey)";
        editorPreview = QPATHTOF(UI\Pod_Cargo_BLU_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Pod_Transport_BLU_Base);
    class CLASS(Pod_Transport_BLU_Grey): CLASS(Pod_Transport_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Transport Pod (Grey)";
        editorPreview = QPATHTOF(UI\Pod_Transport_BLU_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Pod_Fuel_BLU_Base);
    class CLASS(Pod_Fuel_BLU_Grey): CLASS(Pod_Fuel_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Fuel Pod (Grey)";
        editorPreview = QPATHTOF(UI\Pod_Fuel_BLU_Grey.jpg);
        hiddenSelections[] = {"Camo_1"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\pod_fuel_co.paa)
        };
    };

    class CLASS(Pod_Medical_BLU_Base);
    class CLASS(Pod_Medical_BLU_Grey): CLASS(Pod_Medical_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Medical Pod (Grey)";
        editorPreview = QPATHTOF(UI\Pod_Medical_BLU_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Pod_Repair_BLU_Base);
    class CLASS(Pod_Repair_BLU_Grey): CLASS(Pod_Repair_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Repair Pod (Grey)";
        editorPreview = QPATHTOF(UI\Pod_Repair_BLU_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };
};
