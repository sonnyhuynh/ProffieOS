#include "../../blades/son/common_blades.h"
#include "../../blades/son/common_side_blades.h"
#include "../../blades/son/son_blades.h"
#include "../../blades/son/son_side_blades.h"

#define CROSSGUARD3(MAIN, LEFT_SIDE, RIGHT_SIDE) MAIN, MAIN, LEFT_SIDE, RIGHT_SIDE
#define CROSSGUARD2(MAIN, SIDE) CROSSGUARD3(MAIN, SIDE, SIDE)
#define CROSSGUARD(MAIN) CROSSGUARD2(MAIN, MAIN)

Preset unstablePreset = {
  "son/common;Unstable_v2", "Unstable_v2/tracks/track4.wav",
  CROSSGUARD2(kyloStyle, kyloSideStyle),
  "unstable",
};

Preset unstableDelayedPreset = {
  "son/common;Unstable_v1;Unstable_v2", "Unstable_v2/tracks/track4.wav",
  CROSSGUARD2(kyloStyle, kyloDelayedSideStyle),
  "unstable delay",
};

Preset tfaPreset = {
  "son/common;KRossguard/TFA", "Unstable_v2/tracks/track4.wav",
  CROSSGUARD2(kyloStyle, kyloSideStyle),
  "tfa",
};

Preset tljPreset = {
  "son/common;KRossguard/TLJ", "Unstable_v2/tracks/track4.wav",
  CROSSGUARD2(kyloStyle, kyloSideStyle),
  "tlj",
};

Preset trosPreset = {
  "son/common;KRossguard/TROS", "Unstable_v2/tracks/track4.wav",
  CROSSGUARD2(kyloStyle, kyloSideStyle),
  "tros",
};

Preset tfaDelayedPreset = {
  "son/common;KRossguard/_Extras/Ignitions/TFA_Style4_275ms;KRossguard/TFA", "Unstable_v2/tracks/track4.wav",
  CROSSGUARD2(kyloStyle, kyloDelayedSideStyle),
  "tfa delay",
};

Preset tljDelayedPreset = {
  "son/common;KRossguard/_Extras/Ignitions/TLJ_Style2_190ms;KRossguard/TLJ", "Unstable_v2/tracks/track4.wav",
  CROSSGUARD2(kyloStyle, kyloDelayedSideStyle),
  "tlj delay",
};

Preset trosDelayedPreset = {
  "son/common;KRossguard/_Extras/Ignitions/TROS_Style1_145ms;KRossguard/TROS", "Unstable_v2/tracks/track4.wav",
  kyloStyle,
  kyloStyle,
  KYLO_UNSTABLE_DELAYED_STYLE(145),
  KYLO_UNSTABLE_DELAYED_STYLE(145),
  "tros delay",
};

Preset spitfirePreset = {
  "son/common;Spitfire", "son/tracks/TheForce4.wav",
  CROSSGUARD2(spitfireStyle, spitfireBlueSideStyle),
  "spitfire",
};

Preset catPreset = {
  "shrodinger_cat;son/common", "",
  CROSSGUARD(rainbowStyle),
  "meow",
};

Preset noBladePreset = {
  "son/common;Calibrate", "heroes/common/tracks/BattleOfHeros.wav",
  CROSSGUARD(nobladeStyle),
  "noblade",
};

