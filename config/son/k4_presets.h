#include "../../blades/son/k4_blades.h"

Preset ob4Preset = {
  "son/common;OB4", "OB4/tracks/Force_Theme.wav",
  STYLE(ob4Style),
  "ob4",
};

Preset negotiatorPreset = {
  "son/common;The Negotiator Complete/base", "",
  STYLE(ob4Style),
  "negotiator",
};

Preset negotiatorSassyPreset = {
  "son/common;The Negotiator Complete/sassy;The Negotiator Complete/base", "",
#ifdef HAS_CC
  STYLE_W_CC(ob4Style, pulseBlueCCStyle),
#else
  STYLE(ob4Style),
#endif
  "sassy",
};

Preset ls6Preset = {
  "son/common;LS6/v2/Classic;LS6/v2/common", "LS6/tracks/luke_intro.wav",
  STYLE(ls6Style),
  "ls6",
};

Preset ls6ModernPreset = {
  "son/common;LS6/v1/Modern", "LS6/tracks/medley1.wav",
  STYLE(ls6Style),
  "ls6",
};

Preset ls6CavePreset = {
  "son/common;LS6/v2/Cave Scene;LS6/v2/common", "LS6/tracks/Beeps_buzz_loop.wav",
  STYLE(ls6Style),
  "cave",
};

Preset evilSonFirstStepsPreset = {
  "son/common;EVIL SON/FIRST STEPS", "LS6/tracks/luke_intro.wav",
  STYLE(ls6Style),
  "first steps",
};

Preset evilSonAttritionPreset = {
  "son/common;EVIL SON/ATTRITION", "LS6/tracks/throne_duel.wav",
#ifdef HAS_CC
  STYLE_W_CC(ls6Style, fallenGreenCCStyle),
#else
  STYLE(ls6Style),
#endif
  "attrition",
};

Preset rescuePreset = {
  "son/common;Rescue", "Rescue/tracks/Outro_Short_Beginning.wav",
#ifdef HAS_CC
  STYLE_W_CC(ls6Style, pulseGreenCCStyle),
#else
  STYLE(ls6Style),
#endif
  "rescue",
};

