#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"

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
#include "../props/saber_son_buttons.h"
#endif

#ifdef CONFIG_PRESETS
#include "son_common_presets.h"
#include "son_flagship_presets.h"
#include "son_dark_presets.h"

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
  sonPreset,
  spitfirePreset,
  malakPreset,
  reyPreset,
  secondSisterPreset,
  purplePreset,
  ahsokaPreset,
  kyloPreset,
  yodaPreset,
  darksaberPreset,
  revanPreset,
  catPreset,
};

Preset presets[] = {
  sonPreset,
  spitfirePreset,
  malakPreset,
  reyPreset,
  secondSisterPreset,
  purplePreset,
  ahsokaPreset,
  kyloPreset,
  yodaPreset,
  darksaberPreset,
  revanPreset,
  catPreset,
};

BladeConfig blades[] = {
  {
    0,
    WS281XBladePtr<144, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    WS281XBladePtr<0, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    5600,
    // 28" bendu blade
    WS281XBladePtr<97, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    WS281XBladePtr<0, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    7400,
    // 7" bendu blade
    WS281XBladePtr<19, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    WS281XBladePtr<0, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    8400,
    // 20" bendu blade
    WS281XBladePtr<67, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    WS281XBladePtr<0, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    39000,
    // 24" blade
    WS281XBladePtr<83, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    WS281XBladePtr<0, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    68000,
    // 16" blade
    WS281XBladePtr<54, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    WS281XBladePtr<0, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    NO_BLADE,
    WS281XBladePtr<0, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    CONFIGARRAY(noBladePresets),
    "CONFIG/noblade",
  },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif

