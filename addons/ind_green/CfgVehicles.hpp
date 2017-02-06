// Macro definitions
#define MACRO_CONFIG \
    scope = 2; \
    vehicleClass = QCLASS(Green); \
    author = "Takelmeifter";


class CfgVehicles {
    // Helicopters
    class CLASS(IND_Base);
    class CLASS(IND_Green): CLASS(IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane Green";
        editorPreview = QPATHTOEF(textures_green,UI\Green.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa)
        };
    };

    class CLASS(Ammo_IND_Base);
    class CLASS(Ammo_IND_Green): CLASS(Ammo_IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Ammo) Green";
        editorPreview = QPATHTOEF(textures_green,UI\Ammo_Green.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa),
        };
    };

    class CLASS(Bench_IND_Base);
    class CLASS(Bench_IND_Green): CLASS(Bench_IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Bench) Green";
        editorPreview = QPATHTOEF(textures_green,UI\Bench_Green.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa),
            QPATHTOEF(textures_green,textures\pod_bench_co.paa)
        };
    };

    class CLASS(Cargo_IND_Base);
    class CLASS(Cargo_IND_Green): CLASS(Cargo_IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Cargo) Green";
        editorPreview = QPATHTOEF(textures_green,UI\Cargo_Green.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Transport_IND_Base);
    class CLASS(Transport_IND_Green): CLASS(Transport_IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Transport) Green";
        editorPreview = QPATHTOEF(textures_green,UI\Transport_Green.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Fuel_IND_Base);
    class CLASS(Fuel_IND_Green): CLASS(Fuel_IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Fuel) Green";
        editorPreview = QPATHTOEF(textures_green,UI\Fuel_Green.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa),
            QPATHTOEF(textures_green,textures\pod_fuel_co.paa)
        };
    };

    class CLASS(Medical_IND_Base);
    class CLASS(Medical_IND_Green): CLASS(Medical_IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Medical) Green";
        editorPreview = QPATHTOEF(textures_green,UI\Medical_Green.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Repair_IND_Base);
    class CLASS(Repair_IND_Green): CLASS(Repair_IND_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Repair) Green";
        editorPreview = QPATHTOEF(textures_green,UI\Repair_Green.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\base_01_co.paa),
            QPATHTOEF(textures_green,textures\base_02_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    // Pods
    class CLASS(Pod_Bench_IND_Base);
    class CLASS(Pod_Bench_IND_Green): CLASS(Pod_Bench_IND_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Bench Pod (Green)";
        editorPreview = QPATHTOEF(textures_green,UI\Pod_Bench_Green.jpg);
        hiddenSelections[] = {"Camo_1"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\pod_bench_co.paa)
        };
    };

    class CLASS(Pod_Transport_IND_Base);
    class CLASS(Pod_Transport_IND_Green): CLASS(Pod_Transport_IND_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Transport Pod (Green)";
        editorPreview = QPATHTOEF(textures_green,UI\Pod_Transport_Green.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Pod_Medical_IND_Base);
    class CLASS(Pod_Medical_IND_Green): CLASS(Pod_Medical_IND_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Medical Pod (Green)";
        editorPreview = QPATHTOEF(textures_green,UI\Pod_Medical_Green.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };
};
