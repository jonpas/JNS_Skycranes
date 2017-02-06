// Macro definitions
#define MACRO_CONFIG \
    scope = 2; \
    vehicleClass = QCLASS(Grey); \
    author = "Bohemia Interactive";


class CfgVehicles {
    class CLASS(Pod_Ammo_Base);
    class CLASS(Pod_Ammo_Grey): CLASS(Pod_Ammo_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Ammo Pod (Grey)";
        editorPreview = QPATHTOEF(textures_grey,UI\Pod_Ammo_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Pod_Cargo_Base);
    class CLASS(Pod_Cargo_Grey): CLASS(Pod_Cargo_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Cargo Pod (Grey)";
        editorPreview = QPATHTOEF(textures_grey,UI\Pod_Cargo_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };

    class CLASS(Pod_Fuel_Base);
    class CLASS(Pod_Fuel_Grey): CLASS(Pod_Fuel_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Fuel Pod (Grey)";
        editorPreview = QPATHTOEF(textures_grey,UI\Pod_Fuel_Grey.jpg);
        hiddenSelections[] = {"Camo_1"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\pod_fuel_co.paa)
        };
    };

    class CLASS(Pod_Repair_Base);
    class CLASS(Pod_Repair_Grey): CLASS(Pod_Repair_Base) {
        MACRO_CONFIG
        displayName = "Skycrane Repair Pod (Grey)";
        editorPreview = QPATHTOEF(textures_grey,UI\Pod_Repair_Grey.jpg);
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures_grey,textures\pod_ext01_co.paa),
            QPATHTOEF(textures_grey,textures\pod_ext02_co.paa)
        };
    };
};
