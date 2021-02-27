#include "../../blades/son/son_blades.h"

Preset sonPreset = {
  "son/common;Rogue", "son/tracks/TheForce4.wav",
#ifdef HAS_CC
  STYLE_W_CC(sonStyle, sonCCStyle),
#else
  STYLE(sonStyle),
#endif
  "son",
};

Preset spitfirePreset = {
  "son/common;Spitfire", "son/tracks/TheForce4.wav",
#ifdef HAS_CC
  STYLE_W_CC(spitfireStyle, fallenCyanCCStyle),
#else
  STYLE(spitfireStyle),
#endif
  "spitfire",
};

Preset ascensionPreset = {
  "son/common;Ascension", "",
#ifdef HAS_CC
  STYLE_W_CC(ascensionStyle, pulseBlueCCStyle),
#else
  STYLE(ascensionStyle),
#endif
  "ascension",
};

