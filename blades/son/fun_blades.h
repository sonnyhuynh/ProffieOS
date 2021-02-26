// fully responsive audioflicker canon gold
// mod to fire style
// lockup effect color: blue mod
// stab color blue mod
// multi-blast 2
// blast color: blue
// clash color: blue mod
// ignition 2000ms
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator pikachuStyle =
StylePtr<Layers<
  StyleFire<Yellow,Blue,0,3,FireConfig<0,2000,5>,FireConfig<0,2000,5>,FireConfig<0,2000,5>,FireConfig<0,2000,5>>,
  LockupTrL<Layers<AlphaL<AudioFlickerL<Blue>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Blue,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,White,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
  ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  ResponsiveStabL<Blue,TrWipeIn<600>,TrWipe<600>>,
  EffectSequence<EFFECT_BLAST,
    TransitionEffectL<TrConcat<TrInstant,AlphaL<Blue,BlastF<200,200>>,TrFade<300>>,EFFECT_BLAST>,
    ResponsiveBlastL<Blue,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,
    ResponsiveBlastWaveL<Blue,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>,
    ResponsiveBlastFadeL<Blue,Scale<SwingSpeed<400>,Int<6000>,Int<12000>>,Scale<SwingSpeed<400>,Int<400>,Int<100>>>,
    ResponsiveBlastL<Blue,Scale<SwingSpeed<400>,Int<400>,Int<100>>,Scale<SwingSpeed<400>,Int<200>,Int<100>>,Scale<SwingSpeed<400>,Int<400>,Int<200>>>
  >,
  ResponsiveClashL<Blue,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  InOutTrL<TrWipe<2000>,TrWipeInX<WavLen<EFFECT_RETRACTION>>>,
  TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>
>>()
;

// fully responsive kaleidoscope full spectrum
// multi-blast 2
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator smashStyle =
StylePtr<Layers<Mix<SmoothStep<Int<16384>,Int<0>>,Mix<SmoothStep<Int<8192>,Int<0>>,StripesX<Int<3000>,Scale<TwistAngle<1>,Int<-250>,Int<250>>,RotateColorsX<Sin<Scale<TwistAngle<1>,Int<6>,Int<0>>>,Red>,RotateColorsX<Sin<Scale<TwistAngle<1>,Int<6>,Int<0>>>,Rgb<60,0,0>>,RotateColorsX<Sin<Scale<TwistAngle<1>,Int<6>,Int<0>>>,Rgb<128,0,0>>>,StripesX<Int<3000>,Scale<TwistAngle<1>,Int<250>,Int<-250>>,RotateColorsX<Sin<Scale<TwistAngle<1>,Int<6>,Int<0>>>,Red>,RotateColorsX<Sin<Scale<TwistAngle<1>,Int<6>,Int<0>>>,Rgb<60,0,0>>,RotateColorsX<Sin<Scale<TwistAngle<1>,Int<6>,Int<0>>>,Rgb<128,0,0>>>>,Mix<SmoothStep<Int<24576>,Int<0>>,StripesX<Int<3000>,Scale<TwistAngle<1>,Int<-250>,Int<250>>,RotateColorsX<Sin<Scale<TwistAngle<1>,Int<6>,Int<0>>>,Red>,RotateColorsX<Sin<Scale<TwistAngle<1>,Int<6>,Int<0>>>,Rgb<60,0,0>>,RotateColorsX<Sin<Scale<TwistAngle<1>,Int<6>,Int<0>>>,Rgb<128,0,0>>>,StripesX<Int<3000>,Scale<TwistAngle<1>,Int<250>,Int<-250>>,RotateColorsX<Sin<Scale<TwistAngle<1>,Int<6>,Int<0>>>,Red>,RotateColorsX<Sin<Scale<TwistAngle<1>,Int<6>,Int<0>>>,Rgb<60,0,0>>,RotateColorsX<Sin<Scale<TwistAngle<1>,Int<6>,Int<0>>>,Rgb<128,0,0>>>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,White,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,EffectSequence<EFFECT_BLAST,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,BlastF<200,200>>,TrFade<300>>,EFFECT_BLAST>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>,ResponsiveBlastFadeL<White,Scale<SwingSpeed<400>,Int<6000>,Int<12000>>,Scale<SwingSpeed<400>,Int<400>,Int<100>>>,ResponsiveBlastL<White,Scale<SwingSpeed<400>,Int<400>,Int<100>>,Scale<SwingSpeed<400>,Int<200>,Int<100>>,Scale<SwingSpeed<400>,Int<400>,Int<200>>>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrWipe<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<2000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<1000>>,EFFECT_BATTERY_LEVEL>>>()
;

