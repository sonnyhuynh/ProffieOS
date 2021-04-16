#include "blades.h"

BladeConfig blades[] = {
  {
    0,
    bladeMax,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    5600,
    benduBlade28,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    7400,
    benduBlade7,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    8400,
    benduBlade20,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    10000,
    blade32,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    32000, // 33k
    blade28,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    37900, // 39k
    blade24,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    63500, // 68k
    blade16,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    69000, // 75k
    blade12,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    75000, // 82k
    blade8,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    800000,
    vvBlade28,
    npxlOff,
    CONFIGARRAY(presets),
    "CONFIG/blade"
  },
  {
    NO_BLADE,
    bladeOff,
    npxl,
    CONFIGARRAY(noBladePresets),
    "CONFIG/noblade",
  },
};

