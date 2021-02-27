#ifdef CONFIG_TOP
#include "../proffieboard_v2_config.h"

#define NUM_BLADES 2
#define NUM_BUTTONS 2
#define VOLUME 100
#define MAX_VOLUME 1500
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.9
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define ENABLE_SSD1306
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
#define BLADE_ID_CLASS ExternalPullupBladeID<bladeIdentifyPin, 27000>

// blade id when turnig on saber b/c no detection between blade + emitter
// this causes tracks to stop playing
#define BLADE_ID_POWER_ON

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

#define IDLE_OFF_TIME 30 * 1000

#endif

#ifdef CONFIG_PROP
#include "../../props/saber_son_buttons.h"
#endif

#ifdef CONFIG_PRESETS
#include "common_presets.h"
#include "son_presets.h"
#include "k4_presets.h"
#include "mw2_presets.h"
#include "fun_presets.h"

Preset noBladePresets[] = {
  noBladePreset,

  // original
  ob4Preset,
  vaderPreset,
  ls6Preset,
  ls6CavePreset,
  ls6EvilPreset,
  rescuePreset,

  // personal
  sonPreset,
  spitfirePreset,
  ascensionPreset,

  // sequel
  reyPreset,
  kyloPreset,

  // prequel
  yodaPreset,
  macePreset,

  // fun
  pikachuPreset,
  smashPreset,
  catPreset,
};

Preset presets[] = {
  // original
  ob4Preset,
  vaderPreset,
  ls6Preset,
  ls6CavePreset,
  ls6EvilPreset,
  rescuePreset,

  // personal
  sonPreset,
  spitfirePreset,
  ascensionPreset,

  // sequel
  reyPreset,
  kyloPreset,

  // prequel
  yodaPreset,
  macePreset,

  // fun
  pikachuPreset,
  smashPreset,
  catPreset,
};

#include "blades.h"

BladeConfig blades[] = {
  {
    0,
    bladeMax,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    6200,
    benduBlade28,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    8100,
    benduBlade7,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    9000,
    benduBlade20,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    33000,
    blade28,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    39000,
    blade24,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    68000,
    blade16,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    // no blade
    670000,
    bladeNpxl,
    npxlOff,
    CONFIGARRAY(noBladePresets),
    "CONFIG/noblade"
  },
  {
    // no emitter
    NO_BLADE,
    bladeOff,
    npxl,
    CONFIGARRAY(noBladePresets),
    "CONFIG/noemitter"
  },
};

#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif

