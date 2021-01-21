#include "../../blades/son/dark_blades.h"
#include "../../blades/son/double_blades.h"
#include "../../blades/son/common_blades.h"
#include "../../blades/son/son_blades.h"
#include "../../blades/son/fun_blades.h"
#include "../../blades/son/k4_blades.h"

StyleAllocator buttonOnStyle = StyleNormalPtr<WHITE, WHITE, 300, 800>();
StyleAllocator buttonOffStyle = StyleNormalPtr<BLACK, BLACK, 300, 800>();

// jedi fallen order (second sister) green
// adjust time to -1000ms
// remove RotateColorsX<Variation,Rgb<0,50,0>> from stripes
// preon sparking (blade color)
// lockup effect color: animated series
// begin lockup color: animated series
// end lockup color: animated series
// multi-blast 2
// blast color: animated series
// clash color: animated series
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
// power save all effects 25%
StyleAllocator malakGreenStyle =
StylePtr<Layers<Stripes<10000,-1000,RotateColorsX<Variation,Rgb<0,80,0>>,RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,128,0>>,RotateColorsX<Variation,Green>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,TransitionEffect<Moccasin,Rgb<255,150,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,EffectSequence<EFFECT_BLAST,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,Layers<ResponsiveBlastFadeL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_BLAST>,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<Moccasin,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveClashL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,EffectSequence<EFFECT_POWERSAVE,AlphaL<Black,Int<8192>>,AlphaL<Black,Int<16384>>,AlphaL<Black,Int<24576>>,AlphaL<Black,Int<0>>>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>,TransitionEffectL<TrConcat<TrInstant,AlphaL<BrownNoiseFlickerL<RotateColorsX<Variation,Green>,Int<30>>,SmoothStep<Scale<SlowNoise<Int<2000>>,Int<1000>,Int<4000>>,Int<-4000>>>,TrDelayX<WavLen<EFFECT_PREON>>>,EFFECT_PREON>>>()
;

Preset malakPreset = {
  "son/common;The_Metallic_Jaw", "The_Metallic_Jaw/tracks/track2.wav",
  malakGreenStyle,
  malakGreenStyle,
  buttonOffStyle,
  "malak",
};

Preset palpatinePreset = {
  "son/common;The_Tragedy", "The_Tragedy/tracks/track1.wav",
  palpatineStyle,
  palpatineStyle,
  buttonOffStyle,
  "tragedy",
};

Preset revanPreset = {
  "son/common;The_Prodigal_Butcher", "The_Prodigal_Butcher/tracks/track1.wav",
  revanStyle,
  revanStyle,
  buttonOffStyle,
  "revan",
};

Preset secondSisterPreset = {
  "son/common;The_Second", "The_Second/tracks/JFO4.wav",
  secondSisterStyle,
  secondSisterStyle,
  buttonOffStyle,
  "sister",
};


Preset kyloPreset = {
  "son/common;Unstable_v2", "Unstable_v2/tracks/track4.wav",
  kyloStyle,
  kyloStyle,
  buttonOffStyle,
  "kylo",
};

Preset catPreset = {
  "shrodinger_cat;son/common", "",
  rainbowStyle,
  rainbowStyle,
  buttonOffStyle,
  "meow",
};

Preset sonPreset = {
  "son/common;Rogue", "son/tracks/TheForce4.wav",
  sonStyle,
  sonStyle,
  buttonOffStyle,
  "son",
};

Preset spitfirePreset = {
  "son/common;Spitfire", "son/tracks/TheForce4.wav",
  spitfireStyle,
  spitfireStyle,
  buttonOffStyle,
  "spitfire",
};

Preset ascensionPreset = {
  "son/common;Ascension", "",
  ascensionStyle,
  ascensionStyle,
  buttonOffStyle,
  "ascension",
};

Preset pikachuPreset = {
  "son/common;Electric_Mouse", "Electric_Mouse/tracks/Battle.wav",
  pikachuStyle,
  pikachuStyle,
  buttonOffStyle,
  "pikachu",
};

Preset ls6EvilPreset = {
  "son/common;EVIL SON/ATTRITION", "LS6/tracks/throne_duel.wav",
  ls6Style,
  ls6Style,
  buttonOffStyle,
  "attrition",
};

