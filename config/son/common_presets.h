#include "../../blades/son/common_blades.h"

#if NUM_BLADES == 0
#define STYLE(X)
#define STYLE_W_CC(X, Y)
#elif NUM_BLADES == 1
#define STYLE(X) X
#define STYLE_W_CC(X, Y) X
#elif NUM_BLADES == 2
#define STYLE(X) X, X
#define STYLE_W_CC(X, Y) X, X // this is not a mistake. first 2 styles are blade + npxl, so CC style doesn't matter
#elif NUM_BLADES == 3
#define STYLE(X) X, X, X
#define STYLE_W_CC(X, Y) X, X, Y
#else
#error NUM_BLADES is too big
#endif

Preset reyPreset = {
  "son/common;FinalSteps", "FinalSteps/tracks/track1.wav",
  STYLE(reyStyle),
  "rey",
};

Preset kyloPreset = {
  "son/common;Unstable_v2", "Unstable_v2/tracks/track4.wav",
#ifdef HAS_CC
  STYLE_W_CC(kyloStyle, fallenRedCCStyle),
#else
  STYLE(kyloStyle),
#endif
  "kylo",
};

Preset yodaPreset = {
  "son/common;Little_Green_Friend", "Little_Green_Friend/tracks/YvsD.wav",
  STYLE(yodaStyle),
  "yoda",
};

Preset vaderPreset = {
  "son/common;Father", "Father/tracks/Imperial_March_Short.wav",
  STYLE(vaderStyle),
  "vader",
};

Preset rogueVaderPreset = {
  "son/common;RogueVader", "RogueVader/tracks/hallway.wav",
#ifdef HAS_CC
  STYLE_W_CC(vaderStyle, pulseRedCCStyle),
#else
  STYLE(vaderStyle),
#endif
  "rogue vader",
};


Preset catPreset = {
  "shrodinger_cat;son/common", "",
#ifdef HAS_CC
  STYLE_W_CC(rainbowStyle, rainbowCCStyle),
#else
  STYLE(rainbowStyle),
#endif
  "meow",
};

Preset noBladePreset = {
  "son/common;Calibrate", "heroes/common/tracks/BattleOfHeros.wav",
#ifdef HAS_CC
  STYLE_W_CC(nobladeStyle, nobladeCCStyle),
#else
  STYLE(nobladeStyle),
#endif
  "noblade",
};

