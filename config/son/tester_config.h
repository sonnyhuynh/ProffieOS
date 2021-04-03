#ifdef CONFIG_TOP
#include "../proffieboard_v2_config.h"

#define NUM_BLADES 1
#define NUM_BUTTONS 1
#define VOLUME 100
#define MAX_VOLUME 1500
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.9
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define SAVE_PRESET
// this creates the preset.ini file
#define SAVE_COLOR_CHANGE

// npxl
#define SHARED_POWER_PINS

// dual phase styles
#define COLOR_CHANGE_DIRECT

#define DYNAMIC_BLADE_DIMMING
#define SAVE_BLADE_DIMMING

#endif

#ifdef CONFIG_PROP
#include "../../props/saber_son_buttons.h"
#endif

#ifdef CONFIG_PRESETS
#include "common_presets.h"
#include "son_presets.h"
#include "k4_presets.h"

Preset presets[] = {
  vaderPreset,
  ascensionPreset,
  ls6Preset,
};

#include "blades.h"

BladeConfig blades[] = {
  {
    0,
    bladeMax,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
};


#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif

