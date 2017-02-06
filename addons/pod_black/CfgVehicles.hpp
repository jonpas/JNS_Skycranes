// Macro definitions
#define MACRO_CONFIG \
    scope = 2; \
    vehicleClass = QCLASS(Black); \
    author = "Bohemia Interactive";


class CfgVehicles {
    class CLASS(Pod_Ammo_Base);
    class CLASS(Pod_Ammo_Black): CLASS(Pod_Ammo_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Ammo Pod (Black)";
        editorPreview = QPATHTOEF(textures_black,UI\Pod_Ammo_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };

    class CLASS(Pod_Cargo_Base);
    class CLASS(Pod_Cargo_Black): CLASS(Pod_Cargo_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Cargo Pod (Black)";
        editorPreview = QPATHTOEF(textures_black,UI\Pod_Cargo_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };

    class CLASS(Pod_Fuel_Base);
    class CLASS(Pod_Fuel_Black): CLASS(Pod_Fuel_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Fuel Pod (Black)";
        editorPreview = QPATHTOEF(textures_black,UI\Pod_Fuel_Black.jpg);
        hiddenSelections[] = {"Camo_1"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
        };
    };

    class CLASS(Pod_Repair_Base);
    class CLASS(Pod_Repair_Black): CLASS(Pod_Repair_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Repair Pod (Black)";
        editorPreview = QPATHTOEF(textures_black,UI\Pod_Repair_Black.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
            "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
        };
    };
};
