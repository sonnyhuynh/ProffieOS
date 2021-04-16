#ifdef CONFIG_TOP
#include "../proffieboard_v2_config.h"

#define NUM_BLADES 2
#define NUM_BUTTONS 1
#define VOLUME 300
#define MAX_VOLUME 1500
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.9
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define SAVE_PRESET
#define SAVE_VOLUME
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
#include "common_presets.h"
#include "k4_presets.h"
#include "graflex_presets.h"
#include "fun_presets.h"
#include "double_presets.h"
#include "ninja_presets.h"
#include "mw2_presets.h"
#include "fo_presets.h"

Preset noBladePresets[] = {
  noBladePreset,

  // blue
  anhPreset,
  reyFlexPreset,
  benFlexPreset,
  ob4Preset,
  anakinVillainPreset,

  // green
  ls6Preset,
  yodaPreset,

  // red
  vaderPreset,
  maulPreset,
  secondSisterPreset,

  // white
  darksaberLivePreset,
  ahsokaPreset,

  // yellow
  reyPreset,

  // fire
  kyloPreset,

  // orange
  orangeFoPreset,

  // purple
  macePreset,

  // fun
  catPreset,
  pikachuPreset,
};

Preset presets[] = {
  // blue
  anhPreset,
  reyFlexPreset,
  benFlexPreset,
  ob4Preset,
  anakinVillainPreset,

  // green
  ls6Preset,
  yodaPreset,

  // red
  vaderPreset,
  maulPreset,
  secondSisterPreset,

  // white
  darksaberLivePreset,
  ahsokaPreset,

  // yellow
  reyPreset,

  // fire
  kyloPreset,

  // orange
  orangeFoPreset,

  // purple
  macePreset,

  // fun
  catPreset,
  pikachuPreset,
};

#include "blade_config.h"

#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif

