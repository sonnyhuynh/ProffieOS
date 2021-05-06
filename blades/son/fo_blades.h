// jedi fallen order blue
// stripe time -500ms
// pulse color Rgb<0,0,128>
// remove force effect
// responsive lockup v2 (mid-blade)
// lockup effect color: animated series
// begin lockup color: animated series
// end lockup color: animated series
// multi-blast 2
// blast color: animated series
// responsive clash v2 (mid-blade)
// clash color: animated series
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator blueFoStyle =
StylePtr<Layers<Stripes<16000,-500,RotateColorsX<Variation,Blue>,Pulsing<RotateColorsX<Variation,Rgb<0,0,128>>,RotateColorsX<Variation,Blue>,800>,RotateColorsX<Variation,Blue>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,TransitionEffect<Moccasin,Rgb<255,150,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,EffectSequence<EFFECT_BLAST,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,Layers<ResponsiveBlastFadeL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_BLAST>,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<Moccasin,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveClashL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>>>()
;

// jedi fallen order green
// stripe time -500ms
// pulse color Rgb<0,128,0>
// remove force effect
// responsive lockup v2 (mid-blade)
// lockup effect color: animated series
// begin lockup color: animated series
// end lockup color: animated series
// multi-blast 2
// blast color: animated series
// responsive clash v2 (mid-blade)
// clash color: animated series
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator greenFoStyle =
StylePtr<Layers<Stripes<16000,-500,RotateColorsX<Variation,Green>,Pulsing<RotateColorsX<Variation,Rgb<0,128,0>>,RotateColorsX<Variation,Green>,800>,RotateColorsX<Variation,Green>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,TransitionEffect<Moccasin,Rgb<255,150,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,EffectSequence<EFFECT_BLAST,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,Layers<ResponsiveBlastFadeL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_BLAST>,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<Moccasin,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveClashL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>>>()
;

// jedi fallen order purple
// stripe time -500ms
// pulse color Rgb<55,7,99>
// remove force effect
// responsive lockup v2 (mid-blade)
// lockup effect color: animated series
// begin lockup color: animated series
// end lockup color: animated series
// multi-blast 2
// blast color: animated series
// responsive clash v2 (mid-blade)
// clash color: animated series
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator purpleFoStyle =
StylePtr<Layers<Stripes<16000,-500,RotateColorsX<Variation,Rgb<110,15,200>>,Pulsing<RotateColorsX<Variation,Rgb<55,7,99>>,RotateColorsX<Variation,Rgb<110,15,200>>,800>,RotateColorsX<Variation,Rgb<110,15,200>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,TransitionEffect<Moccasin,Rgb<255,150,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,EffectSequence<EFFECT_BLAST,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,Layers<ResponsiveBlastFadeL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_BLAST>,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<Moccasin,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveClashL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>>>()
;

// jedi fallen order orange
// stripe time -500ms
// pulse color Rgb<128,34,0>
// remove force effect
// responsive lockup v2 (mid-blade)
// lockup effect color: animated series
// begin lockup color: animated series
// end lockup color: animated series
// multi-blast 2
// blast color: animated series
// responsive clash v2 (mid-blade)
// clash color: animated series
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator orangeFoStyle =
StylePtr<Layers<Stripes<16000,-500,RotateColorsX<Variation,DarkOrange>,Pulsing<RotateColorsX<Variation,Rgb<128,34,0>>,RotateColorsX<Variation,DarkOrange>,800>,RotateColorsX<Variation,DarkOrange>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,TransitionEffect<Moccasin,Rgb<255,150,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,EffectSequence<EFFECT_BLAST,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,Layers<ResponsiveBlastFadeL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_BLAST>,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<Moccasin,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveClashL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>>>()
;

// jedi fallen order yellow
// stripe time -500ms
// pulse color Rgb<92,92,0>
// remove force effect
// responsive lockup v2 (mid-blade)
// lockup effect color: animated series
// begin lockup color: animated series
// end lockup color: animated series
// multi-blast 2
// blast color: animated series
// responsive clash v2 (mid-blade)
// clash color: animated series
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator yellowFoStyle =
StylePtr<Layers<Stripes<16000,-500,RotateColorsX<Variation,Rgb<180,180,0>>,Pulsing<RotateColorsX<Variation,Rgb<92,92,0>>,RotateColorsX<Variation,Rgb<180,180,0>>,800>,RotateColorsX<Variation,Rgb<180,180,0>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,TransitionEffect<Moccasin,Rgb<255,150,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,EffectSequence<EFFECT_BLAST,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,Layers<ResponsiveBlastFadeL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_BLAST>,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<Moccasin,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveClashL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>>>()
;

// jedi fallen order cyan
// stripe time -500ms
// pulse color Rgb<15,61,77>
// remove force effect
// responsive lockup v2 (mid-blade)
// lockup effect color: animated series
// begin lockup color: animated series
// end lockup color: animated series
// multi-blast 2
// blast color: animated series
// responsive clash v2 (mid-blade)
// clash color: animated series
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator cyanFoStyle =
StylePtr<Layers<Stripes<16000,-500,RotateColorsX<Variation,Rgb<30,120,150>>,Pulsing<RotateColorsX<Variation,Rgb<15,61,77>>,RotateColorsX<Variation,Rgb<30,120,150>>,800>,RotateColorsX<Variation,Rgb<30,120,150>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,TransitionEffect<Moccasin,Rgb<255,150,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,EffectSequence<EFFECT_BLAST,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,Layers<ResponsiveBlastFadeL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_BLAST>,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<Moccasin,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveClashL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>>>()
;

// jedi fallen order magenta
// stripe time -500ms
// pulse color Rgb<92,16,71>
// remove force effect
// responsive lockup v2 (mid-blade)
// lockup effect color: animated series
// begin lockup color: animated series
// end lockup color: animated series
// multi-blast 2
// blast color: animated series
// responsive clash v2 (mid-blade)
// clash color: animated series
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator magentaFoStyle =
StylePtr<Layers<Stripes<16000,-500,RotateColorsX<Variation,Rgb<180,30,140>>,Pulsing<RotateColorsX<Variation,Rgb<92,16,71>>,RotateColorsX<Variation,Rgb<180,30,140>>,800>,RotateColorsX<Variation,Rgb<180,30,140>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,TransitionEffect<Moccasin,Rgb<255,150,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,EffectSequence<EFFECT_BLAST,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,Layers<ResponsiveBlastFadeL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_BLAST>,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<Moccasin,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveClashL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>>>()
;

// jedi fallen order indigo
// stripe time -500ms
// pulse color Rgb<40,25,99>
// remove force effect
// responsive lockup v2 (mid-blade)
// lockup effect color: animated series
// begin lockup color: animated series
// end lockup color: animated series
// multi-blast 2
// blast color: animated series
// responsive clash v2 (mid-blade)
// clash color: animated series
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator indigoFoStyle =
StylePtr<Layers<Stripes<16000,-500,RotateColorsX<Variation,Rgb<80,50,200>>,Pulsing<RotateColorsX<Variation,Rgb<40,25,99>>,RotateColorsX<Variation,Rgb<80,50,200>>,800>,RotateColorsX<Variation,Rgb<80,50,200>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,TransitionEffect<Moccasin,Rgb<255,150,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,EffectSequence<EFFECT_BLAST,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,Layers<ResponsiveBlastFadeL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_BLAST>,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<Moccasin,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveClashL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>>>()
;

// jedi fallen order red
// stripe time -500ms
// pulse color Rgb<128,0,0>
// remove force effect
// responsive lockup v2 (mid-blade)
// lockup effect color: animated series
// begin lockup color: animated series
// end lockup color: animated series
// multi-blast 2
// blast color: animated series
// responsive clash v2 (mid-blade)
// clash color: animated series
// retraction wavlen
// on demand battery level: % blade - green to red (300ms ignition, 1s display, 500ms retraction mods)
StyleAllocator redFoStyle =
StylePtr<Layers<Stripes<16000,-500,RotateColorsX<Variation,Red>,Pulsing<RotateColorsX<Variation,Rgb<128,0,0>>,RotateColorsX<Variation,Red>,800>,RotateColorsX<Variation,Red>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,TransitionEffect<Moccasin,Rgb<255,150,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,EffectSequence<EFFECT_BLAST,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,Layers<ResponsiveBlastFadeL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_BLAST>,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<Moccasin,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveBlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>>,BlastL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<50>,EFFECT_BLAST>>,ResponsiveClashL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,TransitionEffectL<TrConcat<TrWipe<300>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrDelay<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<500>>,EFFECT_BATTERY_LEVEL>>>()
;

