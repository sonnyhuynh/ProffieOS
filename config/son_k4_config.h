#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"

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
//#define ENABLE_SSD1306
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
#include "son_k4_presets.h"

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
  ob4Preset,
  kyloPreset,
  yodaPreset,
  darksaberPreset,
  ezraPreset,
  ahsokaPreset,
  lukePreset,
  vaderPreset,
  owkPreset,
  sonPreset,
  reyPreset,
  purplePreset,
};

Preset presets[] = {
  ob4Preset,
  kyloPreset,
  yodaPreset,
  darksaberPreset,
  ezraPreset,
  ahsokaPreset,
  lukePreset,
  vaderPreset,
  owkPreset,
  sonPreset,
  reyPreset,
  purplePreset,
};

BladeConfig blades[] = {
  {
    0,
    SubBlade(5, 101,
    // 28" bendu blade, 97px + 5px emitter
    WS281XBladePtr<102, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >()
    ),
    // npxl emitter, 5px
    SubBlade(0,4, NULL),
    // npxl chassis
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    NO_BLADE,
    SubBlade(1, 1,
    // 28" bendu blade, 97px + 5px emitter
    WS281XBladePtr<2, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >()
    ),
    // npxl emitter, 5px
    SubBlade(0,0, NULL),
    // npxl chassis
    WS281XBladePtr<5, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    CONFIGARRAY(noBladePresets),
    "CONFIG/noblade"
  },
};

#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif

