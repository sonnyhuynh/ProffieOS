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

// npxl
#define SHARED_POWER_PINS

#define SA22C_NO_LOCKUP_HOLD
#define SON_SWING_ON
#define SON_TWIST_ON
#define SON_TWIST_OFF

#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
#endif

#ifdef CONFIG_PRESETS
#include "../blades/son_blades.h"

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
  {
    "son/owk;son/common;heroes/owk;heroes/common", "heroes/common/tracks/BattleOfHeros.wav",
    owk,
    owk,
    "OWK",
  },
  {
    "son/common;Rogue", "heroes/common/tracks/BattleOfHeros.wav",
    rogue,
    rogue,
    "son",
  },
  {
    "son/rey;son/common;OB4", "heroes/common/tracks/BattleOfHeros.wav",
    rey,
    rey,
    "rey",
  },
  {
    "son/common;workshop/purple;The_Tragedy", "The_Tragedy/tracks/track1.wav",
    purple,
    purple,
    "tragedy",
  },
  {
    "son/common;OB4", "OB4/tracks/Force_Theme.wav",
    ob4,
    ob4,
    "ob4",
  },
  {
    "son/kylo;son/common;Unstable_v2", "Unstable_v2/tracks/track4.wav",
    kylo,
    kylo,
    "kylo",
  },
  {
    "son/yoda;son/common;Little_Green_Friend", "Little_Green_Friend/tracks/YvsD.wav",
    yoda,
    yoda,
    "yoda",
  },
  {
    "son/common;Dark_V2/Moff_Gideon;Dark_V2/Font", "Dark_V2/Font/tracks/track2.wav",
    darksaber,
    darksaber,
    "darksaber",
  },
  {
    "son/ezra;son/common;Staple_Sword", "Staple_Sword/tracks/EzraTheme.wav",
    ezra,
    ezra,
    "ezra",
  },
  {
    "son/ahsoka;son/common;Code_Fulcrum", "Code_Fulcrum/tracks/track1.wav",
    ahsoka,
    ahsoka,
    "ahsoka",
  },
  {
    "son/luke;son/common;ANH_Training", "ANH_Training/tracks/Training_Ambience.wav",
    luke,
    luke,
    "luke",
  },
  {
    "son/vader;son/common;Father", "Father/tracks/Imperial_March_Short.wav",
    vader,
    vader,
    "vader",
  },
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

