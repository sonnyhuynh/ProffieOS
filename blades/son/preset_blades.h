// fully responsive audioflicker color swing w/ font battery monitor dodger blue
// multi-blast effects
// power save all effects 25%
StyleAllocator audioflickerArgStyle =
StylePtr<Layers<
  Mix<SwingSpeed<400>,AudioFlicker<RotateColorsX<Variation,RgbArg<1,DodgerBlue>>,RotateColorsX<Variation,RgbArg<2,SteelBlue>>>,Mix<SwingSpeed<600>,RotateColorsX<Variation,RgbArg<1,DodgerBlue>>,RotateColorsX<Variation,RgbArg<3,Rgb<100,185,255>>>>>,
  TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<RgbArg<7,White>,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,
  ResponsiveLockupL<Strobe<RgbArg<5,White>,BrownNoiseFlicker<RgbArg<5,White>,RgbArg<6,Red>,300>,50,1>,TrConcat<TrInstant,RgbArg<4,White>,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,
  ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  ResponsiveStabL<RgbArg<8,Red>>,
  EffectSequence<EFFECT_BLAST,
    ResponsiveBlastL<RgbArg<9,White>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,
    LocalizedClashL<RgbArg<9,White>,80,30,EFFECT_BLAST>,
    ResponsiveBlastWaveL<RgbArg<9,White>,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>,
    BlastL<RgbArg<9,White>,200,200>,
    ResponsiveBlastFadeL<RgbArg<9,White>,Scale<SwingSpeed<400>,Int<6000>,Int<12000>>,Scale<SwingSpeed<400>,Int<400>,Int<100>>>,
    ResponsiveBlastL<RgbArg<9,White>,Scale<SwingSpeed<400>,Int<400>,Int<100>>,Scale<SwingSpeed<400>,Int<200>,Int<100>>,Scale<SwingSpeed<400>,Int<400>,Int<200>>>
  >,
  ResponsiveClashL<RgbArg<10,White>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<RgbArg<11,White>,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,RgbArg<12,Red>,RgbArg<13,Orange>>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  EffectSequence<EFFECT_POWERSAVE,AlphaL<Black,Int<8192>>,AlphaL<Black,Int<16384>>,AlphaL<Black,Int<24576>>,AlphaL<Black,Int<0>>>,
  InOutTrL<TrWipe<300>,TrWipeIn<500>>,
  TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>
>>()
;

// supreme leader kylo unstable w/ font battery monitor red
// multi-blast effects
// power save all effects 25%
StyleAllocator supremeLeaderArgStyle =
StylePtr<Layers<
  StripesX<Int<1500>,Scale<SlowNoise<Int<2500>>,Int<-3000>,Int<-5000>>,RotateColorsX<Variation,RgbArg<1,Red>>,RotateColorsX<Variation,RgbArg<2,Rgb<80,0,0>>>,RotateColorsX<Variation,RgbArg<1,Red>>,RotateColorsX<Variation,RgbArg<3,Rgb<20,0,0>>>,RotateColorsX<Variation,RgbArg<1,Red>>>,
  TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<RgbArg<7,White>,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,
  ResponsiveLockupL<Strobe<RgbArg<5,White>,BrownNoiseFlicker<RgbArg<5,White>,RgbArg<6,Blue>,300>,50,1>,TrConcat<TrInstant,RgbArg<4,White>,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,
  ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  ResponsiveStabL<RgbArg<8,Orange>,TrWipeIn<600>,TrWipe<600>>,
  EffectSequence<EFFECT_BLAST,
    ResponsiveBlastL<RgbArg<9,White>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,
    LocalizedClashL<RgbArg<9,White>,80,30,EFFECT_BLAST>,
    ResponsiveBlastWaveL<RgbArg<9,White>,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>,
    BlastL<RgbArg<9,White>,200,200>,
    ResponsiveBlastFadeL<RgbArg<9,White>,Scale<SwingSpeed<400>,Int<6000>,Int<12000>>,Scale<SwingSpeed<400>,Int<400>,Int<100>>>,
    ResponsiveBlastL<RgbArg<9,White>,Scale<SwingSpeed<400>,Int<400>,Int<100>>,Scale<SwingSpeed<400>,Int<200>,Int<100>>,Scale<SwingSpeed<400>,Int<400>,Int<200>>>
  >,
  ResponsiveClashL<RgbArg<10,White>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<RgbArg<11,White>,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,RgbArg<12,Rgb<255,200,0>>,RgbArg<13,DarkOrange>>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  EffectSequence<EFFECT_POWERSAVE,AlphaL<Black,Int<8192>>,AlphaL<Black,Int<16384>>,AlphaL<Black,Int<24576>>,AlphaL<Black,Int<0>>>,
  InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>,
  TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>
>>()
;

