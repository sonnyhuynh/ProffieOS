#include "../../blades/son/common_blades.h"

#ifdef IS_CROSSGUARD
#include "../../blades/son/common_side_blades.h"

#define CROSSGUARD3(MAIN, LEFT_SIDE, RIGHT_SIDE) MAIN, MAIN, LEFT_SIDE, RIGHT_SIDE
#define CROSSGUARD2(MAIN, SIDE) CROSSGUARD3(MAIN, SIDE, SIDE)
#define CROSSGUARD(MAIN) CROSSGUARD2(MAIN, MAIN)

#endif

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
#elif NUM_BLADES == 4
#define STYLE(X) X, X, X, X
#define STYLE_W_CC(X, Y) X, X, X, Y
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
#ifndef IS_CROSSGUARD
#ifdef HAS_CC
  STYLE_W_CC(kyloStyle, fallenRedCCStyle),
#else
  STYLE(kyloStyle),
#endif
#else
  CROSSGUARD2(kyloStyle, kyloSideStyle),
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
#ifndef IS_CROSSGUARD
#ifdef HAS_CC
  STYLE_W_CC(rainbowStyle, rainbowCCStyle),
#else
  STYLE(rainbowStyle),
#endif
#else
  CROSSGUARD2(rainbowStyle, rainbowSideStyle),
#endif
  "meow",
};

Preset noBladePreset = {
  "son/common;Calibrate", "heroes/common/tracks/BattleOfHeros.wav",
#ifndef IS_CROSSGUARD
#ifdef HAS_CC
  STYLE_W_CC(nobladeStyle, nobladeCCStyle),
#else
  STYLE(nobladeStyle),
#endif
#else
  CROSSGUARD2(nobladeStyle, nobladeSideStyle),
#endif
  "noblade",
};

