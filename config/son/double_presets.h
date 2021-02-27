#include "../../blades/son/double_blades.h"

Preset snipsPreset = {
  "son/ahsoka;son/common;heroes/ahsoka;heroes/common", "heroes/common/tracks/BattleOfHeros.wav",
  STYLE(snipsStyle),
  "snips",
};

Preset shotoPreset = {
  "son/ahsoka;son/common;heroes/ahsoka;heroes/common", "heroes/common/tracks/BattleOfHeros.wav",
  STYLE(shotoStyle),
  "shoto",
};

Preset tanoPreset = {
  "son/common;Commander_Tano", "Commander_Tano/tracks/track2.wav",
  STYLE(tanoStyle),
  "tano",
};

Preset ahsokaPreset = {
  "son/common;Code_Fulcrum", "Code_Fulcrum/tracks/track1.wav",
  STYLE(ahsokaStyle),
  "ahsoka",
};

Preset revanPreset = {
  "son/common;The_Prodigal_Butcher", "The_Prodigal_Butcher/tracks/track1.wav",
  STYLE(revanStyle),
  "revan",
};

Preset secondSisterPreset = {
  "son/common;The_Second", "The_Second/tracks/JFO4.wav",
#ifdef HAS_CC
  STYLE_W_CC(secondSisterStyle, fallenRedCCStyle),
#else
  STYLE(secondSisterStyle),
#endif
  "sister",
};

Preset maulPreset = {
  "son/common;MAUL_S7E9", "MAUL_S7E9/tracks/track1.wav",
  STYLE(maulStyle),
  "maul",
};

