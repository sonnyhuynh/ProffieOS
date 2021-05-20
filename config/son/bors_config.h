#ifdef CONFIG_TOP
#include "../proffieboard_v2_config.h"

#define NUM_BLADES 2
#define NUM_BUTTONS 2
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

#define SON_SWING_ON
#define SON_TWIST_ON
#define SON_TWIST_OFF
#define FETT263_BATTLE_MODE
#define FETT263_FORCE_PUSH

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
#include "common_presets.h"
#include "bors_presets.h"
#include "dark_presets.h"
#include "double_presets.h"
#include "son_presets.h"
#include "fun_presets.h"
#include "k4_presets.h"
#include "fo_presets.h"

Preset presets[] = {
  malakGreenPreset,
  secondSisterPreset,
  palpatinePreset,
  senateRotsPreset,
  senateTcwPreset,
  revanPreset,
  evilSonAttritionPreset,
  kyloPreset,

  negotiatorSassyPreset,

  crimsonMenacePreset,
  savagePreset,

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

  sonPreset,
  spitfirePreset,
  ascensionPreset,
  pikachuPreset,
  catPreset,
};

#include "blades.h"

BladeConfig blades[] = {
  {
    0,
    blade16,
    // chassis leds
    WS281XBladePtr<8, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin4> >(),
    // yellow button
//    SimpleBladePtr<CH1LED, CH2LED, NoLED, NoLED, bladePowerPin5, bladePowerPin6, -1, -1>(),
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
};

#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif

