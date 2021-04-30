#include "../../blades/son/fo_blades.h"

#ifdef IS_CROSSGUARD
#include "../../blades/son/fo_side_blades.h"
#endif

Preset blueFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Blue", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
#ifdef HAS_CC
  STYLE_W_CC(blueFoStyle, fallenBlueCCStyle),
#else
  STYLE(blueFoStyle),
#endif
#else
  CROSSGUARD2(blueFoStyle, blueFoSideStyle),
#endif
  "fo blue",
};

Preset greenFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Green", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
#ifdef HAS_CC
  STYLE_W_CC(greenFoStyle, fallenGreenCCStyle),
#else
  STYLE(greenFoStyle),
#endif
#else
  CROSSGUARD2(greenFoStyle, greenFoSideStyle),
#endif
  "fo green",
};

Preset purpleFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Purple", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
#ifdef HAS_CC
  STYLE_W_CC(purpleFoStyle, fallenPurpleCCStyle),
#else
  STYLE(purpleFoStyle),
#endif
#else
  CROSSGUARD2(purpleFoStyle, purpleFoSideStyle),
#endif
  "fo purple",
};

Preset orangeFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Orange", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
#ifdef HAS_CC
  STYLE_W_CC(orangeFoStyle, fallenOrangeCCStyle),
#else
  STYLE(orangeFoStyle),
#endif
#else
  CROSSGUARD2(orangeFoStyle, orangeFoSideStyle),
#endif
  "fo orange",
};

Preset yellowFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Yellow", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
#ifdef HAS_CC
  STYLE_W_CC(yellowFoStyle, fallenYellowCCStyle),
#else
  STYLE(yellowFoStyle),
#endif
#else
  CROSSGUARD2(yellowFoStyle, yellowFoSideStyle),
#endif
  "fo yellow",
};

Preset cyanFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Cyan", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
#ifdef HAS_CC
  STYLE_W_CC(cyanFoStyle, fallenCyanCCStyle),
#else
  STYLE(cyanFoStyle),
#endif
#else
  CROSSGUARD2(cyanFoStyle, cyanFoSideStyle),
#endif
  "fo cyan",
};

Preset magentaFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Magenta", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
#ifdef HAS_CC
  STYLE_W_CC(magentaFoStyle, fallenMagentaCCStyle),
#else
  STYLE(magentaFoStyle),
#endif
#else
  CROSSGUARD2(magentaFoStyle, magentaFoSideStyle),
#endif
  "fo magenta",
};

Preset indigoFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Indigo", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
#ifdef HAS_CC
  STYLE_W_CC(indigoFoStyle, fallenIndigoCCStyle),
#else
  STYLE(indigoFoStyle),
#endif
#else
  CROSSGUARD2(indigoFoStyle, indigoFoSideStyle),
#endif
  "fo indigo",
};

Preset redFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Red", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
#ifdef HAS_CC
  STYLE_W_CC(redFoStyle, fallenRedCCStyle),
#else
  STYLE(redFoStyle),
#endif
#else
  CROSSGUARD2(redFoStyle, redFoSideStyle),
#endif
  "fo red",
};

