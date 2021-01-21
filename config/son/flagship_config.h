#ifdef CONFIG_TOP
#include "../proffieboard_v2_config.h"

#define NUM_BLADES 2
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

#endif

#ifdef CONFIG_PROP
#include "../../props/saber_son_buttons.h"
#endif

#ifdef CONFIG_PRESETS
#include "common_presets.h"
#include "son_presets.h"
#include "ninja_presets.h"
#include "double_presets.h"
#include "fun_presets.h"
#include "fo_presets.h"

/*
Preset lengthFinder[] = {
  {
    "heroes/owk;heroes/common", "",
    StylePtr<LengthFinder<>>(),
    "numpixel",
  },
};
*/

Preset noBladePresets[] = {
  noBladePreset,

  // personal
  sonPreset,
  spitfirePreset,
  ascensionPreset,

  //kotor
  revanPreset,

  // sequel
  reyPreset,
  kyloPreset,

  // fallen order
  blueFoPreset,
  greenFoPreset,
  purpleFoPreset,
  orangeFoPreset,
  yellowFoPreset,
  cyanFoPreset,
  magentaFoPreset,
  indigoFoPreset,
  redFoPreset,
  secondSisterPreset,

  // ahsoka
  snipsPreset,
  shotoPreset,
  tanoPreset,
  ahsokaPreset,
  maulPreset,

  // rebels
  ezraPreset,
  kananPreset,
  darksaberAnimatedPreset,
  darksaberLivePreset,

  // prequel
  yodaPreset,

  // fun
  pikachuPreset,
  smashPreset,
  catPreset,
};

Preset presets[] = {
  // personal
  sonPreset,
  spitfirePreset,
  ascensionPreset,

  //kotor
  revanPreset,

  // sequel
  reyPreset,
  kyloPreset,

  // fallen order
  blueFoPreset,
  greenFoPreset,
  purpleFoPreset,
  orangeFoPreset,
  yellowFoPreset,
  cyanFoPreset,
  magentaFoPreset,
  indigoFoPreset,
  redFoPreset,
  secondSisterPreset,

  // ahsoka
  snipsPreset,
  shotoPreset,
  tanoPreset,
  ahsokaPreset,
  maulPreset,

  // rebels
  ezraPreset,
  kananPreset,
  darksaberAnimatedPreset,
  darksaberLivePreset,

  // prequel
  yodaPreset,

  // fun
  pikachuPreset,
  smashPreset,
  catPreset,
};

#include "blade_config.h"

#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif

