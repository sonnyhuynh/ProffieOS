#include "../../blades/son/double_blades.h"

#ifdef IS_CROSSGUARD
#include "../../blades/son/double_side_blades.h"
#endif

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

Preset ahsokaMandoPreset = {
  "son/common;The_Sorcerer/Standard", "The_Sorcerer/tracks/track1.wav",
  STYLE(ahsokaStyle),
  "mando",
};

Preset ahsokaMandoBeskarPreset = {
  "son/common;The_Sorcerer/Beskar;The_Sorcerer/Standard", "The_Sorcerer/tracks/track3.wav",
  STYLE(ahsokaStyle),
  "beskar",
};

Preset revanPreset = {
  "son/common;The_Prodigal_Butcher", "The_Prodigal_Butcher/tracks/track1.wav",
  STYLE(revanStyle),
  "revan",
};

Preset secondSisterPreset = {
  "son/common;The_Second", "The_Second/tracks/JFO4.wav",
#ifndef IS_CROSSGUARD
#ifdef HAS_CC
  STYLE_W_CC(secondSisterStyle, fallenRedCCStyle),
#else
  STYLE(secondSisterStyle),
#endif
#else
  CROSSGUARD2(secondSisterStyle, secondSisterSideStyle),
#endif
  "sister",
};

Preset maulPreset = {
  "son/common;MAUL_S7E9", "MAUL_S7E9/tracks/track1.wav",
  STYLE(maulStyle),
  "maul",
};

Preset crimsonMenacePreset = {
  "son/common;CrimsonMenace", "CrimsonMenace/tracks/Duel of the Fates.wav",
#ifdef HAS_CC
  STYLE_W_CC(maulStyle, fallenRedCCStyle),
#else
  STYLE(maulStyle),
#endif
  "crimson",
};

Preset savagePreset = {
  "son/common;Savage", "Savage/tracks/track1.wav",
#ifdef HAS_CC
  STYLE_W_CC(maulStyle, pulseRedCCStyle),
#else
  STYLE(maulStyle),
#endif
  "savaage",
};

