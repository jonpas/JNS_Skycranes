// Macro definitions
#define MACRO_CONFIG \
    scope = 2; \
    vehicleClass = QCLASS(Green); \
    author = "Bohemia Interactive";


class CfgVehicles {
    class CLASS(Pod_Ammo_Base);
    class CLASS(Pod_Ammo_Green): CLASS(Pod_Ammo_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Ammo Pod (Green)";
        editorPreview = QPATHTOEF(textures_green,UI\Pod_Ammo_Green.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Pod_Cargo_Base);
    class CLASS(Pod_Cargo_Green): CLASS(Pod_Cargo_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Cargo Pod (Green)";
        editorPreview = QPATHTOEF(textures_green,UI\Pod_Cargo_Green.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Pod_Fuel_Base);
    class CLASS(Pod_Fuel_Green): CLASS(Pod_Fuel_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Fuel Pod (Green)";
        editorPreview = QPATHTOEF(textures_green,UI\Pod_Fuel_Green.jpg);
        hiddenSelections[] = {"Camo_1"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\pod_fuel_co.paa)
        };
    };

    class CLASS(Pod_Repair_Base);
    class CLASS(Pod_Repair_Green): CLASS(Pod_Repair_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Repair Pod (Green)";
        editorPreview = QPATHTOEF(textures_green,UI\Pod_Repair_Green.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_green,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_green,textures\pod_ext02_co.paa)
        };
    };
};
