#include "../../blades/son/fun_blades.h"

#ifdef IS_CROSSGUARD
#include "../../blades/son/fun_side_blades.h"
#endif

Preset pikachuPreset = {
  "son/common;Electric_Mouse", "Electric_Mouse/tracks/Battle.wav",
#ifndef IS_CROSSGUARD
  STYLE(pikachuStyle),
#else
  CROSSGUARD2(pikachuStyle, pikachuSideStyle),
#endif
  "pikachu",
};

Preset smashPreset = {
  "son/common;Smash_Sword", "",
  STYLE(smashStyle),
  "smash",
};

