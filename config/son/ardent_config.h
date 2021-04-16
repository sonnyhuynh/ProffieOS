#ifdef CONFIG_TOP
#include "../proffieboard_v2_config.h"

#define NUM_BLADES 3
#define NUM_BUTTONS 2
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

// blade detect
#define BLADE_DETECT_PIN blade3Pin

// blade id
#define ENABLE_POWER_FOR_ID PowerPINS<bladePowerPin2,bladePowerPin3>

// blade id pull up
#define BLADE_ID_CLASS ExternalPullupBladeID<bladeIdentifyPin, 22000>

#define SON_SWING_ON
#define SON_TWIST_ON
#define SON_TWIST_OFF
#define FETT263_BATTLE_MODE

// dual phase styles
#define COLOR_CHANGE_DIRECT

// reset blade color
#define RESET_COLOR

#define DYNAMIC_BLADE_DIMMING
#define SAVE_BLADE_DIMMING

#define IDLE_OFF_TIME 60 * 1 * 1000

#endif

#ifdef CONFIG_PROP
#include "../../props/saber_son_buttons.h"
#endif

#ifdef CONFIG_PRESETS
#include "../../blades/son/cc_styles.h"
#include "common_presets.h"
#include "ardent_presets.h"
#include "son_presets.h"
#include "double_presets.h"
#include "k4_presets.h"

Preset noBladePresets[] = {
  noBladePreset,

  ardentPreset,

  // personal
  sonPreset,
  spitfirePreset,
  ascensionPreset,

  rescuePreset,
  rogueVaderPreset,

  secondSisterPreset,
  ls6EvilPreset,
  kyloPreset,

  // fun
  catPreset,
};

Preset presets[] = {
  ardentPreset,

  // personal
  sonPreset,
  spitfirePreset,
  ascensionPreset,

  rescuePreset,
  rogueVaderPreset,

  secondSisterPreset,
  ls6EvilPreset,
  kyloPreset,

  // fun
  catPreset,
};

#include "blades.h"

BladeBase* rgbSwitch = SimpleBladePtr<CH1LED, CH2LED, CH3LED, NoLED, bladePowerPin4, bladePowerPin5, bladePowerPin6, -1>();

BladeConfig blades[] = {
  {
    0,
    bladeMax,
    npxlOff,
    rgbSwitch,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    5600,
    benduBlade28,
    npxlOff,
    rgbSwitch,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    7400,
    benduBlade7,
    npxlOff,
    rgbSwitch,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    8400,
    benduBlade20,
    npxlOff,
    rgbSwitch,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    10000,
    blade32,
    npxlOff,
    rgbSwitch,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    32000, // 33k
    blade28,
    npxlOff,
    rgbSwitch,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    37900, // 39k
    blade24,
    npxlOff,
    rgbSwitch,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    63500, // 68k
    blade16,
    npxlOff,
    rgbSwitch,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    69000, // 75k
    blade12,
    npxlOff,
    rgbSwitch,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    75000, // 82k
    blade8,
    npxlOff,
    rgbSwitch,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    800000,
    vvBlade28,
    npxlOff,
    rgbSwitch,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    NO_BLADE,
    bladeOff,
    npxl,
    rgbSwitch,
    CONFIGARRAY(noBladePresets),
    "CONFIG/noblade",
  },
};

#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif

