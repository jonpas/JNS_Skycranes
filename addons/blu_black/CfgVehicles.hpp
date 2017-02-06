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
        editorPreview = QPATHTOEF(textures_black,UI\Black.jpg);
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
        editorPreview = QPATHTOEF(textures_black,UI\Ammo_Black.jpg);
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
        editorPreview = QPATHTOEF(textures_black,UI\Bench_Black.jpg);
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
        editorPreview = QPATHTOEF(textures_black,UI\Cargo_Black.jpg);
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
        editorPreview = QPATHTOEF(textures_black,UI\Transport_Black.jpg);
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
        editorPreview = QPATHTOEF(textures_black,UI\Fuel_Black.jpg);
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
        editorPreview = QPATHTOEF(textures_black,UI\Medical_Black.jpg);
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
        editorPreview = QPATHTOEF(textures_black,UI\Repair_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };

    // Pods
    class CLASS(Pod_Bench_BLU_Base);
    class CLASS(Pod_Bench_BLU_Black): CLASS(Pod_Bench_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Bench Pod (Black)";
        editorPreview = QPATHTOEF(textures_black,UI\Pod_Bench_Black.jpg);
        hiddenSelections[] = {"Camo_1"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_black_CO.paa"
        };
    };

    class CLASS(Pod_Transport_BLU_Base);
    class CLASS(Pod_Transport_BLU_Black): CLASS(Pod_Transport_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Transport Pod (Black)";
        editorPreview = QPATHTOEF(textures_black,UI\Pod_Transport_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };

    class CLASS(Pod_Medical_BLU_Base);
    class CLASS(Pod_Medical_BLU_Black): CLASS(Pod_Medical_BLU_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Medical Pod (Black)";
        editorPreview = QPATHTOEF(textures_black,UI\Pod_Medical_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };
};
