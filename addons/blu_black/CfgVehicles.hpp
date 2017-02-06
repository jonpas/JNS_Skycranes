// Macro definitions
#define MACRO_CONFIG \
    scope = 2; \
    vehicleClass = QCLASS(Black); \
    author = "Bohemia Interactive";


class CfgVehicles {
    // Helicopters
    class CLASS(BLU_Base);
    class CLASS(BLU_Black): CLASS(BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane Black";
        editorPreview = QPATHTOF(UI\BLU_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa"
        };
    };

    class CLASS(Ammo_BLU_Base);
    class CLASS(Ammo_BLU_Black): CLASS(Ammo_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Ammo) Black";
        editorPreview = QPATHTOF(UI\Ammo_BLU_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };

    class CLASS(Bench_BLU_Base);
    class CLASS(Bench_BLU_Black): CLASS(Bench_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Bench) Black";
        editorPreview = QPATHTOF(UI\Bench_BLU_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_black_CO.paa"
        };
    };

    class CLASS(Cargo_BLU_Base);
    class CLASS(Cargo_BLU_Black): CLASS(Cargo_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Cargo) Black";
        editorPreview = QPATHTOF(UI\Cargo_BLU_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };

    class CLASS(Transport_BLU_Base);
    class CLASS(Transport_BLU_Black): CLASS(Transport_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Transport) Black";
        editorPreview = QPATHTOF(UI\Transport_BLU_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };

    class CLASS(Fuel_BLU_Base);
    class CLASS(Fuel_BLU_Black): CLASS(Fuel_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Fuel) Black";
        editorPreview = QPATHTOF(UI\Fuel_BLU_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
        };
    };

    class CLASS(Medical_BLU_Base);
    class CLASS(Medical_BLU_Black): CLASS(Medical_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Medical) Black";
        editorPreview = QPATHTOF(UI\Medical_BLU_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };

    class CLASS(Repair_BLU_Base);
    class CLASS(Repair_BLU_Black): CLASS(Repair_BLU_Base) {
        MACRO_CONFIG
        displayName = "CH-54 Skycrane (Repair) Black";
        editorPreview = QPATHTOF(UI\Repair_BLU_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };

    // Pods
    class CLASS(Pod_Ammo_BLU_Base);
    class CLASS(Pod_Ammo_BLU_Black): CLASS(Pod_Ammo_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Ammo Pod (Black)";
        editorPreview = QPATHTOF(UI\Pod_Ammo_BLU_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };

    class CLASS(Pod_Bench_BLU_Base);
    class CLASS(Pod_Bench_BLU_Black): CLASS(Pod_Bench_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Bench Pod (Black)";
        editorPreview = QPATHTOF(UI\Pod_Bench_BLU_Black.jpg);
        hiddenSelections[] = {"Camo_1"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_black_CO.paa"
        };
    };

    class CLASS(Pod_Cargo_BLU_Base);
    class CLASS(Pod_Cargo_BLU_Black): CLASS(Pod_Cargo_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Cargo Pod (Black)";
        editorPreview = QPATHTOF(UI\Pod_Cargo_BLU_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };

    class CLASS(Pod_Transport_BLU_Base);
    class CLASS(Pod_Transport_BLU_Black): CLASS(Pod_Transport_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Transport Pod (Black)";
        editorPreview = QPATHTOF(UI\Pod_Transport_BLU_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };

    class CLASS(Pod_Fuel_BLU_Base);
    class CLASS(Pod_Fuel_BLU_Black): CLASS(Pod_Fuel_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Fuel Pod (Black)";
        editorPreview = QPATHTOF(UI\Pod_Fuel_BLU_Black.jpg);
        hiddenSelections[] = {"Camo_1"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
        };
    };

    class CLASS(Pod_Medical_BLU_Base);
    class CLASS(Pod_Medical_BLU_Black): CLASS(Pod_Medical_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Medical Pod (Black)";
        editorPreview = QPATHTOF(UI\Pod_Medical_BLU_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };

    class CLASS(Pod_Repair_BLU_Base);
    class CLASS(Pod_Repair_BLU_Black): CLASS(Pod_Repair_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Repair Pod (Black)";
        editorPreview = QPATHTOF(UI\Pod_Repair_BLU_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };
};
