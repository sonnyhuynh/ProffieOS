#include "../../blades/son/son_blades.h"

#ifdef IS_CROSSGUARD
#include "../../blades/son/son_side_blades.h"
#endif

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
#ifndef IS_CROSSGUARD
#ifdef HAS_CC
  STYLE_W_CC(spitfireStyle, fallenCyanCCStyle),
#else
  STYLE(spitfireStyle),
#endif
#else
  CROSSGUARD2(spitfireStyle, spitfireBlueSideStyle),
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

