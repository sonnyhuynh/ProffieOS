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

#define SA22C_NO_LOCKUP_HOLD
#define SON_SWING_ON
#define SON_TWIST_ON
#define SON_TWIST_OFF

// dual phase styles
#define COLOR_CHANGE_DIRECT

// reset blade color
#define RESET_COLOR

#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
#endif

#ifdef CONFIG_PRESETS
#include "son_presets.h"

/*
Preset lengthFinder[] = {
  {
    "heroes/owk;heroes/common", "",
    StylePtr<LengthFinder<>>(),
    "numpixel",
  },
};
*/

Preset presets[] = {
  owkPreset,
  sonPreset,
  reyPreset,
  purplePreset,
  ob4Preset,
  kyloPreset,
  yodaPreset,
  darksaberPreset,
  ezraPreset,
  ahsokaPreset,
  lukePreset,
  vaderPreset,
};

BladeConfig blades[] = {
  {
    0,
// 28" bendu blade
//    WS281XBladePtr<97, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
// 20" bendu blade
    WS281XBladePtr<67, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
// 7" bendu blade
//    WS281XBladePtr<21, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
// npxl
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    CONFIGARRAY(presets)
  },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif

