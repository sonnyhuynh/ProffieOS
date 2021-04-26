#include "../../blades/son/fo_blades.h"

#ifdef IS_CROSSGUARD
#include "../../blades/son/fo_side_blades.h"
#endif

Preset blueFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Blue", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
  STYLE(blueFoStyle),
#else
  CROSSGUARD2(blueFoStyle, blueFoSideStyle),
#endif
  "fo blue",
};

Preset greenFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Green", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
  STYLE(greenFoStyle),
#else
  CROSSGUARD2(greenFoStyle, greenFoSideStyle),
#endif
  "fo green",
};

Preset purpleFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Purple", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
  STYLE(purpleFoStyle),
#else
  CROSSGUARD2(purpleFoStyle, purpleFoSideStyle),
#endif
  "fo purple",
};

Preset orangeFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Orange", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
  STYLE(orangeFoStyle),
#else
  CROSSGUARD2(orangeFoStyle, orangeFoSideStyle),
#endif
  "fo orange",
};

Preset yellowFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Yellow", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
  STYLE(yellowFoStyle),
#else
  CROSSGUARD2(yellowFoStyle, yellowFoSideStyle),
#endif
  "fo yellow",
};

Preset cyanFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Cyan", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
  STYLE(cyanFoStyle),
#else
  CROSSGUARD2(cyanFoStyle, cyanFoSideStyle),
#endif
  "fo cyan",
};

Preset magentaFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Magenta", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
  STYLE(magentaFoStyle),
#else
  CROSSGUARD2(magentaFoStyle, magentaFoSideStyle),
#endif
  "fo magenta",
};

Preset indigoFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Indigo", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
  STYLE(indigoFoStyle),
#else
  CROSSGUARD2(indigoFoStyle, indigoFoSideStyle),
#endif
  "fo indigo",
};

Preset redFoPreset = {
  "son/common;The_Survivor_Bundle/common;The_Survivor_Bundle/Red", "The_Survivor_Bundle/common/tracks/JFO1.wav",
#ifndef IS_CROSSGUARD
  STYLE(redFoStyle),
#else
  CROSSGUARD2(redFoStyle, redFoSideStyle),
#endif
  "fo red",
};

