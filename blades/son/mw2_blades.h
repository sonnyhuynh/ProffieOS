// fully responsive audioflicker canon purple
// responsive lockup v2 (mid-blade)
// lockup effect color: prequel trilogy
// begin lockup color: prequel trilogy
// end lockup color: prequel trilogy
// multi-blast 2
// blast color: prequel trilogy
// responsive clash v2 (mid-blade)
// clash color: prequel trilogy
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator maceStyle =
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Rgb<95,0,210>>,RotateColorsX<Variation,Rgb<48,0,105>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,225,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<NavajoWhite,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,EffectSequence<EFFECT_BLAST,ResponsiveBlastL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,Layers<ResponsiveBlastFadeL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_BLAST>,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<NavajoWhite,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>>,BlastL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveBlastL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<50>,EFFECT_BLAST>>>,BlastL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveClashL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>>>()
;

// jedi fallen order style mod silver
// responsive lockup v2 (mid-blade)
// effect sequence lockup effect color: rotate colors
// stab color: green
// multi-blast 2 (added 1 more sequence for pink)
// effect sequence blast color: various colors
// responsive clash v2 (mid-blade)
// effect sequence clash color: various colors
// drag color: green
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator powerRangersStyle =
StylePtr<Layers<
  Stripes<16000,-500,RotateColorsX<Variation,Rgb<100,100,150>>,Pulsing<RotateColorsX<Variation,Rgb<25,25,40>>,RotateColorsX<Variation,Rgb<51,51,77>>,800>,RotateColorsX<Variation,Rgb<100,100,150>>>,
  LockupTrL<Layers<AlphaL<RotateColorsX<Sin<Int<25>>,Blue>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<RotateColorsX<Sin<Int<25>>,Red>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,White,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
  ResponsiveLightningBlockL<Strobe<RotateColorsX<Sin<Int<25>>,Red>,White,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  ResponsiveStabL<Green,TrWipeIn<600>,TrWipe<600>>,
  EffectSequence<EFFECT_BLAST,
    TransitionEffectL<TrConcat<TrInstant,AlphaL<Green,BlastF<200,200>>,TrFade<300>>,EFFECT_BLAST>,
    ResponsiveBlastL<Red,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,
    ResponsiveBlastWaveL<Black,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>,
    ResponsiveBlastFadeL<Blue,Scale<SwingSpeed<400>,Int<6000>,Int<12000>>,Scale<SwingSpeed<400>,Int<400>,Int<100>>>,
    ResponsiveBlastL<Yellow,Scale<SwingSpeed<400>,Int<400>,Int<100>>,Scale<SwingSpeed<400>,Int<200>,Int<100>>,Scale<SwingSpeed<400>,Int<400>,Int<200>>>,
    ResponsiveBlastWaveL<Pink,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>
  >,
  EffectSequence<EFFECT_CLASH,
    ResponsiveClashL<Pink,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>,
    ResponsiveClashL<Blue,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>,
    ResponsiveClashL<Black,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>,
    ResponsiveClashL<Green,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>,
    ResponsiveClashL<Yellow,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>,
    ResponsiveClashL<Red,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>
  >,
  LockupTrL<AlphaL<BrownNoiseFlickerL<Green,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,
  TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>
>>()
;

