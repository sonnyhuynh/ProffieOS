// fully responsive audioflicker bright color swing dodger blue
// multi-blast effect
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)s
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
  InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>>,
  TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>
>>()
;

// supreme leader kylo unstable red
// multi-blast effect
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)s
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
  InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,
  TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>
>>()
;

// fallen order blue
// multi-blast effect
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)s
// power save all effects 25%
StyleAllocator fallenOrderArgStyle =
StylePtr<Layers<
  Stripes<
    16000,-1000,
    RotateColorsX<Variation,RgbArg<1,Blue>>,
    Pulsing<RotateColorsX<Variation,RgbArg<2,Rgb<0,0,90>>>,
    RotateColorsX<Variation,RgbArg<1,Blue>>,800>,
    RotateColorsX<Variation,RgbArg<1,Blue>>
  >,
  TransitionEffectL<TrConcat<
    TrFade<600>,RandomFlicker<RotateColorsX<Variation,RgbArg<1,Blue>>,RotateColorsX<Variation,RgbArg<3,Rgb<0,0,160>>>>,TrDelay<30000>,RotateColorsX<Variation,RgbArg<1,Blue>>,TrFade<800>
  >,EFFECT_FORCE>,
  TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,
  ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,RgbArg<4,Red>,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,
  ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  ResponsiveStabL<RgbArg<5,Red>,TrWipeIn<600>,TrWipe<600>>,
  EffectSequence<EFFECT_BLAST,
    ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,
    LocalizedClashL<White,80,30,EFFECT_BLAST>,
    ResponsiveBlastWaveL<White,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>,
    BlastL<White,200,200>,
    ResponsiveBlastFadeL<White,Scale<SwingSpeed<400>,Int<6000>,Int<12000>>,Scale<SwingSpeed<400>,Int<400>,Int<100>>>,
    ResponsiveBlastL<White,Scale<SwingSpeed<400>,Int<400>,Int<100>>,Scale<SwingSpeed<400>,Int<200>,Int<100>>,Scale<SwingSpeed<400>,Int<400>,Int<200>>>
  >,
  ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,RgbArg<6,Red>,RgbArg<7,Orange>>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  EffectSequence<EFFECT_POWERSAVE,AlphaL<Black,Int<8192>>,AlphaL<Black,Int<16384>>,AlphaL<Black,Int<24576>>,AlphaL<Black,Int<0>>>,
  InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,
  TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>
>>()
;

// second sister red
// multi-blast effect
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)s
// power save all effects 25%
StyleAllocator secondSisterArgStyle =
StylePtr<Layers<
  Stripes<10000,-1700,RotateColorsX<Variation,RgbArg<2,Rgb<80,0,0>>>,RotateColorsX<Variation,RgbArg<1,Red>>,RotateColorsX<Variation,RgbArg<3,Rgb<128,0,0>>>,RotateColorsX<Variation,RgbArg<4,Rgb<50,0,0>>>,RotateColorsX<Variation,RgbArg<1,Red>>>,
  TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,
  ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,RgbArg<5,Blue>,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,
  ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  ResponsiveStabL<RgbArg<6,Orange>,TrWipeIn<600>,TrWipe<600>>,
  EffectSequence<EFFECT_BLAST,
    ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,
    LocalizedClashL<White,80,30,EFFECT_BLAST>,
    ResponsiveBlastWaveL<White,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>,
    BlastL<White,200,200>,
    ResponsiveBlastFadeL<White,Scale<SwingSpeed<400>,Int<6000>,Int<12000>>,Scale<SwingSpeed<400>,Int<400>,Int<100>>>,
    ResponsiveBlastL<White,Scale<SwingSpeed<400>,Int<400>,Int<100>>,Scale<SwingSpeed<400>,Int<200>,Int<100>>,Scale<SwingSpeed<400>,Int<400>,Int<200>>>
  >,
  ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,RgbArg<7,Rgb<255,200,0>>,RgbArg<8,DarkOrange>>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  EffectSequence<EFFECT_POWERSAVE,AlphaL<Black,Int<8192>>,AlphaL<Black,Int<16384>>,AlphaL<Black,Int<24576>>,AlphaL<Black,Int<0>>>,
  InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,
  TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>
>>()
;