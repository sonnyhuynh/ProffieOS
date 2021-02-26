// fully responsive dual phase
//    audioflicker orange
//    Rgb<48,0,105> (purple) for clash, lockup, blast
// -- color change boing 300ms
//    audioflicker purple
//    orange for clash, lockup, blast
//
// color change mods to ColorChange<TrInstant,Rgb<48,0,105>,Orange>
// multi blast 2
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator sonStyle =
StylePtr<Layers<
  ColorChange<TrBoing<300,3>,AudioFlicker<DarkOrange,Rgb<128,34,0>>,AudioFlicker<Rgb<95,0,210>,Rgb<42,0,105>>>,
  LockupTrL<
    Layers<
      AlphaL<AudioFlickerL<ColorChange<TrInstant,Rgb<48,0,105>,Orange>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
      AlphaL<ColorChange<TrInstant,Rgb<48,0,105>,Orange>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,
    TrConcat<TrInstant,ColorChange<TrInstant,Rgb<48,0,105>,Orange>,TrFade<400>>,
    TrConcat<TrInstant,ColorChange<TrInstant,Rgb<48,0,105>,Orange>,TrFade<400>>,
    SaberBase::LOCKUP_NORMAL>,
  ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  ResponsiveStabL<Red>,
  EffectSequence<EFFECT_BLAST,
    TransitionEffectL<TrConcat<TrInstant,AlphaL<ColorChange<TrInstant,Rgb<48,0,105>,Orange>,BlastF<200,200>>,TrFade<300>>,EFFECT_BLAST>,
    ResponsiveBlastL<ColorChange<TrInstant,Rgb<48,0,105>,Orange>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,
    ResponsiveBlastWaveL<ColorChange<TrInstant,Rgb<48,0,105>,Orange>,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>,
    ResponsiveBlastFadeL<ColorChange<TrInstant,Rgb<48,0,105>,Orange>,Scale<SwingSpeed<400>,Int<6000>,Int<12000>>,Scale<SwingSpeed<400>,Int<400>,Int<100>>>,
    ResponsiveBlastL<ColorChange<TrInstant,Rgb<48,0,105>,Orange>,Scale<SwingSpeed<400>,Int<400>,Int<100>>,Scale<SwingSpeed<400>,Int<200>,Int<100>>,Scale<SwingSpeed<400>,Int<400>,Int<200>>>
  >,
  ResponsiveClashL<ColorChange<TrInstant,Rgb<48,0,105>,Orange>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>>,
  TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>
>>()
;

// supreme leader kylo unstable deep sky blue
// lockup effect color: red (mod)
// begin lockup color: red (mod)
// end lockup color: red (mod)
// multi-blast 2
// blast color: compound red + white
// clash color: red (mod)
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator spitfireStyle =
StylePtr<Layers<
  StripesX<Int<1500>,Scale<SlowNoise<Int<2500>>,Int<-3000>,Int<-5000>>,RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,25,80>>,RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,6,20>>,RotateColorsX<Variation,DeepSkyBlue>>,
  LockupTrL<
    Layers<
      AlphaL<AudioFlickerL<Red>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
      AlphaL<Red,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>
    >,
    TrConcat<TrInstant,Red,TrFade<400>>,
    TrConcat<TrInstant,Red,TrFade<400>>,
    SaberBase::LOCKUP_NORMAL
  >,
  ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,
  EffectSequence<EFFECT_BLAST,ResponsiveBlastL<TransitionEffect<White,Red,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,Layers<ResponsiveBlastFadeL<TransitionEffect<White,Red,TrInstant,TrFade<100>,EFFECT_BLAST>,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<Red,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>>,BlastL<TransitionEffect<White,Red,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveBlastL<TransitionEffect<White,Red,TrInstant,TrFade<50>,EFFECT_BLAST>>>,BlastL<TransitionEffect<White,Red,TrInstant,TrFade<50>,EFFECT_BLAST>>,
  ResponsiveClashL<Red,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,
  TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>
>>()
;

// fully responsive audioflicker canon red
// lockup effect color: animated series
// begin lockup color: animated series
// end lockup color: animated series
// multi-blast 2
// blast color: animated series
// clash color: animated series
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator ascensionStyle =
StylePtr<Layers<Layers<AudioFlicker<RotateColorsX<Variation,Rgb<0,0,128>>,RotateColorsX<Variation,Rgb<0,0,200>>>,TransitionLoopL<TrWaveX<HumpFlickerL<RotateColorsX<Variation,DodgerBlue>,40>,Int<250>,Int<100>,Int<200>,Int<0>>>,TransitionLoopL<TrWaveX<HumpFlickerL<RotateColorsX<Variation,Blue>,40>,Int<350>,Int<100>,Int<300>,Int<0>>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,TransitionEffect<Moccasin,Rgb<255,150,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,EffectSequence<EFFECT_BLAST,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,Layers<ResponsiveBlastFadeL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_BLAST>,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<Moccasin,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveClashL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>>>()
;

