// Macro definitions
#define MACRO_CONFIG \
    scope = 2; \
    vehicleClass = QCLASS(Grey); \
    author = "Takelmeifter";


class CfgVehicles {
    // Helicopters
    class CLASS(IND_Base);
    class CLASS(IND_Grey): CLASS(IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane Grey";
        editorPreview = QPATHTOEF(textures_grey,UI\Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa)
        };
    };

    class CLASS(Ammo_IND_Base);
    class CLASS(Ammo_IND_Grey): CLASS(Ammo_IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Ammo) Grey";
        editorPreview = QPATHTOEF(textures_grey,UI\Ammo_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa),
        };
    };

    class CLASS(Bench_IND_Base);
    class CLASS(Bench_IND_Grey): CLASS(Bench_IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Bench) Grey";
        editorPreview = QPATHTOEF(textures_grey,UI\Bench_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa),
            QPATHTOEF(textures_grey,textures\pod_bench_co.paa)
        };
    };

    class CLASS(Cargo_IND_Base);
    class CLASS(Cargo_IND_Grey): CLASS(Cargo_IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Cargo) Grey";
        editorPreview = QPATHTOEF(textures_grey,UI\Cargo_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Transport_IND_Base);
    class CLASS(Transport_IND_Grey): CLASS(Transport_IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Transport) Grey";
        editorPreview = QPATHTOEF(textures_grey,UI\Transport_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Fuel_IND_Base);
    class CLASS(Fuel_IND_Grey): CLASS(Fuel_IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Fuel) Grey";
        editorPreview = QPATHTOEF(textures_grey,UI\Fuel_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa),
            QPATHTOEF(textures_grey,textures\pod_fuel_co.paa)
        };
    };

    class CLASS(Medical_IND_Base);
    class CLASS(Medical_IND_Grey): CLASS(Medical_IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Medical) Grey";
        editorPreview = QPATHTOEF(textures_grey,UI\Medical_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Repair_IND_Base);
    class CLASS(Repair_IND_Grey): CLASS(Repair_IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Repair) Grey";
        editorPreview = QPATHTOEF(textures_grey,UI\Repair_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\base_01_co.paa),
            QPATHTOEF(textures_grey,textures\base_02_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };

    // Pods
    class CLASS(Pod_Bench_IND_Base);
    class CLASS(Pod_Bench_IND_Grey): CLASS(Pod_Bench_IND_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Bench Pod (Grey)";
        editorPreview = QPATHTOEF(textures_grey,UI\Pod_Bench_Grey.jpg);
        hiddenSelections[] = {"Camo_1"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\pod_bench_co.paa)
        };
    };

    class CLASS(Pod_Transport_IND_Base);
    class CLASS(Pod_Transport_IND_Grey): CLASS(Pod_Transport_IND_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Transport Pod (Grey)";
        editorPreview = QPATHTOEF(textures_grey,UI\Pod_Transport_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Pod_Medical_IND_Base);
    class CLASS(Pod_Medical_IND_Grey): CLASS(Pod_Medical_IND_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Medical Pod (Grey)";
        editorPreview = QPATHTOEF(textures_grey,UI\Pod_Medical_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };
};
