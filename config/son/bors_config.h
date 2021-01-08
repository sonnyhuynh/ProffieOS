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
#include "bors_presets.h"

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
  malakPreset,
  secondSisterPreset,
  palpatinePreset,
  revanPreset,
  kyloPreset,
  sonPreset,
  spitfirePreset,
  ascensionPreset,
  pikachuPreset,
  catPreset,
};

BladeConfig blades[] = {
  {
    0,
    // 24" blade
    WS281XBladePtr<83, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    // chassis leds
    WS281XBladePtr<8, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin4> >(),
    // yellow button
    SimpleBladePtr<CH1LED, CH2LED, NoLED, NoLED, bladePowerPin5, bladePowerPin6, -1, -1>(),
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
};

#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif

