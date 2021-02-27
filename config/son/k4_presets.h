#include "../../blades/son/k4_blades.h"

Preset ob4Preset = {
  "son/common;OB4", "OB4/tracks/Force_Theme.wav",
  STYLE(ob4Style),
  "ob4",
};

Preset ls6Preset = {
  "son/common;LS6", "LS6/tracks/luke_intro.wav",
  STYLE(ls6Style),
  "ls6",
};

Preset ls6CavePreset = {
  "son/common;EVIL SON/FIRST STEPS", "LS6/tracks/luke_intro.wav",
  STYLE(ls6Style),
  "first steps",
};

Preset ls6EvilPreset = {
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

